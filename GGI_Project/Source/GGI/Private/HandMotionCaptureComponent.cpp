// Fill out your copyright notice in the Description page of Project Settings.


#include "HandMotionCaptureComponent.h"
#include "GGIGameInstance.h"
#include "GGIPawn.h"
#include "Kismet/GameplayStatics.h"
#include "CommonType.h"
#include "GGIXRHandComponent.h"
#include "GGIMotionControllerComponent.h"

#include "OculusXRInputFunctionLibrary.h"
#include "Components/PoseableMeshComponent.h"


// Sets default values for this component's properties
UHandMotionCaptureComponent::UHandMotionCaptureComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
		// ...
	UGGIGameInstance* GGIGameInstance = Cast<UGGIGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (GGIGameInstance)
	{
		LearningSampleNum = GGIGameInstance->LearningSampleNum;

		TimeStep = GGIGameInstance->TimeStep;
	}
	else
	{
		LearningSampleNum = 0;
		TimeStep = 0;
	}

	AGGIPawn* Owner = Cast<AGGIPawn>(GetOwner());

	if (Owner)
	{
		UGGIMotionControllerComponent* _OwnerRightXRController = Cast<UGGIMotionControllerComponent>(Owner->GetDefaultSubobjectByName(TEXT("RightController")));
		UGGIMotionControllerComponent* _OwnerLeftXRController = Cast<UGGIMotionControllerComponent>(Owner->GetDefaultSubobjectByName(TEXT("LeftController")));

		UGGIXRHandComponent* _OwnerXRRightHand = Cast<UGGIXRHandComponent>(Owner->GetDefaultSubobjectByName(TEXT("RightHand")));
		UGGIXRHandComponent* _OwnerXRLeftHand = Cast<UGGIXRHandComponent>(Owner->GetDefaultSubobjectByName(TEXT("LeftHand")));
		Initialize(_OwnerRightXRController, _OwnerLeftXRController, _OwnerXRRightHand, _OwnerXRLeftHand);
	}

}


// Called when the game starts
void UHandMotionCaptureComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	TickCount = 9999;
	LearningSampleCount = 9999;


}


// Called every frame
void UHandMotionCaptureComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	if (TickCount < 4000)
	{
		ExportHandDatasToCSV(HandDataLabel);
		TickCount++;

		FString Message = FString::Printf(TEXT("Hand Data Recording  -  %d / %d"), TickCount, TimeStep);
		FColor TextColor = FColor::Red;
		float DisplayTime = -1.0f;

		GEngine->AddOnScreenDebugMessage(-1, DisplayTime, TextColor, Message);
	}
	else
	{
		TickCount = 9999;
	}

	PreRightHandLocation = OwnerRightXRController->GetRelativeLocation();
	PreLeftHandLocation = OwnerLeftXRController->GetRelativeLocation();
	//PreRightHandLocation = OwnerXRRightHand->GetBoneLocation(FName("Wrist Root"), EBoneSpaces::WorldSpace);
	//PreLeftHandLocation = OwnerXRLeftHand->GetBoneLocation(FName("Wrist Root"), EBoneSpaces::WorldSpace);
}

bool UHandMotionCaptureComponent::Initialize(UGGIMotionControllerComponent* _RightController, UGGIMotionControllerComponent* _LeftController, UGGIXRHandComponent* _RightHand, UGGIXRHandComponent* _LeftHand)
{
	if (nullptr == _RightHand || nullptr == _LeftHand)
	{
		return false;
	}

	if (nullptr == _RightController || nullptr == _LeftController)
	{
		return false;	
	}

	OwnerRightXRController = _RightController;
	OwnerLeftXRController = _LeftController;

	OwnerXRRightHand = _RightHand;
	OwnerXRLeftHand = _LeftHand;

	return true;	
}

void UHandMotionCaptureComponent::StartWriteCSVData(EHandDataLabel _HandDataLabel)
{

	HandDataLabel = _HandDataLabel;


	// 메시지 내용, 메시지 키, 출력 시간(초), 텍스트 색상 지정
	FString Message = TEXT("StartWriteCSVData!!!");
	FColor TextColor = FColor::Green;
	float DisplayTime = 5.0f; // 5초 동안 표시

	// 메시지 출력 (키는 0부터 9999까지 임의로 설정 가능)
	GEngine->AddOnScreenDebugMessage(-1, DisplayTime, TextColor, Message);

	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this]()
		{
			Initialize_CSVData();
		}, 3.0f, false);
}


void UHandMotionCaptureComponent::Initialize_CSVData()
{
	TickCount = 0;
	LearningSampleCount = 0;

	// 저장 폴더 경로 지정 (Saved/HandTrackingData)
	FString Directory = FPaths::Combine(FPaths::ProjectDir(), TEXT("HandTrackingData"));

	// 디렉터리 생성 (없는 경우)
	if (!IFileManager::Get().DirectoryExists(*Directory))
	{
		IFileManager::Get().MakeDirectory(*Directory, true);
	}
	
	// 파일 경로 
	Filename = FPaths::Combine(Directory, TEXT("JointData.csv"));


	CSVData = TEXT("R_WristRoot_Vel_X,R_WristRoot_Vel_Y,R_WristRoot_Vel_Z,");
	CSVData += TEXT("L_WristRoot_Vel_X,L_WristRoot_Vel_Y,L_WristRoot_Vel_Z,");
	CSVData += TEXT("R_WristRoot_Rot_Ptich,R_WristRoot_Rot_Yaw,R_WristRoot_Rot_Roll,");
	CSVData += TEXT("L_WristRoot_Rot_Ptich,L_WristRoot_Rot_Yaw,L_WristRoot_Rot_Roll,");

	CSVData += TEXT("R_Thumb0_Relative_Rot_Pitch,R_Thumb0_Relative_Rot_Yaw,R_Thumb0_Relative_Rot_Roll,");
	CSVData += TEXT("L_Thumb0_Relative_Rot_Pitch,L_Thumb0_Relative_Rot_Yaw,L_Thumb0_Relative_Rot_Roll,");
	CSVData += TEXT("R_Thumb1_Relative_Rot_Pitch,R_Thumb1_Relative_Rot_Yaw,R_Thumb1_Relative_Rot_Roll,");
	CSVData += TEXT("L_Thumb1_Relative_Rot_Pitch,L_Thumb1_Relative_Rot_Yaw,L_Thumb1_Relative_Rot_Roll,");
	CSVData += TEXT("R_Thumb2_Relative_Rot_Pitch,R_Thumb2_Relative_Rot_Yaw,R_Thumb2_Relative_Rot_Roll,");
	CSVData += TEXT("L_Thumb2_Relative_Rot_Pitch,L_Thumb2_Relative_Rot_Yaw,L_Thumb2_Relative_Rot_Roll,");
	CSVData += TEXT("R_Thumb3_Relative_Rot_Pitch,R_Thumb3_Relative_Rot_Yaw,R_Thumb3_Relative_Rot_Roll,");
	CSVData += TEXT("L_Thumb3_Relative_Rot_Pitch,L_Thumb3_Relative_Rot_Yaw,L_Thumb3_Relative_Rot_Roll,");


	CSVData += TEXT("R_Index1_Relative_Rot_Pitch,R_Index1_Relative_Rot_Yaw,R_Index1_Relative_Rot_Roll,");
	CSVData += TEXT("L_Index1_Relative_Rot_Pitch,L_Index1_Relative_Rot_Yaw,L_Index1_Relative_Rot_Roll,");
	CSVData += TEXT("R_Index2_Relative_Rot_Pitch,R_Index2_Relative_Rot_Yaw,R_Index2_Relative_Rot_Roll,");
	CSVData += TEXT("L_Index2_Relative_Rot_Pitch,L_Index2_Relative_Rot_Yaw,L_Index2_Relative_Rot_Roll,");
	CSVData += TEXT("R_Index3_Relative_Rot_Pitch,R_Index3_Relative_Rot_Yaw,R_Index3_Relative_Rot_Roll,");
	CSVData += TEXT("L_Index3_Relative_Rot_Pitch,L_Index3_Relative_Rot_Yaw,L_Thumb3_Relative_Rot_Roll,");


	CSVData += TEXT("R_Middle1_Relative_Rot_Pitch,R_Middle1_Relative_Rot_Yaw,R_Middle1_Relative_Rot_Roll,");
	CSVData += TEXT("L_Middle1_Relative_Rot_Pitch,L_Middle1_Relative_Rot_Yaw,L_Middle1_Relative_Rot_Roll,");
	CSVData += TEXT("R_Middle2_Relative_Rot_Pitch,R_Middle2_Relative_Rot_Yaw,R_Middle2_Relative_Rot_Roll,");
	CSVData += TEXT("L_Middle2_Relative_Rot_Pitch,L_Middle2_Relative_Rot_Yaw,L_Middle2_Relative_Rot_Roll,");
	CSVData += TEXT("R_Middle3_Relative_Rot_Pitch,R_Middle3_Relative_Rot_Yaw,R_Middle3_Relative_Rot_Roll,");
	CSVData += TEXT("L_Middle3_Relative_Rot_Pitch,L_Middle3_Relative_Rot_Yaw,L_Middle3_Relative_Rot_Roll,");


	CSVData += TEXT("R_Ring1_Relative_Rot_Pitch,R_Ring1_Relative_Rot_Yaw,R_Ring1_Relative_Rot_Roll,");
	CSVData += TEXT("L_Ring1_Relative_Rot_Pitch,L_Ring1_Relative_Rot_Yaw,L_Ring1_Relative_Rot_Roll,");
	CSVData += TEXT("R_Ring2_Relative_Rot_Pitch,R_Ring2_Relative_Rot_Yaw,R_Ring2_Relative_Rot_Roll,");
	CSVData += TEXT("L_Ring2_Relative_Rot_Pitch,L_Ring2_Relative_Rot_Yaw,L_Ring2_Relative_Rot_Roll,");
	CSVData += TEXT("R_Ring3_Relative_Rot_Pitch,R_Ring3_Relative_Rot_Yaw,R_Ring3_Relative_Rot_Roll,");
	CSVData += TEXT("L_Ring3_Relative_Rot_Pitch,L_Ring3_Relative_Rot_Yaw,L_Ring3_Relative_Rot_Roll,");


	CSVData += TEXT("R_Pinky0_Relative_Rot_Pitch,R_Pinky0_Relative_Rot_Yaw,R_Pinky0_Relative_Rot_Roll,");
	CSVData += TEXT("L_Pinky0_Relative_Rot_Pitch,L_Pinky0_Relative_Rot_Yaw,L_Pinky0_Relative_Rot_Roll,");
	CSVData += TEXT("R_Pinky1_Relative_Rot_Pitch,R_Pinky1_Relative_Rot_Yaw,R_Pinky1_Relative_Rot_Roll,");
	CSVData += TEXT("L_Pinky1_Relative_Rot_Pitch,L_Pinky1_Relative_Rot_Yaw,L_Pinky1_Relative_Rot_Roll,");
	CSVData += TEXT("R_Pinky2_Relative_Rot_Pitch,R_Pinky2_Relative_Rot_Yaw,R_Pinky2_Relative_Rot_Roll,");
	CSVData += TEXT("L_Pinky2_Relative_Rot_Pitch,L_Pinky2_Relative_Rot_Yaw,L_Pinky2_Relative_Rot_Roll,");
	CSVData += TEXT("R_Pinky3_Relative_Rot_Pitch,R_Pinky3_Relative_Rot_Yaw,R_Pinky3_Relative_Rot_Roll,");
	CSVData += TEXT("L_Pinky3_Relative_Rot_Pitch,L_Pinky3_Relative_Rot_Yaw,L_Pinky3_Relative_Rot_Roll,");

	CSVData += TEXT("Label\n");


	// 메시지 내용, 메시지 키, 출력 시간(초), 텍스트 색상 지정
	FString Message = TEXT("Initialize_CSVData!!!");
	FColor TextColor = FColor::Green;
	float DisplayTime = 5.0f; // 5초 동안 표시

	// 메시지 출력 (키는 0부터 9999까지 임의로 설정 가능)
	GEngine->AddOnScreenDebugMessage(-1, DisplayTime, TextColor, Message);
}

void UHandMotionCaptureComponent::ExportHandDatasToCSV(EHandDataLabel _HandDataLabel)
{

	for (auto& BoneElem : OwnerXRRightHand->BoneNameMappings)
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
			
			FVector CurrentRightHandLocation = OwnerRightXRController->GetRelativeLocation();
			FVector RightHandWristRootVelocity = CurrentRightHandLocation - PreRightHandLocation;
			RightHandWristRootVelocity *= 10;

			FVector CurrentLeftHandLocation = OwnerLeftXRController->GetRelativeLocation();
			FVector LeftHandWristRootVelocity = CurrentLeftHandLocation - PreLeftHandLocation;
			LeftHandWristRootVelocity *= 10;

			CSVData += FString::Printf(TEXT("%f,%f,%f,"), RightHandWristRootVelocity.X, RightHandWristRootVelocity.Y, RightHandWristRootVelocity.Z);
			CSVData += FString::Printf(TEXT("%f,%f,%f,"), LeftHandWristRootVelocity.X, LeftHandWristRootVelocity.Y, LeftHandWristRootVelocity.Z);

			
			FRotator RightWristRootRelativeRotation = OwnerRightXRController->GetRelativeRotation();
			FRotator LeftWristRootRelativeRotation = OwnerLeftXRController->GetRelativeRotation();
			CSVData += FString::Printf(TEXT("%f,%f,%f,"), RightWristRootRelativeRotation.Pitch, RightWristRootRelativeRotation.Yaw, RightWristRootRelativeRotation.Roll);
			CSVData += FString::Printf(TEXT("%f,%f,%f,"), LeftWristRootRelativeRotation.Pitch, LeftWristRootRelativeRotation.Yaw, LeftWristRootRelativeRotation.Roll);

		}
		else
		{
			FQuat RightBoneRelativeQuat = UOculusXRInputFunctionLibrary::GetBoneRotation(EOculusXRHandType::HandRight, BoneElem.Key, 0);
			FQuat LeftBoneRelativeQuat = UOculusXRInputFunctionLibrary::GetBoneRotation(EOculusXRHandType::HandLeft, BoneElem.Key, 0);

			FRotator RightBoneRelativeRotator = RightBoneRelativeQuat.Rotator();
			FRotator LeftBoneRelativeRotator = LeftBoneRelativeQuat.Rotator();

			CSVData += FString::Printf(TEXT("%f,%f,%f,"), RightBoneRelativeRotator.Pitch, RightBoneRelativeRotator.Yaw, RightBoneRelativeRotator.Roll);
			CSVData += FString::Printf(TEXT("%f,%f,%f,"), LeftBoneRelativeRotator.Pitch, LeftBoneRelativeRotator.Yaw, LeftBoneRelativeRotator.Roll);
		}
		GetWorld();
	}

	switch (HandDataLabel)
	{
	case EHandDataLabel::Idle:
		CSVData += FString::Printf(TEXT("%d\n"), EHandDataLabel::Idle);
		break;
	case EHandDataLabel::Bow:
		CSVData += FString::Printf(TEXT("%d\n"), EHandDataLabel::Bow);
		break;
	case EHandDataLabel::Sword:
		CSVData += FString::Printf(TEXT("%d\n"), EHandDataLabel::Sword);
		break;
	case EHandDataLabel::Pistol:
		CSVData += FString::Printf(TEXT("%d\n"), EHandDataLabel::Pistol);
		break;
	case EHandDataLabel::MachineGun:
		CSVData += FString::Printf(TEXT("%d\n"), EHandDataLabel::MachineGun);
		break;
	case EHandDataLabel::Spear:
		CSVData += FString::Printf(TEXT("%d\n"), EHandDataLabel::Spear);
		break;
	case EHandDataLabel::Grenade:
		CSVData += FString::Printf(TEXT("%d\n"), EHandDataLabel::Grenade);
	default:
		break;
	}

	// Save the CSV data to the file
	if (FFileHelper::SaveStringToFile(CSVData, *Filename))
	{
		UE_LOG(LogTemp, Log, TEXT("CSV file created successfully at %s"), *Filename);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create CSV file at %s"), *Filename);
	}

	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Red, TEXT("Writing Hand Data File"));
}



