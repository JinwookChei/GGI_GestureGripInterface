// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GGIGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GGI_GGIGameInstance_generated_h
#error "GGIGameInstance.generated.h already included, missing '#pragma once' in GGIGameInstance.h"
#endif
#define GGI_GGIGameInstance_generated_h

#define FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGGIGameInstance(); \
	friend struct Z_Construct_UClass_UGGIGameInstance_Statics; \
public: \
	DECLARE_CLASS(UGGIGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GGI"), NO_API) \
	DECLARE_SERIALIZER(UGGIGameInstance)


#define FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGGIGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGGIGameInstance(UGGIGameInstance&&); \
	UGGIGameInstance(const UGGIGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGGIGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGGIGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGGIGameInstance) \
	NO_API virtual ~UGGIGameInstance();


#define FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIGameInstance_h_12_PROLOG
#define FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GGI_API UClass* StaticClass<class UGGIGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
