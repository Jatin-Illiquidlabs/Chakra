// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystem/EIK_Subsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class USaveGame;
enum class EMatchType : uint8;
enum class ERegionInfo : uint8;
struct FBlueprintSessionResult;
struct FEIK_Stats;
struct FEIKUniqueNetId;
struct FFileListStruct;
struct FOffersStruct;
struct FSessionFindStruct;
#ifdef ONLINESUBSYSTEMEIK_EIK_Subsystem_generated_h
#error "EIK_Subsystem.generated.h already included, missing '#pragma once' in EIK_Subsystem.h"
#endif
#define ONLINESUBSYSTEMEIK_EIK_Subsystem_generated_h

#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOffersStruct_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FOffersStruct>();

#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSessionFindStruct_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FSessionFindStruct>();

#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFileListStruct_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FFileListStruct>();

#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_140_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIKUniqueNetId_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIKUniqueNetId>();

#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_214_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEIK_Stats_Statics; \
	ONLINESUBSYSTEMEIK_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMEIK_API UScriptStruct* StaticStruct<struct FEIK_Stats>();

#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_226_DELEGATE \
struct _Script_OnlineSubsystemEIK_eventBP_Login_Callback_Parms \
{ \
	bool bWasSuccess; \
	FString Error; \
}; \
static inline void FBP_Login_Callback_DelegateWrapper(const FScriptDelegate& BP_Login_Callback, bool bWasSuccess, const FString& Error) \
{ \
	_Script_OnlineSubsystemEIK_eventBP_Login_Callback_Parms Parms; \
	Parms.bWasSuccess=bWasSuccess ? true : false; \
	Parms.Error=Error; \
	BP_Login_Callback.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_227_DELEGATE \
struct _Script_OnlineSubsystemEIK_eventBP_Logout_Callback_Parms \
{ \
	bool bWasSuccess; \
}; \
static inline void FBP_Logout_Callback_DelegateWrapper(const FScriptDelegate& BP_Logout_Callback, bool bWasSuccess) \
{ \
	_Script_OnlineSubsystemEIK_eventBP_Logout_Callback_Parms Parms; \
	Parms.bWasSuccess=bWasSuccess ? true : false; \
	BP_Logout_Callback.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_228_DELEGATE \
struct _Script_OnlineSubsystemEIK_eventBP_CreateSession_Callback_Parms \
{ \
	bool bWasSuccess; \
	FName SessionName; \
}; \
static inline void FBP_CreateSession_Callback_DelegateWrapper(const FScriptDelegate& BP_CreateSession_Callback, bool bWasSuccess, FName const& SessionName) \
{ \
	_Script_OnlineSubsystemEIK_eventBP_CreateSession_Callback_Parms Parms; \
	Parms.bWasSuccess=bWasSuccess ? true : false; \
	Parms.SessionName=SessionName; \
	BP_CreateSession_Callback.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_229_DELEGATE \
struct _Script_OnlineSubsystemEIK_eventBP_CreateLobby_Callback_Parms \
{ \
	bool bWasSuccess; \
	FName SessionName; \
}; \
static inline void FBP_CreateLobby_Callback_DelegateWrapper(const FScriptDelegate& BP_CreateLobby_Callback, bool bWasSuccess, FName const& SessionName) \
{ \
	_Script_OnlineSubsystemEIK_eventBP_CreateLobby_Callback_Parms Parms; \
	Parms.bWasSuccess=bWasSuccess ? true : false; \
	Parms.SessionName=SessionName; \
	BP_CreateLobby_Callback.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_230_DELEGATE \
struct _Script_OnlineSubsystemEIK_eventBP_DestroySession_Callback_Parms \
{ \
	bool bWasSuccess; \
}; \
static inline void FBP_DestroySession_Callback_DelegateWrapper(const FScriptDelegate& BP_DestroySession_Callback, bool bWasSuccess) \
{ \
	_Script_OnlineSubsystemEIK_eventBP_DestroySession_Callback_Parms Parms; \
	Parms.bWasSuccess=bWasSuccess ? true : false; \
	BP_DestroySession_Callback.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_231_DELEGATE \
struct _Script_OnlineSubsystemEIK_eventBP_PurchaseOffer_Callback_Parms \
{ \
	bool bWasSuccess; \
}; \
static inline void FBP_PurchaseOffer_Callback_DelegateWrapper(const FScriptDelegate& BP_PurchaseOffer_Callback, bool bWasSuccess) \
{ \
	_Script_OnlineSubsystemEIK_eventBP_PurchaseOffer_Callback_Parms Parms; \
	Parms.bWasSuccess=bWasSuccess ? true : false; \
	BP_PurchaseOffer_Callback.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_232_DELEGATE \
struct _Script_OnlineSubsystemEIK_eventBP_JoinSession_Callback_Parms \
{ \
	bool bWasSuccess; \
}; \
static inline void FBP_JoinSession_Callback_DelegateWrapper(const FScriptDelegate& BP_JoinSession_Callback, bool bWasSuccess) \
{ \
	_Script_OnlineSubsystemEIK_eventBP_JoinSession_Callback_Parms Parms; \
	Parms.bWasSuccess=bWasSuccess ? true : false; \
	BP_JoinSession_Callback.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_233_DELEGATE \
struct _Script_OnlineSubsystemEIK_eventBP_GetTitleFile_Callback_Parms \
{ \
	bool bWasSuccess; \
}; \
static inline void FBP_GetTitleFile_Callback_DelegateWrapper(const FScriptDelegate& BP_GetTitleFile_Callback, bool bWasSuccess) \
{ \
	_Script_OnlineSubsystemEIK_eventBP_GetTitleFile_Callback_Parms Parms; \
	Parms.bWasSuccess=bWasSuccess ? true : false; \
	BP_GetTitleFile_Callback.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_234_DELEGATE \
struct _Script_OnlineSubsystemEIK_eventBP_UpdateStat_Callback_Parms \
{ \
	bool bWasSuccess; \
}; \
static inline void FBP_UpdateStat_Callback_DelegateWrapper(const FScriptDelegate& BP_UpdateStat_Callback, bool bWasSuccess) \
{ \
	_Script_OnlineSubsystemEIK_eventBP_UpdateStat_Callback_Parms Parms; \
	Parms.bWasSuccess=bWasSuccess ? true : false; \
	BP_UpdateStat_Callback.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_235_DELEGATE \
struct _Script_OnlineSubsystemEIK_eventBP_GetStats_Callback_Parms \
{ \
	bool bWasSuccess; \
	TArray<FEIK_Stats> Stats; \
}; \
static inline void FBP_GetStats_Callback_DelegateWrapper(const FScriptDelegate& BP_GetStats_Callback, bool bWasSuccess, TArray<FEIK_Stats> const& Stats) \
{ \
	_Script_OnlineSubsystemEIK_eventBP_GetStats_Callback_Parms Parms; \
	Parms.bWasSuccess=bWasSuccess ? true : false; \
	Parms.Stats=Stats; \
	BP_GetStats_Callback.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_236_DELEGATE \
struct _Script_OnlineSubsystemEIK_eventBP_FindSession_Callback_Parms \
{ \
	bool bWasSuccess; \
	TArray<FSessionFindStruct> SessionResults; \
}; \
static inline void FBP_FindSession_Callback_DelegateWrapper(const FScriptDelegate& BP_FindSession_Callback, bool bWasSuccess, TArray<FSessionFindStruct> const& SessionResults) \
{ \
	_Script_OnlineSubsystemEIK_eventBP_FindSession_Callback_Parms Parms; \
	Parms.bWasSuccess=bWasSuccess ? true : false; \
	Parms.SessionResults=SessionResults; \
	BP_FindSession_Callback.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_237_DELEGATE \
struct _Script_OnlineSubsystemEIK_eventBP_WriteFile_Callback_Parms \
{ \
	bool bWasSuccess; \
}; \
static inline void FBP_WriteFile_Callback_DelegateWrapper(const FScriptDelegate& BP_WriteFile_Callback, bool bWasSuccess) \
{ \
	_Script_OnlineSubsystemEIK_eventBP_WriteFile_Callback_Parms Parms; \
	Parms.bWasSuccess=bWasSuccess ? true : false; \
	BP_WriteFile_Callback.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_238_DELEGATE \
struct _Script_OnlineSubsystemEIK_eventBP_GetOffers_Callback_Parms \
{ \
	bool bWasSuccess; \
	TArray<FOffersStruct> Offers; \
}; \
static inline void FBP_GetOffers_Callback_DelegateWrapper(const FScriptDelegate& BP_GetOffers_Callback, bool bWasSuccess, TArray<FOffersStruct> const& Offers) \
{ \
	_Script_OnlineSubsystemEIK_eventBP_GetOffers_Callback_Parms Parms; \
	Parms.bWasSuccess=bWasSuccess ? true : false; \
	Parms.Offers=Offers; \
	BP_GetOffers_Callback.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_239_DELEGATE \
struct _Script_OnlineSubsystemEIK_eventBP_GetOwnedItems_Callback_Parms \
{ \
	bool bWasSuccess; \
	TArray<FString> OwnedItemNames; \
}; \
static inline void FBP_GetOwnedItems_Callback_DelegateWrapper(const FScriptDelegate& BP_GetOwnedItems_Callback, bool bWasSuccess, TArray<FString> const& OwnedItemNames) \
{ \
	_Script_OnlineSubsystemEIK_eventBP_GetOwnedItems_Callback_Parms Parms; \
	Parms.bWasSuccess=bWasSuccess ? true : false; \
	Parms.OwnedItemNames=OwnedItemNames; \
	BP_GetOwnedItems_Callback.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_240_DELEGATE \
struct _Script_OnlineSubsystemEIK_eventBP_GetFile_Callback_Parms \
{ \
	bool bWasSuccess; \
	USaveGame* SaveGame; \
}; \
static inline void FBP_GetFile_Callback_DelegateWrapper(const FScriptDelegate& BP_GetFile_Callback, bool bWasSuccess, USaveGame* SaveGame) \
{ \
	_Script_OnlineSubsystemEIK_eventBP_GetFile_Callback_Parms Parms; \
	Parms.bWasSuccess=bWasSuccess ? true : false; \
	Parms.SaveGame=SaveGame; \
	BP_GetFile_Callback.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_241_DELEGATE \
struct _Script_OnlineSubsystemEIK_eventBP_ConnectEOSAndPlayFab_Callback_Parms \
{ \
	bool bWasSuccess; \
	FString Error; \
}; \
static inline void FBP_ConnectEOSAndPlayFab_Callback_DelegateWrapper(const FScriptDelegate& BP_ConnectEOSAndPlayFab_Callback, bool bWasSuccess, const FString& Error) \
{ \
	_Script_OnlineSubsystemEIK_eventBP_ConnectEOSAndPlayFab_Callback_Parms Parms; \
	Parms.bWasSuccess=bWasSuccess ? true : false; \
	Parms.Error=Error; \
	BP_ConnectEOSAndPlayFab_Callback.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_242_DELEGATE \
struct _Script_OnlineSubsystemEIK_eventBP_TitleFileList_Callback_Parms \
{ \
	bool bWasSuccess; \
	FString Error; \
}; \
static inline void FBP_TitleFileList_Callback_DelegateWrapper(const FScriptDelegate& BP_TitleFileList_Callback, bool bWasSuccess, const FString& Error) \
{ \
	_Script_OnlineSubsystemEIK_eventBP_TitleFileList_Callback_Parms Parms; \
	Parms.bWasSuccess=bWasSuccess ? true : false; \
	Parms.Error=Error; \
	BP_TitleFileList_Callback.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_247_SPARSE_DATA
#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_247_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGenerateSessionCode); \
	DECLARE_FUNCTION(execGetOwnedItems); \
	DECLARE_FUNCTION(execQueryOffers); \
	DECLARE_FUNCTION(execPurchaseItem); \
	DECLARE_FUNCTION(execConnectEosAndPlayFab); \
	DECLARE_FUNCTION(execGetLeaderboard); \
	DECLARE_FUNCTION(execGetTitleFileContent); \
	DECLARE_FUNCTION(execGetTitleFile); \
	DECLARE_FUNCTION(execGetTitleFileList); \
	DECLARE_FUNCTION(execEnumerateTitleFiles); \
	DECLARE_FUNCTION(execGetPlayerData); \
	DECLARE_FUNCTION(execSetPlayerData); \
	DECLARE_FUNCTION(execGetStats); \
	DECLARE_FUNCTION(execUpdateStats); \
	DECLARE_FUNCTION(execShowFriendUserInterface); \
	DECLARE_FUNCTION(execEndSession); \
	DECLARE_FUNCTION(execStartSession); \
	DECLARE_FUNCTION(execRegisterPlayer); \
	DECLARE_FUNCTION(execUnRegisterPlayer); \
	DECLARE_FUNCTION(execGetEpicID); \
	DECLARE_FUNCTION(execGetProductUserID); \
	DECLARE_FUNCTION(execGetUserUniqueID); \
	DECLARE_FUNCTION(execJoinEosSession); \
	DECLARE_FUNCTION(execDestroyEosSession); \
	DECLARE_FUNCTION(execFindEOSSession); \
	DECLARE_FUNCTION(execCreateEOSLobby); \
	DECLARE_FUNCTION(execCreateEOSSession); \
	DECLARE_FUNCTION(execGetLoginStatus); \
	DECLARE_FUNCTION(execGetPlayerNickname); \
	DECLARE_FUNCTION(execLogout); \
	DECLARE_FUNCTION(execLoginWithEpicLauncher); \
	DECLARE_FUNCTION(execLoginWithDeveloperTool); \
	DECLARE_FUNCTION(execLoginWithPersistantAuth); \
	DECLARE_FUNCTION(execLoginWithSteam); \
	DECLARE_FUNCTION(execLoginWithAccountPortal); \
	DECLARE_FUNCTION(execLoginWithDeviceID); \
	DECLARE_FUNCTION(execInitializeEIK);


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_247_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateSessionCode); \
	DECLARE_FUNCTION(execGetOwnedItems); \
	DECLARE_FUNCTION(execQueryOffers); \
	DECLARE_FUNCTION(execPurchaseItem); \
	DECLARE_FUNCTION(execConnectEosAndPlayFab); \
	DECLARE_FUNCTION(execGetLeaderboard); \
	DECLARE_FUNCTION(execGetTitleFileContent); \
	DECLARE_FUNCTION(execGetTitleFile); \
	DECLARE_FUNCTION(execGetTitleFileList); \
	DECLARE_FUNCTION(execEnumerateTitleFiles); \
	DECLARE_FUNCTION(execGetPlayerData); \
	DECLARE_FUNCTION(execSetPlayerData); \
	DECLARE_FUNCTION(execGetStats); \
	DECLARE_FUNCTION(execUpdateStats); \
	DECLARE_FUNCTION(execShowFriendUserInterface); \
	DECLARE_FUNCTION(execEndSession); \
	DECLARE_FUNCTION(execStartSession); \
	DECLARE_FUNCTION(execRegisterPlayer); \
	DECLARE_FUNCTION(execUnRegisterPlayer); \
	DECLARE_FUNCTION(execGetEpicID); \
	DECLARE_FUNCTION(execGetProductUserID); \
	DECLARE_FUNCTION(execGetUserUniqueID); \
	DECLARE_FUNCTION(execJoinEosSession); \
	DECLARE_FUNCTION(execDestroyEosSession); \
	DECLARE_FUNCTION(execFindEOSSession); \
	DECLARE_FUNCTION(execCreateEOSLobby); \
	DECLARE_FUNCTION(execCreateEOSSession); \
	DECLARE_FUNCTION(execGetLoginStatus); \
	DECLARE_FUNCTION(execGetPlayerNickname); \
	DECLARE_FUNCTION(execLogout); \
	DECLARE_FUNCTION(execLoginWithEpicLauncher); \
	DECLARE_FUNCTION(execLoginWithDeveloperTool); \
	DECLARE_FUNCTION(execLoginWithPersistantAuth); \
	DECLARE_FUNCTION(execLoginWithSteam); \
	DECLARE_FUNCTION(execLoginWithAccountPortal); \
	DECLARE_FUNCTION(execLoginWithDeviceID); \
	DECLARE_FUNCTION(execInitializeEIK);


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_247_ACCESSORS
#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_247_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEIK_Subsystem(); \
	friend struct Z_Construct_UClass_UEIK_Subsystem_Statics; \
public: \
	DECLARE_CLASS(UEIK_Subsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Subsystem)


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_247_INCLASS \
private: \
	static void StaticRegisterNativesUEIK_Subsystem(); \
	friend struct Z_Construct_UClass_UEIK_Subsystem_Statics; \
public: \
	DECLARE_CLASS(UEIK_Subsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemEIK"), NO_API) \
	DECLARE_SERIALIZER(UEIK_Subsystem)


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_247_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Subsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEIK_Subsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Subsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Subsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEIK_Subsystem(UEIK_Subsystem&&); \
	NO_API UEIK_Subsystem(const UEIK_Subsystem&); \
public: \
	NO_API virtual ~UEIK_Subsystem();


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_247_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEIK_Subsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEIK_Subsystem(UEIK_Subsystem&&); \
	NO_API UEIK_Subsystem(const UEIK_Subsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEIK_Subsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEIK_Subsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEIK_Subsystem) \
	NO_API virtual ~UEIK_Subsystem();


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_244_PROLOG
#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_247_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_247_SPARSE_DATA \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_247_RPC_WRAPPERS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_247_ACCESSORS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_247_INCLASS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_247_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_247_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_247_SPARSE_DATA \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_247_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_247_ACCESSORS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_247_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h_247_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMEIK_API UClass* StaticClass<class UEIK_Subsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_EOSIntegrationKit_Source_OnlineSubsystemEIK_Subsystem_EIK_Subsystem_h


#define FOREACH_ENUM_EREGIONINFO(op) \
	op(ERegionInfo::RE_NoSelection) \
	op(ERegionInfo::RE_Asia) \
	op(ERegionInfo::RE_NorthAmerica) \
	op(ERegionInfo::RE_SouthAmerica) \
	op(ERegionInfo::RE_Africa) \
	op(ERegionInfo::RE_Europe) \
	op(ERegionInfo::RE_Australia) 

enum class ERegionInfo : uint8;
template<> struct TIsUEnumClass<ERegionInfo> { enum { Value = true }; };
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<ERegionInfo>();

#define FOREACH_ENUM_EMATCHTYPE(op) \
	op(EMatchType::MT_MatchMakingSession) \
	op(EMatchType::MT_Lobby) 

enum class EMatchType : uint8;
template<> struct TIsUEnumClass<EMatchType> { enum { Value = true }; };
template<> ONLINESUBSYSTEMEIK_API UEnum* StaticEnum<EMatchType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
