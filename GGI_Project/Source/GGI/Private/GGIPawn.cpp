// Fill out your copyright notice in the Description page of Project Settings.


#include "GGIPawn.h"
#include "Camera/CameraComponent.h"
#include "GGIMotionControllerComponent.h"
#include "OculusXRHandComponent.h"
#include "OculusXRInputFunctionLibrary.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "GGIXRHandComponent.h"
#include "CommonType.h"
#include "HandMotionCaptureComponent.h"
#include "LSTMInputComponent.h"
#include "GGIGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/SkeletalMesh.h"
#include "Misc/CoreMiscDefines.h"
#include "Animation/SkeletalMeshActor.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"


// Sets default values
AGGIPawn::AGGIPawn()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = Root;

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComponent->SetupAttachment(Root);

	// 초기 위치 설정 (필요 시)
	//CameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f)); // 예: Pawn의 머리 높이
	//CameraComponent->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f)); // 약간 아래로 향하도록 설정

	RightXRController = CreateDefaultSubobject<UGGIMotionControllerComponent>(TEXT("RightController"));
	RightXRController->SetupAttachment(Root);
	RightXRController->SetTrackingSource(EControllerHand::Right); // 오른손 설정
	//RightXRController->SetRelativeLocation(FVector());

	LeftXRController = CreateDefaultSubobject<UGGIMotionControllerComponent>(TEXT("LeftController"));
	LeftXRController->SetupAttachment(Root);
	LeftXRController->SetTrackingSource(EControllerHand::Left); // 왼손 설정

	RightXRHand = CreateDefaultSubobject<UGGIXRHandComponent>(TEXT("RightHand"));
	RightXRHand->SetupAttachment(RightXRController);
	RightXRHand->SkeletonType = EOculusXRHandType::HandRight;

	LeftXRHand = CreateDefaultSubobject<UGGIXRHandComponent>(TEXT("LeftHand"));
	LeftXRHand->SetupAttachment(LeftXRController);
	LeftXRHand->SkeletonType = EOculusXRHandType::HandLeft;

	HandMotionCaptureComponent = CreateDefaultSubobject<UHandMotionCaptureComponent>(TEXT("LSTMHandlerComponent"));

	LSTMInputComponent = CreateDefaultSubobject<ULSTMInputComponent>(TEXT("LSTMInputComponent"));
}

void AGGIPawn::BeginPlay()
{
	Super::BeginPlay();

	GGIGameInstance = Cast<UGGIGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (nullptr == GGIGameInstance)
	{
		UE_DEBUG_BREAK();
		return;
	}

	VelocityWeight = GGIGameInstance->VelocityWeight;
	WeaponIndex = -1;
	HaveWeapon = false;
	LSTMInputSequence.SetMaxNum(GGIGameInstance->LSTMTimeStep);
}


void AGGIPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	DrawHandPosition();
	UpdateHandMotionSequence(DeltaTime);

	SpawnAndDestroyWeaponMesh();


	PreRightXRHandLocation = RightXRController->GetRelativeLocation();
	PreLeftXRHandLocation = LeftXRController->GetRelativeLocation();
}


void AGGIPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AGGIPawn::UpdateHandMotionSequence(float DeltaTime)
{
	TArray<float> HandMotionDataArray;

	for (auto& BoneElem : RightXRHand->BoneNameMappings)
	{
		FVector JointLocation;
		FRotator JointRotation;

		if (BoneElem.Key == EOculusXRBone::Forearm_Stub ||
			BoneElem.Key == EOculusXRBone::Thumb_Tip ||
			BoneElem.Key == EOculusXRBone::Index_Tip ||
			BoneElem.Key == EOculusXRBone::Middle_Tip ||
			BoneElem.Key == EOculusXRBone::Ring_Tip ||
			BoneElem.Key == EOculusXRBone::Pinky_Tip)
		{
		}
		else if (BoneElem.Key == EOculusXRBone::Wrist_Root)
		{

			FVector CurrentRightHandLocation = RightXRController->GetRelativeLocation();
			FVector RightHandWristRootVelocity = CurrentRightHandLocation - PreRightXRHandLocation;
			RightHandWristRootVelocity *= DeltaTime;
			RightHandWristRootVelocity *= VelocityWeight;

			FVector CurrentLeftHandLocation = LeftXRController->GetRelativeLocation();
			FVector LeftHandWristRootVelocity = CurrentLeftHandLocation - PreLeftXRHandLocation;
			LeftHandWristRootVelocity *= DeltaTime;
			LeftHandWristRootVelocity *= VelocityWeight;

			HandMotionDataArray.Push(CurrentRightHandLocation.X);
			HandMotionDataArray.Push(CurrentRightHandLocation.Y);
			HandMotionDataArray.Push(CurrentRightHandLocation.Z);

			HandMotionDataArray.Push(CurrentLeftHandLocation.X);
			HandMotionDataArray.Push(CurrentLeftHandLocation.Y);
			HandMotionDataArray.Push(CurrentLeftHandLocation.Z);

			HandMotionDataArray.Push(RightHandWristRootVelocity.X);
			HandMotionDataArray.Push(RightHandWristRootVelocity.Y);
			HandMotionDataArray.Push(RightHandWristRootVelocity.Z);

			HandMotionDataArray.Push(LeftHandWristRootVelocity.X);
			HandMotionDataArray.Push(LeftHandWristRootVelocity.Y);
			HandMotionDataArray.Push(LeftHandWristRootVelocity.Z);

			FRotator RightWristRootRelativeRotation = RightXRController->GetRelativeRotation();
			FRotator LeftWristRootRelativeRotation = LeftXRController->GetRelativeRotation();

			HandMotionDataArray.Push(RightWristRootRelativeRotation.Pitch);
			HandMotionDataArray.Push(RightWristRootRelativeRotation.Yaw);
			HandMotionDataArray.Push(RightWristRootRelativeRotation.Roll);

			HandMotionDataArray.Push(LeftWristRootRelativeRotation.Pitch);
			HandMotionDataArray.Push(LeftWristRootRelativeRotation.Yaw);
			HandMotionDataArray.Push(LeftWristRootRelativeRotation.Roll);
		}
		else
		{
			FQuat RightBoneRelativeQuat = UOculusXRInputFunctionLibrary::GetBoneRotation(EOculusXRHandType::HandRight, BoneElem.Key, 0);
			FQuat LeftBoneRelativeQuat = UOculusXRInputFunctionLibrary::GetBoneRotation(EOculusXRHandType::HandLeft, BoneElem.Key, 0);

			FRotator RightBoneRelativeRotator = RightBoneRelativeQuat.Rotator();
			FRotator LeftBoneRelativeRotator = LeftBoneRelativeQuat.Rotator();


			HandMotionDataArray.Push(RightBoneRelativeRotator.Pitch);
			HandMotionDataArray.Push(RightBoneRelativeRotator.Yaw);
			HandMotionDataArray.Push(RightBoneRelativeRotator.Roll);

			HandMotionDataArray.Push(LeftBoneRelativeRotator.Pitch);
			HandMotionDataArray.Push(LeftBoneRelativeRotator.Yaw);
			HandMotionDataArray.Push(LeftBoneRelativeRotator.Roll);
		}
	}

	LSTMInputSequence.CircularEnqueue(HandMotionDataArray);

	if (LSTMInputSequence.GetCount() == GGIGameInstance->LSTMTimeStep)
	{
		TArray<float> LSTMInputArray;
		LSTMInputSequence.GetAllData(LSTMInputArray);
		LSTMInputComponent->ExecuteNNETickInference(LSTMInputArray, WeaponIndex);
	}
}

void AGGIPawn::DrawHandPosition()
{
	for (auto& BoneElem : RightXRHand->BoneNameMappings)
	{
		if (BoneElem.Key == EOculusXRBone::Wrist_Root)
		{
			
			FVector CurrentRightHandLocation = RightXRController->GetComponentLocation();
			FVector CurrentLeftHandLocation = LeftXRController->GetComponentLocation();

			DrawDebugSphere(GetWorld(), CurrentRightHandLocation, 0.5f, 8, FColor::Green);
			DrawDebugSphere(GetWorld(), CurrentLeftHandLocation, 0.5f, 8, FColor::Green);
		}
		else
		{
			FVector CurrentRightBoneLocation = RightXRHand->GetBoneLocation(BoneElem.Value, EBoneSpaces::WorldSpace);
			FVector CurrentLeftBoneLocation = LeftXRHand->GetBoneLocation(BoneElem.Value, EBoneSpaces::WorldSpace);\

			
			DrawDebugSphere(GetWorld(), CurrentRightBoneLocation, 0.5f, 8, FColor::Green);
			DrawDebugSphere(GetWorld(), CurrentLeftBoneLocation, 0.5f, 8, FColor::Green);
		}
	}
}

bool AGGIPawn::SpawnAndDestroyWeaponMesh()
{
	if (GetWorld())
	{
		if (true == HaveWeapon && (int32)EHandDataLabel::Idle == WeaponIndex)
		{
			USkeletalMeshComponent* TempWeaponAsset = CurrentWeaponAsset;

			CurrentWeaponAsset->DetachFromComponent(FDetachmentTransformRules::KeepRelativeTransform);
			CurrentWeaponAsset = nullptr;
			HaveWeapon = false;

			FTimerHandle WeaponDeleteTimerHandle;
			GetWorld()->GetTimerManager().SetTimer(WeaponDeleteTimerHandle, [TempWeaponAsset]()
				{
					if (TempWeaponAsset)
					{
						TempWeaponAsset->DestroyComponent();
						UE_LOG(LogTemp, Warning, TEXT("Weapon Deleted!"));
					}
				}, 3.0f, false);
		}
		else
		{
			CurrentWeaponAsset = NewObject<USkeletalMeshComponent>(this);

			if (CurrentWeaponAsset)
			{
				if (false == HaveWeapon && (int32)EHandDataLabel::Bow == WeaponIndex)
				{
					if (BowMeshAsset)
					{
						CurrentWeaponAsset->SetSkeletalMesh(BowMeshAsset);
					}

					CurrentWeaponAsset->AttachToComponent(LeftXRHand, FAttachmentTransformRules::KeepRelativeTransform);

					CurrentWeaponAsset->SetRelativeLocation(FVector(0.0f, 6.0f, 3.0f));
					CurrentWeaponAsset->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f));
					CurrentWeaponAsset->SetMobility(EComponentMobility::Movable);
					CurrentWeaponAsset->SetSimulatePhysics(true);
					CurrentWeaponAsset->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
					CurrentWeaponAsset->SetCollisionObjectType(ECC_PhysicsBody);
					CurrentWeaponAsset->WakeAllRigidBodies();

					CurrentWeaponAsset->RegisterComponent();

					HaveWeapon = true;
					UE_LOG(LogTemp, Warning, TEXT("Skeletal Mesh Spawned!"));
				}
				else if (false == HaveWeapon && (int32)EHandDataLabel::Sword == WeaponIndex)
				{
					if (SwordMeshAsset)
					{
						CurrentWeaponAsset->SetSkeletalMesh(SwordMeshAsset);
					}

					CurrentWeaponAsset->AttachToComponent(RightXRHand, FAttachmentTransformRules::KeepRelativeTransform);

					CurrentWeaponAsset->SetRelativeLocation(FVector(0.0f, 6.0f, 3.0f));
					CurrentWeaponAsset->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f));
					CurrentWeaponAsset->SetMobility(EComponentMobility::Movable);
					CurrentWeaponAsset->SetSimulatePhysics(true);
					CurrentWeaponAsset->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
					CurrentWeaponAsset->SetCollisionObjectType(ECC_PhysicsBody);
					CurrentWeaponAsset->WakeAllRigidBodies();

					CurrentWeaponAsset->RegisterComponent();

					HaveWeapon = true;
					UE_LOG(LogTemp, Warning, TEXT("Skeletal Mesh Spawned!"));
				}
				else if (false == HaveWeapon && (int32)EHandDataLabel::Pistol == WeaponIndex)
				{
					if (PistolMeshAsset)
					{
						CurrentWeaponAsset->SetSkeletalMesh(PistolMeshAsset);
					}

					CurrentWeaponAsset->AttachToComponent(RightXRHand, FAttachmentTransformRules::KeepRelativeTransform);

					CurrentWeaponAsset->SetRelativeLocation(FVector(0.0f, 6.0f, 3.0f));
					CurrentWeaponAsset->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f));
					CurrentWeaponAsset->SetMobility(EComponentMobility::Movable);
					CurrentWeaponAsset->SetSimulatePhysics(true);
					CurrentWeaponAsset->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
					CurrentWeaponAsset->SetCollisionObjectType(ECC_PhysicsBody);
					CurrentWeaponAsset->WakeAllRigidBodies();

					CurrentWeaponAsset->RegisterComponent();

					HaveWeapon = true;
					UE_LOG(LogTemp, Warning, TEXT("Skeletal Mesh Spawned!"));
				}
				else if (false == HaveWeapon && (int32)EHandDataLabel::Rifle == WeaponIndex)
				{
					if (RifleMeshAsset)
					{
						CurrentWeaponAsset->SetSkeletalMesh(RifleMeshAsset);
					}

					CurrentWeaponAsset->AttachToComponent(RightXRHand, FAttachmentTransformRules::KeepRelativeTransform);

					CurrentWeaponAsset->SetRelativeLocation(FVector(0.0f, 6.0f, 3.0f));
					CurrentWeaponAsset->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f));
					CurrentWeaponAsset->SetMobility(EComponentMobility::Movable);
					CurrentWeaponAsset->SetSimulatePhysics(true);
					CurrentWeaponAsset->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
					CurrentWeaponAsset->SetCollisionObjectType(ECC_PhysicsBody);
					CurrentWeaponAsset->WakeAllRigidBodies();

					CurrentWeaponAsset->RegisterComponent();

					HaveWeapon = true;
					UE_LOG(LogTemp, Warning, TEXT("Skeletal Mesh Spawned!"));
				}
				else if (false == HaveWeapon && (int32)EHandDataLabel::Spear == WeaponIndex)
				{
					if (SpearMeshAsset)
					{
						CurrentWeaponAsset->SetSkeletalMesh(SpearMeshAsset);
					}

					CurrentWeaponAsset->AttachToComponent(RightXRHand, FAttachmentTransformRules::KeepRelativeTransform);

					CurrentWeaponAsset->SetRelativeLocation(FVector(0.0f, 6.0f, 3.0f));
					CurrentWeaponAsset->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f));
					CurrentWeaponAsset->SetMobility(EComponentMobility::Movable);
					CurrentWeaponAsset->SetSimulatePhysics(true);
					CurrentWeaponAsset->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
					CurrentWeaponAsset->SetCollisionObjectType(ECC_PhysicsBody);
					CurrentWeaponAsset->WakeAllRigidBodies();

					CurrentWeaponAsset->RegisterComponent();

					HaveWeapon = true;
					UE_LOG(LogTemp, Warning, TEXT("Skeletal Mesh Spawned!"));
				}
				else if (false == HaveWeapon && (int32)EHandDataLabel::Grenade == WeaponIndex)
				{
					if (GrenadeMeshAsset)
					{
						CurrentWeaponAsset->SetSkeletalMesh(GrenadeMeshAsset);
					}

					CurrentWeaponAsset->AttachToComponent(RightXRHand, FAttachmentTransformRules::KeepRelativeTransform);

					CurrentWeaponAsset->SetRelativeLocation(FVector(0.0f, 6.0f, 3.0f));
					CurrentWeaponAsset->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f));
					CurrentWeaponAsset->SetMobility(EComponentMobility::Movable);
					CurrentWeaponAsset->SetSimulatePhysics(true);
					CurrentWeaponAsset->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
					CurrentWeaponAsset->SetCollisionObjectType(ECC_PhysicsBody);
					CurrentWeaponAsset->WakeAllRigidBodies();

					CurrentWeaponAsset->RegisterComponent();

					HaveWeapon = true;
					UE_LOG(LogTemp, Warning, TEXT("Skeletal Mesh Spawned!"));
				}
			}
		}
	}
	return true;
}