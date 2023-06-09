// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/Public/EIKSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIKSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeOptionsBase();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings_NoRegister();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIKSettings();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIKSettings_NoRegister();
	ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EAutoLoginTypes();
	ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEArtifactSettings();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References
	void UDEPRECATED_EIKArtifactSettings::StaticRegisterNativesUDEPRECATED_EIKArtifactSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_EIKArtifactSettings);
	UClass* Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings_NoRegister()
	{
		return UDEPRECATED_EIKArtifactSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EIKSettings.h" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_EIKArtifactSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings_Statics::ClassParams = {
		&UDEPRECATED_EIKArtifactSettings::StaticClass,
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
		0x020002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_EIKArtifactSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_EIKArtifactSettings.OuterSingleton, Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_EIKArtifactSettings.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UDEPRECATED_EIKArtifactSettings>()
	{
		return UDEPRECATED_EIKArtifactSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_EIKArtifactSettings);
	UDEPRECATED_EIKArtifactSettings::~UDEPRECATED_EIKArtifactSettings() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EArtifactSettings;
class UScriptStruct* FEArtifactSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EArtifactSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EArtifactSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEArtifactSettings, Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EArtifactSettings"));
	}
	return Z_Registration_Info_UScriptStruct_EArtifactSettings.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEArtifactSettings>()
{
	return FEArtifactSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEArtifactSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArtifactName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ArtifactName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClientId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientSecret_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClientSecret;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProductId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProductId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SandboxId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SandboxId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeploymentId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeploymentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EncryptionKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EncryptionKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEArtifactSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEArtifactSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ArtifactName_MetaData[] = {
		{ "Category", "EOS Settings" },
		{ "Comment", "/** This needs to match what the launcher passes in the -epicapp command line arg */" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
		{ "ToolTip", "This needs to match what the launcher passes in the -epicapp command line arg" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ArtifactName = { "ArtifactName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEArtifactSettings, ArtifactName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ArtifactName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ArtifactName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ClientId_MetaData[] = {
		{ "Category", "EOS Artifact Settings" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEArtifactSettings, ClientId), METADATA_PARAMS(Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ClientId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ClientSecret_MetaData[] = {
		{ "Category", "EOS Artifact Settings" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ClientSecret = { "ClientSecret", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEArtifactSettings, ClientSecret), METADATA_PARAMS(Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ClientSecret_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ClientSecret_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ProductId_MetaData[] = {
		{ "Category", "EOS Artifact Settings" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ProductId = { "ProductId", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEArtifactSettings, ProductId), METADATA_PARAMS(Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ProductId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ProductId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_SandboxId_MetaData[] = {
		{ "Category", "EOS Artifact Settings" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_SandboxId = { "SandboxId", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEArtifactSettings, SandboxId), METADATA_PARAMS(Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_SandboxId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_SandboxId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_DeploymentId_MetaData[] = {
		{ "Category", "EOS Artifact Settings" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_DeploymentId = { "DeploymentId", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEArtifactSettings, DeploymentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_DeploymentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_DeploymentId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_EncryptionKey_MetaData[] = {
		{ "Category", "EOS Artifact Settings" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_EncryptionKey = { "EncryptionKey", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEArtifactSettings, EncryptionKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_EncryptionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_EncryptionKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEArtifactSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ArtifactName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ClientId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ClientSecret,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_ProductId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_SandboxId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_DeploymentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewProp_EncryptionKey,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEArtifactSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
		nullptr,
		&NewStructOps,
		"EArtifactSettings",
		sizeof(FEArtifactSettings),
		alignof(FEArtifactSettings),
		Z_Construct_UScriptStruct_FEArtifactSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEArtifactSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEArtifactSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEArtifactSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEArtifactSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_EArtifactSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EArtifactSettings.InnerSingleton, Z_Construct_UScriptStruct_FEArtifactSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EArtifactSettings.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAutoLoginTypes;
	static UEnum* EAutoLoginTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAutoLoginTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAutoLoginTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemEIK_EAutoLoginTypes, Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EAutoLoginTypes"));
		}
		return Z_Registration_Info_UEnum_EAutoLoginTypes.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<EAutoLoginTypes>()
	{
		return EAutoLoginTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemEIK_EAutoLoginTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemEIK_EAutoLoginTypes_Statics::Enumerators[] = {
		{ "EAutoLoginTypes::None", (int64)EAutoLoginTypes::None },
		{ "EAutoLoginTypes::AccountPortal", (int64)EAutoLoginTypes::AccountPortal },
		{ "EAutoLoginTypes::PersistentAuth", (int64)EAutoLoginTypes::PersistentAuth },
		{ "EAutoLoginTypes::DeviceID", (int64)EAutoLoginTypes::DeviceID },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemEIK_EAutoLoginTypes_Statics::Enum_MetaDataParams[] = {
		{ "AccountPortal.DisplayName", "Account Portal" },
		{ "AccountPortal.Name", "EAutoLoginTypes::AccountPortal" },
		{ "BlueprintType", "true" },
		{ "DeviceID.DisplayName", "Device ID" },
		{ "DeviceID.Name", "EAutoLoginTypes::DeviceID" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EAutoLoginTypes::None" },
		{ "PersistentAuth.DisplayName", "Persistent Auth" },
		{ "PersistentAuth.Name", "EAutoLoginTypes::PersistentAuth" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemEIK_EAutoLoginTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
		nullptr,
		"EAutoLoginTypes",
		"EAutoLoginTypes",
		Z_Construct_UEnum_OnlineSubsystemEIK_EAutoLoginTypes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EAutoLoginTypes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemEIK_EAutoLoginTypes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EAutoLoginTypes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EAutoLoginTypes()
	{
		if (!Z_Registration_Info_UEnum_EAutoLoginTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAutoLoginTypes.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemEIK_EAutoLoginTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAutoLoginTypes.InnerSingleton;
	}
	void UEIKSettings::StaticRegisterNativesUEIKSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIKSettings);
	UClass* Z_Construct_UClass_UEIKSettings_NoRegister()
	{
		return UEIKSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEIKSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrganizationName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OrganizationName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProductName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProductName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCountryScope_MetaData[];
#endif
		static void NewProp_bUseCountryScope_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCountryScope;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowAdvancedLogs_MetaData[];
#endif
		static void NewProp_bShowAdvancedLogs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAdvancedLogs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClientId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientSecret_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClientSecret;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProductId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProductId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SandboxId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SandboxId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeploymentId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeploymentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheDir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CacheDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultArtifactName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultArtifactName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickBudgetInMilliseconds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TickBudgetInMilliseconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOverlay_MetaData[];
#endif
		static void NewProp_bEnableOverlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSocialOverlay_MetaData[];
#endif
		static void NewProp_bEnableSocialOverlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSocialOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableEditorOverlay_MetaData[];
#endif
		static void NewProp_bEnableEditorOverlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableEditorOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldEnforceBeingLaunchedByEGS_MetaData[];
#endif
		static void NewProp_bShouldEnforceBeingLaunchedByEGS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldEnforceBeingLaunchedByEGS;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TitleStorageTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TitleStorageTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TitleStorageTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TitleStorageReadChunkLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TitleStorageReadChunkLength;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Artifacts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Artifacts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Artifacts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseEAS_MetaData[];
#endif
		static void NewProp_bUseEAS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEAS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseEOSConnect_MetaData[];
#endif
		static void NewProp_bUseEOSConnect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEOSConnect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMirrorStatsToEOS_MetaData[];
#endif
		static void NewProp_bMirrorStatsToEOS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMirrorStatsToEOS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMirrorAchievementsToEOS_MetaData[];
#endif
		static void NewProp_bMirrorAchievementsToEOS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMirrorAchievementsToEOS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseEOSSessions_MetaData[];
#endif
		static void NewProp_bUseEOSSessions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEOSSessions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMirrorPresenceToEAS_MetaData[];
#endif
		static void NewProp_bMirrorPresenceToEAS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMirrorPresenceToEAS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEIKSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URuntimeOptionsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EIKSettings.h" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_OrganizationName_MetaData[] = {
		{ "Category", "EIK Specific Settings" },
		{ "Comment", "/** An organization is the highest level in the Epic Online Services (EOS) product management ecosystem. It encompasses all the products and the associated members, such as a publisher or game studio. */" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
		{ "ToolTip", "An organization is the highest level in the Epic Online Services (EOS) product management ecosystem. It encompasses all the products and the associated members, such as a publisher or game studio." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_OrganizationName = { "OrganizationName", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIKSettings, OrganizationName), METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_OrganizationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_OrganizationName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_ProductName_MetaData[] = {
		{ "Category", "EIK Specific Settings" },
		{ "Comment", "/** Products are games or other software projects that contain sandboxes and deployments within EOS. */" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
		{ "ToolTip", "Products are games or other software projects that contain sandboxes and deployments within EOS." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_ProductName = { "ProductName", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIKSettings, ProductName), METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_ProductName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_ProductName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseCountryScope_MetaData[] = {
		{ "Category", "EIK Specific Settings" },
		{ "Comment", "/** This will request the country code from the EOS SDK and login */" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
		{ "ToolTip", "This will request the country code from the EOS SDK and login" },
	};
#endif
	void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseCountryScope_SetBit(void* Obj)
	{
		((UEIKSettings*)Obj)->bUseCountryScope = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseCountryScope = { "bUseCountryScope", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseCountryScope_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseCountryScope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseCountryScope_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_bShowAdvancedLogs_MetaData[] = {
		{ "Category", "EIK Specific Settings" },
		{ "Comment", "/** This will show the advanced logs for the EOS SDK and EOS Integration Kit functions*/" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
		{ "ToolTip", "This will show the advanced logs for the EOS SDK and EOS Integration Kit functions" },
	};
#endif
	void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bShowAdvancedLogs_SetBit(void* Obj)
	{
		((UEIKSettings*)Obj)->bShowAdvancedLogs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bShowAdvancedLogs = { "bShowAdvancedLogs", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bShowAdvancedLogs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bShowAdvancedLogs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bShowAdvancedLogs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_ClientId_MetaData[] = {
		{ "Category", "EIK Android/IOS Settings" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_ClientId = { "ClientId", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIKSettings, ClientId), METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_ClientId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_ClientId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_ClientSecret_MetaData[] = {
		{ "Category", "EIK Android/IOS Settings" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_ClientSecret = { "ClientSecret", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIKSettings, ClientSecret), METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_ClientSecret_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_ClientSecret_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_ProductId_MetaData[] = {
		{ "Category", "EIK Android/IOS Settings" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_ProductId = { "ProductId", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIKSettings, ProductId), METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_ProductId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_ProductId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_SandboxId_MetaData[] = {
		{ "Category", "EIK Android/IOS Settings" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_SandboxId = { "SandboxId", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIKSettings, SandboxId), METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_SandboxId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_SandboxId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_DeploymentId_MetaData[] = {
		{ "Category", "EIK Android/IOS Settings" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_DeploymentId = { "DeploymentId", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIKSettings, DeploymentId), METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_DeploymentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_DeploymentId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_CacheDir_MetaData[] = {
		{ "Category", "EOS Settings" },
		{ "Comment", "/**\n\x09 * The directory any PDS/TDS files are cached into. This is per artifact e.g.:\n\x09 *\n\x09 * <UserDir>/<ArtifactId>/<CacheDir>\n\x09*/" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
		{ "ToolTip", "The directory any PDS/TDS files are cached into. This is per artifact e.g.:\n\n<UserDir>/<ArtifactId>/<CacheDir>" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_CacheDir = { "CacheDir", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIKSettings, CacheDir), METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_CacheDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_CacheDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_DefaultArtifactName_MetaData[] = {
		{ "Category", "EOS Settings" },
		{ "Comment", "/** Used when launched from a store other than EGS or when the specified artifact name was not present */" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
		{ "ToolTip", "Used when launched from a store other than EGS or when the specified artifact name was not present" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_DefaultArtifactName = { "DefaultArtifactName", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIKSettings, DefaultArtifactName), METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_DefaultArtifactName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_DefaultArtifactName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_TickBudgetInMilliseconds_MetaData[] = {
		{ "Category", "EOS Settings" },
		{ "Comment", "/** Used to throttle how much time EOS ticking can take */" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
		{ "ToolTip", "Used to throttle how much time EOS ticking can take" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_TickBudgetInMilliseconds = { "TickBudgetInMilliseconds", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIKSettings, TickBudgetInMilliseconds), METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_TickBudgetInMilliseconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_TickBudgetInMilliseconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableOverlay_MetaData[] = {
		{ "Category", "EOS Settings" },
		{ "Comment", "/** Set to true to enable the overlay (ecom features) */" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
		{ "ToolTip", "Set to true to enable the overlay (ecom features)" },
	};
#endif
	void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableOverlay_SetBit(void* Obj)
	{
		((UEIKSettings*)Obj)->bEnableOverlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableOverlay = { "bEnableOverlay", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableOverlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableOverlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableSocialOverlay_MetaData[] = {
		{ "Category", "EOS Settings" },
		{ "Comment", "/** Set to true to enable the social overlay (friends, invites, etc.) */" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
		{ "ToolTip", "Set to true to enable the social overlay (friends, invites, etc.)" },
	};
#endif
	void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableSocialOverlay_SetBit(void* Obj)
	{
		((UEIKSettings*)Obj)->bEnableSocialOverlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableSocialOverlay = { "bEnableSocialOverlay", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableSocialOverlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableSocialOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableSocialOverlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableEditorOverlay_MetaData[] = {
		{ "Category", "EOS Settings" },
		{ "Comment", "/** Set to true to enable the overlay when running in the editor */" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
		{ "ToolTip", "Set to true to enable the overlay when running in the editor" },
	};
#endif
	void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableEditorOverlay_SetBit(void* Obj)
	{
		((UEIKSettings*)Obj)->bEnableEditorOverlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableEditorOverlay = { "bEnableEditorOverlay", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableEditorOverlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableEditorOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableEditorOverlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_bShouldEnforceBeingLaunchedByEGS_MetaData[] = {
		{ "Category", "EOS Settings" },
		{ "Comment", "/** Set to true to enable the social overlay (friends, invites, etc.) */" },
		{ "DisplayName", "Require Being Launched by the Epic Games Store" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
		{ "ToolTip", "Set to true to enable the social overlay (friends, invites, etc.)" },
	};
#endif
	void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bShouldEnforceBeingLaunchedByEGS_SetBit(void* Obj)
	{
		((UEIKSettings*)Obj)->bShouldEnforceBeingLaunchedByEGS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bShouldEnforceBeingLaunchedByEGS = { "bShouldEnforceBeingLaunchedByEGS", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bShouldEnforceBeingLaunchedByEGS_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bShouldEnforceBeingLaunchedByEGS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bShouldEnforceBeingLaunchedByEGS_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_TitleStorageTags_Inner = { "TitleStorageTags", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_TitleStorageTags_MetaData[] = {
		{ "Category", "EOS Settings" },
		{ "Comment", "/** Tag combinations for paged queries in title file enumerations, separate tags within groups using `+` */" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
		{ "ToolTip", "Tag combinations for paged queries in title file enumerations, separate tags within groups using `+`" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_TitleStorageTags = { "TitleStorageTags", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIKSettings, TitleStorageTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_TitleStorageTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_TitleStorageTags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_TitleStorageReadChunkLength_MetaData[] = {
		{ "Category", "EOS Settings" },
		{ "Comment", "/** Chunk size used when reading a title file */" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
		{ "ToolTip", "Chunk size used when reading a title file" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_TitleStorageReadChunkLength = { "TitleStorageReadChunkLength", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIKSettings, TitleStorageReadChunkLength), METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_TitleStorageReadChunkLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_TitleStorageReadChunkLength_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_Artifacts_Inner = { "Artifacts", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEArtifactSettings, METADATA_PARAMS(nullptr, 0) }; // 42556880
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_Artifacts_MetaData[] = {
		{ "Category", "EOS Settings" },
		{ "Comment", "/** Per artifact SDK settings. A game might have a FooStaging, FooQA, and public Foo artifact */" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
		{ "ToolTip", "Per artifact SDK settings. A game might have a FooStaging, FooQA, and public Foo artifact" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_Artifacts = { "Artifacts", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIKSettings, Artifacts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_Artifacts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_Artifacts_MetaData)) }; // 42556880
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEAS_MetaData[] = {
		{ "Category", "EOSPlus Login Settings" },
		{ "Comment", "/** Set to true to have Epic Accounts used (friends list will be unified with the default platform) */" },
		{ "DisplayName", "Use Epic Account for EOS login (requires account linking)" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
		{ "ToolTip", "Set to true to have Epic Accounts used (friends list will be unified with the default platform)" },
	};
#endif
	void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEAS_SetBit(void* Obj)
	{
		((UEIKSettings*)Obj)->bUseEAS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEAS = { "bUseEAS", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEAS_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEAS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEAS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEOSConnect_MetaData[] = {
		{ "Category", "EOSPlus Login Settings" },
		{ "Comment", "/** Set to true to have EOS Connect APIs used to link accounts for crossplay */" },
		{ "DisplayName", "Use Crossplatform User IDs for EOS Login (doesn't use Epic Account)" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
		{ "ToolTip", "Set to true to have EOS Connect APIs used to link accounts for crossplay" },
	};
#endif
	void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEOSConnect_SetBit(void* Obj)
	{
		((UEIKSettings*)Obj)->bUseEOSConnect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEOSConnect = { "bUseEOSConnect", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEOSConnect_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEOSConnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEOSConnect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorStatsToEOS_MetaData[] = {
		{ "Category", "Crossplay Settings" },
		{ "Comment", "/** Set to true to write stats to EOS as well as the default platform */" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
		{ "ToolTip", "Set to true to write stats to EOS as well as the default platform" },
	};
#endif
	void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorStatsToEOS_SetBit(void* Obj)
	{
		((UEIKSettings*)Obj)->bMirrorStatsToEOS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorStatsToEOS = { "bMirrorStatsToEOS", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorStatsToEOS_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorStatsToEOS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorStatsToEOS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorAchievementsToEOS_MetaData[] = {
		{ "Category", "Crossplay Settings" },
		{ "Comment", "/** Set to true to write achievement data to EOS as well as the default platform */" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
		{ "ToolTip", "Set to true to write achievement data to EOS as well as the default platform" },
	};
#endif
	void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorAchievementsToEOS_SetBit(void* Obj)
	{
		((UEIKSettings*)Obj)->bMirrorAchievementsToEOS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorAchievementsToEOS = { "bMirrorAchievementsToEOS", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorAchievementsToEOS_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorAchievementsToEOS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorAchievementsToEOS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEOSSessions_MetaData[] = {
		{ "Category", "Crossplay Settings" },
		{ "Comment", "/** Set to true to use EOS for session registration with data mirrored to the default platform */" },
		{ "DisplayName", "Use Crossplay Sessions" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
		{ "ToolTip", "Set to true to use EOS for session registration with data mirrored to the default platform" },
	};
#endif
	void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEOSSessions_SetBit(void* Obj)
	{
		((UEIKSettings*)Obj)->bUseEOSSessions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEOSSessions = { "bUseEOSSessions", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEOSSessions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEOSSessions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEOSSessions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorPresenceToEAS_MetaData[] = {
		{ "Category", "Crossplay Settings" },
		{ "Comment", "/** Set to true to have Epic Accounts presence information updated when the default platform is updated */" },
		{ "ModuleRelativePath", "Public/EIKSettings.h" },
		{ "ToolTip", "Set to true to have Epic Accounts presence information updated when the default platform is updated" },
	};
#endif
	void Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorPresenceToEAS_SetBit(void* Obj)
	{
		((UEIKSettings*)Obj)->bMirrorPresenceToEAS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorPresenceToEAS = { "bMirrorPresenceToEAS", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEIKSettings), &Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorPresenceToEAS_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorPresenceToEAS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorPresenceToEAS_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIKSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_OrganizationName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_ProductName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseCountryScope,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bShowAdvancedLogs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_ClientId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_ClientSecret,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_ProductId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_SandboxId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_DeploymentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_CacheDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_DefaultArtifactName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_TickBudgetInMilliseconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableSocialOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bEnableEditorOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bShouldEnforceBeingLaunchedByEGS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_TitleStorageTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_TitleStorageTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_TitleStorageReadChunkLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_Artifacts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_Artifacts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEAS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEOSConnect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorStatsToEOS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorAchievementsToEOS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bUseEOSSessions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIKSettings_Statics::NewProp_bMirrorPresenceToEAS,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEIKSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIKSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIKSettings_Statics::ClassParams = {
		&UEIKSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEIKSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UEIKSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEIKSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEIKSettings()
	{
		if (!Z_Registration_Info_UClass_UEIKSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIKSettings.OuterSingleton, Z_Construct_UClass_UEIKSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEIKSettings.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIKSettings>()
	{
		return UEIKSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEIKSettings);
	UEIKSettings::~UEIKSettings() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIKSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIKSettings_h_Statics::EnumInfo[] = {
		{ EAutoLoginTypes_StaticEnum, TEXT("EAutoLoginTypes"), &Z_Registration_Info_UEnum_EAutoLoginTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1425007962U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIKSettings_h_Statics::ScriptStructInfo[] = {
		{ FEArtifactSettings::StaticStruct, Z_Construct_UScriptStruct_FEArtifactSettings_Statics::NewStructOps, TEXT("EArtifactSettings"), &Z_Registration_Info_UScriptStruct_EArtifactSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEArtifactSettings), 42556880U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIKSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_EIKArtifactSettings, UDEPRECATED_EIKArtifactSettings::StaticClass, TEXT("UDEPRECATED_EIKArtifactSettings"), &Z_Registration_Info_UClass_UDEPRECATED_EIKArtifactSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_EIKArtifactSettings), 1287322564U) },
		{ Z_Construct_UClass_UEIKSettings, UEIKSettings::StaticClass, TEXT("UEIKSettings"), &Z_Registration_Info_UClass_UEIKSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIKSettings), 3547021402U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIKSettings_h_447248838(TEXT("/Script/OnlineSubsystemEIK"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIKSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIKSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIKSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIKSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIKSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Public_EIKSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
