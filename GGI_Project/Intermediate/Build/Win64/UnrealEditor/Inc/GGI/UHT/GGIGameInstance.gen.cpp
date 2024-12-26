// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGI/Public/GGIGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGIGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
GGI_API UClass* Z_Construct_UClass_UGGIGameInstance();
GGI_API UClass* Z_Construct_UClass_UGGIGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_GGI();
// End Cross Module References

// Begin Class UGGIGameInstance
void UGGIGameInstance::StaticRegisterNativesUGGIGameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGGIGameInstance);
UClass* Z_Construct_UClass_UGGIGameInstance_NoRegister()
{
	return UGGIGameInstance::StaticClass();
}
struct Z_Construct_UClass_UGGIGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GGIGameInstance.h" },
		{ "ModuleRelativePath", "Public/GGIGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGGIGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGGIGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_GGI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGGIGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGGIGameInstance_Statics::ClassParams = {
	&UGGIGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGGIGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UGGIGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGGIGameInstance()
{
	if (!Z_Registration_Info_UClass_UGGIGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGGIGameInstance.OuterSingleton, Z_Construct_UClass_UGGIGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGGIGameInstance.OuterSingleton;
}
template<> GGI_API UClass* StaticClass<UGGIGameInstance>()
{
	return UGGIGameInstance::StaticClass();
}
UGGIGameInstance::UGGIGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGGIGameInstance);
UGGIGameInstance::~UGGIGameInstance() {}
// End Class UGGIGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGGIGameInstance, UGGIGameInstance::StaticClass, TEXT("UGGIGameInstance"), &Z_Registration_Info_UClass_UGGIGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGGIGameInstance), 2029583726U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIGameInstance_h_3072869592(TEXT("/Script/GGI"),
	Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
