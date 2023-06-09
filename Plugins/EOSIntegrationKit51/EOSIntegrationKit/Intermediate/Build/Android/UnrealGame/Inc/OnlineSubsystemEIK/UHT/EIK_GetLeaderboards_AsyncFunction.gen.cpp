// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Stats/EIK_GetLeaderboards_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_GetLeaderboards_AsyncFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_NoRegister();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetLeaderboardResult__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIKLeaderboardValue();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIKLeaderboardValue;
class UScriptStruct* FEIKLeaderboardValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIKLeaderboardValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIKLeaderboardValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIKLeaderboardValue, Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIKLeaderboardValue"));
	}
	return Z_Registration_Info_UScriptStruct_EIKLeaderboardValue.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIKLeaderboardValue>()
{
	return FEIKLeaderboardValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NickName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NickName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Rank;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AsyncFunctions/Stats/EIK_GetLeaderboards_AsyncFunction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIKLeaderboardValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::NewProp_NickName_MetaData[] = {
		{ "Category", "EIKLeaderboardValue" },
		{ "Comment", "/** Name of player in this row */" },
		{ "ModuleRelativePath", "AsyncFunctions/Stats/EIK_GetLeaderboards_AsyncFunction.h" },
		{ "ToolTip", "Name of player in this row" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::NewProp_NickName = { "NickName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEIKLeaderboardValue, NickName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::NewProp_NickName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::NewProp_NickName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::NewProp_Rank_MetaData[] = {
		{ "Category", "EIKLeaderboardValue" },
		{ "Comment", "/** Player's rank in this leaderboard */" },
		{ "ModuleRelativePath", "AsyncFunctions/Stats/EIK_GetLeaderboards_AsyncFunction.h" },
		{ "ToolTip", "Player's rank in this leaderboard" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEIKLeaderboardValue, Rank), METADATA_PARAMS(Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::NewProp_Rank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::NewProp_Rank_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "EIKLeaderboardValue" },
		{ "ModuleRelativePath", "AsyncFunctions/Stats/EIK_GetLeaderboards_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEIKLeaderboardValue, Score), METADATA_PARAMS(Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::NewProp_Score_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::NewProp_NickName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::NewProp_Rank,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::NewProp_Score,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
		nullptr,
		&NewStructOps,
		"EIKLeaderboardValue",
		sizeof(FEIKLeaderboardValue),
		alignof(FEIKLeaderboardValue),
		Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEIKLeaderboardValue()
	{
		if (!Z_Registration_Info_UScriptStruct_EIKLeaderboardValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIKLeaderboardValue.InnerSingleton, Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EIKLeaderboardValue.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetLeaderboardResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventGetLeaderboardResult_Parms
		{
			TArray<FEIKLeaderboardValue> LeaderboardValues;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeaderboardValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LeaderboardValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetLeaderboardResult__DelegateSignature_Statics::NewProp_LeaderboardValues_Inner = { "LeaderboardValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEIKLeaderboardValue, METADATA_PARAMS(nullptr, 0) }; // 2241549625
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetLeaderboardResult__DelegateSignature_Statics::NewProp_LeaderboardValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetLeaderboardResult__DelegateSignature_Statics::NewProp_LeaderboardValues = { "LeaderboardValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventGetLeaderboardResult_Parms, LeaderboardValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetLeaderboardResult__DelegateSignature_Statics::NewProp_LeaderboardValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetLeaderboardResult__DelegateSignature_Statics::NewProp_LeaderboardValues_MetaData)) }; // 2241549625
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetLeaderboardResult__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetLeaderboardResult__DelegateSignature_Statics::NewProp_LeaderboardValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetLeaderboardResult__DelegateSignature_Statics::NewProp_LeaderboardValues,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetLeaderboardResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Stats/EIK_GetLeaderboards_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetLeaderboardResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "GetLeaderboardResult__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetLeaderboardResult__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventGetLeaderboardResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetLeaderboardResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetLeaderboardResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetLeaderboardResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetLeaderboardResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetLeaderboardResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetLeaderboardResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UEIK_GetLeaderboards_AsyncFunction::execGetLeaderboard)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_LeaderboardName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Range);
		P_GET_PROPERTY(FIntProperty,Z_Param_AroundRank);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEIK_GetLeaderboards_AsyncFunction**)Z_Param__Result=UEIK_GetLeaderboards_AsyncFunction::GetLeaderboard(Z_Param_LeaderboardName,Z_Param_Range,Z_Param_AroundRank);
		P_NATIVE_END;
	}
	void UEIK_GetLeaderboards_AsyncFunction::StaticRegisterNativesUEIK_GetLeaderboards_AsyncFunction()
	{
		UClass* Class = UEIK_GetLeaderboards_AsyncFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLeaderboard", &UEIK_GetLeaderboards_AsyncFunction::execGetLeaderboard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics
	{
		struct EIK_GetLeaderboards_AsyncFunction_eventGetLeaderboard_Parms
		{
			FName LeaderboardName;
			int32 Range;
			int32 AroundRank;
			UEIK_GetLeaderboards_AsyncFunction* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LeaderboardName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AroundRank_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AroundRank;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::NewProp_LeaderboardName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_GetLeaderboards_AsyncFunction_eventGetLeaderboard_Parms, LeaderboardName), METADATA_PARAMS(Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::NewProp_LeaderboardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::NewProp_LeaderboardName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::NewProp_Range_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_GetLeaderboards_AsyncFunction_eventGetLeaderboard_Parms, Range), METADATA_PARAMS(Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::NewProp_AroundRank_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::NewProp_AroundRank = { "AroundRank", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_GetLeaderboards_AsyncFunction_eventGetLeaderboard_Parms, AroundRank), METADATA_PARAMS(Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::NewProp_AroundRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::NewProp_AroundRank_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_GetLeaderboards_AsyncFunction_eventGetLeaderboard_Parms, ReturnValue), Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::NewProp_LeaderboardName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::NewProp_Range,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::NewProp_AroundRank,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "DisplayName", "Get EIK Leaderboard" },
		{ "ModuleRelativePath", "AsyncFunctions/Stats/EIK_GetLeaderboards_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction, nullptr, "GetLeaderboard", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::EIK_GetLeaderboards_AsyncFunction_eventGetLeaderboard_Parms), Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_GetLeaderboards_AsyncFunction);
	UClass* Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_NoRegister()
	{
		return UEIK_GetLeaderboards_AsyncFunction::StaticClass();
	}
	struct Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics
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
	UObject* (*const Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_GetLeaderboards_AsyncFunction_GetLeaderboard, "GetLeaderboard" }, // 775714459
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Stats/EIK_GetLeaderboards_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Stats/EIK_GetLeaderboards_AsyncFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Stats/EIK_GetLeaderboards_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIK_GetLeaderboards_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetLeaderboardResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics::NewProp_OnSuccess_MetaData)) }; // 3197577637
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Stats/EIK_GetLeaderboards_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIK_GetLeaderboards_AsyncFunction, OnFail), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_GetLeaderboardResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics::NewProp_OnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics::NewProp_OnFail_MetaData)) }; // 3197577637
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_GetLeaderboards_AsyncFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics::ClassParams = {
		&UEIK_GetLeaderboards_AsyncFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction()
	{
		if (!Z_Registration_Info_UClass_UEIK_GetLeaderboards_AsyncFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_GetLeaderboards_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEIK_GetLeaderboards_AsyncFunction.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_GetLeaderboards_AsyncFunction>()
	{
		return UEIK_GetLeaderboards_AsyncFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_GetLeaderboards_AsyncFunction);
	UEIK_GetLeaderboards_AsyncFunction::~UEIK_GetLeaderboards_AsyncFunction() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_Statics::ScriptStructInfo[] = {
		{ FEIKLeaderboardValue::StaticStruct, Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics::NewStructOps, TEXT("EIKLeaderboardValue"), &Z_Registration_Info_UScriptStruct_EIKLeaderboardValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIKLeaderboardValue), 2241549625U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction, UEIK_GetLeaderboards_AsyncFunction::StaticClass, TEXT("UEIK_GetLeaderboards_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_GetLeaderboards_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_GetLeaderboards_AsyncFunction), 2804777596U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_1765401965(TEXT("/Script/OnlineSubsystemEIK"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
