// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncFunctions/Achievements/EIK_GetAchievementDetails_AsyncFunction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEIK_GetAchievementDetails_AsyncFunction;
struct FEIK_Achievement;
struct FEIK_AchievementDescription;
#ifdef ONLINESUBSYSTEMEIK_EIK_GetAchievementDetails_AsyncFunction_generated_h
#error "EIK_GetAchievementDetails_AsyncFunction.generated.h already included, missing '#pragma once' in EIK_GetAchievementDetails_AsyncFunction.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_GetAchievementDetails_AsyncFunction_generated_h

#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIK_AchievementDescription_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIK_AchievementDescription>();

#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_49_DELEGATE \
struct _Script_OnlineSubsystemEIK_eventAchievementDetails_Delegate_Parms \
{ \
	FEIK_AchievementDescription AchievementDescription; \
}; \
static inline void FAchievementDetails_Delegate_DelegateWrapper(const FMulticastScriptDelegate& AchievementDetails_Delegate, FEIK_AchievementDescription const& AchievementDescription) \
{ \
	_Script_OnlineSubsystemEIK_eventAchievementDetails_Delegate_Parms Parms; \
	Parms.AchievementDescription=AchievementDescription; \
	AchievementDetails_Delegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_54_SPARSE_DATA
#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_54_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEIKAchievementDescription);


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEIKAchievementDescription);


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_54_ACCESSORS
#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_GetAchievementDetails_AsyncFunction(); \
	friend struct Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(UEIK_GetAchievementDetails_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_GetAchievementDetails_AsyncFunction)


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_54_INCLASS \
private: \
	static void StaticRegisterNativesUEIK_GetAchievementDetails_AsyncFunction(); \
	friend struct Z_Construct_UClass_UEIK_GetAchievementDetails_AsyncFunction_Statics; \
public: \
	DECLARE_CLASS(UEIK_GetAchievementDetails_AsyncFunction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_GetAchievementDetails_AsyncFunction)


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_GetAchievementDetails_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_GetAchievementDetails_AsyncFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_GetAchievementDetails_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_GetAchievementDetails_AsyncFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEIK_GetAchievementDetails_AsyncFunction(UEIK_GetAchievementDetails_AsyncFunction&&); \
	NO_API UEIK_GetAchievementDetails_AsyncFunction(const UEIK_GetAchievementDetails_AsyncFunction&); \
public: \
	NO_API virtual ~UEIK_GetAchievementDetails_AsyncFunction();


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_GetAchievementDetails_AsyncFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEIK_GetAchievementDetails_AsyncFunction(UEIK_GetAchievementDetails_AsyncFunction&&); \
	NO_API UEIK_GetAchievementDetails_AsyncFunction(const UEIK_GetAchievementDetails_AsyncFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_GetAchievementDetails_AsyncFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_GetAchievementDetails_AsyncFunction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_GetAchievementDetails_AsyncFunction) \
	NO_API virtual ~UEIK_GetAchievementDetails_AsyncFunction();


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_51_PROLOG
#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_54_SPARSE_DATA \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_54_RPC_WRAPPERS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_54_ACCESSORS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_54_INCLASS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_54_SPARSE_DATA \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_54_ACCESSORS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_54_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_GetAchievementDetails_AsyncFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Achievements_EIK_GetAchievementDetails_AsyncFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
