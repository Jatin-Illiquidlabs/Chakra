// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocketSubsystemEIK/Public/NetDriverEIKBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetDriverEIKBase() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpNetDriver();
	SOCKETSUBSYSTEMEIK_API UClass* Z_Construct_UClass_UNetDriverEIKBase();
	SOCKETSUBSYSTEMEIK_API UClass* Z_Construct_UClass_UNetDriverEIKBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SocketSubsystemEIK();
// End Cross Module References
	void UNetDriverEIKBase::StaticRegisterNativesUNetDriverEIKBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetDriverEIKBase);
	UClass* Z_Construct_UClass_UNetDriverEIKBase_NoRegister()
	{
		return UNetDriverEIKBase::StaticClass();
	}
	struct Z_Construct_UClass_UNetDriverEIKBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPassthrough_MetaData[];
#endif
		static void NewProp_bIsPassthrough_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPassthrough;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUsingP2PSockets_MetaData[];
#endif
		static void NewProp_bIsUsingP2PSockets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUsingP2PSockets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetDriverEIKBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIpNetDriver,
		(UObject* (*)())Z_Construct_UPackage__Script_SocketSubsystemEIK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriverEIKBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NetDriverEIKBase.h" },
		{ "ModuleRelativePath", "Public/NetDriverEIKBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriverEIKBase_Statics::NewProp_bIsPassthrough_MetaData[] = {
		{ "ModuleRelativePath", "Public/NetDriverEIKBase.h" },
	};
#endif
	void Z_Construct_UClass_UNetDriverEIKBase_Statics::NewProp_bIsPassthrough_SetBit(void* Obj)
	{
		((UNetDriverEIKBase*)Obj)->bIsPassthrough = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetDriverEIKBase_Statics::NewProp_bIsPassthrough = { "bIsPassthrough", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNetDriverEIKBase), &Z_Construct_UClass_UNetDriverEIKBase_Statics::NewProp_bIsPassthrough_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNetDriverEIKBase_Statics::NewProp_bIsPassthrough_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriverEIKBase_Statics::NewProp_bIsPassthrough_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriverEIKBase_Statics::NewProp_bIsUsingP2PSockets_MetaData[] = {
		{ "ModuleRelativePath", "Public/NetDriverEIKBase.h" },
	};
#endif
	void Z_Construct_UClass_UNetDriverEIKBase_Statics::NewProp_bIsUsingP2PSockets_SetBit(void* Obj)
	{
		((UNetDriverEIKBase*)Obj)->bIsUsingP2PSockets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetDriverEIKBase_Statics::NewProp_bIsUsingP2PSockets = { "bIsUsingP2PSockets", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNetDriverEIKBase), &Z_Construct_UClass_UNetDriverEIKBase_Statics::NewProp_bIsUsingP2PSockets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNetDriverEIKBase_Statics::NewProp_bIsUsingP2PSockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriverEIKBase_Statics::NewProp_bIsUsingP2PSockets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetDriverEIKBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriverEIKBase_Statics::NewProp_bIsPassthrough,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriverEIKBase_Statics::NewProp_bIsUsingP2PSockets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetDriverEIKBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetDriverEIKBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetDriverEIKBase_Statics::ClassParams = {
		&UNetDriverEIKBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNetDriverEIKBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriverEIKBase_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UNetDriverEIKBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriverEIKBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetDriverEIKBase()
	{
		if (!Z_Registration_Info_UClass_UNetDriverEIKBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetDriverEIKBase.OuterSingleton, Z_Construct_UClass_UNetDriverEIKBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetDriverEIKBase.OuterSingleton;
	}
	template<> SOCKETSUBSYSTEMEIK_API UClass* StaticClass<UNetDriverEIKBase>()
	{
		return UNetDriverEIKBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetDriverEIKBase);
	UNetDriverEIKBase::~UNetDriverEIKBase() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_SocketSubsystemEIK_Public_NetDriverEIKBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_SocketSubsystemEIK_Public_NetDriverEIKBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetDriverEIKBase, UNetDriverEIKBase::StaticClass, TEXT("UNetDriverEIKBase"), &Z_Registration_Info_UClass_UNetDriverEIKBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetDriverEIKBase), 3763360742U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_SocketSubsystemEIK_Public_NetDriverEIKBase_h_3498611772(TEXT("/Script/SocketSubsystemEIK"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_SocketSubsystemEIK_Public_NetDriverEIKBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_SocketSubsystemEIK_Public_NetDriverEIKBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
