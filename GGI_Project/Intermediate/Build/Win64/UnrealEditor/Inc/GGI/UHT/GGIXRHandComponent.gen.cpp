// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGI/Public/GGIXRHandComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGIXRHandComponent() {}

// Begin Cross Module References
GGI_API UClass* Z_Construct_UClass_UGGIXRHandComponent();
GGI_API UClass* Z_Construct_UClass_UGGIXRHandComponent_NoRegister();
OCULUSXRINPUT_API UClass* Z_Construct_UClass_UOculusXRHandComponent();
UPackage* Z_Construct_UPackage__Script_GGI();
// End Cross Module References

// Begin Class UGGIXRHandComponent
void UGGIXRHandComponent::StaticRegisterNativesUGGIXRHandComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGGIXRHandComponent);
UClass* Z_Construct_UClass_UGGIXRHandComponent_NoRegister()
{
	return UGGIXRHandComponent::StaticClass();
}
struct Z_Construct_UClass_UGGIXRHandComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Physics Object Mobility Trigger" },
		{ "IncludePath", "GGIXRHandComponent.h" },
		{ "ModuleRelativePath", "Public/GGIXRHandComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGGIXRHandComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGGIXRHandComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOculusXRHandComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GGI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGGIXRHandComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGGIXRHandComponent_Statics::ClassParams = {
	&UGGIXRHandComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGGIXRHandComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGGIXRHandComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGGIXRHandComponent()
{
	if (!Z_Registration_Info_UClass_UGGIXRHandComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGGIXRHandComponent.OuterSingleton, Z_Construct_UClass_UGGIXRHandComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGGIXRHandComponent.OuterSingleton;
}
template<> GGI_API UClass* StaticClass<UGGIXRHandComponent>()
{
	return UGGIXRHandComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGGIXRHandComponent);
UGGIXRHandComponent::~UGGIXRHandComponent() {}
// End Class UGGIXRHandComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIXRHandComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGGIXRHandComponent, UGGIXRHandComponent::StaticClass, TEXT("UGGIXRHandComponent"), &Z_Registration_Info_UClass_UGGIXRHandComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGGIXRHandComponent), 3314646510U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIXRHandComponent_h_3240341974(TEXT("/Script/GGI"),
	Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIXRHandComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIXRHandComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
