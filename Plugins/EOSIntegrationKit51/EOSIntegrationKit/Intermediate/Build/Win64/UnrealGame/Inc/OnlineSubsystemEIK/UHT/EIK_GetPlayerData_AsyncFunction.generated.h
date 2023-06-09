// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncFunctions/PlayerStorage/EIK_GetPlayerData_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_GetPlayerData_AsyncFunction;
class USaveGame;
#ifdef ONLINESUBSYSTEMEIK_EIK_GetPlayerData_AsyncFunction_generated_h
#error "EIK_GetPlayerData_AsyncFunction.generated.h already included, missing '#pragma once' in EIK_GetPlayerData_AsyncFunction.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_GetPlayerData_AsyncFunction_generated_h

#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_GetPlayerData_AsyncFunction_h_9_DELEGATE \
struct _Script_OnlineSubsystemEIK_eventGetDataResult_Parms \
{ \
	bool bWasSuccess; \
	USaveGame* SaveGame; \
}; \
static inline void FGetDataResult_DelegateWrapper(const FMulticastScriptDelegate& GetDataResult, bool bWasSuccess, USaveGame* SaveGame) \
{ \
	_Script_OnlineSubsystemEIK_eventGetDataResult_Parms Parms; \
	Parms.bWasSuccess=bWasSuccess ? true : false; \
	Parms.SaveGame=SaveGame; \
	GetDataResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_GetPlayerData_AsyncFunction_h_14_SPARSE_DATA
#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_GetPlayerData_AsyncFunction_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlayerData);


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_GetPlayerData_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayerData);


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_GetPlayerData_AsyncFunction_h_14_ACCESSORS
#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_GetPlayerData_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_GetPlayerData_AsyncFunction(); \
	friend struct Z_Construct_UClass_UEIK_GetPlayerData_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(UEIK_GetPlayerData_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_GetPlayerData_AsyncFunction)


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_GetPlayerData_AsyncFunction_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUEIK_GetPlayerData_AsyncFunction(); \
	friend struct Z_Construct_UClass_UEIK_GetPlayerData_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(UEIK_GetPlayerData_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_GetPlayerData_AsyncFunction)


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_GetPlayerData_AsyncFunction_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_GetPlayerData_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_GetPlayerData_AsyncFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_GetPlayerData_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_GetPlayerData_AsyncFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEIK_GetPlayerData_AsyncFunction(UEIK_GetPlayerData_AsyncFunction&&); \
	NO_API UEIK_GetPlayerData_AsyncFunction(const UEIK_GetPlayerData_AsyncFunction&); \
public: \
	NO_API virtual ~UEIK_GetPlayerData_AsyncFunction();


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_GetPlayerData_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_GetPlayerData_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEIK_GetPlayerData_AsyncFunction(UEIK_GetPlayerData_AsyncFunction&&); \
	NO_API UEIK_GetPlayerData_AsyncFunction(const UEIK_GetPlayerData_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_GetPlayerData_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_GetPlayerData_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_GetPlayerData_AsyncFunction) \
	NO_API virtual ~UEIK_GetPlayerData_AsyncFunction();


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_GetPlayerData_AsyncFunction_h_11_PROLOG
#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_GetPlayerData_AsyncFunction_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_GetPlayerData_AsyncFunction_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_GetPlayerData_AsyncFunction_h_14_RPC_WRAPPERS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_GetPlayerData_AsyncFunction_h_14_ACCESSORS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_GetPlayerData_AsyncFunction_h_14_INCLASS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_GetPlayerData_AsyncFunction_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_GetPlayerData_AsyncFunction_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_GetPlayerData_AsyncFunction_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_GetPlayerData_AsyncFunction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_GetPlayerData_AsyncFunction_h_14_ACCESSORS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_GetPlayerData_AsyncFunction_h_14_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_GetPlayerData_AsyncFunction_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_GetPlayerData_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_PlayerStorage_EIK_GetPlayerData_AsyncFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
