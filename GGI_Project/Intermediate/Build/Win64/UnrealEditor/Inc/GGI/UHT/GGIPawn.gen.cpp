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
GGI_API UClass* Z_Construct_UClass_AGGIPawn();
GGI_API UClass* Z_Construct_UClass_AGGIPawn_NoRegister();
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGGIPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_AGGIPawn, AGGIPawn::StaticClass, TEXT("AGGIPawn"), &Z_Registration_Info_UClass_AGGIPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGGIPawn), 283681852U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIPawn_h_3334680761(TEXT("/Script/GGI"),
	Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
