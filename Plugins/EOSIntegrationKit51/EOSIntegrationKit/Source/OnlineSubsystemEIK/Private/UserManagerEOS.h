//Copyright (c) 2023 Betide Studio. All Rights Reserved.

#pragma once

#include "OnlineSubsystemEOSTypes.h"
#include "Interfaces/OnlineExternalUIInterface.h"
#include "Interfaces/OnlineFriendsInterface.h"
#include "Interfaces/OnlinePresenceInterface.h"

#if WITH_EOS_SDK
	#include "eos_auth_types.h"
	#include "eos_friends_types.h"
	#include "eos_connect_types.h"

class FOnlineSubsystemEOS;
class IOnlineSubsystem;

typedef TSharedPtr<FOnlineUser> FOnlineUserPtr;
typedef TSharedRef<FOnlineUser> FOnlineUserRef;

/**
* Concrete online user class built from the reusable templates
*/
class FOnlineUserEOS :
	public TOnlineUserEOS<FOnlineUser, IAttributeAccessInterface>
{
public:
	FOnlineUserEOS(FUniqueNetIdEOSRef InUserId) :
		TOnlineUserEOS<FOnlineUser, IAttributeAccessInterface>(InUserId)
	{
	}
	virtual ~FOnlineUserEOS() = default;
};

typedef TSharedPtr<FOnlineUserEOS> FOnlineUserEOSPtr;
typedef TSharedRef<FOnlineUserEOS> FOnlineUserEOSRef;

/**
 * Info associated with an user account generated by this online service
 */
class FUserOnlineAccountEOS : 
	public TUserOnlineAccountEOS<FUserOnlineAccount>
{
public:
	FUserOnlineAccountEOS(FUniqueNetIdEOSRef InUserId)
		: TUserOnlineAccountEOS<FUserOnlineAccount>(InUserId)
	{
	}
	virtual ~FUserOnlineAccountEOS() = default;
};

typedef TSharedPtr<FUserOnlineAccountEOS> FUserOnlineAccountEOSPtr;
typedef TSharedRef<FUserOnlineAccountEOS> FUserOnlineAccountEOSRef;

/**
 * Concrete friend class built from the reusable templates
 */
class FOnlineFriendEOS :
	public TOnlineFriendEOS<FOnlineFriend>
{
public:
	FOnlineFriendEOS(FUniqueNetIdEOSRef InUserId) :
		TOnlineFriendEOS<FOnlineFriend>(InUserId)
	{
	}
	virtual ~FOnlineFriendEOS() = default;
};

typedef TSharedPtr<FOnlineFriendEOS> FOnlineFriendEOSPtr;
typedef TSharedRef<FOnlineFriendEOS> FOnlineFriendEOSRef;

/**
 * Concrete blocked player class built from the reusable templates
 */
class FOnlineBlockedPlayerEOS :
	public TOnlineBlockedPlayerEOS<FOnlineBlockedPlayer>
{
public:
	FOnlineBlockedPlayerEOS(FUniqueNetIdEOSRef InUserId) :
		TOnlineBlockedPlayerEOS<FOnlineBlockedPlayer>(InUserId)
	{
	}
	virtual ~FOnlineBlockedPlayerEOS() = default;
};

typedef TSharedPtr<FOnlineBlockedPlayerEOS> FOnlineBlockedPlayerEOSPtr;
typedef TSharedRef<FOnlineBlockedPlayerEOS> FOnlineBlockedPlayerEOSRef;

/**
 * Concrete blocked player class built from the reusable templates
 */
class FOnlineRecentPlayerEOS :
	public TOnlineRecentPlayerEOS<FOnlineRecentPlayer>
{
public:
	FOnlineRecentPlayerEOS(FUniqueNetIdEOSRef InUserId) :
		TOnlineRecentPlayerEOS<FOnlineRecentPlayer>(InUserId)
	{
	}
	virtual ~FOnlineRecentPlayerEOS() = default;
};

typedef TSharedPtr<FOnlineRecentPlayerEOS> FOnlineRecentPlayerEOSPtr;
typedef TSharedRef<FOnlineRecentPlayerEOS> FOnlineRecentPlayerEOSRef;

template<class ListClass, class ListClassReturnType>
class TOnlinePlayerList
{
	/** The user that owns this list */
	int32 LocalUserNum;
	/** The net id that owns this list */
	FUniqueNetIdEOSRef OwningNetId;
	/** The array of list class entries */
	TArray<ListClass> ListEntries;
	/** Indexed by string form of account id for fast look up */
	TMap<FString, ListClass> NetIdStringToListEntryMap;

public:
	TOnlinePlayerList(int32 InLocalUserNum, FUniqueNetIdEOSRef InOwningNetId)
		: LocalUserNum(InLocalUserNum)
		, OwningNetId(InOwningNetId)
	{
	}

	const TArray<ListClass>& GetList()
	{
		return ListEntries;
	}

	void Add(const FString& InNetId, ListClass InListEntry)
	{
		ListEntries.Add(InListEntry);
		NetIdStringToListEntryMap.Add(InNetId, InListEntry);
	}

	void Remove(const FString& InNetId, ListClass InListEntry)
	{
		const ListClass* Found = NetIdStringToListEntryMap.Find(InNetId);
		if (Found != nullptr)
		{
			NetIdStringToListEntryMap.Remove(InNetId);
		}
		ListEntries.Remove(InListEntry);
	}

	void Empty(int32 Slack = 0)
	{
		ListEntries.Empty(Slack);
		NetIdStringToListEntryMap.Empty(Slack);
	}

	void UpdateNetIdStr(const FString& PrevNetId, const FString& NewNetId)
	{
		ListClass ListEntry = NetIdStringToListEntryMap[PrevNetId];
		NetIdStringToListEntryMap.Remove(PrevNetId);
		NetIdStringToListEntryMap.Add(NewNetId, ListEntry);
	}

	ListClassReturnType GetByIndex(int32 Index)
	{
		if (ListEntries.IsValidIndex(Index))
		{
			return ListEntries[Index];
		}
		return ListClassReturnType();
	}

	ListClassReturnType GetByNetIdString(const FString& NetId)
	{
		const ListClass* Found = NetIdStringToListEntryMap.Find(NetId);
		if (Found != nullptr)
		{
			return *Found;
		}
		return ListClassReturnType();
	}
};

class FFriendsListEOS :
	public TOnlinePlayerList<FOnlineFriendEOSRef, FOnlineFriendEOSPtr>
{
public:
	FFriendsListEOS(int32 InLocalUserNum, FUniqueNetIdEOSRef InOwningNetId)
		: TOnlinePlayerList<FOnlineFriendEOSRef, FOnlineFriendEOSPtr>(InLocalUserNum, InOwningNetId)
	{
	}
	virtual ~FFriendsListEOS() = default;
};

typedef TSharedRef<FFriendsListEOS> FFriendsListEOSRef;

class FBlockedPlayersListEOS :
	public TOnlinePlayerList<FOnlineBlockedPlayerEOSRef, FOnlineBlockedPlayerEOSPtr>
{
public:
	FBlockedPlayersListEOS(int32 InLocalUserNum, FUniqueNetIdEOSRef InOwningNetId)
		: TOnlinePlayerList<FOnlineBlockedPlayerEOSRef, FOnlineBlockedPlayerEOSPtr>(InLocalUserNum, InOwningNetId)
	{
	}
	virtual ~FBlockedPlayersListEOS() = default;
};

typedef TSharedRef<FBlockedPlayersListEOS> FBlockedPlayersListEOSRef;

class FRecentPlayersListEOS :
	public TOnlinePlayerList<FOnlineRecentPlayerEOSRef, FOnlineRecentPlayerEOSPtr>
{
public:
	FRecentPlayersListEOS(int32 InLocalUserNum, FUniqueNetIdEOSRef InOwningNetId)
		: TOnlinePlayerList<FOnlineRecentPlayerEOSRef, FOnlineRecentPlayerEOSPtr>(InLocalUserNum, InOwningNetId)
	{
	}
	virtual ~FRecentPlayersListEOS() = default;
};

typedef TSharedRef<FRecentPlayersListEOS> FRecentPlayersListEOSRef;

struct FNotificationIdCallbackPair
{
	EOS_NotificationId NotificationId;
	FCallbackBase* Callback;

	FNotificationIdCallbackPair()
		: NotificationId(EOS_INVALID_NOTIFICATIONID)
		, Callback(nullptr)
	{
	}

	virtual ~FNotificationIdCallbackPair()
	{
		delete Callback;
	}
};

/**
 * EOS service implementation of the online identity, friends, and user info interfaces
 *
 * Centrally managed since they share common data
 */
class FUserManagerEOS
	: public IOnlineIdentity
	, public IOnlineExternalUI
	, public IOnlineFriends
	, public IOnlinePresence
	, public IOnlineUser
	, public TSharedFromThis<FUserManagerEOS, ESPMode::ThreadSafe>
{
public:
	/**
	 * Constructor
	 *
	 * @param InSubsystem online subsystem being used
	 */
	FUserManagerEOS(FOnlineSubsystemEOS* InSubsystem);

	/**
	 * Destructor
	 */
	virtual ~FUserManagerEOS();

	void Init();
	void Shutdown();

	//Custom Function
	void LoginWithDeviceID(const FOnlineAccountCredentials& AccountCredentials);
	void CreateDeviceID(const FOnlineAccountCredentials& AccountCredentials);
	void DeleteDeviceID(const FOnlineAccountCredentials& AccountCredentials);
	void CompleteDeviceIDLogin(int32 LocalUserNum, EOS_EpicAccountId AccountId, EOS_ProductUserId UserId);
	void EIK_Auto_Login();

// IOnlineIdentity Interface
	virtual bool Login(int32 LocalUserNum, const FOnlineAccountCredentials& AccountCredentials) override;
	virtual bool Logout(int32 LocalUserNum) override;
	virtual bool AutoLogin(int32 LocalUserNum) override;
	virtual TSharedPtr<FUserOnlineAccount> GetUserAccount(const FUniqueNetId& UserId) const override;
	virtual TArray<TSharedPtr<FUserOnlineAccount>> GetAllUserAccounts() const override;
	virtual FUniqueNetIdPtr GetUniquePlayerId(int32 LocalUserNum) const override;
	virtual FUniqueNetIdPtr CreateUniquePlayerId(uint8* Bytes, int32 Size) override;
	virtual FUniqueNetIdPtr CreateUniquePlayerId(const FString& Str) override;
	virtual ELoginStatus::Type GetLoginStatus(int32 LocalUserNum) const override;
	virtual ELoginStatus::Type GetLoginStatus(const FUniqueNetId& UserId) const override;
	virtual FString GetPlayerNickname(int32 LocalUserNum) const override;
	virtual FString GetPlayerNickname(const FUniqueNetId& UserId) const override;
	virtual FString GetAuthToken(int32 LocalUserNum) const override;
	virtual void GetUserPrivilege(const FUniqueNetId& UserId, EUserPrivileges::Type Privilege, const FOnGetUserPrivilegeCompleteDelegate& Delegate) override;
	virtual FString GetAuthType() const override;
	virtual void RevokeAuthToken(const FUniqueNetId& LocalUserId, const FOnRevokeAuthTokenCompleteDelegate& Delegate) override;
	virtual FPlatformUserId GetPlatformUserIdFromUniqueNetId(const FUniqueNetId& UniqueNetId) const override;
	virtual void GetLinkedAccountAuthToken(int32 LocalUserNum, const FOnGetLinkedAccountAuthTokenCompleteDelegate& Delegate) const override;
// ~IOnlineIdentity Interface
	ELoginStatus::Type GetLoginStatus(const FUniqueNetIdEOS& UserId) const;

// IOnlineExternalUI Interface
	virtual bool ShowLoginUI(const int ControllerIndex, bool bShowOnlineOnly, bool bShowSkipButton, const FOnLoginUIClosedDelegate& Delegate = FOnLoginUIClosedDelegate()) override;
	virtual bool ShowAccountCreationUI(const int ControllerIndex, const FOnAccountCreationUIClosedDelegate& Delegate = FOnAccountCreationUIClosedDelegate()) override;
	virtual bool ShowFriendsUI(int32 LocalUserNum) override;
	virtual bool ShowInviteUI(int32 LocalUserNum, FName SessionName = NAME_GameSession) override;
	virtual bool ShowAchievementsUI(int32 LocalUserNum) override;
	virtual bool ShowLeaderboardUI(const FString& LeaderboardName) override;
	virtual bool ShowWebURL(const FString& Url, const FShowWebUrlParams& ShowParams, const FOnShowWebUrlClosedDelegate& Delegate = FOnShowWebUrlClosedDelegate()) override;
	virtual bool CloseWebURL() override;
	virtual bool ShowProfileUI(const FUniqueNetId& Requestor, const FUniqueNetId& Requestee, const FOnProfileUIClosedDelegate& Delegate = FOnProfileUIClosedDelegate()) override;
	virtual bool ShowAccountUpgradeUI(const FUniqueNetId& UniqueId) override;
	virtual bool ShowStoreUI(int32 LocalUserNum, const FShowStoreParams& ShowParams, const FOnShowStoreUIClosedDelegate& Delegate = FOnShowStoreUIClosedDelegate()) override;
	virtual bool ShowSendMessageUI(int32 LocalUserNum, const FShowSendMessageParams& ShowParams, const FOnShowSendMessageUIClosedDelegate& Delegate = FOnShowSendMessageUIClosedDelegate()) override;
// ~IOnlineExternalUI Interface

// IOnlineFriends Interface
	virtual bool ReadFriendsList(int32 LocalUserNum, const FString& ListName, const FOnReadFriendsListComplete& Delegate = FOnReadFriendsListComplete()) override;
	virtual bool DeleteFriendsList(int32 LocalUserNum, const FString& ListName, const FOnDeleteFriendsListComplete& Delegate = FOnDeleteFriendsListComplete()) override;
	virtual bool SendInvite(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName, const FOnSendInviteComplete& Delegate = FOnSendInviteComplete()) override;
	virtual bool AcceptInvite(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName, const FOnAcceptInviteComplete& Delegate = FOnAcceptInviteComplete()) override;
	virtual bool RejectInvite(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName) override;
	virtual bool DeleteFriend(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName) override;
	virtual bool GetFriendsList(int32 LocalUserNum, const FString& ListName, TArray< TSharedRef<FOnlineFriend> >& OutFriends) override;
	virtual TSharedPtr<FOnlineFriend> GetFriend(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName) override;
	virtual bool IsFriend(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName) override;
	virtual bool QueryRecentPlayers(const FUniqueNetId& UserId, const FString& Namespace) override;
	virtual bool GetRecentPlayers(const FUniqueNetId& UserId, const FString& Namespace, TArray< TSharedRef<FOnlineRecentPlayer> >& OutRecentPlayers) override;
	virtual bool BlockPlayer(int32 LocalUserNum, const FUniqueNetId& PlayerId) override;
	virtual bool UnblockPlayer(int32 LocalUserNum, const FUniqueNetId& PlayerId) override;
	virtual bool QueryBlockedPlayers(const FUniqueNetId& UserId) override;
	virtual bool GetBlockedPlayers(const FUniqueNetId& UserId, TArray< TSharedRef<FOnlineBlockedPlayer> >& OutBlockedPlayers) override;
	virtual void DumpBlockedPlayers() const override;
	virtual void SetFriendAlias(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName, const FString& Alias, const FOnSetFriendAliasComplete& Delegate = FOnSetFriendAliasComplete()) override;
	virtual void DeleteFriendAlias(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName, const FOnDeleteFriendAliasComplete& Delegate = FOnDeleteFriendAliasComplete()) override;
	virtual void DumpRecentPlayers() const override;
// ~IOnlineFriends Interface

	bool HandleFriendsExec(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar);

// IOnlinePresence Interface
	virtual void SetPresence(const FUniqueNetId& User, const FOnlineUserPresenceStatus& Status, const FOnPresenceTaskCompleteDelegate& Delegate = FOnPresenceTaskCompleteDelegate()) override;
	virtual void QueryPresence(const FUniqueNetId& User, const FOnPresenceTaskCompleteDelegate& Delegate = FOnPresenceTaskCompleteDelegate()) override;
	virtual EOnlineCachedResult::Type GetCachedPresence(const FUniqueNetId& User, TSharedPtr<FOnlineUserPresence>& OutPresence) override;
	virtual EOnlineCachedResult::Type GetCachedPresenceForApp(const FUniqueNetId& LocalUserId, const FUniqueNetId& User, const FString& AppId, TSharedPtr<FOnlineUserPresence>& OutPresence) override;
// ~IOnlinePresence Interface

// IOnlineUser Interface
	virtual bool QueryUserInfo(int32 LocalUserNum, const TArray<FUniqueNetIdRef>& UserIds) override;
	virtual bool GetAllUserInfo(int32 LocalUserNum, TArray<TSharedRef<class FOnlineUser>>& OutUsers) override;
	virtual TSharedPtr<FOnlineUser> GetUserInfo(int32 LocalUserNum, const class FUniqueNetId& UserId) override;
	virtual bool QueryUserIdMapping(const FUniqueNetId& UserId, const FString& DisplayNameOrEmail, const FOnQueryUserMappingComplete& Delegate = FOnQueryUserMappingComplete()) override;
	virtual bool QueryExternalIdMappings(const FUniqueNetId& UserId, const FExternalIdQueryOptions& QueryOptions, const TArray<FString>& ExternalIds, const FOnQueryExternalIdMappingsComplete& Delegate = FOnQueryExternalIdMappingsComplete()) override;
	virtual void GetExternalIdMappings(const FExternalIdQueryOptions& QueryOptions, const TArray<FString>& ExternalIds, TArray<FUniqueNetIdPtr>& OutIds) override;
	virtual FUniqueNetIdPtr GetExternalIdMapping(const FExternalIdQueryOptions& QueryOptions, const FString& ExternalId) override;
// ~IOnlineUser Interface

	EOS_EpicAccountId GetLocalEpicAccountId(int32 LocalUserNum) const;
	EOS_EpicAccountId GetLocalEpicAccountId() const;
	EOS_ProductUserId GetLocalProductUserId(int32 LocalUserNum) const;
	EOS_ProductUserId GetLocalProductUserId() const;
	EOS_EpicAccountId GetLocalEpicAccountId(EOS_ProductUserId UserId) const;
	EOS_ProductUserId GetLocalProductUserId(EOS_EpicAccountId AccountId) const;
	FUniqueNetIdEOSPtr GetLocalUniqueNetIdEOS(int32 LocalUserNum) const;
	FUniqueNetIdEOSPtr GetLocalUniqueNetIdEOS(EOS_ProductUserId UserId) const;
	FUniqueNetIdEOSPtr GetLocalUniqueNetIdEOS(EOS_EpicAccountId AccountId) const;
	FUniqueNetIdEOSPtr GetLocalUniqueNetIdEOS() const
	{
		return GetLocalUniqueNetIdEOS(GetDefaultLocalUser());
	}

	int32 GetLocalUserNumFromUniqueNetId(const FUniqueNetId& NetId) const;
	bool IsLocalUser(const FUniqueNetId& NetId) const;

	typedef TFunction<void(TMap<EOS_ProductUserId, FUniqueNetIdEOSRef> ResolvedUniqueNetIds)> FResolveUniqueNetIdsCallback;
	typedef TFunction<void(FUniqueNetIdEOSRef ResolvedUniqueNetId)> FResolveUniqueNetIdCallback;
	bool GetEpicAccountIdFromProductUserId(const EOS_ProductUserId& ProductUserId, EOS_EpicAccountId& OutEpicAccountId) const;
	void ResolveUniqueNetId(const EOS_ProductUserId& ProductUserId, const FResolveUniqueNetIdCallback& Callback) const;
	void ResolveUniqueNetIds(const TArray<EOS_ProductUserId>& ProductUserIds, const FResolveUniqueNetIdsCallback& Callback) const;

	FOnlineUserPtr GetLocalOnlineUser(int32 LocalUserNum) const;
	FOnlineUserPtr GetOnlineUser(EOS_ProductUserId UserId) const;
	FOnlineUserPtr GetOnlineUser(EOS_EpicAccountId AccountId) const;

	/**
	 * Should use the initialization constructor instead
	 */
	FUserManagerEOS() = delete;

	bool ConnectLoginEAS(int32 LocalUserNum, EOS_EpicAccountId AccountId);
	void LoginViaExternalAuth(int32 LocalUserNum);
	void CreateConnectedLogin(int32 LocalUserNum, EOS_EpicAccountId AccountId, EOS_ContinuanceToken Token);
	void LinkEAS(int32 LocalUserNum, EOS_ContinuanceToken Token);
	void RefreshConnectLogin(int32 LocalUserNum);
	bool ConnectLoginNoEAS(int32 LocalUserNum);

	void FullLoginCallback(int32 LocalUserNum, EOS_EpicAccountId AccountId, EOS_ProductUserId UserId);
	void FriendStatusChanged(const EOS_Friends_OnFriendsUpdateInfo* Data);
	void LoginStatusChanged(const EOS_Auth_LoginStatusChangedCallbackInfo* Data);

	int32 GetDefaultLocalUser() const { return DefaultLocalUser; }

private:
	void RemoveLocalUser(int32 LocalUserNum);
	void AddLocalUser(int32 LocalUserNum, EOS_EpicAccountId EpicAccountId, EOS_ProductUserId UserId);

	void AddFriend(int32 LocalUserNum, EOS_EpicAccountId EpicAccountId);
	void AddRemotePlayer(int32 LocalUserNum, const FString& NetId, EOS_EpicAccountId EpicAccountId);
	void AddRemotePlayer(int32 LocalUserNum, const FString& NetId, EOS_EpicAccountId EpicAccountId, FUniqueNetIdEOSPtr UniqueNetId, FOnlineUserPtr OnlineUser, IAttributeAccessInterfaceRef AttributeRef);
	void UpdateRemotePlayerProductUserId(EOS_EpicAccountId AccountId, EOS_ProductUserId UserId);
	void ReadUserInfo(int32 LocalUserNum, EOS_EpicAccountId EpicAccountId);

	void UpdateUserInfo(IAttributeAccessInterfaceRef AttriubteAccessRef, EOS_EpicAccountId LocalId, EOS_EpicAccountId TargetId);
	bool IsFriendQueryUserInfoOngoing(int32 LocalUserNum);
	void ProcessReadFriendsListComplete(int32 LocalUserNum, bool bWasSuccessful, const FString& ErrorStr);

	void UpdatePresence(EOS_EpicAccountId AccountId);
	void UpdateFriendPresence(const FString& FriendId, FOnlineUserPresenceRef Presence);

	IOnlineSubsystem* GetPlatformOSS() const;
	void GetPlatformAuthToken(int32 LocalUserNum, const FOnGetLinkedAccountAuthTokenCompleteDelegate& Delegate) const;
	FString GetPlatformDisplayName(int32 LocalUserNum) const;

	/** Cached pointer to owning subsystem */
	FOnlineSubsystemEOS* EOSSubsystem;

	/** Default local user when no local user is specified */
	int32 DefaultLocalUser;

	/** Notification state for SDK events */
	EOS_NotificationId LoginNotificationId;
	FCallbackBase* LoginNotificationCallback;
	EOS_NotificationId FriendsNotificationId;
	FCallbackBase* FriendsNotificationCallback;
	EOS_NotificationId PresenceNotificationId;
	FCallbackBase* PresenceNotificationCallback;
	TMap<int32, FNotificationIdCallbackPair*> LocalUserNumToConnectLoginNotifcationMap;

	/** Ids mapped to locally registered users */
	TMap<int32, EOS_EpicAccountId> UserNumToAccountIdMap;
	TMap<EOS_EpicAccountId, int32> AccountIdToUserNumMap;
	TMap<int32, FUniqueNetIdEOSPtr> UserNumToNetIdMap;
	TMap<int32, EOS_ProductUserId> UserNumToProductUserIdMap;
	TMap<EOS_ProductUserId, int32> ProductUserIdToUserNumMap;
	TMap<FString, FUserOnlineAccountEOSRef> StringToUserAccountMap;

	/** General account mappings */
	TMap<EOS_EpicAccountId, FString> AccountIdToStringMap;
	TMap<EOS_ProductUserId, FString> ProductUserIdToStringMap;

	/** Per user friends lists accessible by user num or net id */
	TMap<int32, FFriendsListEOSRef> LocalUserNumToFriendsListMap;
	TMap<FString, FFriendsListEOSRef> NetIdStringToFriendsListMap;
	/** Per user blocked player lists accessible by user num or net id */
	TMap<int32, FBlockedPlayersListEOSRef> LocalUserNumToBlockedPlayerListMap;
	TMap<FString, FBlockedPlayersListEOSRef> NetIdStringToBlockedPlayerListMap;
	/** Per user recent player lists accessible by user num or net id */
	TMap<int32, FRecentPlayersListEOSRef> LocalUserNumToRecentPlayerListMap;
	TMap<FString, FRecentPlayersListEOSRef> NetIdStringToRecentPlayerListMap;

	/** Ids mapped to remote users */
	TMap<FString, FOnlineUserPtr> NetIdStringToOnlineUserMap;
	TMap<EOS_EpicAccountId, FOnlineUserPtr> EpicAccountIdToOnlineUserMap;
	TMap<FString, IAttributeAccessInterfaceRef> NetIdStringToAttributeAccessMap;
	TMap<EOS_EpicAccountId, IAttributeAccessInterfaceRef> EpicAccountIdToAttributeAccessMap;

	/** Ids mapped to remote user presence */
	TMap<FString, FOnlineUserPresenceRef> NetIdStringToOnlineUserPresenceMap;

	/** Id map to keep track of which friends have been processed during async user info queries */
	TMap<int32, TArray<EOS_EpicAccountId>> IsFriendQueryUserInfoOngoingForLocalUserMap;
	/** Id map to keep track of which players still need their external id synced */
	TMap<int32, TArray<FString>> IsPlayerQueryExternalMappingsOngoingForLocalUserMap;

	/** Cache for the info passed on to ReadFriendsList, kept while user info queries complete */
	struct ReadUserListInfo
	{
		const int32 LocalUserNum;
		const FString ListName;
		const FOnReadFriendsListComplete Delegate;

		ReadUserListInfo(int32 InLocalUserNum, const FString& InListName, FOnReadFriendsListComplete InDelegate)
			: LocalUserNum(InLocalUserNum), ListName(InListName), Delegate(MoveTemp(InDelegate))
		{
		}

		void ExecuteDelegateIfBound(bool bWasSuccessful, const FString& ErrorStr) const
		{
			Delegate.ExecuteIfBound(LocalUserNum, bWasSuccessful, ListName, ErrorStr);
		};
	};

	TMap<int32, TArray<ReadUserListInfo>> CachedReadUserListInfoForLocalUserMap;

	/** Identifier for the external UI notification callback */
	EOS_NotificationId DisplaySettingsUpdatedId = EOS_INVALID_NOTIFICATIONID;
	FCallbackBase* DisplaySettingsUpdatedCallback = nullptr;

	/** Last Login Credentials used for a login attempt */
	TMap<int32, TSharedRef<FOnlineAccountCredentials>> LocalUserNumToLastLoginCredentials;
};

typedef TSharedPtr<FUserManagerEOS, ESPMode::ThreadSafe> FUserManagerEOSPtr;
typedef TWeakPtr<FUserManagerEOS, ESPMode::ThreadSafe> FUserManagerEOSWeakPtr;
typedef TWeakPtr<const FUserManagerEOS, ESPMode::ThreadSafe> FUserManagerEOSConstWeakPtr;

#endif
