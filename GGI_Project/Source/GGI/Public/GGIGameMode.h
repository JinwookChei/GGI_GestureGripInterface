// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GGIGameMode.generated.h"

/**
 * 
 */
UCLASS()
class GGI_API AGGIGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
	
public:
	int32 LearningSampleNum = 20;

	int32 TimeStep = 80;
	
};
