// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_CreateLobby_AsyncFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_NoRegister();
	ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventCreateLobby_Delegate_Parms
		{
			FName SessionName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventCreateLobby_Delegate_Parms, SessionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::NewProp_SessionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "CreateLobby_Delegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventCreateLobby_Delegate_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UEIK_CreateLobby_AsyncFunction::execCreateEIKLobby)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
		P_GET_UBOOL(Z_Param_bAllowInvites);
		P_GET_UBOOL(Z_Param_bIsLan);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfPublicConnections);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfPrivateConnections);
		P_GET_UBOOL(Z_Param_bShouldAdvertise);
		P_GET_UBOOL(Z_Param_bAllowJoinInProgress);
		P_GET_UBOOL(Z_Param_bUseVoiceChat);
		P_GET_UBOOL(Z_Param_bUsePresence);
		P_GET_ENUM(ERegionInfo,Z_Param_Region);
		P_GET_TMAP(FString,FString,Z_Param_SessionSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEIK_CreateLobby_AsyncFunction**)Z_Param__Result=UEIK_CreateLobby_AsyncFunction::CreateEIKLobby(Z_Param_SessionName,Z_Param_bAllowInvites,Z_Param_bIsLan,Z_Param_NumberOfPublicConnections,Z_Param_NumberOfPrivateConnections,Z_Param_bShouldAdvertise,Z_Param_bAllowJoinInProgress,Z_Param_bUseVoiceChat,Z_Param_bUsePresence,ERegionInfo(Z_Param_Region),Z_Param_SessionSettings);
		P_NATIVE_END;
	}
	void UEIK_CreateLobby_AsyncFunction::StaticRegisterNativesUEIK_CreateLobby_AsyncFunction()
	{
		UClass* Class = UEIK_CreateLobby_AsyncFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateEIKLobby", &UEIK_CreateLobby_AsyncFunction::execCreateEIKLobby },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics
	{
		struct EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms
		{
			FString SessionName;
			bool bAllowInvites;
			bool bIsLan;
			int32 NumberOfPublicConnections;
			int32 NumberOfPrivateConnections;
			bool bShouldAdvertise;
			bool bAllowJoinInProgress;
			bool bUseVoiceChat;
			bool bUsePresence;
			ERegionInfo Region;
			TMap<FString,FString> SessionSettings;
			UEIK_CreateLobby_AsyncFunction* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
		static void NewProp_bAllowInvites_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
		static void NewProp_bIsLan_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLan;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPublicConnections;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPrivateConnections;
		static void NewProp_bShouldAdvertise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAdvertise;
		static void NewProp_bAllowJoinInProgress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinInProgress;
		static void NewProp_bUseVoiceChat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseVoiceChat;
		static void NewProp_bUsePresence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePresence;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Region_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Region;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionSettings_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SessionSettings_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_SessionSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms, SessionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
	{
		((EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms*)Obj)->bAllowInvites = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms), &Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bIsLan_SetBit(void* Obj)
	{
		((EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms*)Obj)->bIsLan = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bIsLan = { "bIsLan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms), &Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bIsLan_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_NumberOfPublicConnections = { "NumberOfPublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms, NumberOfPublicConnections), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_NumberOfPrivateConnections = { "NumberOfPrivateConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms, NumberOfPrivateConnections), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bShouldAdvertise_SetBit(void* Obj)
	{
		((EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms*)Obj)->bShouldAdvertise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bShouldAdvertise = { "bShouldAdvertise", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms), &Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bShouldAdvertise_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bAllowJoinInProgress_SetBit(void* Obj)
	{
		((EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms*)Obj)->bAllowJoinInProgress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bAllowJoinInProgress = { "bAllowJoinInProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms), &Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bAllowJoinInProgress_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bUseVoiceChat_SetBit(void* Obj)
	{
		((EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms*)Obj)->bUseVoiceChat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bUseVoiceChat = { "bUseVoiceChat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms), &Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bUseVoiceChat_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bUsePresence_SetBit(void* Obj)
	{
		((EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms*)Obj)->bUsePresence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bUsePresence = { "bUsePresence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms), &Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bUsePresence_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_Region_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms, Region), Z_Construct_UEnum_OnlineSubsystemEIK_ERegionInfo, METADATA_PARAMS(nullptr, 0) }; // 4114204197
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_SessionSettings_ValueProp = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_SessionSettings_Key_KeyProp = { "SessionSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms, SessionSettings), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms, ReturnValue), Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bAllowInvites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bIsLan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_NumberOfPublicConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_NumberOfPrivateConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bShouldAdvertise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bAllowJoinInProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bUseVoiceChat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_bUsePresence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_Region_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_Region,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_SessionSettings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_SessionSettings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_SessionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "Comment", "/*\n\x09This C++ method creates a lobby in EOS using the selected method and sets up a callback function to handle the response.\n\x09""Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/sessions/\n\x09""For Input Parameters, please refer to the documentation link above.\n\x09*/" },
		{ "DisplayName", "Create EIK Lobby" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
		{ "ToolTip", "This C++ method creates a lobby in EOS using the selected method and sets up a callback function to handle the response.\nDocumentation link: https://betide-studio.gitbook.io/eos-integration-kit/sessions/\nFor Input Parameters, please refer to the documentation link above." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction, nullptr, "CreateEIKLobby", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::EIK_CreateLobby_AsyncFunction_eventCreateEIKLobby_Parms), Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_CreateLobby_AsyncFunction);
	UClass* Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_NoRegister()
	{
		return UEIK_CreateLobby_AsyncFunction::StaticClass();
	}
	struct Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_CreateLobby_AsyncFunction_CreateEIKLobby, "CreateEIKLobby" }, // 543663694
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "DisplayName", "Success" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIK_CreateLobby_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnSuccess_MetaData)) }; // 2564539848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnFail_MetaData[] = {
		{ "DisplayName", "Failure" },
		{ "ModuleRelativePath", "AsyncFunctions/Sessions/EIK_CreateLobby_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIK_CreateLobby_AsyncFunction, OnFail), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_CreateLobby_Delegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnFail_MetaData)) }; // 2564539848
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_CreateLobby_AsyncFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::ClassParams = {
		&UEIK_CreateLobby_AsyncFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction()
	{
		if (!Z_Registration_Info_UClass_UEIK_CreateLobby_AsyncFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_CreateLobby_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEIK_CreateLobby_AsyncFunction.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_CreateLobby_AsyncFunction>()
	{
		return UEIK_CreateLobby_AsyncFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_CreateLobby_AsyncFunction);
	UEIK_CreateLobby_AsyncFunction::~UEIK_CreateLobby_AsyncFunction() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_CreateLobby_AsyncFunction, UEIK_CreateLobby_AsyncFunction::StaticClass, TEXT("UEIK_CreateLobby_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_CreateLobby_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_CreateLobby_AsyncFunction), 1236214014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_3150666403(TEXT("/Script/OnlineSubsystemEIK"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Sessions_EIK_CreateLobby_AsyncFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
