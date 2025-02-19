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

// Sets default values
AGGIPawn::AGGIPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


    // 루트 컴포넌트 생성
    Root = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    RootComponent = Root;

    // 카메라 컴포넌트 생성 및 부착
    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    CameraComponent->SetupAttachment(Root);

    // 초기 위치 설정 (필요 시)
    //CameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f)); // 예: Pawn의 머리 높이
    //CameraComponent->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f)); // 약간 아래로 향하도록 설정

    // 오른손 Motion Controller 생성
    RightController = CreateDefaultSubobject<UGGIMotionControllerComponent>(TEXT("RightController"));
    RightController->SetupAttachment(Root);
    RightController->SetTrackingSource(EControllerHand::Right); // 오른손 설정

    // 왼손 Motion Controller 생성
    LeftController = CreateDefaultSubobject<UGGIMotionControllerComponent>(TEXT("LeftController"));
    LeftController->SetupAttachment(Root);
    LeftController->SetTrackingSource(EControllerHand::Left); // 왼손 설정

    RightHand = CreateDefaultSubobject<UGGIXRHandComponent>(TEXT("RightHand"));
    RightHand->SetupAttachment(RightController);
    RightHand->SkeletonType = EOculusXRHandType::HandRight;

    LeftHand = CreateDefaultSubobject<UGGIXRHandComponent>(TEXT("LeftHand"));
    LeftHand->SetupAttachment(LeftController);
    LeftHand->SkeletonType = EOculusXRHandType::HandLeft;

    HandMotionCaptureComponent = CreateDefaultSubobject<UHandMotionCaptureComponent>(TEXT("LSTMHandlerComponent"));

    LSTMInputComponent = CreateDefaultSubobject<ULSTMInputComponent>(TEXT("LSTMInputComponent"));
}

// Called when the game starts or when spawned
void AGGIPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGGIPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

// Called to bind functionality to input
void AGGIPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//UGGIXRHandComponent* AGGIPawn::GetGGIXRHandComponent(EHandType _HandType)
//{
//    if (_HandType == EHandType::LeftHand)
//    {
//        return LeftHand;
//    }
//    else if (_HandType == EHandType::RightHand)
//    {
//        return >RightHand;
//    }
//    return nullptr;
//}

