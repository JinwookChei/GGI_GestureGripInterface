// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GGIPawn.generated.h"



UCLASS()
class GGI_API AGGIPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGGIPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// ��Ʈ ������Ʈ
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class USceneComponent* Root;

	// ī�޶� ������Ʈ
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	// Motion Controller - ������
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UGGIMotionControllerComponent* RightXRController;

	// Motion Controller - �޼�
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UGGIMotionControllerComponent* LeftXRController;

	// OculusXR Hand - ������
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UGGIXRHandComponent* RightXRHand;

	// OculusXR Hand - �޼�
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UGGIXRHandComponent* LeftXRHand;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UHandMotionCaptureComponent* HandMotionCaptureComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class ULSTMInputComponent* LSTMInputComponent;

private:
	class UGGIGameInstance* GGIGameInstance;

	FVector PreRightXRHandLocation;

	FVector PreLeftXRHandLocation;

	TQueue<TArray<float>> HandMotionSequence;

	int32 SequenceCount;

	void UpdateHandMotionSequence(float DeltaTime);

	void AnalyzeHandMotionSequenceInLSTM();

};
