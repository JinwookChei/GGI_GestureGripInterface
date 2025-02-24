// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonType.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GGI_CommonType_generated_h
#error "CommonType.generated.h already included, missing '#pragma once' in CommonType.h"
#endif
#define GGI_CommonType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_CommonType_h


#define FOREACH_ENUM_EHANDTYPE(op) \
	op(EHandType::RightHand) \
	op(EHandType::LeftHand) 

enum class EHandType : uint8;
template<> struct TIsUEnumClass<EHandType> { enum { Value = true }; };
template<> GGI_API UEnum* StaticEnum<EHandType>();

#define FOREACH_ENUM_EHANDDATALABEL(op) \
	op(EHandDataLabel::Idle) \
	op(EHandDataLabel::Bow) \
	op(EHandDataLabel::Sword) \
	op(EHandDataLabel::Pistol) \
	op(EHandDataLabel::Rifle) \
	op(EHandDataLabel::Spear) \
	op(EHandDataLabel::Grenade) 

enum class EHandDataLabel : uint8;
template<> struct TIsUEnumClass<EHandDataLabel> { enum { Value = true }; };
template<> GGI_API UEnum* StaticEnum<EHandDataLabel>();

#define FOREACH_ENUM_EHANDJOINTTYPE(op) \
	op(EHandJointType::WristRoot) \
	op(EHandJointType::Thumb0) \
	op(EHandJointType::Thumb1) \
	op(EHandJointType::Thumb2) \
	op(EHandJointType::Thumb3) \
	op(EHandJointType::Thumb_Tip) \
	op(EHandJointType::Index1) \
	op(EHandJointType::Index2) \
	op(EHandJointType::Index3) \
	op(EHandJointType::Index_Tip) \
	op(EHandJointType::Middle1) \
	op(EHandJointType::Middle2) \
	op(EHandJointType::Middle3) \
	op(EHandJointType::Middle_Tip) \
	op(EHandJointType::Ring1) \
	op(EHandJointType::Ring2) \
	op(EHandJointType::Ring3) \
	op(EHandJointType::Ring_Tip) \
	op(EHandJointType::Pinky0) \
	op(EHandJointType::Pinky1) \
	op(EHandJointType::Pinky2) \
	op(EHandJointType::Pinky3) \
	op(EHandJointType::Pinky_Tip) 

enum class EHandJointType : uint8;
template<> struct TIsUEnumClass<EHandJointType> { enum { Value = true }; };
template<> GGI_API UEnum* StaticEnum<EHandJointType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
