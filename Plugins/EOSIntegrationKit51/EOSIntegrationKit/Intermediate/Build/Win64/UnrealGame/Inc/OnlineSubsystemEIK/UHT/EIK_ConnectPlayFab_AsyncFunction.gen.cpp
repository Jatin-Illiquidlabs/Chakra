// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/PlayFab/EIK_ConnectPlayFab_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_ConnectPlayFab_AsyncFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_ConnectPlayFab_AsyncFunction();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_ConnectPlayFab_AsyncFunction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References
	void UEIK_ConnectPlayFab_AsyncFunction::StaticRegisterNativesUEIK_ConnectPlayFab_AsyncFunction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_ConnectPlayFab_AsyncFunction);
	UClass* Z_Construct_UClass_UEIK_ConnectPlayFab_AsyncFunction_NoRegister()
	{
		return UEIK_ConnectPlayFab_AsyncFunction::StaticClass();
	}
	struct Z_Construct_UClass_UEIK_ConnectPlayFab_AsyncFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEIK_ConnectPlayFab_AsyncFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_ConnectPlayFab_AsyncFunction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AsyncFunctions/PlayFab/EIK_ConnectPlayFab_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/PlayFab/EIK_ConnectPlayFab_AsyncFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEIK_ConnectPlayFab_AsyncFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_ConnectPlayFab_AsyncFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_ConnectPlayFab_AsyncFunction_Statics::ClassParams = {
		&UEIK_ConnectPlayFab_AsyncFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEIK_ConnectPlayFab_AsyncFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_ConnectPlayFab_AsyncFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEIK_ConnectPlayFab_AsyncFunction()
	{
		if (!Z_Registration_Info_UClass_UEIK_ConnectPlayFab_AsyncFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_ConnectPlayFab_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_ConnectPlayFab_AsyncFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEIK_ConnectPlayFab_AsyncFunction.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_ConnectPlayFab_AsyncFunction>()
	{
		return UEIK_ConnectPlayFab_AsyncFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_ConnectPlayFab_AsyncFunction);
	UEIK_ConnectPlayFab_AsyncFunction::~UEIK_ConnectPlayFab_AsyncFunction() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayFab_EIK_ConnectPlayFab_AsyncFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayFab_EIK_ConnectPlayFab_AsyncFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_ConnectPlayFab_AsyncFunction, UEIK_ConnectPlayFab_AsyncFunction::StaticClass, TEXT("UEIK_ConnectPlayFab_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_ConnectPlayFab_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_ConnectPlayFab_AsyncFunction), 800453852U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayFab_EIK_ConnectPlayFab_AsyncFunction_h_2619661107(TEXT("/Script/OnlineSubsystemEIK"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayFab_EIK_ConnectPlayFab_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayFab_EIK_ConnectPlayFab_AsyncFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
