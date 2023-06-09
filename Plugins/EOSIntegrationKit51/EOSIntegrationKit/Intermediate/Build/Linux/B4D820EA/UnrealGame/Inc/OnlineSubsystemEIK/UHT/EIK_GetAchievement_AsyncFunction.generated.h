// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncFunctions/Achievements/EIK_GetAchievement_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_GetAchievement_AsyncFunction;
struct FEIK_Achievement;
#ifdef ONLINESUBSYSTEMEIK_EIK_GetAchievement_AsyncFunction_generated_h
#error "EIK_GetAchievement_AsyncFunction.generated.h already included, missing '#pragma once' in EIK_GetAchievement_AsyncFunction.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_GetAchievement_AsyncFunction_generated_h

#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIK_Achievement_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIK_Achievement>();

#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_32_DELEGATE \
struct _Script_OnlineSubsystemEIK_eventAchievement_Delegate_Parms \
{ \
	TArray<FEIK_Achievement> Achievements; \
}; \
static inline void FAchievement_Delegate_DelegateWrapper(const FMulticastScriptDelegate& Achievement_Delegate, TArray<FEIK_Achievement> const& Achievements) \
{ \
	_Script_OnlineSubsystemEIK_eventAchievement_Delegate_Parms Parms; \
	Parms.Achievements=Achievements; \
	Achievement_Delegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_37_SPARSE_DATA
#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEIKAchievements);


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEIKAchievements);


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_37_ACCESSORS
#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_GetAchievement_AsyncFunction(); \
	friend struct Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(UEIK_GetAchievement_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_GetAchievement_AsyncFunction)


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUEIK_GetAchievement_AsyncFunction(); \
	friend struct Z_Construct_UClass_UEIK_GetAchievement_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(UEIK_GetAchievement_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_GetAchievement_AsyncFunction)


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_GetAchievement_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_GetAchievement_AsyncFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_GetAchievement_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_GetAchievement_AsyncFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEIK_GetAchievement_AsyncFunction(UEIK_GetAchievement_AsyncFunction&&); \
	NO_API UEIK_GetAchievement_AsyncFunction(const UEIK_GetAchievement_AsyncFunction&); \
public: \
	NO_API virtual ~UEIK_GetAchievement_AsyncFunction();


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_GetAchievement_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEIK_GetAchievement_AsyncFunction(UEIK_GetAchievement_AsyncFunction&&); \
	NO_API UEIK_GetAchievement_AsyncFunction(const UEIK_GetAchievement_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_GetAchievement_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_GetAchievement_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_GetAchievement_AsyncFunction) \
	NO_API virtual ~UEIK_GetAchievement_AsyncFunction();


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_34_PROLOG
#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_37_SPARSE_DATA \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_37_RPC_WRAPPERS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_37_ACCESSORS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_37_INCLASS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_37_SPARSE_DATA \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_37_ACCESSORS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_37_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_GetAchievement_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievement_AsyncFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
