// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncFunctions/Stats/EIK_GetLeaderboards_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_GetLeaderboards_AsyncFunction;
struct FEIKLeaderboardValue;
#ifdef ONLINESUBSYSTEMEIK_EIK_GetLeaderboards_AsyncFunction_generated_h
#error "EIK_GetLeaderboards_AsyncFunction.generated.h already included, missing '#pragma once' in EIK_GetLeaderboards_AsyncFunction.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_GetLeaderboards_AsyncFunction_generated_h

#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIKLeaderboardValue_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIKLeaderboardValue>();

#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_25_DELEGATE \
struct _Script_OnlineSubsystemEIK_eventGetLeaderboardResult_Parms \
{ \
	TArray<FEIKLeaderboardValue> LeaderboardValues; \
}; \
static inline void FGetLeaderboardResult_DelegateWrapper(const FMulticastScriptDelegate& GetLeaderboardResult, TArray<FEIKLeaderboardValue> const& LeaderboardValues) \
{ \
	_Script_OnlineSubsystemEIK_eventGetLeaderboardResult_Parms Parms; \
	Parms.LeaderboardValues=LeaderboardValues; \
	GetLeaderboardResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_30_SPARSE_DATA
#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLeaderboard);


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLeaderboard);


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_30_ACCESSORS
#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_GetLeaderboards_AsyncFunction(); \
	friend struct Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(UEIK_GetLeaderboards_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_GetLeaderboards_AsyncFunction)


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUEIK_GetLeaderboards_AsyncFunction(); \
	friend struct Z_Construct_UClass_UEIK_GetLeaderboards_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(UEIK_GetLeaderboards_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_GetLeaderboards_AsyncFunction)


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_GetLeaderboards_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_GetLeaderboards_AsyncFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_GetLeaderboards_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_GetLeaderboards_AsyncFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEIK_GetLeaderboards_AsyncFunction(UEIK_GetLeaderboards_AsyncFunction&&); \
	NO_API UEIK_GetLeaderboards_AsyncFunction(const UEIK_GetLeaderboards_AsyncFunction&); \
public: \
	NO_API virtual ~UEIK_GetLeaderboards_AsyncFunction();


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_GetLeaderboards_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEIK_GetLeaderboards_AsyncFunction(UEIK_GetLeaderboards_AsyncFunction&&); \
	NO_API UEIK_GetLeaderboards_AsyncFunction(const UEIK_GetLeaderboards_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_GetLeaderboards_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_GetLeaderboards_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_GetLeaderboards_AsyncFunction) \
	NO_API virtual ~UEIK_GetLeaderboards_AsyncFunction();


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_27_PROLOG
#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_30_SPARSE_DATA \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_30_RPC_WRAPPERS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_30_ACCESSORS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_30_INCLASS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_30_SPARSE_DATA \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_30_ACCESSORS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_30_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_GetLeaderboards_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Stats_EIK_GetLeaderboards_AsyncFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
