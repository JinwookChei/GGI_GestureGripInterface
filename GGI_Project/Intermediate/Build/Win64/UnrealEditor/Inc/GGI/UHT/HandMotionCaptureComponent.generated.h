// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HandMotionCaptureComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGGIXRHandComponent;
enum class EHandDataLabel : uint8;
#ifdef GGI_HandMotionCaptureComponent_generated_h
#error "HandMotionCaptureComponent.generated.h already included, missing '#pragma once' in HandMotionCaptureComponent.h"
#endif
#define GGI_HandMotionCaptureComponent_generated_h

#define FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_HandMotionCaptureComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExportHandDatasToCSV); \
	DECLARE_FUNCTION(execInitialize_CSVData); \
	DECLARE_FUNCTION(execStartWriteCSVData);


#define FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_HandMotionCaptureComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHandMotionCaptureComponent(); \
	friend struct Z_Construct_UClass_UHandMotionCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UHandMotionCaptureComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GGI"), NO_API) \
	DECLARE_SERIALIZER(UHandMotionCaptureComponent)


#define FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_HandMotionCaptureComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHandMotionCaptureComponent(UHandMotionCaptureComponent&&); \
	UHandMotionCaptureComponent(const UHandMotionCaptureComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHandMotionCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHandMotionCaptureComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHandMotionCaptureComponent) \
	NO_API virtual ~UHandMotionCaptureComponent();


#define FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_HandMotionCaptureComponent_h_10_PROLOG
#define FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_HandMotionCaptureComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_HandMotionCaptureComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_HandMotionCaptureComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_HandMotionCaptureComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GGI_API UClass* StaticClass<class UHandMotionCaptureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_HandMotionCaptureComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
