// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemEIK/AsyncFunctions/Login/EIK_Login_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIK_Login_AsyncFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Login_AsyncFunction();
	ONLINESUBSYSTEMEIK_API UClass* Z_Construct_UClass_UEIK_Login_AsyncFunction_NoRegister();
	ONLINESUBSYSTEMEIK_API UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_ELoginTypes();
	ONLINESUBSYSTEMEIK_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemEIK();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELoginTypes;
	static UEnum* ELoginTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELoginTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELoginTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemEIK_ELoginTypes, Z_Construct_UPackage__Script_OnlineSubsystemEIK(), TEXT("ELoginTypes"));
		}
		return Z_Registration_Info_UEnum_ELoginTypes.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<ELoginTypes>()
	{
		return ELoginTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_OnlineSubsystemEIK_ELoginTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OnlineSubsystemEIK_ELoginTypes_Statics::Enumerators[] = {
		{ "ELoginTypes::AccountPortal", (int64)ELoginTypes::AccountPortal },
		{ "ELoginTypes::PersistentAuth", (int64)ELoginTypes::PersistentAuth },
		{ "ELoginTypes::EpicLauncher", (int64)ELoginTypes::EpicLauncher },
		{ "ELoginTypes::DeviceID", (int64)ELoginTypes::DeviceID },
		{ "ELoginTypes::Google", (int64)ELoginTypes::Google },
		{ "ELoginTypes::Apple", (int64)ELoginTypes::Apple },
		{ "ELoginTypes::Discord", (int64)ELoginTypes::Discord },
		{ "ELoginTypes::Oculus", (int64)ELoginTypes::Oculus },
		{ "ELoginTypes::OpenID", (int64)ELoginTypes::OpenID },
		{ "ELoginTypes::Developer", (int64)ELoginTypes::Developer },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OnlineSubsystemEIK_ELoginTypes_Statics::Enum_MetaDataParams[] = {
		{ "AccountPortal.DisplayName", "Account Portal" },
		{ "AccountPortal.Name", "ELoginTypes::AccountPortal" },
		{ "Apple.DisplayName", "Apple" },
		{ "Apple.Name", "ELoginTypes::Apple" },
		{ "BlueprintType", "true" },
		{ "Developer.DisplayName", "Developer" },
		{ "Developer.Name", "ELoginTypes::Developer" },
		{ "DeviceID.DisplayName", "Device ID" },
		{ "DeviceID.Name", "ELoginTypes::DeviceID" },
		{ "Discord.DisplayName", "Discord" },
		{ "Discord.Name", "ELoginTypes::Discord" },
		{ "EpicLauncher.DisplayName", "Epic Launcher" },
		{ "EpicLauncher.Name", "ELoginTypes::EpicLauncher" },
		{ "Google.DisplayName", "Google" },
		{ "Google.Name", "ELoginTypes::Google" },
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_Login_AsyncFunction.h" },
		{ "Oculus.DisplayName", "Oculus" },
		{ "Oculus.Name", "ELoginTypes::Oculus" },
		{ "OpenID.DisplayName", "OpenID" },
		{ "OpenID.Name", "ELoginTypes::OpenID" },
		{ "PersistentAuth.DisplayName", "Persistent Auth" },
		{ "PersistentAuth.Name", "ELoginTypes::PersistentAuth" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OnlineSubsystemEIK_ELoginTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
		nullptr,
		"ELoginTypes",
		"ELoginTypes",
		Z_Construct_UEnum_OnlineSubsystemEIK_ELoginTypes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_ELoginTypes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OnlineSubsystemEIK_ELoginTypes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OnlineSubsystemEIK_ELoginTypes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OnlineSubsystemEIK_ELoginTypes()
	{
		if (!Z_Registration_Info_UEnum_ELoginTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELoginTypes.InnerSingleton, Z_Construct_UEnum_OnlineSubsystemEIK_ELoginTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELoginTypes.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemEIK_eventResponsDelegate_Parms
		{
			FString ProductUserID;
			FString Error;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventResponsDelegate_Parms, ProductUserID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OnlineSubsystemEIK_eventResponsDelegate_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::NewProp_ProductUserID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_Login_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK, nullptr, "ResponsDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemEIK_eventResponsDelegate_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UEIK_Login_AsyncFunction::execLoginUsingEIK)
	{
		P_GET_ENUM(ELoginTypes,Z_Param_LoginMethod);
		P_GET_PROPERTY(FStrProperty,Z_Param_Input1);
		P_GET_PROPERTY(FStrProperty,Z_Param_Input2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEIK_Login_AsyncFunction**)Z_Param__Result=UEIK_Login_AsyncFunction::LoginUsingEIK(ELoginTypes(Z_Param_LoginMethod),Z_Param_Input1,Z_Param_Input2);
		P_NATIVE_END;
	}
	void UEIK_Login_AsyncFunction::StaticRegisterNativesUEIK_Login_AsyncFunction()
	{
		UClass* Class = UEIK_Login_AsyncFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoginUsingEIK", &UEIK_Login_AsyncFunction::execLoginUsingEIK },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingEIK_Statics
	{
		struct EIK_Login_AsyncFunction_eventLoginUsingEIK_Parms
		{
			ELoginTypes LoginMethod;
			FString Input1;
			FString Input2;
			UEIK_Login_AsyncFunction* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_LoginMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LoginMethod;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Input1;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Input2;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingEIK_Statics::NewProp_LoginMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingEIK_Statics::NewProp_LoginMethod = { "LoginMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_Login_AsyncFunction_eventLoginUsingEIK_Parms, LoginMethod), Z_Construct_UEnum_OnlineSubsystemEIK_ELoginTypes, METADATA_PARAMS(nullptr, 0) }; // 1036190405
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingEIK_Statics::NewProp_Input1 = { "Input1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_Login_AsyncFunction_eventLoginUsingEIK_Parms, Input1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingEIK_Statics::NewProp_Input2 = { "Input2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_Login_AsyncFunction_eventLoginUsingEIK_Parms, Input2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingEIK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EIK_Login_AsyncFunction_eventLoginUsingEIK_Parms, ReturnValue), Z_Construct_UClass_UEIK_Login_AsyncFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingEIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingEIK_Statics::NewProp_LoginMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingEIK_Statics::NewProp_LoginMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingEIK_Statics::NewProp_Input1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingEIK_Statics::NewProp_Input2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingEIK_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingEIK_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/*\n\x09This C++ method logs in a user to an online subsystem using the selected method and sets up a callback function to handle the login response.\n\x09""Documentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/\n\x09""For Input Parameters, please refer to the documentation link above.\n\x09\n\x09""Following Methods are coming with upcoming build - Google, Apple, Discord, Oculus, OpenID\n\x09*/" },
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_Login_AsyncFunction.h" },
		{ "ToolTip", "This C++ method logs in a user to an online subsystem using the selected method and sets up a callback function to handle the login response.\nDocumentation link: https://betide-studio.gitbook.io/eos-integration-kit/authentication/\nFor Input Parameters, please refer to the documentation link above.\n\nFollowing Methods are coming with upcoming build - Google, Apple, Discord, Oculus, OpenID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingEIK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEIK_Login_AsyncFunction, nullptr, "LoginUsingEIK", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingEIK_Statics::EIK_Login_AsyncFunction_eventLoginUsingEIK_Parms), Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingEIK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingEIK_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingEIK_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingEIK_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingEIK()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingEIK_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEIK_Login_AsyncFunction);
	UClass* Z_Construct_UClass_UEIK_Login_AsyncFunction_NoRegister()
	{
		return UEIK_Login_AsyncFunction::StaticClass();
	}
	struct Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics
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
	UObject* (*const Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemEIK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEIK_Login_AsyncFunction_LoginUsingEIK, "LoginUsingEIK" }, // 168577948
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncFunctions/Login/EIK_Login_AsyncFunction.h" },
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_Login_AsyncFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_Login_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIK_Login_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::NewProp_OnSuccess_MetaData)) }; // 2167378963
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "AsyncFunctions/Login/EIK_Login_AsyncFunction.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEIK_Login_AsyncFunction, OnFail), Z_Construct_UDelegateFunction_OnlineSubsystemEIK_ResponsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::NewProp_OnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::NewProp_OnFail_MetaData)) }; // 2167378963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::NewProp_OnFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEIK_Login_AsyncFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::ClassParams = {
		&UEIK_Login_AsyncFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEIK_Login_AsyncFunction()
	{
		if (!Z_Registration_Info_UClass_UEIK_Login_AsyncFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEIK_Login_AsyncFunction.OuterSingleton, Z_Construct_UClass_UEIK_Login_AsyncFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEIK_Login_AsyncFunction.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<UEIK_Login_AsyncFunction>()
	{
		return UEIK_Login_AsyncFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEIK_Login_AsyncFunction);
	UEIK_Login_AsyncFunction::~UEIK_Login_AsyncFunction() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_Statics::EnumInfo[] = {
		{ ELoginTypes_StaticEnum, TEXT("ELoginTypes"), &Z_Registration_Info_UEnum_ELoginTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1036190405U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEIK_Login_AsyncFunction, UEIK_Login_AsyncFunction::StaticClass, TEXT("UEIK_Login_AsyncFunction"), &Z_Registration_Info_UClass_UEIK_Login_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEIK_Login_AsyncFunction), 195753086U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_2240719811(TEXT("/Script/OnlineSubsystemEIK"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Login_EIK_Login_AsyncFunction_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
