// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncFunctions/Extra/EIK_BlueprintFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EEIK_LoginStatus : uint8;
struct FEIKUniqueNetId;
#ifdef ONLINESUBSYSTEMEIK_EIK_BlueprintFunctions_generated_h
#error "EIK_BlueprintFunctions.generated.h already included, missing '#pragma once' in EIK_BlueprintFunctions.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_BlueprintFunctions_generated_h

#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_29_SPARSE_DATA
#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGenerateSessionCode); \
	DECLARE_FUNCTION(execGetLoginStatus); \
	DECLARE_FUNCTION(execGetPlayerNickname); \
	DECLARE_FUNCTION(execEndSession); \
	DECLARE_FUNCTION(execUnRegisterPlayer); \
	DECLARE_FUNCTION(execRegisterPlayer); \
	DECLARE_FUNCTION(execStartSession); \
	DECLARE_FUNCTION(execShowFriendsList); \
	DECLARE_FUNCTION(execGetProductUserID); \
	DECLARE_FUNCTION(execGetEpicAccountId);


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateSessionCode); \
	DECLARE_FUNCTION(execGetLoginStatus); \
	DECLARE_FUNCTION(execGetPlayerNickname); \
	DECLARE_FUNCTION(execEndSession); \
	DECLARE_FUNCTION(execUnRegisterPlayer); \
	DECLARE_FUNCTION(execRegisterPlayer); \
	DECLARE_FUNCTION(execStartSession); \
	DECLARE_FUNCTION(execShowFriendsList); \
	DECLARE_FUNCTION(execGetProductUserID); \
	DECLARE_FUNCTION(execGetEpicAccountId);


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_29_ACCESSORS
#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_BlueprintFunctions(); \
	friend struct Z_Construct_UClass_UEIK_BlueprintFunctions_Statics; \
public: \
	DECLARE_CLASS(UEIK_BlueprintFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_BlueprintFunctions)


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUEIK_BlueprintFunctions(); \
	friend struct Z_Construct_UClass_UEIK_BlueprintFunctions_Statics; \
public: \
	DECLARE_CLASS(UEIK_BlueprintFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_BlueprintFunctions)


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_BlueprintFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_BlueprintFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_BlueprintFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_BlueprintFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEIK_BlueprintFunctions(UEIK_BlueprintFunctions&&); \
	NO_API UEIK_BlueprintFunctions(const UEIK_BlueprintFunctions&); \
public: \
	NO_API virtual ~UEIK_BlueprintFunctions();


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_BlueprintFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEIK_BlueprintFunctions(UEIK_BlueprintFunctions&&); \
	NO_API UEIK_BlueprintFunctions(const UEIK_BlueprintFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_BlueprintFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_BlueprintFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_BlueprintFunctions) \
	NO_API virtual ~UEIK_BlueprintFunctions();


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_26_PROLOG
#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_29_SPARSE_DATA \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_29_RPC_WRAPPERS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_29_ACCESSORS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_29_INCLASS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_29_SPARSE_DATA \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_29_ACCESSORS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_29_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_BlueprintFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_AsyncFunctions_Extra_EIK_BlueprintFunctions_h


#define FOREACH_ENUM_EEIK_LOGINSTATUS(op) \
	op(EEIK_LoginStatus::NotLoggedIn) \
	op(EEIK_LoginStatus::UsingLocalProfile) \
	op(EEIK_LoginStatus::LoggedIn) 

enum class EEIK_LoginStatus : uint8;
template<> struct TIsUEnumClass<EEIK_LoginStatus> { enum { Value = true }; };
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<EEIK_LoginStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
