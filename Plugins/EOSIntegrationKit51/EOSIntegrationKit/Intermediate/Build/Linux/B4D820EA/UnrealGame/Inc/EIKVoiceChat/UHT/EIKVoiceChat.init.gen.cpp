// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEIKVoiceChat_init() {}
	EIKVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature();
	EIKVOICECHAT_API UFunction* Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_EIKVoiceChat;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_EIKVoiceChat()
	{
		if (!Z_Registration_Info_UPackage__Script_EIKVoiceChat.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_EIKVoiceChat_EIKResultDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_EIKVoiceChat_EIKRoomTokenResultDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/EIKVoiceChat",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x63943D02,
				0x5DDC1178,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_EIKVoiceChat.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_EIKVoiceChat.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_EIKVoiceChat(Z_Construct_UPackage__Script_EIKVoiceChat, TEXT("/Script/EIKVoiceChat"), Z_Registration_Info_UPackage__Script_EIKVoiceChat, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x63943D02, 0x5DDC1178));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
