// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGI_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GGI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GGI()
	{
		if (!Z_Registration_Info_UPackage__Script_GGI.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GGI",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x5D018B68,
				0x8C3B1B22,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GGI.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GGI.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GGI(Z_Construct_UPackage__Script_GGI, TEXT("/Script/GGI"), Z_Registration_Info_UPackage__Script_GGI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5D018B68, 0x8C3B1B22));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
