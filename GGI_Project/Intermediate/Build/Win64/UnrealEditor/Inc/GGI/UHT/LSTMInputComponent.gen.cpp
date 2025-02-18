// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGI/Public/LSTMInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLSTMInputComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GGI_API UClass* Z_Construct_UClass_ULSTMInputComponent();
GGI_API UClass* Z_Construct_UClass_ULSTMInputComponent_NoRegister();
NNE_API UClass* Z_Construct_UClass_UNNEModelData_NoRegister();
UPackage* Z_Construct_UPackage__Script_GGI();
// End Cross Module References

// Begin Class ULSTMInputComponent
void ULSTMInputComponent::StaticRegisterNativesULSTMInputComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULSTMInputComponent);
UClass* Z_Construct_UClass_ULSTMInputComponent_NoRegister()
{
	return ULSTMInputComponent::StaticClass();
}
struct Z_Construct_UClass_ULSTMInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LSTMInputComponent.h" },
		{ "ModuleRelativePath", "Public/LSTMInputComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NNEModelData_MetaData[] = {
		{ "Category", "LSTMInputComponent" },
		{ "ModuleRelativePath", "Public/LSTMInputComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NNEModelData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULSTMInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULSTMInputComponent_Statics::NewProp_NNEModelData = { "NNEModelData", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULSTMInputComponent, NNEModelData), Z_Construct_UClass_UNNEModelData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NNEModelData_MetaData), NewProp_NNEModelData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULSTMInputComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULSTMInputComponent_Statics::NewProp_NNEModelData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULSTMInputComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULSTMInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GGI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULSTMInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULSTMInputComponent_Statics::ClassParams = {
	&ULSTMInputComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULSTMInputComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULSTMInputComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULSTMInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULSTMInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULSTMInputComponent()
{
	if (!Z_Registration_Info_UClass_ULSTMInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULSTMInputComponent.OuterSingleton, Z_Construct_UClass_ULSTMInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULSTMInputComponent.OuterSingleton;
}
template<> GGI_API UClass* StaticClass<ULSTMInputComponent>()
{
	return ULSTMInputComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULSTMInputComponent);
ULSTMInputComponent::~ULSTMInputComponent() {}
// End Class ULSTMInputComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_LSTMInputComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULSTMInputComponent, ULSTMInputComponent::StaticClass, TEXT("ULSTMInputComponent"), &Z_Registration_Info_UClass_ULSTMInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULSTMInputComponent), 928659198U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_LSTMInputComponent_h_4196101455(TEXT("/Script/GGI"),
	Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_LSTMInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_LSTMInputComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
