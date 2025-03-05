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
	int32 SizeOfHandDataSequence = 40;

	int32 HandDataExtractIterations = 200;

	int32 LSTMTimeStep = 40;

	float RootVelocityWeight = 10000.0f;
	float RootLocationWeight = 0.1f;
};
