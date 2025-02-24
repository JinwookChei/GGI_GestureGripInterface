// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GGIQueue.h"
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

	// 루트 컴포넌트
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class USceneComponent* Root;

	// 카메라 컴포넌트
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	// Motion Controller - 오른손
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UGGIMotionControllerComponent* RightXRController;

	// Motion Controller - 왼손
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UGGIMotionControllerComponent* LeftXRController;

	// OculusXR Hand - 오른손
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UGGIXRHandComponent* RightXRHand;

	// OculusXR Hand - 왼손
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UGGIXRHandComponent* LeftXRHand;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UHandMotionCaptureComponent* HandMotionCaptureComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class ULSTMInputComponent* LSTMInputComponent;


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapons")
	class USkeletalMesh* BowMeshAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapons")
	class USkeletalMesh* SwordMeshAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapons")
	class USkeletalMesh* PistolMeshAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapons")
	class USkeletalMesh* RifleMeshAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapons")
	class USkeletalMesh* SpearMeshAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapons")
	class USkeletalMesh* GrenadeMeshAsset;

	UPROPERTY()
	class USkeletalMeshComponent* CurrentWeaponAsset;

private:
	
	class UGGIGameInstance* GGIGameInstance;

	FVector PreRightXRHandLocation;

	FVector PreLeftXRHandLocation;

	float VelocityWeight;

	void UpdateHandMotionSequence(float DeltaTime);

	void DrawHandPosition();

	GGIQueue LSTMInputSequence;

	int32 WeaponIndex;

	bool HaveWeapon;

	bool SpawnAndDestroyWeaponMesh();



};
