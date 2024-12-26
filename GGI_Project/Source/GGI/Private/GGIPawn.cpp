// Fill out your copyright notice in the Description page of Project Settings.


#include "GGIPawn.h"
#include "Camera/CameraComponent.h"
#include "MotionControllerComponent.h"
#include "OculusXRHandComponent.h"
#include "OculusXRInputFunctionLibrary.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "GGIXRHandComponent.h"

// Sets default values
AGGIPawn::AGGIPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


    // ��Ʈ ������Ʈ ����
    Root = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    RootComponent = Root;

    // ī�޶� ������Ʈ ���� �� ����
    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    CameraComponent->SetupAttachment(Root);

    // �ʱ� ��ġ ���� (�ʿ� ��)
    //CameraComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 50.0f)); // ��: Pawn�� �Ӹ� ����
    //CameraComponent->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f)); // �ణ �Ʒ��� ���ϵ��� ����

    // ������ Motion Controller ����
    RightController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("RightController"));
    RightController->SetupAttachment(Root);
    RightController->SetTrackingSource(EControllerHand::Right); // ������ ����

    // �޼� Motion Controller ����
    LeftController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("LeftController"));
    LeftController->SetupAttachment(Root);
    LeftController->SetTrackingSource(EControllerHand::Left); // �޼� ����

    //// ������ OculusXR Hand ������Ʈ ����
    //RightHand = CreateDefaultSubobject<UOculusXRHandComponent>(TEXT("RightHand"));
    //RightHand->SetupAttachment(RightController);
    //RightHand->SkeletonType = EOculusXRHandType::HandRight;

    //// �޼� OculusXR Hand ������Ʈ ����
    //LeftHand = CreateDefaultSubobject<UOculusXRHandComponent>(TEXT("LeftHand"));
    //LeftHand->SetupAttachment(LeftController);
    //LeftHand->SkeletonType = EOculusXRHandType::HandLeft;

    // ������ OculusXR Hand ������Ʈ ����
    RightHand = CreateDefaultSubobject<UGGIXRHandComponent>(TEXT("RightHand"));
    RightHand->SetupAttachment(RightController);
    RightHand->SkeletonType = EOculusXRHandType::HandRight;

    // �޼� OculusXR Hand ������Ʈ ����
    LeftHand = CreateDefaultSubobject<UGGIXRHandComponent>(TEXT("LeftHand"));
    LeftHand->SetupAttachment(LeftController);
    LeftHand->SkeletonType = EOculusXRHandType::HandLeft;
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

