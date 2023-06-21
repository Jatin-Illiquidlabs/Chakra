// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EIKVoiceChat/Subsystem/EIK_Voice_Subsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Voice_Subsystem() {}
// Cross Module References
	EIKVOICECHAT_API UClass* Z_Construct_UClass_UEIK_Voice_Subsystem();
	EIKVOICECHAT_API UClass* Z_Construct_UClass_UEIK_Voice_Subsystem_NoRegister();
	EIKVOICECHAT_API UEnum* Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes();
	EIKVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature();
	EIKVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature();
	EIKVOICECHAT_API UScriptStruct* Z_Construct_UScriptStruct_FDeviceEVIKSettings();
	EIKVOICECHAT_API UScriptStruct* Z_Construct_UScriptStruct_FEVIKPlayerList();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_EIKVoiceChat();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEVIKResultCodes;
	static UEnum* EEVIKResultCodes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEVIKResultCodes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEVIKResultCodes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes, Z_Construct_UPackage__Script_EIKVoiceChat(), TEXT("EEVIKResultCodes"));
		}
		return Z_Registration_Info_UEnum_EEVIKResultCodes.OuterSingleton;
	}
	template<> EIKVOICECHAT_API UEnum* StaticEnum<EEVIKResultCodes>()
	{
		return EEVIKResultCodes_StaticEnum();
	}
	struct Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes_Statics::Enumerators[] = {
		{ "EEVIKResultCodes::Success", (int64)EEVIKResultCodes::Success },
		{ "EEVIKResultCodes::Failed", (int64)EEVIKResultCodes::Failed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Failed.Name", "EEVIKResultCodes::Failed" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
		{ "Success.Name", "EEVIKResultCodes::Success" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EIKVoiceChat,
		nullptr,
		"EEVIKResultCodes",
		"EEVIKResultCodes",
		Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes()
	{
		if (!Z_Registration_Info_UEnum_EEVIKResultCodes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEVIKResultCodes.InnerSingleton, Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEVIKResultCodes.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DeviceEVIKSettings;
class UScriptStruct* FDeviceEVIKSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DeviceEVIKSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DeviceEVIKSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeviceEVIKSettings, Z_Construct_UPackage__Script_EIKVoiceChat(), TEXT("DeviceEVIKSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DeviceEVIKSettings.OuterSingleton;
}
template<> EIKVOICECHAT_API UScriptStruct* StaticStruct<FDeviceEVIKSettings>()
{
	return FDeviceEVIKSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeviceEVIKSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "EVIK" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeviceEVIKSettings, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "EVIK" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeviceEVIKSettings, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::NewProp_DisplayName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::NewProp_DisplayName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EIKVoiceChat,
		nullptr,
		&NewStructOps,
		"DeviceEVIKSettings",
		sizeof(FDeviceEVIKSettings),
		alignof(FDeviceEVIKSettings),
		Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDeviceEVIKSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_DeviceEVIKSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DeviceEVIKSettings.InnerSingleton, Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DeviceEVIKSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EVIKPlayerList;
class UScriptStruct* FEVIKPlayerList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EVIKPlayerList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EVIKPlayerList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEVIKPlayerList, Z_Construct_UPackage__Script_EIKVoiceChat(), TEXT("EVIKPlayerList"));
	}
	return Z_Registration_Info_UScriptStruct_EVIKPlayerList.OuterSingleton;
}
template<> EIKVOICECHAT_API UScriptStruct* StaticStruct<FEVIKPlayerList>()
{
	return FEVIKPlayerList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEVIKPlayerList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerEOSVoiceChatName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerEOSVoiceChatName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEVIKPlayerList>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::NewProp_PlayerEOSVoiceChatName_MetaData[] = {
		{ "Category", "EVIK" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::NewProp_PlayerEOSVoiceChatName = { "PlayerEOSVoiceChatName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEVIKPlayerList, PlayerEOSVoiceChatName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::NewProp_PlayerEOSVoiceChatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::NewProp_PlayerEOSVoiceChatName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::NewProp_PlayerActor_MetaData[] = {
		{ "Category", "EVIK" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::NewProp_PlayerActor = { "PlayerActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEVIKPlayerList, PlayerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::NewProp_PlayerActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::NewProp_PlayerActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::NewProp_PlayerEOSVoiceChatName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::NewProp_PlayerActor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EIKVoiceChat,
		nullptr,
		&NewStructOps,
		"EVIKPlayerList",
		sizeof(FEVIKPlayerList),
		alignof(FEVIKPlayerList),
		Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEVIKPlayerList()
	{
		if (!Z_Registration_Info_UScriptStruct_EVIKPlayerList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EVIKPlayerList.InnerSingleton, Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EVIKPlayerList.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics
	{
		struct _Script_EIKVoiceChat_eventEIKResultDelegate_Parms
		{
			bool bWasSuccess;
			EEVIKResultCodes Result;
		};
		static void NewProp_bWasSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((_Script_EIKVoiceChat_eventEIKResultDelegate_Parms*)Obj)->bWasSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_EIKVoiceChat_eventEIKResultDelegate_Parms), &Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_EIKVoiceChat_eventEIKResultDelegate_Parms, Result), Z_Construct_UEnum_EIKVoiceChat_EEVIKResultCodes, METADATA_PARAMS(nullptr, 0) }; // 2426494713
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::NewProp_bWasSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EIKVoiceChat, nullptr, "EIKResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::_Script_EIKVoiceChat_eventEIKResultDelegate_Parms), Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics
	{
		struct _Script_EIKVoiceChat_eventEIKRoomTokenResultDelegate_Parms
		{
			bool bWasSuccess;
			FString RoomData;
		};
		static void NewProp_bWasSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccess;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoomData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit(void* Obj)
	{
		((_Script_EIKVoiceChat_eventEIKRoomTokenResultDelegate_Parms*)Obj)->bWasSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::NewProp_bWasSuccess = { "bWasSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_EIKVoiceChat_eventEIKRoomTokenResultDelegate_Parms), &Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::NewProp_bWasSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::NewProp_RoomData = { "RoomData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_EIKVoiceChat_eventEIKRoomTokenResultDelegate_Parms, RoomData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::NewProp_bWasSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::NewProp_RoomData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EIKVoiceChat, nullptr, "EIKRoomTokenResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::_Script_EIKVoiceChat_eventEIKRoomTokenResultDelegate_Parms), Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UEIK_Voice_Subsystem::execPlayerListUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerListUpdated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Voice_Subsystem::execForceUpdateOutputVolume)
	{
		P_GET_UBOOL(Z_Param_bUseThisVolume);
		P_GET_UBOOL(Z_Param_bUseWithPositionalChat);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceUpdateOutputVolume(Z_Param_bUseThisVolume,Z_Param_bUseWithPositionalChat,Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Voice_Subsystem::execUpdatePositionalVoiceChat)
	{
		P_GET_UBOOL(Z_Param_UsePositionalVoiceChat);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FMaxHearingDistance);
		P_GET_UBOOL(Z_Param_UseDebugCube);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePositionalVoiceChat(Z_Param_UsePositionalVoiceChat,Z_Param_FMaxHearingDistance,Z_Param_UseDebugCube);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Voice_Subsystem::execSetupPlayerList)
	{
		P_GET_TARRAY(FEVIKPlayerList,Z_Param_PlayerList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupPlayerList_Implementation(Z_Param_PlayerList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Voice_Subsystem::execEVIK_Local_Connect)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_ResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EVIK_Local_Connect(FEIKResultDelegate(Z_Param_Out_ResultDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_Voice_Subsystem::execEVIK_Local_Initialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EVIK_Local_Initialize();
		P_NATIVE_END;
	}
	struct EIK_Voice_Subsystem_eventSetupPlayerList_Parms
	{
		TArray<FEVIKPlayerList> PlayerList;
	};
	static FName NAME_UEIK_Voice_Subsystem_SetupPlayerList = FName(TEXT("SetupPlayerList"));
	void UEIK_Voice_Subsystem::SetupPlayerList(TArray<FEVIKPlayerList> const& PlayerList)
	{
		EIK_Voice_Subsystem_eventSetupPlayerList_Parms Parms;
		Parms.PlayerList=PlayerList;
		ProcessEvent(FindFunctionChecked(NAME_UEIK_Voice_Subsystem_SetupPlayerList),&Parms);
	}
	void UEIK_Voice_Subsystem::StaticRegisterNativesUEIK_Voice_Subsystem()
	{
		UClass* Class = UEIK_Voice_Subsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EVIK_Local_Connect", &UEIK_Voice_Subsystem::execEVIK_Local_Connect },
			{ "EVIK_Local_Initialize", &UEIK_Voice_Subsystem::execEVIK_Local_Initialize },
			{ "ForceUpdateOutputVolume", &UEIK_Voice_Subsystem::execForceUpdateOutputVolume },
			{ "PlayerListUpdated", &UEIK_Voice_Subsystem::execPlayerListUpdated },
			{ "SetupPlayerList", &UEIK_Voice_Subsystem::execSetupPlayerList },
			{ "UpdatePositionalVoiceChat", &UEIK_Voice_Subsystem::execUpdatePositionalVoiceChat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics
	{
		struct EIK_Voice_Subsystem_eventEVIK_Local_Connect_Parms
		{
			FScriptDelegate ResultDelegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_ResultDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::NewProp_ResultDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::NewProp_ResultDelegate = { "ResultDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_Voice_Subsystem_eventEVIK_Local_Connect_Parms, ResultDelegate), Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::NewProp_ResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::NewProp_ResultDelegate_MetaData)) }; // 4148523524
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::NewProp_ResultDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Voice_Subsystem, nullptr, "EVIK_Local_Connect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::EIK_Voice_Subsystem_eventEVIK_Local_Connect_Parms), Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics
	{
		struct EIK_Voice_Subsystem_eventEVIK_Local_Initialize_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EIK_Voice_Subsystem_eventEVIK_Local_Initialize_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EIK_Voice_Subsystem_eventEVIK_Local_Initialize_Parms), &Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Voice_Subsystem, nullptr, "EVIK_Local_Initialize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::EIK_Voice_Subsystem_eventEVIK_Local_Initialize_Parms), Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics
	{
		struct EIK_Voice_Subsystem_eventForceUpdateOutputVolume_Parms
		{
			bool bUseThisVolume;
			bool bUseWithPositionalChat;
			float Volume;
		};
		static void NewProp_bUseThisVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseThisVolume;
		static void NewProp_bUseWithPositionalChat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWithPositionalChat;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::NewProp_bUseThisVolume_SetBit(void* Obj)
	{
		((EIK_Voice_Subsystem_eventForceUpdateOutputVolume_Parms*)Obj)->bUseThisVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::NewProp_bUseThisVolume = { "bUseThisVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EIK_Voice_Subsystem_eventForceUpdateOutputVolume_Parms), &Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::NewProp_bUseThisVolume_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::NewProp_bUseWithPositionalChat_SetBit(void* Obj)
	{
		((EIK_Voice_Subsystem_eventForceUpdateOutputVolume_Parms*)Obj)->bUseWithPositionalChat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::NewProp_bUseWithPositionalChat = { "bUseWithPositionalChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EIK_Voice_Subsystem_eventForceUpdateOutputVolume_Parms), &Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::NewProp_bUseWithPositionalChat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_Voice_Subsystem_eventForceUpdateOutputVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::NewProp_bUseThisVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::NewProp_bUseWithPositionalChat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Voice_Subsystem, nullptr, "ForceUpdateOutputVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::EIK_Voice_Subsystem_eventForceUpdateOutputVolume_Parms), Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Voice_Subsystem_PlayerListUpdated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Voice_Subsystem_PlayerListUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Voice_Subsystem_PlayerListUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Voice_Subsystem, nullptr, "PlayerListUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEIK_Voice_Subsystem_PlayerListUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_PlayerListUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEIK_Voice_Subsystem_PlayerListUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Voice_Subsystem_PlayerListUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::NewProp_PlayerList_Inner = { "PlayerList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEVIKPlayerList, METADATA_PARAMS(nullptr, 0) }; // 1492806817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::NewProp_PlayerList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::NewProp_PlayerList = { "PlayerList", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_Voice_Subsystem_eventSetupPlayerList_Parms, PlayerList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::NewProp_PlayerList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::NewProp_PlayerList_MetaData)) }; // 1492806817
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::NewProp_PlayerList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::NewProp_PlayerList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Voice_Subsystem, nullptr, "SetupPlayerList", nullptr, nullptr, sizeof(EIK_Voice_Subsystem_eventSetupPlayerList_Parms), Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics
	{
		struct EIK_Voice_Subsystem_eventUpdatePositionalVoiceChat_Parms
		{
			bool UsePositionalVoiceChat;
			float FMaxHearingDistance;
			bool UseDebugCube;
		};
		static void NewProp_UsePositionalVoiceChat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UsePositionalVoiceChat;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FMaxHearingDistance;
		static void NewProp_UseDebugCube_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseDebugCube;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::NewProp_UsePositionalVoiceChat_SetBit(void* Obj)
	{
		((EIK_Voice_Subsystem_eventUpdatePositionalVoiceChat_Parms*)Obj)->UsePositionalVoiceChat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::NewProp_UsePositionalVoiceChat = { "UsePositionalVoiceChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EIK_Voice_Subsystem_eventUpdatePositionalVoiceChat_Parms), &Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::NewProp_UsePositionalVoiceChat_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::NewProp_FMaxHearingDistance = { "FMaxHearingDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_Voice_Subsystem_eventUpdatePositionalVoiceChat_Parms, FMaxHearingDistance), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::NewProp_UseDebugCube_SetBit(void* Obj)
	{
		((EIK_Voice_Subsystem_eventUpdatePositionalVoiceChat_Parms*)Obj)->UseDebugCube = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::NewProp_UseDebugCube = { "UseDebugCube", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EIK_Voice_Subsystem_eventUpdatePositionalVoiceChat_Parms), &Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::NewProp_UseDebugCube_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::NewProp_UsePositionalVoiceChat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::NewProp_FMaxHearingDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::NewProp_UseDebugCube,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Voice_Subsystem, nullptr, "UpdatePositionalVoiceChat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::EIK_Voice_Subsystem_eventUpdatePositionalVoiceChat_Parms), Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Voice_Subsystem);
	UClass* Z_Construct_UClass_UEIK_Voice_Subsystem_NoRegister()
	{
		return UEIK_Voice_Subsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEIK_Voice_Subsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerListVar_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerListVar_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerListVar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EIKVoiceChat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Connect, "EVIK_Local_Connect" }, // 941034051
		{ &Z_Construct_UFunction_UEIK_Voice_Subsystem_EVIK_Local_Initialize, "EVIK_Local_Initialize" }, // 2362807062
		{ &Z_Construct_UFunction_UEIK_Voice_Subsystem_ForceUpdateOutputVolume, "ForceUpdateOutputVolume" }, // 309088780
		{ &Z_Construct_UFunction_UEIK_Voice_Subsystem_PlayerListUpdated, "PlayerListUpdated" }, // 1705459024
		{ &Z_Construct_UFunction_UEIK_Voice_Subsystem_SetupPlayerList, "SetupPlayerList" }, // 2169638326
		{ &Z_Construct_UFunction_UEIK_Voice_Subsystem_UpdatePositionalVoiceChat, "UpdatePositionalVoiceChat" }, // 2323566169
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Subsystem/EIK_Voice_Subsystem.h" },
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::NewProp_PlayerListVar_Inner = { "PlayerListVar", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEVIKPlayerList, METADATA_PARAMS(nullptr, 0) }; // 1492806817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::NewProp_PlayerListVar_MetaData[] = {
		{ "ModuleRelativePath", "Subsystem/EIK_Voice_Subsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::NewProp_PlayerListVar = { "PlayerListVar", "PlayerListUpdated", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIK_Voice_Subsystem, PlayerListVar), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::NewProp_PlayerListVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::NewProp_PlayerListVar_MetaData)) }; // 1492806817
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::NewProp_PlayerListVar_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::NewProp_PlayerListVar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Voice_Subsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::ClassParams = {
		&UEIK_Voice_Subsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEIK_Voice_Subsystem()
	{
		if (!Z_Registration_Info_UClass_UEIK_Voice_Subsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Voice_Subsystem.OuterSingleton, Z_Construct_UClass_UEIK_Voice_Subsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEIK_Voice_Subsystem.OuterSingleton;
	}
	template<> EIKVOICECHAT_API UClass* StaticClass<UEIK_Voice_Subsystem>()
	{
		return UEIK_Voice_Subsystem::StaticClass();
	}

	void UEIK_Voice_Subsystem::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PlayerListVar(TEXT("PlayerListVar"));

		const bool bIsValid = true
			&& Name_PlayerListVar == ClassReps[(int32)ENetFields_Private::PlayerListVar].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UEIK_Voice_Subsystem"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Voice_Subsystem);
	UEIK_Voice_Subsystem::~UEIK_Voice_Subsystem() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_Statics::EnumInfo[] = {
		{ EEVIKResultCodes_StaticEnum, TEXT("EEVIKResultCodes"), &Z_Registration_Info_UEnum_EEVIKResultCodes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2426494713U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_Statics::ScriptStructInfo[] = {
		{ FDeviceEVIKSettings::StaticStruct, Z_Construct_UScriptStruct_FDeviceEVIKSettings_Statics::NewStructOps, TEXT("DeviceEVIKSettings"), &Z_Registration_Info_UScriptStruct_DeviceEVIKSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeviceEVIKSettings), 4215087998U) },
		{ FEVIKPlayerList::StaticStruct, Z_Construct_UScriptStruct_FEVIKPlayerList_Statics::NewStructOps, TEXT("EVIKPlayerList"), &Z_Registration_Info_UScriptStruct_EVIKPlayerList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEVIKPlayerList), 1492806817U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Voice_Subsystem, UEIK_Voice_Subsystem::StaticClass, TEXT("UEIK_Voice_Subsystem"), &Z_Registration_Info_UClass_UEIK_Voice_Subsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Voice_Subsystem), 1258175373U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_3612060131(TEXT("/Script/EIKVoiceChat"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Subsystem_EIK_Voice_Subsystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
