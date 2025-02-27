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
	FString Filename;

	FString CSVData;

	int32 TickCount;

	int32 SizeOfHandDataSequence; 

	int32 HandDataExtractIterations;  

	int32 LSTMTimeStep;

	float VelocityWeight;

	int32 CurrentExtractionCount;

	float AccumulatedDeltaTime;

private:	
	UPROPERTY()
	class UGGIMotionControllerComponent* OwnerRightXRController;
	UPROPERTY()
	class UGGIMotionControllerComponent* OwnerLeftXRController;

	UPROPERTY()
	class UGGIXRHandComponent* OwnerXRRightHand;
	UPROPERTY()
	class UGGIXRHandComponent* OwnerXRLeftHand;

	EHandDataLabel HandDataLabel;

	FVector PreRightHandLocation;

	FVector PreLeftHandLocation;

protected:

	UFUNCTION(BlueprintCallable)
	bool Initialize(class UGGIMotionControllerComponent* InRightXRController, UGGIMotionControllerComponent* InLeftXRController, class UGGIXRHandComponent* InRightXRHand, UGGIXRHandComponent* InLeftXRHand);

	UFUNCTION(BlueprintCallable)
	void StartWriteCSVData(EHandDataLabel InHandDataLabel);

private:
	UFUNCTION()
	void Initialize_CSVData();

	UFUNCTION()
	void ExportHandDatasToCSV(float DeltaTime);
		
};
