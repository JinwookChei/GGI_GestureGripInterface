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
#include "Misc/CoreMiscDefines.h"


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
	}

	SequenceCount = 0;

	TickCount = 0;
}


void AGGIPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TickCount++;

	UpdateHandMotionSequence(DeltaTime);

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
			RightHandWristRootVelocity *= 1000;

			FVector CurrentLeftHandLocation = LeftXRController->GetRelativeLocation();
			FVector LeftHandWristRootVelocity = CurrentLeftHandLocation - PreLeftXRHandLocation;
			LeftHandWristRootVelocity *= DeltaTime;
			LeftHandWristRootVelocity *= 1000;
			
			
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

	HandMotionSequence.Enqueue(HandMotionDataArray);
	
	SequenceCount++;

	if (SequenceCount > GGIGameInstance->LSTMTimeStep)
	{
		HandMotionSequence.Pop();
		SequenceCount--;
	}

	if(SequenceCount == GGIGameInstance->LSTMTimeStep)
	{ 
		AnalyzeHandMotionSequenceInLSTM();
	}

	
	// Test
 	HandMotionSequenceTest.Enqueue(HandMotionDataArray);
	if (HandMotionSequenceTest.GetCount() > GGIGameInstance->LSTMTimeStep)
	{
		HandMotionSequenceTest.Dequeue();
	}

	if (HandMotionSequenceTest.GetCount() == GGIGameInstance->LSTMTimeStep)
	{
		//
	}
	
	TArray<float> TempArray;
	HandMotionSequenceTest.GetAllData(TempArray);

	TArray<float> ResultArray;
	TArray<float> TempArrayA;

	if (SequenceCount == GGIGameInstance->LSTMTimeStep)
	{
		//TArray<float> InputSequence;
		for (int i = 0; i < GGIGameInstance->LSTMTimeStep; i++)
		{
			//OwnerPawn->JointSequenceData.Dequeue(TempArray);
			HandMotionSequence.Dequeue(TempArrayA);

			for (double Value : TempArrayA)
			{
				//ResultArray.Add(static_cast<float>(Value)); // double을 float로 변환하여 추가
				ResultArray.Add(Value);
			}
			HandMotionSequence.Enqueue(TempArrayA);
		}
	}


	if(TickCount == 1000)
	{
		UE_LOG(LogTemp, Display, TEXT("HandMotionSequence Start"));
		for (int i = 0; i < ResultArray.Num(); ++i)
		{	
			UE_LOG(LogTemp, Display, TEXT("%s"), ResultArray[i] == TempArray[i] ? TEXT("TRUE") : TEXT("FALSE"));
		}
		UE_LOG(LogTemp, Display, TEXT("HandMotionSequence End"));

		TickCount = 0;
	}

}

void AGGIPawn::AnalyzeHandMotionSequenceInLSTM()
{
	LSTMInputComponent->ExecuteNNETickInference(HandMotionSequence);
}

