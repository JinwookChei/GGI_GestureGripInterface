// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGI/Public/CommonType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonType() {}

// Begin Cross Module References
GGI_API UEnum* Z_Construct_UEnum_GGI_EHandDataLabel();
GGI_API UEnum* Z_Construct_UEnum_GGI_EHandJointType();
GGI_API UEnum* Z_Construct_UEnum_GGI_EHandType();
UPackage* Z_Construct_UPackage__Script_GGI();
// End Cross Module References

// Begin Enum EHandType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandType;
static UEnum* EHandType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHandType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHandType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GGI_EHandType, (UObject*)Z_Construct_UPackage__Script_GGI(), TEXT("EHandType"));
	}
	return Z_Registration_Info_UEnum_EHandType.OuterSingleton;
}
template<> GGI_API UEnum* StaticEnum<EHandType>()
{
	return EHandType_StaticEnum();
}
struct Z_Construct_UEnum_GGI_EHandType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */// Blueprint\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "LeftHand.DisplayName", "Left Hand" },
		{ "LeftHand.Name", "EHandType::LeftHand" },
		{ "ModuleRelativePath", "Public/CommonType.h" },
		{ "RightHand.DisplayName", "Right Hand" },
		{ "RightHand.Name", "EHandType::RightHand" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "// Blueprint\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHandType::RightHand", (int64)EHandType::RightHand },
		{ "EHandType::LeftHand", (int64)EHandType::LeftHand },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GGI_EHandType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GGI,
	nullptr,
	"EHandType",
	"EHandType",
	Z_Construct_UEnum_GGI_EHandType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GGI_EHandType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GGI_EHandType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GGI_EHandType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GGI_EHandType()
{
	if (!Z_Registration_Info_UEnum_EHandType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandType.InnerSingleton, Z_Construct_UEnum_GGI_EHandType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHandType.InnerSingleton;
}
// End Enum EHandType

// Begin Enum EHandDataLabel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandDataLabel;
static UEnum* EHandDataLabel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHandDataLabel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHandDataLabel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GGI_EHandDataLabel, (UObject*)Z_Construct_UPackage__Script_GGI(), TEXT("EHandDataLabel"));
	}
	return Z_Registration_Info_UEnum_EHandDataLabel.OuterSingleton;
}
template<> GGI_API UEnum* StaticEnum<EHandDataLabel>()
{
	return EHandDataLabel_StaticEnum();
}
struct Z_Construct_UEnum_GGI_EHandDataLabel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bow.DisplayName", "Bow" },
		{ "Bow.Name", "EHandDataLabel::Bow" },
		{ "Grenade.DisplayName", "Grenade" },
		{ "Grenade.Name", "EHandDataLabel::Grenade" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "EHandDataLabel::Idle" },
		{ "ModuleRelativePath", "Public/CommonType.h" },
		{ "Pistol.DisplayName", "Pistol" },
		{ "Pistol.Name", "EHandDataLabel::Pistol" },
		{ "Rifle.DisplayName", "Rifle" },
		{ "Rifle.Name", "EHandDataLabel::Rifle" },
		{ "Spear.DisplayName", "Spear" },
		{ "Spear.Name", "EHandDataLabel::Spear" },
		{ "Sword.DisplayName", "Sword" },
		{ "Sword.Name", "EHandDataLabel::Sword" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHandDataLabel::Idle", (int64)EHandDataLabel::Idle },
		{ "EHandDataLabel::Bow", (int64)EHandDataLabel::Bow },
		{ "EHandDataLabel::Sword", (int64)EHandDataLabel::Sword },
		{ "EHandDataLabel::Pistol", (int64)EHandDataLabel::Pistol },
		{ "EHandDataLabel::Rifle", (int64)EHandDataLabel::Rifle },
		{ "EHandDataLabel::Spear", (int64)EHandDataLabel::Spear },
		{ "EHandDataLabel::Grenade", (int64)EHandDataLabel::Grenade },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GGI_EHandDataLabel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GGI,
	nullptr,
	"EHandDataLabel",
	"EHandDataLabel",
	Z_Construct_UEnum_GGI_EHandDataLabel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GGI_EHandDataLabel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GGI_EHandDataLabel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GGI_EHandDataLabel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GGI_EHandDataLabel()
{
	if (!Z_Registration_Info_UEnum_EHandDataLabel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandDataLabel.InnerSingleton, Z_Construct_UEnum_GGI_EHandDataLabel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHandDataLabel.InnerSingleton;
}
// End Enum EHandDataLabel

// Begin Enum EHandJointType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandJointType;
static UEnum* EHandJointType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHandJointType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHandJointType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GGI_EHandJointType, (UObject*)Z_Construct_UPackage__Script_GGI(), TEXT("EHandJointType"));
	}
	return Z_Registration_Info_UEnum_EHandJointType.OuterSingleton;
}
template<> GGI_API UEnum* StaticEnum<EHandJointType>()
{
	return EHandJointType_StaticEnum();
}
struct Z_Construct_UEnum_GGI_EHandJointType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "Index1.DisplayName", "Index1" },
		{ "Index1.Name", "EHandJointType::Index1" },
		{ "Index2.DisplayName", "Index2" },
		{ "Index2.Name", "EHandJointType::Index2" },
		{ "Index3.DisplayName", "Index3" },
		{ "Index3.Name", "EHandJointType::Index3" },
		{ "Index_Tip.DisplayName", "Index Tip" },
		{ "Index_Tip.Name", "EHandJointType::Index_Tip" },
		{ "Middle1.DisplayName", "Middle1" },
		{ "Middle1.Name", "EHandJointType::Middle1" },
		{ "Middle2.DisplayName", "Middle2" },
		{ "Middle2.Name", "EHandJointType::Middle2" },
		{ "Middle3.DisplayName", "Middle3" },
		{ "Middle3.Name", "EHandJointType::Middle3" },
		{ "Middle_Tip.DisplayName", "Middle Tip" },
		{ "Middle_Tip.Name", "EHandJointType::Middle_Tip" },
		{ "ModuleRelativePath", "Public/CommonType.h" },
		{ "Pinky0.DisplayName", "Pinky0" },
		{ "Pinky0.Name", "EHandJointType::Pinky0" },
		{ "Pinky1.DisplayName", "Pinky1" },
		{ "Pinky1.Name", "EHandJointType::Pinky1" },
		{ "Pinky2.DisplayName", "Pinky2" },
		{ "Pinky2.Name", "EHandJointType::Pinky2" },
		{ "Pinky3.DisplayName", "Pinky3" },
		{ "Pinky3.Name", "EHandJointType::Pinky3" },
		{ "Pinky_Tip.DisplayName", "Pinky Tip" },
		{ "Pinky_Tip.Name", "EHandJointType::Pinky_Tip" },
		{ "Ring1.DisplayName", "Ring1" },
		{ "Ring1.Name", "EHandJointType::Ring1" },
		{ "Ring2.DisplayName", "Ring2" },
		{ "Ring2.Name", "EHandJointType::Ring2" },
		{ "Ring3.DisplayName", "Ring3" },
		{ "Ring3.Name", "EHandJointType::Ring3" },
		{ "Ring_Tip.DisplayName", "Ring Tip" },
		{ "Ring_Tip.Name", "EHandJointType::Ring_Tip" },
		{ "Thumb0.DisplayName", "Thumb0" },
		{ "Thumb0.Name", "EHandJointType::Thumb0" },
		{ "Thumb1.DisplayName", "Thumb1" },
		{ "Thumb1.Name", "EHandJointType::Thumb1" },
		{ "Thumb2.DisplayName", "Thumb2" },
		{ "Thumb2.Name", "EHandJointType::Thumb2" },
		{ "Thumb3.DisplayName", "Thumb3" },
		{ "Thumb3.Name", "EHandJointType::Thumb3" },
		{ "Thumb_Tip.DisplayName", "Thumb Tip" },
		{ "Thumb_Tip.Name", "EHandJointType::Thumb_Tip" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
		{ "WristRoot.DisplayName", "Wrist Root" },
		{ "WristRoot.Name", "EHandJointType::WristRoot" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHandJointType::WristRoot", (int64)EHandJointType::WristRoot },
		{ "EHandJointType::Thumb0", (int64)EHandJointType::Thumb0 },
		{ "EHandJointType::Thumb1", (int64)EHandJointType::Thumb1 },
		{ "EHandJointType::Thumb2", (int64)EHandJointType::Thumb2 },
		{ "EHandJointType::Thumb3", (int64)EHandJointType::Thumb3 },
		{ "EHandJointType::Thumb_Tip", (int64)EHandJointType::Thumb_Tip },
		{ "EHandJointType::Index1", (int64)EHandJointType::Index1 },
		{ "EHandJointType::Index2", (int64)EHandJointType::Index2 },
		{ "EHandJointType::Index3", (int64)EHandJointType::Index3 },
		{ "EHandJointType::Index_Tip", (int64)EHandJointType::Index_Tip },
		{ "EHandJointType::Middle1", (int64)EHandJointType::Middle1 },
		{ "EHandJointType::Middle2", (int64)EHandJointType::Middle2 },
		{ "EHandJointType::Middle3", (int64)EHandJointType::Middle3 },
		{ "EHandJointType::Middle_Tip", (int64)EHandJointType::Middle_Tip },
		{ "EHandJointType::Ring1", (int64)EHandJointType::Ring1 },
		{ "EHandJointType::Ring2", (int64)EHandJointType::Ring2 },
		{ "EHandJointType::Ring3", (int64)EHandJointType::Ring3 },
		{ "EHandJointType::Ring_Tip", (int64)EHandJointType::Ring_Tip },
		{ "EHandJointType::Pinky0", (int64)EHandJointType::Pinky0 },
		{ "EHandJointType::Pinky1", (int64)EHandJointType::Pinky1 },
		{ "EHandJointType::Pinky2", (int64)EHandJointType::Pinky2 },
		{ "EHandJointType::Pinky3", (int64)EHandJointType::Pinky3 },
		{ "EHandJointType::Pinky_Tip", (int64)EHandJointType::Pinky_Tip },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GGI_EHandJointType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GGI,
	nullptr,
	"EHandJointType",
	"EHandJointType",
	Z_Construct_UEnum_GGI_EHandJointType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GGI_EHandJointType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GGI_EHandJointType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GGI_EHandJointType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GGI_EHandJointType()
{
	if (!Z_Registration_Info_UEnum_EHandJointType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandJointType.InnerSingleton, Z_Construct_UEnum_GGI_EHandJointType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHandJointType.InnerSingleton;
}
// End Enum EHandJointType

// Begin Registration
struct Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_CommonType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHandType_StaticEnum, TEXT("EHandType"), &Z_Registration_Info_UEnum_EHandType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2529835082U) },
		{ EHandDataLabel_StaticEnum, TEXT("EHandDataLabel"), &Z_Registration_Info_UEnum_EHandDataLabel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1383003370U) },
		{ EHandJointType_StaticEnum, TEXT("EHandJointType"), &Z_Registration_Info_UEnum_EHandJointType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3240843467U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_CommonType_h_2746826221(TEXT("/Script/GGI"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_CommonType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_CommonType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
