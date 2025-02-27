// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGI/Public/HandMotionCaptureComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHandMotionCaptureComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GGI_API UClass* Z_Construct_UClass_UGGIMotionControllerComponent_NoRegister();
GGI_API UClass* Z_Construct_UClass_UGGIXRHandComponent_NoRegister();
GGI_API UClass* Z_Construct_UClass_UHandMotionCaptureComponent();
GGI_API UClass* Z_Construct_UClass_UHandMotionCaptureComponent_NoRegister();
GGI_API UEnum* Z_Construct_UEnum_GGI_EHandDataLabel();
UPackage* Z_Construct_UPackage__Script_GGI();
// End Cross Module References

// Begin Class UHandMotionCaptureComponent Function ExportHandDatasToCSV
struct Z_Construct_UFunction_UHandMotionCaptureComponent_ExportHandDatasToCSV_Statics
{
	struct HandMotionCaptureComponent_eventExportHandDatasToCSV_Parms
	{
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HandMotionCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHandMotionCaptureComponent_ExportHandDatasToCSV_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandMotionCaptureComponent_eventExportHandDatasToCSV_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandMotionCaptureComponent_ExportHandDatasToCSV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandMotionCaptureComponent_ExportHandDatasToCSV_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandMotionCaptureComponent_ExportHandDatasToCSV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandMotionCaptureComponent_ExportHandDatasToCSV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHandMotionCaptureComponent, nullptr, "ExportHandDatasToCSV", nullptr, nullptr, Z_Construct_UFunction_UHandMotionCaptureComponent_ExportHandDatasToCSV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandMotionCaptureComponent_ExportHandDatasToCSV_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHandMotionCaptureComponent_ExportHandDatasToCSV_Statics::HandMotionCaptureComponent_eventExportHandDatasToCSV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandMotionCaptureComponent_ExportHandDatasToCSV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandMotionCaptureComponent_ExportHandDatasToCSV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHandMotionCaptureComponent_ExportHandDatasToCSV_Statics::HandMotionCaptureComponent_eventExportHandDatasToCSV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHandMotionCaptureComponent_ExportHandDatasToCSV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandMotionCaptureComponent_ExportHandDatasToCSV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandMotionCaptureComponent::execExportHandDatasToCSV)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExportHandDatasToCSV(Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class UHandMotionCaptureComponent Function ExportHandDatasToCSV

// Begin Class UHandMotionCaptureComponent Function Initialize
struct Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_Statics
{
	struct HandMotionCaptureComponent_eventInitialize_Parms
	{
		UGGIMotionControllerComponent* InRightXRController;
		UGGIMotionControllerComponent* InLeftXRController;
		UGGIXRHandComponent* InRightXRHand;
		UGGIXRHandComponent* InLeftXRHand;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HandMotionCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRightXRController_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLeftXRController_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InRightXRHand_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLeftXRHand_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InRightXRController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InLeftXRController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InRightXRHand;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InLeftXRHand;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_Statics::NewProp_InRightXRController = { "InRightXRController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandMotionCaptureComponent_eventInitialize_Parms, InRightXRController), Z_Construct_UClass_UGGIMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRightXRController_MetaData), NewProp_InRightXRController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_Statics::NewProp_InLeftXRController = { "InLeftXRController", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandMotionCaptureComponent_eventInitialize_Parms, InLeftXRController), Z_Construct_UClass_UGGIMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLeftXRController_MetaData), NewProp_InLeftXRController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_Statics::NewProp_InRightXRHand = { "InRightXRHand", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandMotionCaptureComponent_eventInitialize_Parms, InRightXRHand), Z_Construct_UClass_UGGIXRHandComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InRightXRHand_MetaData), NewProp_InRightXRHand_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_Statics::NewProp_InLeftXRHand = { "InLeftXRHand", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandMotionCaptureComponent_eventInitialize_Parms, InLeftXRHand), Z_Construct_UClass_UGGIXRHandComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLeftXRHand_MetaData), NewProp_InLeftXRHand_MetaData) };
void Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HandMotionCaptureComponent_eventInitialize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HandMotionCaptureComponent_eventInitialize_Parms), &Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_Statics::NewProp_InRightXRController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_Statics::NewProp_InLeftXRController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_Statics::NewProp_InRightXRHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_Statics::NewProp_InLeftXRHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHandMotionCaptureComponent, nullptr, "Initialize", nullptr, nullptr, Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_Statics::HandMotionCaptureComponent_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_Statics::HandMotionCaptureComponent_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandMotionCaptureComponent::execInitialize)
{
	P_GET_OBJECT(UGGIMotionControllerComponent,Z_Param_InRightXRController);
	P_GET_OBJECT(UGGIMotionControllerComponent,Z_Param_InLeftXRController);
	P_GET_OBJECT(UGGIXRHandComponent,Z_Param_InRightXRHand);
	P_GET_OBJECT(UGGIXRHandComponent,Z_Param_InLeftXRHand);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Initialize(Z_Param_InRightXRController,Z_Param_InLeftXRController,Z_Param_InRightXRHand,Z_Param_InLeftXRHand);
	P_NATIVE_END;
}
// End Class UHandMotionCaptureComponent Function Initialize

// Begin Class UHandMotionCaptureComponent Function Initialize_CSVData
struct Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_CSVData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HandMotionCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_CSVData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHandMotionCaptureComponent, nullptr, "Initialize_CSVData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_CSVData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_CSVData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_CSVData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_CSVData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandMotionCaptureComponent::execInitialize_CSVData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize_CSVData();
	P_NATIVE_END;
}
// End Class UHandMotionCaptureComponent Function Initialize_CSVData

// Begin Class UHandMotionCaptureComponent Function StartWriteCSVData
struct Z_Construct_UFunction_UHandMotionCaptureComponent_StartWriteCSVData_Statics
{
	struct HandMotionCaptureComponent_eventStartWriteCSVData_Parms
	{
		EHandDataLabel InHandDataLabel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HandMotionCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InHandDataLabel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InHandDataLabel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHandMotionCaptureComponent_StartWriteCSVData_Statics::NewProp_InHandDataLabel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHandMotionCaptureComponent_StartWriteCSVData_Statics::NewProp_InHandDataLabel = { "InHandDataLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandMotionCaptureComponent_eventStartWriteCSVData_Parms, InHandDataLabel), Z_Construct_UEnum_GGI_EHandDataLabel, METADATA_PARAMS(0, nullptr) }; // 1383003370
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandMotionCaptureComponent_StartWriteCSVData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandMotionCaptureComponent_StartWriteCSVData_Statics::NewProp_InHandDataLabel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandMotionCaptureComponent_StartWriteCSVData_Statics::NewProp_InHandDataLabel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandMotionCaptureComponent_StartWriteCSVData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandMotionCaptureComponent_StartWriteCSVData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHandMotionCaptureComponent, nullptr, "StartWriteCSVData", nullptr, nullptr, Z_Construct_UFunction_UHandMotionCaptureComponent_StartWriteCSVData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandMotionCaptureComponent_StartWriteCSVData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHandMotionCaptureComponent_StartWriteCSVData_Statics::HandMotionCaptureComponent_eventStartWriteCSVData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandMotionCaptureComponent_StartWriteCSVData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandMotionCaptureComponent_StartWriteCSVData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHandMotionCaptureComponent_StartWriteCSVData_Statics::HandMotionCaptureComponent_eventStartWriteCSVData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHandMotionCaptureComponent_StartWriteCSVData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandMotionCaptureComponent_StartWriteCSVData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandMotionCaptureComponent::execStartWriteCSVData)
{
	P_GET_ENUM(EHandDataLabel,Z_Param_InHandDataLabel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartWriteCSVData(EHandDataLabel(Z_Param_InHandDataLabel));
	P_NATIVE_END;
}
// End Class UHandMotionCaptureComponent Function StartWriteCSVData

// Begin Class UHandMotionCaptureComponent
void UHandMotionCaptureComponent::StaticRegisterNativesUHandMotionCaptureComponent()
{
	UClass* Class = UHandMotionCaptureComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExportHandDatasToCSV", &UHandMotionCaptureComponent::execExportHandDatasToCSV },
		{ "Initialize", &UHandMotionCaptureComponent::execInitialize },
		{ "Initialize_CSVData", &UHandMotionCaptureComponent::execInitialize_CSVData },
		{ "StartWriteCSVData", &UHandMotionCaptureComponent::execStartWriteCSVData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHandMotionCaptureComponent);
UClass* Z_Construct_UClass_UHandMotionCaptureComponent_NoRegister()
{
	return UHandMotionCaptureComponent::StaticClass();
}
struct Z_Construct_UClass_UHandMotionCaptureComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HandMotionCaptureComponent.h" },
		{ "ModuleRelativePath", "Public/HandMotionCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerRightXRController_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HandMotionCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerLeftXRController_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HandMotionCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerXRRightHand_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HandMotionCaptureComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerXRLeftHand_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HandMotionCaptureComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerRightXRController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerLeftXRController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerXRRightHand;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerXRLeftHand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHandMotionCaptureComponent_ExportHandDatasToCSV, "ExportHandDatasToCSV" }, // 1195943345
		{ &Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize, "Initialize" }, // 3154215027
		{ &Z_Construct_UFunction_UHandMotionCaptureComponent_Initialize_CSVData, "Initialize_CSVData" }, // 1058749404
		{ &Z_Construct_UFunction_UHandMotionCaptureComponent_StartWriteCSVData, "StartWriteCSVData" }, // 383521781
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHandMotionCaptureComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHandMotionCaptureComponent_Statics::NewProp_OwnerRightXRController = { "OwnerRightXRController", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandMotionCaptureComponent, OwnerRightXRController), Z_Construct_UClass_UGGIMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerRightXRController_MetaData), NewProp_OwnerRightXRController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHandMotionCaptureComponent_Statics::NewProp_OwnerLeftXRController = { "OwnerLeftXRController", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandMotionCaptureComponent, OwnerLeftXRController), Z_Construct_UClass_UGGIMotionControllerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerLeftXRController_MetaData), NewProp_OwnerLeftXRController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHandMotionCaptureComponent_Statics::NewProp_OwnerXRRightHand = { "OwnerXRRightHand", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandMotionCaptureComponent, OwnerXRRightHand), Z_Construct_UClass_UGGIXRHandComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerXRRightHand_MetaData), NewProp_OwnerXRRightHand_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHandMotionCaptureComponent_Statics::NewProp_OwnerXRLeftHand = { "OwnerXRLeftHand", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHandMotionCaptureComponent, OwnerXRLeftHand), Z_Construct_UClass_UGGIXRHandComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerXRLeftHand_MetaData), NewProp_OwnerXRLeftHand_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHandMotionCaptureComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandMotionCaptureComponent_Statics::NewProp_OwnerRightXRController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandMotionCaptureComponent_Statics::NewProp_OwnerLeftXRController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandMotionCaptureComponent_Statics::NewProp_OwnerXRRightHand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHandMotionCaptureComponent_Statics::NewProp_OwnerXRLeftHand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHandMotionCaptureComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHandMotionCaptureComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GGI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHandMotionCaptureComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHandMotionCaptureComponent_Statics::ClassParams = {
	&UHandMotionCaptureComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHandMotionCaptureComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHandMotionCaptureComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHandMotionCaptureComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHandMotionCaptureComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHandMotionCaptureComponent()
{
	if (!Z_Registration_Info_UClass_UHandMotionCaptureComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHandMotionCaptureComponent.OuterSingleton, Z_Construct_UClass_UHandMotionCaptureComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHandMotionCaptureComponent.OuterSingleton;
}
template<> GGI_API UClass* StaticClass<UHandMotionCaptureComponent>()
{
	return UHandMotionCaptureComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHandMotionCaptureComponent);
UHandMotionCaptureComponent::~UHandMotionCaptureComponent() {}
// End Class UHandMotionCaptureComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_HandMotionCaptureComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHandMotionCaptureComponent, UHandMotionCaptureComponent::StaticClass, TEXT("UHandMotionCaptureComponent"), &Z_Registration_Info_UClass_UHandMotionCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHandMotionCaptureComponent), 3479418245U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_HandMotionCaptureComponent_h_4061685757(TEXT("/Script/GGI"),
	Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_HandMotionCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_HandMotionCaptureComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
