// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocketSubsystemEIK/Private/NetConnectionEIK.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetConnectionEIK() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection();
	SOCKETSUBSYSTEMEIK_API UClass* Z_Construct_UClass_UNetConnectionEIK();
	SOCKETSUBSYSTEMEIK_API UClass* Z_Construct_UClass_UNetConnectionEIK_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SocketSubsystemEIK();
// End Cross Module References
	void UNetConnectionEIK::StaticRegisterNativesUNetConnectionEIK()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetConnectionEIK);
	UClass* Z_Construct_UClass_UNetConnectionEIK_NoRegister()
	{
		return UNetConnectionEIK::StaticClass();
	}
	struct Z_Construct_UClass_UNetConnectionEIK_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetConnectionEIK_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIpConnection,
		(UObject* (*)())Z_Construct_UPackage__Script_SocketSubsystemEIK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetConnectionEIK_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NetConnectionEIK.h" },
		{ "ModuleRelativePath", "Private/NetConnectionEIK.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetConnectionEIK_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetConnectionEIK>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetConnectionEIK_Statics::ClassParams = {
		&UNetConnectionEIK::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNetConnectionEIK_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetConnectionEIK_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetConnectionEIK()
	{
		if (!Z_Registration_Info_UClass_UNetConnectionEIK.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetConnectionEIK.OuterSingleton, Z_Construct_UClass_UNetConnectionEIK_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetConnectionEIK.OuterSingleton;
	}
	template<> SOCKETSUBSYSTEMEIK_API UClass* StaticClass<UNetConnectionEIK>()
	{
		return UNetConnectionEIK::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetConnectionEIK);
	UNetConnectionEIK::~UNetConnectionEIK() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_SocketSubsystemEIK_Private_NetConnectionEIK_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_SocketSubsystemEIK_Private_NetConnectionEIK_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetConnectionEIK, UNetConnectionEIK::StaticClass, TEXT("UNetConnectionEIK"), &Z_Registration_Info_UClass_UNetConnectionEIK, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetConnectionEIK), 1238213572U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_SocketSubsystemEIK_Private_NetConnectionEIK_h_3468236632(TEXT("/Script/SocketSubsystemEIK"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_SocketSubsystemEIK_Private_NetConnectionEIK_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_SocketSubsystemEIK_Private_NetConnectionEIK_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
