// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Achievements/EIK_GetAchievementDetails_AsyncFunction.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Achievements/EIK_GetAchievement_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_GetAchievementDetails_AsyncFunction() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_NoRegister();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AchievementDetails_Delegate__DelegateSignature();
	ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_Achievement();
	ONLINESUBSYSTEMEIK_API UScriptStruct* Z_Construct_UScriptStruct_FEIK_AchievementDescription();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EIK_AchievementDescription;
class UScriptStruct* FEIK_AchievementDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EIK_AchievementDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EIK_AchievementDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEIK_AchievementDescription, Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("EIK_AchievementDescription"));
	}
	return Z_Registration_Info_UScriptStruct_EIK_AchievementDescription.OuterSingleton;
}
template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<FEIK_AchievementDescription>()
{
	return FEIK_AchievementDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Progress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockedDesc_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_LockedDesc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnlockedDesc_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_UnlockedDesc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHidden_MetaData[];
#endif
		static void NewProp_bIsHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHidden;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnlockTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnlockTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "AsyncFunctions/Achievements/EIK_GetAchievementDetails_AsyncFunction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEIK_AchievementDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "EIK Struct" },
		{ "Comment", "/** The id of the achievement */" },
		{ "ModuleRelativePath", "AsyncFunctions/Achievements/EIK_GetAchievementDetails_AsyncFunction.h" },
		{ "ToolTip", "The id of the achievement" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEIK_AchievementDescription, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_Progress_MetaData[] = {
		{ "Category", "EIK Struct" },
		{ "Comment", "/** The progress towards completing this achievement: 0.0-100.0 */" },
		{ "ModuleRelativePath", "AsyncFunctions/Achievements/EIK_GetAchievementDetails_AsyncFunction.h" },
		{ "ToolTip", "The progress towards completing this achievement: 0.0-100.0" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEIK_AchievementDescription, Progress), METADATA_PARAMS(Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_Progress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "EIK Struct" },
		{ "Comment", "/** The localized title of the achievement */" },
		{ "ModuleRelativePath", "AsyncFunctions/Achievements/EIK_GetAchievementDetails_AsyncFunction.h" },
		{ "ToolTip", "The localized title of the achievement" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEIK_AchievementDescription, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_LockedDesc_MetaData[] = {
		{ "Category", "EIK Struct" },
		{ "Comment", "/** The localized locked description of the achievement */" },
		{ "ModuleRelativePath", "AsyncFunctions/Achievements/EIK_GetAchievementDetails_AsyncFunction.h" },
		{ "ToolTip", "The localized locked description of the achievement" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_LockedDesc = { "LockedDesc", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEIK_AchievementDescription, LockedDesc), METADATA_PARAMS(Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_LockedDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_LockedDesc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_UnlockedDesc_MetaData[] = {
		{ "Category", "EIK Struct" },
		{ "Comment", "/** The localized unlocked description of the achievement */" },
		{ "ModuleRelativePath", "AsyncFunctions/Achievements/EIK_GetAchievementDetails_AsyncFunction.h" },
		{ "ToolTip", "The localized unlocked description of the achievement" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_UnlockedDesc = { "UnlockedDesc", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEIK_AchievementDescription, UnlockedDesc), METADATA_PARAMS(Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_UnlockedDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_UnlockedDesc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_bIsHidden_MetaData[] = {
		{ "Category", "EIK Struct" },
		{ "Comment", "/** Flag for whether the achievement is hidden */" },
		{ "ModuleRelativePath", "AsyncFunctions/Achievements/EIK_GetAchievementDetails_AsyncFunction.h" },
		{ "ToolTip", "Flag for whether the achievement is hidden" },
	};
#endif
	void Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_bIsHidden_SetBit(void* Obj)
	{
		((FEIK_AchievementDescription*)Obj)->bIsHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_bIsHidden = { "bIsHidden", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEIK_AchievementDescription), &Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_bIsHidden_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_bIsHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_bIsHidden_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_UnlockTime_MetaData[] = {
		{ "Category", "EIK Struct" },
		{ "Comment", "/** The date/time the achievement was unlocked */" },
		{ "ModuleRelativePath", "AsyncFunctions/Achievements/EIK_GetAchievementDetails_AsyncFunction.h" },
		{ "ToolTip", "The date/time the achievement was unlocked" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_UnlockTime = { "UnlockTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEIK_AchievementDescription, UnlockTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_UnlockTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_UnlockTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_Progress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_LockedDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_UnlockedDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_bIsHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewProp_UnlockTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
		nullptr,
		&NewStructOps,
		"EIK_AchievementDescription",
		sizeof(FEIK_AchievementDescription),
		alignof(FEIK_AchievementDescription),
		Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEIK_AchievementDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_EIK_AchievementDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EIK_AchievementDescription.InnerSingleton, Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EIK_AchievementDescription.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AchievementDetails_Delegate__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventAchievementDetails_Delegate_Parms
		{
			FEIK_AchievementDescription AchievementDescription;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AchievementDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AchievementDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AchievementDetails_Delegate__DelegateSignature_Statics::NewProp_AchievementDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AchievementDetails_Delegate__DelegateSignature_Statics::NewProp_AchievementDescription = { "AchievementDescription", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventAchievementDetails_Delegate_Parms, AchievementDescription), Z_Construct_UScriptStruct_FEIK_AchievementDescription, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AchievementDetails_Delegate__DelegateSignature_Statics::NewProp_AchievementDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AchievementDetails_Delegate__DelegateSignature_Statics::NewProp_AchievementDescription_MetaData)) }; // 1925670148
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AchievementDetails_Delegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AchievementDetails_Delegate__DelegateSignature_Statics::NewProp_AchievementDescription,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AchievementDetails_Delegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Achievements/EIK_GetAchievementDetails_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AchievementDetails_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "AchievementDetails_Delegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AchievementDetails_Delegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventAchievementDetails_Delegate_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AchievementDetails_Delegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AchievementDetails_Delegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AchievementDetails_Delegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AchievementDetails_Delegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AchievementDetails_Delegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AchievementDetails_Delegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UEIK_GetAchievementDetails_AsyncFunction::execGetEIKAchievementDescription)
	{
		P_GET_STRUCT(FEIK_Achievement,Z_Param_Achievement);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEIK_GetAchievementDetails_AsyncFunction**)Z_Param__Result=UEIK_GetAchievementDetails_AsyncFunction::GetEIKAchievementDescription(Z_Param_Achievement);
		P_NATIVE_END;
	}
	void UEIK_GetAchievementDetails_AsyncFunction::StaticRegisterNativesUEIK_GetAchievementDetails_AsyncFunction()
	{
		UClass* Class = UEIK_GetAchievementDetails_AsyncFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEIKAchievementDescription", &UEIK_GetAchievementDetails_AsyncFunction::execGetEIKAchievementDescription },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEIK_GetAchievementDetails_AsyncFunction_GetEIKAchievementDescription_Statics
	{
		struct EIK_GetAchievementDetails_AsyncFunction_eventGetEIKAchievementDescription_Parms
		{
			FEIK_Achievement Achievement;
			UEIK_GetAchievementDetails_AsyncFunction* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Achievement;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEIK_GetAchievementDetails_AsyncFunction_GetEIKAchievementDescription_Statics::NewProp_Achievement = { "Achievement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_GetAchievementDetails_AsyncFunction_eventGetEIKAchievementDescription_Parms, Achievement), Z_Construct_UScriptStruct_FEIK_Achievement, METADATA_PARAMS(nullptr, 0) }; // 508630622
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_GetAchievementDetails_AsyncFunction_GetEIKAchievementDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_GetAchievementDetails_AsyncFunction_eventGetEIKAchievementDescription_Parms, ReturnValue), Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_GetAchievementDetails_AsyncFunction_GetEIKAchievementDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetAchievementDetails_AsyncFunction_GetEIKAchievementDescription_Statics::NewProp_Achievement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_GetAchievementDetails_AsyncFunction_GetEIKAchievementDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_GetAchievementDetails_AsyncFunction_GetEIKAchievementDescription_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "EOS Integration Kit || Achievements" },
		{ "Comment", "/*\n\x09This C++ method gets the achievement's details from the EOS backend.\n\x09""Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/\n\x09*/" },
		{ "DisplayName", "Get EIK Achievement Description" },
		{ "ModuleRelativePath", "AsyncFunctions/Achievements/EIK_GetAchievementDetails_AsyncFunction.h" },
		{ "ToolTip", "This C++ method gets the achievement's details from the EOS backend.\nDocumentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_GetAchievementDetails_AsyncFunction_GetEIKAchievementDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction, nullptr, "GetEIKAchievementDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEIK_GetAchievementDetails_AsyncFunction_GetEIKAchievementDescription_Statics::EIK_GetAchievementDetails_AsyncFunction_eventGetEIKAchievementDescription_Parms), Z_Construct_UFunction_UEIK_GetAchievementDetails_AsyncFunction_GetEIKAchievementDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetAchievementDetails_AsyncFunction_GetEIKAchievementDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEIK_GetAchievementDetails_AsyncFunction_GetEIKAchievementDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_GetAchievementDetails_AsyncFunction_GetEIKAchievementDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEIK_GetAchievementDetails_AsyncFunction_GetEIKAchievementDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_GetAchievementDetails_AsyncFunction_GetEIKAchievementDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_GetAchievementDetails_AsyncFunction);
	UClass* Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_NoRegister()
	{
		return UEIK_GetAchievementDetails_AsyncFunction::StaticClass();
	}
	struct Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics
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
	UObject* (*const Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_GetAchievementDetails_AsyncFunction_GetEIKAchievementDescription, "GetEIKAchievementDescription" }, // 1883701242
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Achievements/EIK_GetAchievementDetails_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Achievements/EIK_GetAchievementDetails_AsyncFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "DisplayName", "Success" },
		{ "ModuleRelativePath", "AsyncFunctions/Achievements/EIK_GetAchievementDetails_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIK_GetAchievementDetails_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AchievementDetails_Delegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics::NewProp_OnSuccess_MetaData)) }; // 829734098
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics::NewProp_OnFail_MetaData[] = {
		{ "DisplayName", "Failure" },
		{ "ModuleRelativePath", "AsyncFunctions/Achievements/EIK_GetAchievementDetails_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIK_GetAchievementDetails_AsyncFunction, OnFail), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_AchievementDetails_Delegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics::NewProp_OnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics::NewProp_OnFail_MetaData)) }; // 829734098
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_GetAchievementDetails_AsyncFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics::ClassParams = {
		&UEIK_GetAchievementDetails_AsyncFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction()
	{
		if (!Z_Registration_Info_UClass_UEIK_GetAchievementDetails_AsyncFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_GetAchievementDetails_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEIK_GetAchievementDetails_AsyncFunction.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_GetAchievementDetails_AsyncFunction>()
	{
		return UEIK_GetAchievementDetails_AsyncFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_GetAchievementDetails_AsyncFunction);
	UEIK_GetAchievementDetails_AsyncFunction::~UEIK_GetAchievementDetails_AsyncFunction() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_Statics::ScriptStructInfo[] = {
		{ FEIK_AchievementDescription::StaticStruct, Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics::NewStructOps, TEXT("EIK_AchievementDescription"), &Z_Registration_Info_UScriptStruct_EIK_AchievementDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEIK_AchievementDescription), 1925670148U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction, UEIK_GetAchievementDetails_AsyncFunction::StaticClass, TEXT("UEIK_GetAchievementDetails_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_GetAchievementDetails_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_GetAchievementDetails_AsyncFunction), 1445065495U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_3385651057(TEXT("/Script/OnlineSubsystemEIK"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
