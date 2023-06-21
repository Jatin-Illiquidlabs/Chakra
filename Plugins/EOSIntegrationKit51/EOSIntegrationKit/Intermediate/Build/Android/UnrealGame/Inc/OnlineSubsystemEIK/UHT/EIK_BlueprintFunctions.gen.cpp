// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Extra/EIK_BlueprintFunctions.h"
#include "OnlineSubsystemEIK/Subsystem/EIK_Subsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_BlueprintFunctions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_BlueprintFunctions();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_BlueprintFunctions_NoRegister();
	ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus();
	ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIKUniqueNetId();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEIK_LoginStatus;
	static UEnum* EEIK_LoginStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEIK_LoginStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEIK_LoginStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus, Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EEIK_LoginStatus"));
		}
		return Z_Registration_Info_UEnum_EEIK_LoginStatus.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<EEIK_LoginStatus>()
	{
		return EEIK_LoginStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics::Enumerators[] = {
		{ "EEIK_LoginStatus::NotLoggedIn", (int64)EEIK_LoginStatus::NotLoggedIn },
		{ "EEIK_LoginStatus::UsingLocalProfile", (int64)EEIK_LoginStatus::UsingLocalProfile },
		{ "EEIK_LoginStatus::LoggedIn", (int64)EEIK_LoginStatus::LoggedIn },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LoggedIn.Comment", "/** Player has been validated by the platform specific authentication service */" },
		{ "LoggedIn.Name", "EEIK_LoginStatus::LoggedIn" },
		{ "LoggedIn.ToolTip", "Player has been validated by the platform specific authentication service" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "NotLoggedIn.Comment", "/** Player has not logged in or chosen a local profile */" },
		{ "NotLoggedIn.Name", "EEIK_LoginStatus::NotLoggedIn" },
		{ "NotLoggedIn.ToolTip", "Player has not logged in or chosen a local profile" },
		{ "UsingLocalProfile.Comment", "/** Player is using a local profile but is not logged in */" },
		{ "UsingLocalProfile.Name", "EEIK_LoginStatus::UsingLocalProfile" },
		{ "UsingLocalProfile.ToolTip", "Player is using a local profile but is not logged in" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
		nullptr,
		"EEIK_LoginStatus",
		"EEIK_LoginStatus",
		Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus()
	{
		if (!Z_Registration_Info_UEnum_EEIK_LoginStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEIK_LoginStatus.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEIK_LoginStatus.InnerSingleton;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGenerateSessionCode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CodeLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEIK_BlueprintFunctions::GenerateSessionCode(Z_Param_CodeLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetLoginStatus)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEIK_LoginStatus*)Z_Param__Result=UEIK_BlueprintFunctions::GetLoginStatus(Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetPlayerNickname)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEIK_BlueprintFunctions::GetPlayerNickname(Z_Param_LocalUserNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execEndSession)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::EndSession(Z_Param_SessionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execUnRegisterPlayer)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_GET_STRUCT(FEIKUniqueNetId,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::UnRegisterPlayer(Z_Param_SessionName,Z_Param_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execRegisterPlayer)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_GET_STRUCT(FEIKUniqueNetId,Z_Param_PlayerId);
		P_GET_UBOOL(Z_Param_bWasInvited);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::RegisterPlayer(Z_Param_SessionName,Z_Param_PlayerId,Z_Param_bWasInvited);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execStartSession)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::StartSession(Z_Param_SessionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execShowFriendsList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEIK_BlueprintFunctions::ShowFriendsList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetProductUserID)
	{
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEIK_BlueprintFunctions::GetProductUserID(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEIK_BlueprintFunctions::execGetEpicAccountId)
	{
		P_GET_OBJECT(UObject,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UEIK_BlueprintFunctions::GetEpicAccountId(Z_Param_Context);
		P_NATIVE_END;
	}
	void UEIK_BlueprintFunctions::StaticRegisterNativesUEIK_BlueprintFunctions()
	{
		UClass* Class = UEIK_BlueprintFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndSession", &UEIK_BlueprintFunctions::execEndSession },
			{ "GenerateSessionCode", &UEIK_BlueprintFunctions::execGenerateSessionCode },
			{ "GetEpicAccountId", &UEIK_BlueprintFunctions::execGetEpicAccountId },
			{ "GetLoginStatus", &UEIK_BlueprintFunctions::execGetLoginStatus },
			{ "GetPlayerNickname", &UEIK_BlueprintFunctions::execGetPlayerNickname },
			{ "GetProductUserID", &UEIK_BlueprintFunctions::execGetProductUserID },
			{ "RegisterPlayer", &UEIK_BlueprintFunctions::execRegisterPlayer },
			{ "ShowFriendsList", &UEIK_BlueprintFunctions::execShowFriendsList },
			{ "StartSession", &UEIK_BlueprintFunctions::execStartSession },
			{ "UnRegisterPlayer", &UEIK_BlueprintFunctions::execUnRegisterPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics
	{
		struct EIK_BlueprintFunctions_eventEndSession_Parms
		{
			FName SessionName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_BlueprintFunctions_eventEndSession_Parms, SessionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EIK_BlueprintFunctions_eventEndSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventEndSession_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "Comment", "// This is a C++ method definition for ending lobbies and sessions\n" },
		{ "DisplayName", "End EIK Session" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "ToolTip", "This is a C++ method definition for ending lobbies and sessions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "EndSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::EIK_BlueprintFunctions_eventEndSession_Parms), Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics
	{
		struct EIK_BlueprintFunctions_eventGenerateSessionCode_Parms
		{
			int32 CodeLength;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CodeLength;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::NewProp_CodeLength = { "CodeLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGenerateSessionCode_Parms, CodeLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGenerateSessionCode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::NewProp_CodeLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
		{ "Comment", "// This is a C++ method definition for purchasing an item from the store.\n" },
		{ "CPP_Default_CodeLength", "9" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "ToolTip", "This is a C++ method definition for purchasing an item from the store." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GenerateSessionCode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::EIK_BlueprintFunctions_eventGenerateSessionCode_Parms), Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics
	{
		struct EIK_BlueprintFunctions_eventGetEpicAccountId_Parms
		{
			UObject* Context;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetEpicAccountId_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetEpicAccountId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "WorldContext", "Context" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetEpicAccountId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::EIK_BlueprintFunctions_eventGetEpicAccountId_Parms), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics
	{
		struct EIK_BlueprintFunctions_eventGetLoginStatus_Parms
		{
			int32 LocalUserNum;
			EEIK_LoginStatus ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::NewProp_LocalUserNum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetLoginStatus_Parms, LocalUserNum), METADATA_PARAMS(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::NewProp_LocalUserNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::NewProp_LocalUserNum_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetLoginStatus_Parms, ReturnValue), Z_Construct_UEnum_OnlineSubsystemEIK_EEIK_LoginStatus, METADATA_PARAMS(nullptr, 0) }; // 1342135084
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
		{ "Comment", "// This is a C++ method definition for getting the login status of a player from an online subsystem.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/extra-functions/getloginstatus\n" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "ToolTip", "This is a C++ method definition for getting the login status of a player from an online subsystem.\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/extra-functions/getloginstatus" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetLoginStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::EIK_BlueprintFunctions_eventGetLoginStatus_Parms), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics
	{
		struct EIK_BlueprintFunctions_eventGetPlayerNickname_Parms
		{
			int32 LocalUserNum;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalUserNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::NewProp_LocalUserNum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetPlayerNickname_Parms, LocalUserNum), METADATA_PARAMS(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::NewProp_LocalUserNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::NewProp_LocalUserNum_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetPlayerNickname_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::NewProp_LocalUserNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
		{ "Comment", "// This is a C++ method definition for getting the nickname of a player from an online subsystem.\n// Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/extra-functions/getplayernickname\n" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "ToolTip", "This is a C++ method definition for getting the nickname of a player from an online subsystem.\nDocumentation link: https:betide-studio.gitbook.io/eos-integration-kit/extra-functions/getplayernickname" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetPlayerNickname", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::EIK_BlueprintFunctions_eventGetPlayerNickname_Parms), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics
	{
		struct EIK_BlueprintFunctions_eventGetProductUserID_Parms
		{
			UObject* Context;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetProductUserID_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_BlueprintFunctions_eventGetProductUserID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Extra" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "WorldContext", "Context" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "GetProductUserID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::EIK_BlueprintFunctions_eventGetProductUserID_Parms), Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics
	{
		struct EIK_BlueprintFunctions_eventRegisterPlayer_Parms
		{
			FName SessionName;
			FEIKUniqueNetId PlayerId;
			bool bWasInvited;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static void NewProp_bWasInvited_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasInvited;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_BlueprintFunctions_eventRegisterPlayer_Parms, SessionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_BlueprintFunctions_eventRegisterPlayer_Parms, PlayerId), Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(nullptr, 0) }; // 3498608630
	void Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_bWasInvited_SetBit(void* Obj)
	{
		((EIK_BlueprintFunctions_eventRegisterPlayer_Parms*)Obj)->bWasInvited = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_bWasInvited = { "bWasInvited", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventRegisterPlayer_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_bWasInvited_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EIK_BlueprintFunctions_eventRegisterPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventRegisterPlayer_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_bWasInvited,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "Comment", "// This is a C++ method definition for registering players in lobbies and sessions\n" },
		{ "CPP_Default_bWasInvited", "false" },
		{ "DisplayName", "Register EIK Player In Session" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "ToolTip", "This is a C++ method definition for registering players in lobbies and sessions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "RegisterPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::EIK_BlueprintFunctions_eventRegisterPlayer_Parms), Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics
	{
		struct EIK_BlueprintFunctions_eventShowFriendsList_Parms
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
	void Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EIK_BlueprintFunctions_eventShowFriendsList_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventShowFriendsList_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Friends" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "ShowFriendsList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::EIK_BlueprintFunctions_eventShowFriendsList_Parms), Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics
	{
		struct EIK_BlueprintFunctions_eventStartSession_Parms
		{
			FName SessionName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_BlueprintFunctions_eventStartSession_Parms, SessionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EIK_BlueprintFunctions_eventStartSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventStartSession_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "Comment", "// This is a C++ method definition for starting lobbies and sessions\n" },
		{ "DisplayName", "Start EIK Session" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "ToolTip", "This is a C++ method definition for starting lobbies and sessions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "StartSession", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::EIK_BlueprintFunctions_eventStartSession_Parms), Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics
	{
		struct EIK_BlueprintFunctions_eventUnRegisterPlayer_Parms
		{
			FName SessionName;
			FEIKUniqueNetId PlayerId;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_BlueprintFunctions_eventUnRegisterPlayer_Parms, SessionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_BlueprintFunctions_eventUnRegisterPlayer_Parms, PlayerId), Z_Construct_UScriptStruct_FEIKUniqueNetId, METADATA_PARAMS(nullptr, 0) }; // 3498608630
	void Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EIK_BlueprintFunctions_eventUnRegisterPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EIK_BlueprintFunctions_eventUnRegisterPlayer_Parms), &Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_SessionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_PlayerId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "EOS Integration Kit || Sessions" },
		{ "Comment", "// This is a C++ method definition for unregistering players from lobbies and sessions\n" },
		{ "DisplayName", "Unregister EIK Player In Session" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "ToolTip", "This is a C++ method definition for unregistering players from lobbies and sessions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_BlueprintFunctions, nullptr, "UnRegisterPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::EIK_BlueprintFunctions_eventUnRegisterPlayer_Parms), Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_BlueprintFunctions);
	UClass* Z_Construct_UClass_UEIK_BlueprintFunctions_NoRegister()
	{
		return UEIK_BlueprintFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UEIK_BlueprintFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_EndSession, "EndSession" }, // 1687406577
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GenerateSessionCode, "GenerateSessionCode" }, // 2323874719
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetEpicAccountId, "GetEpicAccountId" }, // 2325101277
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetLoginStatus, "GetLoginStatus" }, // 3332498895
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetPlayerNickname, "GetPlayerNickname" }, // 2186764534
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_GetProductUserID, "GetProductUserID" }, // 2903048501
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_RegisterPlayer, "RegisterPlayer" }, // 4189807006
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_ShowFriendsList, "ShowFriendsList" }, // 355978330
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_StartSession, "StartSession" }, // 2470189802
		{ &Z_Construct_UFunction_UEIK_BlueprintFunctions_UnRegisterPlayer, "UnRegisterPlayer" }, // 2712430627
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Extra/EIK_BlueprintFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_BlueprintFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::ClassParams = {
		&UEIK_BlueprintFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEIK_BlueprintFunctions()
	{
		if (!Z_Registration_Info_UClass_UEIK_BlueprintFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_BlueprintFunctions.OuterSingleton, Z_Construct_UClass_UEIK_BlueprintFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEIK_BlueprintFunctions.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_BlueprintFunctions>()
	{
		return UEIK_BlueprintFunctions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_BlueprintFunctions);
	UEIK_BlueprintFunctions::~UEIK_BlueprintFunctions() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_Statics::EnumInfo[] = {
		{ EEIK_LoginStatus_StaticEnum, TEXT("EEIK_LoginStatus"), &Z_Registration_Info_UEnum_EEIK_LoginStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1342135084U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_BlueprintFunctions, UEIK_BlueprintFunctions::StaticClass, TEXT("UEIK_BlueprintFunctions"), &Z_Registration_Info_UClass_UEIK_BlueprintFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_BlueprintFunctions), 2535754580U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_1999049401(TEXT("/Script/OnlineSubsystemEIK"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
