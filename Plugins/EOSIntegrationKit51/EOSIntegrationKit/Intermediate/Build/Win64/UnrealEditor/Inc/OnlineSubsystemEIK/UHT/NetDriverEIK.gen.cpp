// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/Private/NetDriverEIK.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetDriverEIK() {}
// Cross Module References
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UNetDriverEIK();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UNetDriverEIK_NoRegister();
	SOCKETSUBSYSTEMEIK_API UClass* Z_Construct_UClass_UNetDriverEIKBase();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References
	void UNetDriverEIK::StaticRegisterNativesUNetDriverEIK()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetDriverEIK);
	UClass* Z_Construct_UClass_UNetDriverEIK_NoRegister()
	{
		return UNetDriverEIK::StaticClass();
	}
	struct Z_Construct_UClass_UNetDriverEIK_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetDriverEIK_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetDriverEIKBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriverEIK_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NetDriverEIK.h" },
		{ "ModuleRelativePath", "Private/NetDriverEIK.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetDriverEIK_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetDriverEIK>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetDriverEIK_Statics::ClassParams = {
		&UNetDriverEIK::StaticClass,
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
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UNetDriverEIK_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriverEIK_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetDriverEIK()
	{
		if (!Z_Registration_Info_UClass_UNetDriverEIK.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetDriverEIK.OuterSingleton, Z_Construct_UClass_UNetDriverEIK_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetDriverEIK.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UNetDriverEIK>()
	{
		return UNetDriverEIK::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetDriverEIK);
	UNetDriverEIK::~UNetDriverEIK() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Private_NetDriverEIK_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Private_NetDriverEIK_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetDriverEIK, UNetDriverEIK::StaticClass, TEXT("UNetDriverEIK"), &Z_Registration_Info_UClass_UNetDriverEIK, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetDriverEIK), 865129586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Private_NetDriverEIK_h_3308147535(TEXT("/Script/OnlineSubsystemEIK"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Private_NetDriverEIK_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Private_NetDriverEIK_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
