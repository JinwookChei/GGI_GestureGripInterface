// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "NNE.h"
#include "NNERuntimeCPU.h"
#include "NNEModelData.h"

#include "LSTMInputComponent.generated.h"

class FMyModelHelper
{
public:
	TSharedPtr<UE::NNE::IModelInstanceCPU> ModelInstance;

	TArray<float> InputData;
	TArray<float> OutputData;
	TArray<UE::NNE::FTensorBindingCPU> InputBindings;
	TArray<UE::NNE::FTensorBindingCPU> OutputBindings;
	bool bIsRunning;
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class GGI_API ULSTMInputComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	ULSTMInputComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	void Initialize();

	class UGGIGameInstance* GGIGameInstance;

	class AGGGPawn* OwnerPawn;

	TSharedPtr<FMyModelHelper> ModelHelper;

public:
	UPROPERTY(EditAnywhere)
	TObjectPtr<UNNEModelData> NNEModelData;

	void ExecuteNNETickInference(const TArray<float>& InLSTMInputArray);

private:
	float Threshold;

	int32 PreIndex;
	int32 SameCount;

	int32 SameCountThreshold;

};
