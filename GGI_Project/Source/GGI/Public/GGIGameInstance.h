// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GGIGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class GGI_API UGGIGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
	
public:
	int32 SizeOfHandDataSequence = 80;

	int32 HandDataExtractIterations = 20;

	int32 LSTMTimeStep = 80;

	float VelocityWeight = 10000;
};
