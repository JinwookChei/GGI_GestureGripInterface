// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GGIGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GGI_GGIGameMode_generated_h
#error "GGIGameMode.generated.h already included, missing '#pragma once' in GGIGameMode.h"
#endif
#define GGI_GGIGameMode_generated_h

#define FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGGIGameMode(); \
	friend struct Z_Construct_UClass_AGGIGameMode_Statics; \
public: \
	DECLARE_CLASS(AGGIGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GGI"), NO_API) \
	DECLARE_SERIALIZER(AGGIGameMode)


#define FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGGIGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGGIGameMode(AGGIGameMode&&); \
	AGGIGameMode(const AGGIGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGGIGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGGIGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGGIGameMode) \
	NO_API virtual ~AGGIGameMode();


#define FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIGameMode_h_12_PROLOG
#define FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GGI_API UClass* StaticClass<class AGGIGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
