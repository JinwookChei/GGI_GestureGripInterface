// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGI/Public/GGIPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGIPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
GGI_API UClass* Z_Construct_UClass_AGGIPawn();
GGI_API UClass* Z_Construct_UClass_AGGIPawn_NoRegister();
GGI_API UClass* Z_Construct_UClass_UGGIMotionControllerComponent_NoRegister();
GGI_API UClass* Z_Construct_UClass_UGGIXRHandComponent_NoRegister();
GGI_API UClass* Z_Construct_UClass_UHandMotionCaptureComponent_NoRegister();
GGI_API UClass* Z_Construct_UClass_ULSTMInputComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GGI();
// End Cross Module References

// Begin Class AGGIPawn
void AGGIPawn::StaticRegisterNativesAGGIPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGGIPawn);
UClass* Z_Construct_UClass_AGGIPawn_NoRegister()
{
	return AGGIPawn::StaticClass();
}
struct Z_Construct_UClass_AGGIPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GGIPawn.h" },
		{ "ModuleRelativePath", "Public/GGIPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GGIPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GGIPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightXRController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Motion Controller - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GGIPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Motion Controller - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftXRController_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Motion Controller - \xef\xbf\xbd\xde\xbc\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GGIPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Motion Controller - \xef\xbf\xbd\xde\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightXRHand_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// OculusXR Hand - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GGIPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "OculusXR Hand - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftXRHand_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// OculusXR Hand - \xef\xbf\xbd\xde\xbc\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GGIPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "OculusXR Hand - \xef\xbf\xbd\xde\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandMotionCaptureComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GGIPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LSTMInputComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GGIPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BowMeshAsset_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/GGIPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwordMeshAsset_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/GGIPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PistolMeshAsset_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/GGIPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RifleMeshAsset_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/GGIPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpearMeshAsset_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/GGIPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeMeshAsset_MetaData[] = {
		{ "Category", "Weapons" },
		{ "ModuleRelativePath", "Public/GGIPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeaponAsset_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GGIPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightXRController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftXRController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightXRHand;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftXRHand;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandMotionCaptureComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LSTMInputComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BowMeshAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwordMeshAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PistolMeshAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RifleMeshAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpearMeshAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrenadeMeshAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentWeaponAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGGIPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGIPawn_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGIPawn, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGIPawn_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGIPawn, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGIPawn_Statics::NewProp_RightXRController = { "RightXRController", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGIPawn, RightXRController), Z_Construct_UClass_UGGIMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightXRController_MetaData), NewProp_RightXRController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGIPawn_Statics::NewProp_LeftXRController = { "LeftXRController", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGIPawn, LeftXRController), Z_Construct_UClass_UGGIMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftXRController_MetaData), NewProp_LeftXRController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGIPawn_Statics::NewProp_RightXRHand = { "RightXRHand", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGIPawn, RightXRHand), Z_Construct_UClass_UGGIXRHandComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightXRHand_MetaData), NewProp_RightXRHand_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGIPawn_Statics::NewProp_LeftXRHand = { "LeftXRHand", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGIPawn, LeftXRHand), Z_Construct_UClass_UGGIXRHandComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftXRHand_MetaData), NewProp_LeftXRHand_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGIPawn_Statics::NewProp_HandMotionCaptureComponent = { "HandMotionCaptureComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGIPawn, HandMotionCaptureComponent), Z_Construct_UClass_UHandMotionCaptureComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandMotionCaptureComponent_MetaData), NewProp_HandMotionCaptureComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGIPawn_Statics::NewProp_LSTMInputComponent = { "LSTMInputComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGIPawn, LSTMInputComponent), Z_Construct_UClass_ULSTMInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LSTMInputComponent_MetaData), NewProp_LSTMInputComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGIPawn_Statics::NewProp_BowMeshAsset = { "BowMeshAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGIPawn, BowMeshAsset), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BowMeshAsset_MetaData), NewProp_BowMeshAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGIPawn_Statics::NewProp_SwordMeshAsset = { "SwordMeshAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGIPawn, SwordMeshAsset), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwordMeshAsset_MetaData), NewProp_SwordMeshAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGIPawn_Statics::NewProp_PistolMeshAsset = { "PistolMeshAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGIPawn, PistolMeshAsset), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PistolMeshAsset_MetaData), NewProp_PistolMeshAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGIPawn_Statics::NewProp_RifleMeshAsset = { "RifleMeshAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGIPawn, RifleMeshAsset), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RifleMeshAsset_MetaData), NewProp_RifleMeshAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGIPawn_Statics::NewProp_SpearMeshAsset = { "SpearMeshAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGIPawn, SpearMeshAsset), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpearMeshAsset_MetaData), NewProp_SpearMeshAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGIPawn_Statics::NewProp_GrenadeMeshAsset = { "GrenadeMeshAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGIPawn, GrenadeMeshAsset), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrenadeMeshAsset_MetaData), NewProp_GrenadeMeshAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGGIPawn_Statics::NewProp_CurrentWeaponAsset = { "CurrentWeaponAsset", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGGIPawn, CurrentWeaponAsset), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWeaponAsset_MetaData), NewProp_CurrentWeaponAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGGIPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGIPawn_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGIPawn_Statics::NewProp_CameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGIPawn_Statics::NewProp_RightXRController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGIPawn_Statics::NewProp_LeftXRController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGIPawn_Statics::NewProp_RightXRHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGIPawn_Statics::NewProp_LeftXRHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGIPawn_Statics::NewProp_HandMotionCaptureComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGIPawn_Statics::NewProp_LSTMInputComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGIPawn_Statics::NewProp_BowMeshAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGIPawn_Statics::NewProp_SwordMeshAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGIPawn_Statics::NewProp_PistolMeshAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGIPawn_Statics::NewProp_RifleMeshAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGIPawn_Statics::NewProp_SpearMeshAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGIPawn_Statics::NewProp_GrenadeMeshAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGGIPawn_Statics::NewProp_CurrentWeaponAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGGIPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGGIPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_GGI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGGIPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGGIPawn_Statics::ClassParams = {
	&AGGIPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGGIPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGGIPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGGIPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AGGIPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGGIPawn()
{
	if (!Z_Registration_Info_UClass_AGGIPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGGIPawn.OuterSingleton, Z_Construct_UClass_AGGIPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGGIPawn.OuterSingleton;
}
template<> GGI_API UClass* StaticClass<AGGIPawn>()
{
	return AGGIPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGGIPawn);
AGGIPawn::~AGGIPawn() {}
// End Class AGGIPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGGIPawn, AGGIPawn::StaticClass, TEXT("AGGIPawn"), &Z_Registration_Info_UClass_AGGIPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGGIPawn), 1628220587U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIPawn_h_3285163996(TEXT("/Script/GGI"),
	Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
