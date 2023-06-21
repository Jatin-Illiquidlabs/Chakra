// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EIKVoiceChat/Functions/EVIK_Functions.h"
#include "EIKVoiceChat/Subsystem/EIK_Voice_Subsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEVIK_Functions() {}
// Cross Module References
	EIKVOICECHAT_API UClass* Z_Construct_UClass_UEVIK_Functions();
	EIKVOICECHAT_API UClass* Z_Construct_UClass_UEVIK_Functions_NoRegister();
	EIKVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature();
	EIKVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature();
	EIKVOICECHAT_API UScriptStruct* Z_Construct_UScriptStruct_FDeviceEVIKSettings();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EIKVoiceChat();
// End Cross Module References
	DEFINE_FUNCTION(UEVIK_Functions::execSetInputMethods)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FStrProperty,Z_Param_MethodID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEVIK_Functions::SetInputMethods(Z_Param_PlayerController,Z_Param_MethodID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execSetOutputMethods)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FStrProperty,Z_Param_MethodID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEVIK_Functions::SetOutputMethods(Z_Param_PlayerController,Z_Param_MethodID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execGetOutputMethods)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDeviceEVIKSettings>*)Z_Param__Result=UEVIK_Functions::GetOutputMethods(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execGetInputMethods)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDeviceEVIKSettings>*)Z_Param__Result=UEVIK_Functions::GetInputMethods(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execTransmitToNoRoom)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEVIK_Functions::TransmitToNoRoom(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execTransmitToSelectedRoom)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FStrProperty,Z_Param_RoomName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEVIK_Functions::TransmitToSelectedRoom(Z_Param_PlayerController,Z_Param_RoomName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execTransmitToAllRooms)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEVIK_Functions::TransmitToAllRooms(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execSetPlayerMuted)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
		P_GET_UBOOL(Z_Param_MutePlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEVIK_Functions::SetPlayerMuted(Z_Param_PlayerController,Z_Param_PlayerName,Z_Param_MutePlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execIsPlayerMuted)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEVIK_Functions::IsPlayerMuted(Z_Param_PlayerController,Z_Param_PlayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execSetPlayerVolume)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewVolume);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEVIK_Functions::SetPlayerVolume(Z_Param_PlayerController,Z_Param_PlayerName,Z_Param_NewVolume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execGetPlayerVolume)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UEVIK_Functions::GetPlayerVolume(Z_Param_PlayerController,Z_Param_PlayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execGetAllRooms)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UEVIK_Functions::GetAllRooms(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execGetPlayersInRoom)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FStrProperty,Z_Param_VoiceRoomName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UEVIK_Functions::GetPlayersInRoom(Z_Param_PlayerController,Z_Param_VoiceRoomName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execLeaveEOSRoom)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FStrProperty,Z_Param_VoiceRoomName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEVIK_Functions::LeaveEOSRoom(Z_Param_PlayerController,Z_Param_VoiceRoomName,FEIKResultDelegate(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execJoinEOSRoom)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FStrProperty,Z_Param_VoiceRoomName);
		P_GET_PROPERTY(FStrProperty,Z_Param_RoomData);
		P_GET_UBOOL(Z_Param_bEnableEcho);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEVIK_Functions::JoinEOSRoom(Z_Param_PlayerController,Z_Param_VoiceRoomName,Z_Param_RoomData,Z_Param_bEnableEcho,FEIKResultDelegate(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execEOSRoomToken)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FStrProperty,Z_Param_VoiceRoomName);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
		P_GET_PROPERTY(FStrProperty,Z_Param_ClientIP);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEVIK_Functions::EOSRoomToken(Z_Param_PlayerController,Z_Param_VoiceRoomName,Z_Param_PlayerName,Z_Param_ClientIP,FEIKRoomTokenResultDelegate(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execLoggedInUser)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEVIK_Functions::LoggedInUser(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execLogoutEOSVoiceChat)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEVIK_Functions::LogoutEOSVoiceChat(Z_Param_PlayerController,Z_Param_PlayerName,FEIKResultDelegate(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execLoginEOSVoiceChat)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEVIK_Functions::LoginEOSVoiceChat(Z_Param_PlayerController,Z_Param_PlayerName,FEIKResultDelegate(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execConnectVoiceChat)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEVIK_Functions::ConnectVoiceChat(Z_Param_PlayerController,FEIKResultDelegate(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEVIK_Functions::execInitializeEOSVoiceChat)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEVIK_Functions::InitializeEOSVoiceChat(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	void UEVIK_Functions::StaticRegisterNativesUEVIK_Functions()
	{
		UClass* Class = UEVIK_Functions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectVoiceChat", &UEVIK_Functions::execConnectVoiceChat },
			{ "EOSRoomToken", &UEVIK_Functions::execEOSRoomToken },
			{ "GetAllRooms", &UEVIK_Functions::execGetAllRooms },
			{ "GetInputMethods", &UEVIK_Functions::execGetInputMethods },
			{ "GetOutputMethods", &UEVIK_Functions::execGetOutputMethods },
			{ "GetPlayersInRoom", &UEVIK_Functions::execGetPlayersInRoom },
			{ "GetPlayerVolume", &UEVIK_Functions::execGetPlayerVolume },
			{ "InitializeEOSVoiceChat", &UEVIK_Functions::execInitializeEOSVoiceChat },
			{ "IsPlayerMuted", &UEVIK_Functions::execIsPlayerMuted },
			{ "JoinEOSRoom", &UEVIK_Functions::execJoinEOSRoom },
			{ "LeaveEOSRoom", &UEVIK_Functions::execLeaveEOSRoom },
			{ "LoggedInUser", &UEVIK_Functions::execLoggedInUser },
			{ "LoginEOSVoiceChat", &UEVIK_Functions::execLoginEOSVoiceChat },
			{ "LogoutEOSVoiceChat", &UEVIK_Functions::execLogoutEOSVoiceChat },
			{ "SetInputMethods", &UEVIK_Functions::execSetInputMethods },
			{ "SetOutputMethods", &UEVIK_Functions::execSetOutputMethods },
			{ "SetPlayerMuted", &UEVIK_Functions::execSetPlayerMuted },
			{ "SetPlayerVolume", &UEVIK_Functions::execSetPlayerVolume },
			{ "TransmitToAllRooms", &UEVIK_Functions::execTransmitToAllRooms },
			{ "TransmitToNoRoom", &UEVIK_Functions::execTransmitToNoRoom },
			{ "TransmitToSelectedRoom", &UEVIK_Functions::execTransmitToSelectedRoom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics
	{
		struct EVIK_Functions_eventConnectVoiceChat_Parms
		{
			APlayerController* PlayerController;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventConnectVoiceChat_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventConnectVoiceChat_Parms, Result), Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::NewProp_Result_MetaData)) }; // 4148523524
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Result" },
		{ "Category", "EVIK" },
		{ "Comment", "// Connects the player to the EOS Voice Chat system.\n" },
		{ "DisplayName", "Connect to EOS Voice Chat" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
		{ "ToolTip", "Connects the player to the EOS Voice Chat system." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "ConnectVoiceChat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::EVIK_Functions_eventConnectVoiceChat_Parms), Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics
	{
		struct EVIK_Functions_eventEOSRoomToken_Parms
		{
			APlayerController* PlayerController;
			FString VoiceRoomName;
			FString PlayerName;
			FString ClientIP;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VoiceRoomName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ClientIP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventEOSRoomToken_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_VoiceRoomName = { "VoiceRoomName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventEOSRoomToken_Parms, VoiceRoomName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventEOSRoomToken_Parms, PlayerName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_ClientIP = { "ClientIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventEOSRoomToken_Parms, ClientIP), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventEOSRoomToken_Parms, Result), Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_Result_MetaData)) }; // 2067843450
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_VoiceRoomName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_ClientIP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Result" },
		{ "Category", "EVIK" },
		{ "Comment", "// Requests a room token for the specified voice room.\n" },
		{ "DisplayName", "Get EOS Voice Room Token" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
		{ "ToolTip", "Requests a room token for the specified voice room." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "EOSRoomToken", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::EVIK_Functions_eventEOSRoomToken_Parms), Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics
	{
		struct EVIK_Functions_eventGetAllRooms_Parms
		{
			APlayerController* PlayerController;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventGetAllRooms_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventGetAllRooms_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
		{ "Comment", "// Gets a list of all joined voice rooms.\n" },
		{ "DisplayName", "Get Joined EOS Voice Rooms" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
		{ "ToolTip", "Gets a list of all joined voice rooms." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "GetAllRooms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::EVIK_Functions_eventGetAllRooms_Parms), Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEVIK_Functions_GetAllRooms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_GetAllRooms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics
	{
		struct EVIK_Functions_eventGetInputMethods_Parms
		{
			const APlayerController* PlayerController;
			TArray<FDeviceEVIKSettings> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventGetInputMethods_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::NewProp_PlayerController_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDeviceEVIKSettings, METADATA_PARAMS(nullptr, 0) }; // 4215087998
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventGetInputMethods_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4215087998
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
		{ "Comment", "// Retrieves all available input methods for EOS Voice Chat.\n" },
		{ "DisplayName", "Get All EOS Voice Input Methods" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
		{ "ToolTip", "Retrieves all available input methods for EOS Voice Chat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "GetInputMethods", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::EVIK_Functions_eventGetInputMethods_Parms), Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEVIK_Functions_GetInputMethods()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_GetInputMethods_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics
	{
		struct EVIK_Functions_eventGetOutputMethods_Parms
		{
			const APlayerController* PlayerController;
			TArray<FDeviceEVIKSettings> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventGetOutputMethods_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::NewProp_PlayerController_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDeviceEVIKSettings, METADATA_PARAMS(nullptr, 0) }; // 4215087998
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventGetOutputMethods_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4215087998
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
		{ "Comment", "// Retrieves all available output methods for EOS Voice Chat.\n" },
		{ "DisplayName", "Get All EOS Voice Output Methods" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
		{ "ToolTip", "Retrieves all available output methods for EOS Voice Chat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "GetOutputMethods", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::EVIK_Functions_eventGetOutputMethods_Parms), Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics
	{
		struct EVIK_Functions_eventGetPlayersInRoom_Parms
		{
			APlayerController* PlayerController;
			FString VoiceRoomName;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VoiceRoomName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventGetPlayersInRoom_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::NewProp_VoiceRoomName = { "VoiceRoomName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventGetPlayersInRoom_Parms, VoiceRoomName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventGetPlayersInRoom_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::NewProp_VoiceRoomName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
		{ "Comment", "// Gets a list of players in the specified voice room.\n" },
		{ "DisplayName", "Get Players in EOS Voice Room" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
		{ "ToolTip", "Gets a list of players in the specified voice room." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "GetPlayersInRoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::EVIK_Functions_eventGetPlayersInRoom_Parms), Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics
	{
		struct EVIK_Functions_eventGetPlayerVolume_Parms
		{
			const APlayerController* PlayerController;
			FString PlayerName;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventGetPlayerVolume_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_PlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventGetPlayerVolume_Parms, PlayerName), METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_PlayerName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventGetPlayerVolume_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
		{ "Comment", "// Gets the volume for the specified player.\n" },
		{ "DisplayName", "Get EOS Voice Player Volume" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
		{ "ToolTip", "Gets the volume for the specified player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "GetPlayerVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::EVIK_Functions_eventGetPlayerVolume_Parms), Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics
	{
		struct EVIK_Functions_eventInitializeEOSVoiceChat_Parms
		{
			APlayerController* PlayerController;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventInitializeEOSVoiceChat_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EVIK_Functions_eventInitializeEOSVoiceChat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EVIK_Functions_eventInitializeEOSVoiceChat_Parms), &Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
		{ "Comment", "// Initializes the EOS Voice Chat system.\n" },
		{ "DisplayName", "Intialize EOS Voice Chat" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
		{ "ToolTip", "Initializes the EOS Voice Chat system." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "InitializeEOSVoiceChat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::EVIK_Functions_eventInitializeEOSVoiceChat_Parms), Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics
	{
		struct EVIK_Functions_eventIsPlayerMuted_Parms
		{
			const APlayerController* PlayerController;
			FString PlayerName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventIsPlayerMuted_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_PlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventIsPlayerMuted_Parms, PlayerName), METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_PlayerName_MetaData)) };
	void Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EVIK_Functions_eventIsPlayerMuted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EVIK_Functions_eventIsPlayerMuted_Parms), &Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
		{ "Comment", "// Checks if the specified player is muted in EOS Voice Chat.\n" },
		{ "DisplayName", "Is EOS Voice Player Muted" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
		{ "ToolTip", "Checks if the specified player is muted in EOS Voice Chat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "IsPlayerMuted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::EVIK_Functions_eventIsPlayerMuted_Parms), Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics
	{
		struct EVIK_Functions_eventJoinEOSRoom_Parms
		{
			APlayerController* PlayerController;
			FString VoiceRoomName;
			FString RoomData;
			bool bEnableEcho;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VoiceRoomName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoomData;
		static void NewProp_bEnableEcho_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableEcho;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventJoinEOSRoom_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_VoiceRoomName = { "VoiceRoomName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventJoinEOSRoom_Parms, VoiceRoomName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_RoomData = { "RoomData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventJoinEOSRoom_Parms, RoomData), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_bEnableEcho_SetBit(void* Obj)
	{
		((EVIK_Functions_eventJoinEOSRoom_Parms*)Obj)->bEnableEcho = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_bEnableEcho = { "bEnableEcho", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EVIK_Functions_eventJoinEOSRoom_Parms), &Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_bEnableEcho_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventJoinEOSRoom_Parms, Result), Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_Result_MetaData)) }; // 4148523524
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_VoiceRoomName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_RoomData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_bEnableEcho,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Result" },
		{ "Category", "EVIK" },
		{ "Comment", "// Joins the specified voice room.\n" },
		{ "DisplayName", "Join EOS Voice Room" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
		{ "ToolTip", "Joins the specified voice room." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "JoinEOSRoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::EVIK_Functions_eventJoinEOSRoom_Parms), Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics
	{
		struct EVIK_Functions_eventLeaveEOSRoom_Parms
		{
			APlayerController* PlayerController;
			FString VoiceRoomName;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VoiceRoomName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventLeaveEOSRoom_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::NewProp_VoiceRoomName = { "VoiceRoomName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventLeaveEOSRoom_Parms, VoiceRoomName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventLeaveEOSRoom_Parms, Result), Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::NewProp_Result_MetaData)) }; // 4148523524
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::NewProp_VoiceRoomName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Result" },
		{ "Category", "EVIK" },
		{ "Comment", "// Leaves the specified voice room.\n" },
		{ "DisplayName", "Leave EOS Voice Room" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
		{ "ToolTip", "Leaves the specified voice room." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "LeaveEOSRoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::EVIK_Functions_eventLeaveEOSRoom_Parms), Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics
	{
		struct EVIK_Functions_eventLoggedInUser_Parms
		{
			APlayerController* PlayerController;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventLoggedInUser_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventLoggedInUser_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
		{ "Comment", "// Gets the logged-in user's name for the EOS Voice Chat system.\n" },
		{ "DisplayName", "Get Logged in EOS Voice Chat User" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
		{ "ToolTip", "Gets the logged-in user's name for the EOS Voice Chat system." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "LoggedInUser", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::EVIK_Functions_eventLoggedInUser_Parms), Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEVIK_Functions_LoggedInUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_LoggedInUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics
	{
		struct EVIK_Functions_eventLoginEOSVoiceChat_Parms
		{
			APlayerController* PlayerController;
			FString PlayerName;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventLoginEOSVoiceChat_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventLoginEOSVoiceChat_Parms, PlayerName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventLoginEOSVoiceChat_Parms, Result), Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::NewProp_Result_MetaData)) }; // 4148523524
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Result" },
		{ "Category", "EVIK" },
		{ "Comment", "// Logs the player into the EOS Voice Chat system.\n" },
		{ "DisplayName", "Login to EOS Voice Chat" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
		{ "ToolTip", "Logs the player into the EOS Voice Chat system." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "LoginEOSVoiceChat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::EVIK_Functions_eventLoginEOSVoiceChat_Parms), Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics
	{
		struct EVIK_Functions_eventLogoutEOSVoiceChat_Parms
		{
			APlayerController* PlayerController;
			FString PlayerName;
			FScriptDelegate Result;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventLogoutEOSVoiceChat_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventLogoutEOSVoiceChat_Parms, PlayerName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventLogoutEOSVoiceChat_Parms, Result), Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::NewProp_Result_MetaData)) }; // 4148523524
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Result" },
		{ "Category", "EVIK" },
		{ "Comment", "// Logs the player out of the EOS Voice Chat system.\n" },
		{ "DisplayName", "Logout from EOS Voice Chat" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
		{ "ToolTip", "Logs the player out of the EOS Voice Chat system." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "LogoutEOSVoiceChat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::EVIK_Functions_eventLogoutEOSVoiceChat_Parms), Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics
	{
		struct EVIK_Functions_eventSetInputMethods_Parms
		{
			const APlayerController* PlayerController;
			FString MethodID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MethodID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventSetInputMethods_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::NewProp_PlayerController_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::NewProp_MethodID = { "MethodID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventSetInputMethods_Parms, MethodID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EVIK_Functions_eventSetInputMethods_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EVIK_Functions_eventSetInputMethods_Parms), &Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::NewProp_MethodID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
		{ "Comment", "// Sets the EOS Voice Chat input method based on the provided method ID.\n" },
		{ "DisplayName", "Set EOS Voice Output Method" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
		{ "ToolTip", "Sets the EOS Voice Chat input method based on the provided method ID." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "SetInputMethods", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::EVIK_Functions_eventSetInputMethods_Parms), Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEVIK_Functions_SetInputMethods()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_SetInputMethods_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics
	{
		struct EVIK_Functions_eventSetOutputMethods_Parms
		{
			const APlayerController* PlayerController;
			FString MethodID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MethodID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventSetOutputMethods_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::NewProp_PlayerController_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::NewProp_MethodID = { "MethodID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventSetOutputMethods_Parms, MethodID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EVIK_Functions_eventSetOutputMethods_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EVIK_Functions_eventSetOutputMethods_Parms), &Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::NewProp_MethodID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
		{ "Comment", "// Sets the EOS Voice Chat output method based on the provided method ID.\n" },
		{ "DisplayName", "Set EOS Voice Output Method" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
		{ "ToolTip", "Sets the EOS Voice Chat output method based on the provided method ID." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "SetOutputMethods", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::EVIK_Functions_eventSetOutputMethods_Parms), Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics
	{
		struct EVIK_Functions_eventSetPlayerMuted_Parms
		{
			const APlayerController* PlayerController;
			FString PlayerName;
			bool MutePlayer;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static void NewProp_MutePlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MutePlayer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventSetPlayerMuted_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_PlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventSetPlayerMuted_Parms, PlayerName), METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_PlayerName_MetaData)) };
	void Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_MutePlayer_SetBit(void* Obj)
	{
		((EVIK_Functions_eventSetPlayerMuted_Parms*)Obj)->MutePlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_MutePlayer = { "MutePlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EVIK_Functions_eventSetPlayerMuted_Parms), &Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_MutePlayer_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EVIK_Functions_eventSetPlayerMuted_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EVIK_Functions_eventSetPlayerMuted_Parms), &Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_MutePlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
		{ "Comment", "// Sets the specified player's mute status in EOS Voice Chat.\n" },
		{ "DisplayName", "Set EOS Voice Player Muted" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
		{ "ToolTip", "Sets the specified player's mute status in EOS Voice Chat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "SetPlayerMuted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::EVIK_Functions_eventSetPlayerMuted_Parms), Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics
	{
		struct EVIK_Functions_eventSetPlayerVolume_Parms
		{
			const APlayerController* PlayerController;
			FString PlayerName;
			float NewVolume;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVolume;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventSetPlayerVolume_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_PlayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventSetPlayerVolume_Parms, PlayerName), METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_PlayerName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_NewVolume = { "NewVolume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventSetPlayerVolume_Parms, NewVolume), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EVIK_Functions_eventSetPlayerVolume_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EVIK_Functions_eventSetPlayerVolume_Parms), &Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_NewVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
		{ "Comment", "// Sets the volume for the specified player.\n" },
		{ "DisplayName", "Set EOS Voice Player Volume" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
		{ "ToolTip", "Sets the volume for the specified player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "SetPlayerVolume", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::EVIK_Functions_eventSetPlayerVolume_Parms), Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics
	{
		struct EVIK_Functions_eventTransmitToAllRooms_Parms
		{
			const APlayerController* PlayerController;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventTransmitToAllRooms_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::NewProp_PlayerController_MetaData)) };
	void Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EVIK_Functions_eventTransmitToAllRooms_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EVIK_Functions_eventTransmitToAllRooms_Parms), &Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
		{ "Comment", "// Transmits the player's voice to all joined EOS Voice Rooms.\n" },
		{ "DisplayName", "Transmit Voice To All EOS Voice Rooms" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
		{ "ToolTip", "Transmits the player's voice to all joined EOS Voice Rooms." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "TransmitToAllRooms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::EVIK_Functions_eventTransmitToAllRooms_Parms), Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics
	{
		struct EVIK_Functions_eventTransmitToNoRoom_Parms
		{
			const APlayerController* PlayerController;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventTransmitToNoRoom_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::NewProp_PlayerController_MetaData)) };
	void Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EVIK_Functions_eventTransmitToNoRoom_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EVIK_Functions_eventTransmitToNoRoom_Parms), &Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
		{ "Comment", "// Stops transmitting the player's voice to any EOS Voice Room.\n" },
		{ "DisplayName", "Transmit Voice To No EOS Voice Room" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
		{ "ToolTip", "Stops transmitting the player's voice to any EOS Voice Room." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "TransmitToNoRoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::EVIK_Functions_eventTransmitToNoRoom_Parms), Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics
	{
		struct EVIK_Functions_eventTransmitToSelectedRoom_Parms
		{
			const APlayerController* PlayerController;
			FString RoomName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoomName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::NewProp_PlayerController_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventTransmitToSelectedRoom_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::NewProp_PlayerController_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::NewProp_RoomName = { "RoomName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EVIK_Functions_eventTransmitToSelectedRoom_Parms, RoomName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EVIK_Functions_eventTransmitToSelectedRoom_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EVIK_Functions_eventTransmitToSelectedRoom_Parms), &Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::NewProp_RoomName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "EVIK" },
		{ "Comment", "// Transmits the player's voice to a selected EOS Voice Room.\n" },
		{ "DisplayName", "Transmit Voice To Selected EOS Voice Room" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
		{ "ToolTip", "Transmits the player's voice to a selected EOS Voice Room." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEVIK_Functions, nullptr, "TransmitToSelectedRoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::EVIK_Functions_eventTransmitToSelectedRoom_Parms), Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEVIK_Functions);
	UClass* Z_Construct_UClass_UEVIK_Functions_NoRegister()
	{
		return UEVIK_Functions::StaticClass();
	}
	struct Z_Construct_UClass_UEVIK_Functions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEVIK_Functions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EIKVoiceChat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEVIK_Functions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEVIK_Functions_ConnectVoiceChat, "ConnectVoiceChat" }, // 3276805849
		{ &Z_Construct_UFunction_UEVIK_Functions_EOSRoomToken, "EOSRoomToken" }, // 1624725745
		{ &Z_Construct_UFunction_UEVIK_Functions_GetAllRooms, "GetAllRooms" }, // 3343507404
		{ &Z_Construct_UFunction_UEVIK_Functions_GetInputMethods, "GetInputMethods" }, // 2780863716
		{ &Z_Construct_UFunction_UEVIK_Functions_GetOutputMethods, "GetOutputMethods" }, // 990764319
		{ &Z_Construct_UFunction_UEVIK_Functions_GetPlayersInRoom, "GetPlayersInRoom" }, // 276593526
		{ &Z_Construct_UFunction_UEVIK_Functions_GetPlayerVolume, "GetPlayerVolume" }, // 2229429862
		{ &Z_Construct_UFunction_UEVIK_Functions_InitializeEOSVoiceChat, "InitializeEOSVoiceChat" }, // 4089169178
		{ &Z_Construct_UFunction_UEVIK_Functions_IsPlayerMuted, "IsPlayerMuted" }, // 174163232
		{ &Z_Construct_UFunction_UEVIK_Functions_JoinEOSRoom, "JoinEOSRoom" }, // 1054143504
		{ &Z_Construct_UFunction_UEVIK_Functions_LeaveEOSRoom, "LeaveEOSRoom" }, // 123933404
		{ &Z_Construct_UFunction_UEVIK_Functions_LoggedInUser, "LoggedInUser" }, // 2410984625
		{ &Z_Construct_UFunction_UEVIK_Functions_LoginEOSVoiceChat, "LoginEOSVoiceChat" }, // 2288500328
		{ &Z_Construct_UFunction_UEVIK_Functions_LogoutEOSVoiceChat, "LogoutEOSVoiceChat" }, // 3543279841
		{ &Z_Construct_UFunction_UEVIK_Functions_SetInputMethods, "SetInputMethods" }, // 2565966261
		{ &Z_Construct_UFunction_UEVIK_Functions_SetOutputMethods, "SetOutputMethods" }, // 1036138970
		{ &Z_Construct_UFunction_UEVIK_Functions_SetPlayerMuted, "SetPlayerMuted" }, // 797363761
		{ &Z_Construct_UFunction_UEVIK_Functions_SetPlayerVolume, "SetPlayerVolume" }, // 2338824844
		{ &Z_Construct_UFunction_UEVIK_Functions_TransmitToAllRooms, "TransmitToAllRooms" }, // 3560159969
		{ &Z_Construct_UFunction_UEVIK_Functions_TransmitToNoRoom, "TransmitToNoRoom" }, // 894620954
		{ &Z_Construct_UFunction_UEVIK_Functions_TransmitToSelectedRoom, "TransmitToSelectedRoom" }, // 770146932
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEVIK_Functions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/EVIK_Functions.h" },
		{ "ModuleRelativePath", "Functions/EVIK_Functions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEVIK_Functions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEVIK_Functions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEVIK_Functions_Statics::ClassParams = {
		&UEVIK_Functions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEVIK_Functions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEVIK_Functions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEVIK_Functions()
	{
		if (!Z_Registration_Info_UClass_UEVIK_Functions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEVIK_Functions.OuterSingleton, Z_Construct_UClass_UEVIK_Functions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEVIK_Functions.OuterSingleton;
	}
	template<> EIKVOICECHAT_API UClass* StaticClass<UEVIK_Functions>()
	{
		return UEVIK_Functions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEVIK_Functions);
	UEVIK_Functions::~UEVIK_Functions() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEVIK_Functions, UEVIK_Functions::StaticClass, TEXT("UEVIK_Functions"), &Z_Registration_Info_UClass_UEVIK_Functions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEVIK_Functions), 1310574869U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_2323096992(TEXT("/Script/EIKVoiceChat"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_EIKVoiceChat_Functions_EVIK_Functions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
