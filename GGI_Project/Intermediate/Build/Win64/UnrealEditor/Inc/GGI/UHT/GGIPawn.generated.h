// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GGIPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GGI_GGIPawn_generated_h
#error "GGIPawn.generated.h already included, missing '#pragma once' in GGIPawn.h"
#endif
#define GGI_GGIPawn_generated_h

#define FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIPawn_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGGIPawn(); \
	friend struct Z_Construct_UClass_AGGIPawn_Statics; \
public: \
	DECLARE_CLASS(AGGIPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GGI"), NO_API) \
	DECLARE_SERIALIZER(AGGIPawn)


#define FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGGIPawn(AGGIPawn&&); \
	AGGIPawn(const AGGIPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGGIPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGGIPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGGIPawn) \
	NO_API virtual ~AGGIPawn();


#define FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIPawn_h_11_PROLOG
#define FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIPawn_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIPawn_h_14_INCLASS_NO_PURE_DECLS \
	FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIPawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GGI_API UClass* StaticClass<class AGGIPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GGI_GestureGripInterface_GGI_Project_Source_GGI_Public_GGIPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
