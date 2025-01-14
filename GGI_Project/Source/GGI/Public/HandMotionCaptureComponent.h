// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HandMotionCaptureComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GGI_API UHandMotionCaptureComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHandMotionCaptureComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	FString Filename = FPaths::ProjectDir() + TEXT("JointData.csv");

	FString CSVData;

	int32 TickCount;

	int32 LearningSampleCount;

	int32 LearningSampleNum;

	int32 TimeStep;

private:	
	UPROPERTY()
	class AGGIPawn* OwnerPawn;

	UPROPERTY()
	class UGGIXRHandComponent* OwnerXRRightHand;
	UPROPERTY()
	class UGGIXRHandComponent* OwnerXRLeftHand;

	EHandDataLabel HandDataLabel;

	FVector PreRightHandLocation;

	FVector PreLeftHandLocation;

protected:
	UFUNCTION(BlueprintCallable)
	void StartWriteCSVData(class UGGIXRHandComponent* _RightHand, class UGGIXRHandComponent* _LeftHand, EHandDataLabel _HandDataLabel);

private:
	UFUNCTION()
	void Initialize_CSVData();

	UFUNCTION()
	void ExportHandDatasToCSV(EHandDataLabel _HandDataLabel);

	//UFUNCTION()
//	void ExportRelativeHandDatasToCSV();
//
//	void ExportHandDatasToCSV_Loop();
//
//public:
//	void CalculateRelativeJoint();
		
	
};
