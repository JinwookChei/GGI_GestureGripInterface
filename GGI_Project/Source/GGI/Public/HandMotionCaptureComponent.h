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

	int32 SizeOfHandDataSequence; // 100

	int32 HandDataExtractIterations;  //40

	int32 CurrentExtractionCount;

	int32 LSTMTimeStep;  // 40

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
	bool Initialize(class UGGIMotionControllerComponent* _RightController, UGGIMotionControllerComponent* _LeftController, class UGGIXRHandComponent* _RightHand, UGGIXRHandComponent* _LeftHand);

	UFUNCTION(BlueprintCallable)
	void StartWriteCSVData(EHandDataLabel _HandDataLabel);

private:
	UFUNCTION()
	void Initialize_CSVData();

	UFUNCTION()
	void ExportHandDatasToCSV(float _DeltaTime, EHandDataLabel _HandDataLabel);
		
	
};
