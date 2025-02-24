// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */

UENUM(BlueprintType) // Blueprint에서 사용 가능하도록 선언
enum class EHandType : uint8
{
    RightHand UMETA(DisplayName = "Right Hand"),
    LeftHand UMETA(DisplayName = "Left Hand"),
};

UENUM(BlueprintType)
enum class EHandDataLabel : uint8
{
    Bow UMETA(DisplayName = "Bow"),
    Sword UMETA(DisplayName = "Sword"),
    Pistol UMETA(DisplayName = "Pistol"),
    Rifle UMETA(DisplayName = "Rifle"),
    Spear UMETA(DisplayName = "Spear"),
    Grenade UMETA(DisplayName = "Grenade")
};

UENUM(BlueprintType) // Blueprint에서 사용 가능하도록 선언
enum class EHandJointType : uint8
{
    WristRoot UMETA(DisplayName = "Wrist Root"),

    Thumb0 UMETA(DisplayName = "Thumb0"),
    Thumb1 UMETA(DisplayName = "Thumb1"),
    Thumb2 UMETA(DisplayName = "Thumb2"),
    Thumb3 UMETA(DisplayName = "Thumb3"),
    Thumb_Tip UMETA(DisplayName = "Thumb Tip"),

    Index1 UMETA(DisplayName = "Index1"),
    Index2 UMETA(DisplayName = "Index2"),
    Index3 UMETA(DisplayName = "Index3"),
    Index_Tip UMETA(DisplayName = "Index Tip"),

    Middle1 UMETA(DisplayName = "Middle1"),
    Middle2 UMETA(DisplayName = "Middle2"),
    Middle3 UMETA(DisplayName = "Middle3"),
    Middle_Tip UMETA(DisplayName = "Middle Tip"),

    Ring1 UMETA(DisplayName = "Ring1"),
    Ring2 UMETA(DisplayName = "Ring2"),
    Ring3 UMETA(DisplayName = "Ring3"),
    Ring_Tip UMETA(DisplayName = "Ring Tip"),

    Pinky0 UMETA(DisplayName = "Pinky0"),
    Pinky1 UMETA(DisplayName = "Pinky1"),
    Pinky2 UMETA(DisplayName = "Pinky2"),
    Pinky3 UMETA(DisplayName = "Pinky3"),
    Pinky_Tip UMETA(DisplayName = "Pinky Tip")
};


class GGI_API CommonType
{
public:
	CommonType();
	~CommonType();
};
