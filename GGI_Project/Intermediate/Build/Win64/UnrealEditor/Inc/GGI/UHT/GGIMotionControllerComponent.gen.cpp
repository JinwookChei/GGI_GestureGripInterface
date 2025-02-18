// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGI/Public/GGIMotionControllerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGIMotionControllerComponent() {}

// Begin Cross Module References
GGI_API UClass* Z_Construct_UClass_UGGIMotionControllerComponent();
GGI_API UClass* Z_Construct_UClass_UGGIMotionControllerComponent_NoRegister();
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent();
UPackage* Z_Construct_UPackage__Script_GGI();
// End Cross Module References

// Begin Class UGGIMotionControllerComponent
void UGGIMotionControllerComponent::StaticRegisterNativesUGGIMotionControllerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGGIMotionControllerComponent);
UClass* Z_Construct_UClass_UGGIMotionControllerComponent_NoRegister()
{
	return UGGIMotionControllerComponent::StaticClass();
}
struct Z_Construct_UClass_UGGIMotionControllerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "GGIMotionControllerComponent.h" },
		{ "ModuleRelativePath", "Public/GGIMotionControllerComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGGIMotionControllerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGGIMotionControllerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMotionControllerComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GGI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGGIMotionControllerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGGIMotionControllerComponent_Statics::ClassParams = {
	&UGGIMotionControllerComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGGIMotionControllerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGGIMotionControllerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGGIMotionControllerComponent()
{
	if (!Z_Registration_Info_UClass_UGGIMotionControllerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGGIMotionControllerComponent.OuterSingleton, Z_Construct_UClass_UGGIMotionControllerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGGIMotionControllerComponent.OuterSingleton;
}
template<> GGI_API UClass* StaticClass<UGGIMotionControllerComponent>()
{
	return UGGIMotionControllerComponent::StaticClass();
}
UGGIMotionControllerComponent::UGGIMotionControllerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGGIMotionControllerComponent);
UGGIMotionControllerComponent::~UGGIMotionControllerComponent() {}
// End Class UGGIMotionControllerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIMotionControllerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGGIMotionControllerComponent, UGGIMotionControllerComponent::StaticClass, TEXT("UGGIMotionControllerComponent"), &Z_Registration_Info_UClass_UGGIMotionControllerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGGIMotionControllerComponent), 335408910U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIMotionControllerComponent_h_4157898704(TEXT("/Script/GGI"),
	Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIMotionControllerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIMotionControllerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
