// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ChakraPlayerState.h"

#include "Chakra/ChakraPlayerController.h"
#include "GAS/Attributes/GDAttributeSetBase.h"
#include "GAS/Abilities/ChakraAbilitySystemComponent.h"
#include "AbilitySystemComponent.h"
#include "Player/MyChakraCharacter.h"

AChakraPlayerState::AChakraPlayerState()
{
	// Create ability system component, and set it to be explicitly replicated
	AbilitySystemComponent = CreateDefaultSubobject<UChakraAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);

	// Mixed mode means we only are replicated the GEs to ourself, not the GEs to simulated proxies. If another GDPlayerState (Hero) receives a GE,
	// we won't be told about it by the Server. Attributes, GameplayTags, and GameplayCues will still replicate to us.
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	// Create the attribute set, this replicates by default
	// Adding it as a subobject of the owning actor of an AbilitySystemComponent
	// automatically registers the AttributeSet with the AbilitySystemComponent
	AttributeSetBase = CreateDefaultSubobject<UGDAttributeSetBase>(TEXT("AttributeSetBase"));

	// Set PlayerState's NetUpdateFrequency to the same as the Character.
	// Default is very low for PlayerStates and introduces perceived lag in the ability system.
	// 100 is probably way too high for a shipping game, you can adjust to fit your needs.
	NetUpdateFrequency = 100.0f;

	// Cache tags
	DeadTag = FGameplayTag::RequestGameplayTag(FName("State.Dead"));
}

UAbilitySystemComponent* AChakraPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UGDAttributeSetBase* AChakraPlayerState::GetAttributeSetBase() const
{
	return AttributeSetBase;
}

bool AChakraPlayerState::IsAlive() const
{
	return GetHealth() > 0.0f;
}

void AChakraPlayerState::ShowAbilityConfirmCancelText(bool ShowText)
{
	AChakraPlayerController* PC = Cast<AChakraPlayerController>(GetOwner());
	if (PC)
	{
		/*UGDHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->ShowAbilityConfirmCancelText(ShowText);
		}*/
	}
}

float AChakraPlayerState::GetHealth() const
{
	return AttributeSetBase->GetHealth();
}


float AChakraPlayerState::GetMaxHealth() const
{
	return AttributeSetBase->GetMaxHealth();
}

float AChakraPlayerState::GetHealthRegenRate() const
{
	return AttributeSetBase->GetHealthRegenRate();
}

float AChakraPlayerState::GetMana() const
{
	return AttributeSetBase->GetMana();
}

float AChakraPlayerState::GetMaxMana() const
{
	return AttributeSetBase->GetMaxMana();
}

float AChakraPlayerState::GetManaRegenRate() const
{
	return AttributeSetBase->GetManaRegenRate();
}

float AChakraPlayerState::GetStamina() const
{
	return AttributeSetBase->GetStamina();
}

float AChakraPlayerState::GetMaxStamina() const
{
	return AttributeSetBase->GetMaxStamina();
}

float AChakraPlayerState::GetStaminaRegenRate() const
{
	return AttributeSetBase->GetStaminaRegenRate();
}

float AChakraPlayerState::GetArmor() const
{
	return AttributeSetBase->GetArmor();
}

float AChakraPlayerState::GetMoveSpeed() const
{
	return AttributeSetBase->GetMoveSpeed();
}

int32 AChakraPlayerState::GetCharacterLevel() const
{
	return AttributeSetBase->GetCharacterLevel();
}

int32 AChakraPlayerState::GetXP() const
{
	return AttributeSetBase->GetXP();
}

int32 AChakraPlayerState::GetXPBounty() const
{
	return AttributeSetBase->GetXPBounty();
}

int32 AChakraPlayerState::GetGold() const
{
	return AttributeSetBase->GetGold();
}

int32 AChakraPlayerState::GetGoldBounty() const
{
	return AttributeSetBase->GetGoldBounty();
}

void AChakraPlayerState::BeginPlay()
{
	Super::BeginPlay();

	Super::BeginPlay();

	if (AbilitySystemComponent)
	{
		// Attribute change callbacks
		HealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetHealthAttribute()).AddUObject(this, &AChakraPlayerState::HealthChanged);
		MaxHealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetMaxHealthAttribute()).AddUObject(this, &AChakraPlayerState::MaxHealthChanged);
		HealthRegenRateChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetHealthRegenRateAttribute()).AddUObject(this, &AChakraPlayerState::HealthRegenRateChanged);
		ManaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetManaAttribute()).AddUObject(this, &AChakraPlayerState::ManaChanged);
		MaxManaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetMaxManaAttribute()).AddUObject(this, &AChakraPlayerState::MaxManaChanged);
		ManaRegenRateChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetManaRegenRateAttribute()).AddUObject(this, &AChakraPlayerState::ManaRegenRateChanged);
		StaminaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetStaminaAttribute()).AddUObject(this, &AChakraPlayerState::StaminaChanged);
		MaxStaminaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetMaxStaminaAttribute()).AddUObject(this, &AChakraPlayerState::MaxStaminaChanged);
		StaminaRegenRateChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetStaminaRegenRateAttribute()).AddUObject(this, &AChakraPlayerState::StaminaRegenRateChanged);
		XPChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetXPAttribute()).AddUObject(this, &AChakraPlayerState::XPChanged);
		GoldChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetGoldAttribute()).AddUObject(this, &AChakraPlayerState::GoldChanged);
		CharacterLevelChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetCharacterLevelAttribute()).AddUObject(this, &AChakraPlayerState::CharacterLevelChanged);

		// Tag change callbacks
		AbilitySystemComponent->RegisterGameplayTagEvent(FGameplayTag::RequestGameplayTag(FName("State.Debuff.Stun")), EGameplayTagEventType::NewOrRemoved).AddUObject(this, &AChakraPlayerState::StunTagChanged);
	}
}

void AChakraPlayerState::HealthChanged(const FOnAttributeChangeData& Data)
{
	float Health = Data.NewValue;

	// Update floating status bar
	AMyChakraCharacter* Hero = Cast<AMyChakraCharacter>(GetPawn());
	if (Hero)
	{
		/*UGDFloatingStatusBarWidget* HeroFloatingStatusBar = Hero->GetFloatingStatusBar();
		if (HeroFloatingStatusBar)
		{
			HeroFloatingStatusBar->SetHealthPercentage(Health / GetMaxHealth());
		}*/
	}

	// Update the HUD
	// Handled in the UI itself using the AsyncTaskAttributeChanged node as an example how to do it in Blueprint

	// If the player died, handle death
	if (!IsAlive() && !AbilitySystemComponent->HasMatchingGameplayTag(DeadTag))
	{
		if (Hero)
		{
			Hero->Die();
		}
	}
}

void AChakraPlayerState::MaxHealthChanged(const FOnAttributeChangeData& Data)
{
	float MaxHealth = Data.NewValue;

	// Update floating status bar
	AMyChakraCharacter* Hero = Cast<AMyChakraCharacter>(GetPawn());
	if (Hero)
	{
		/*UGDFloatingStatusBarWidget* HeroFloatingStatusBar = Hero->GetFloatingStatusBar();
		if (HeroFloatingStatusBar)
		{
			HeroFloatingStatusBar->SetHealthPercentage(GetHealth() / MaxHealth);
		}*/
	}

	// Update the HUD
	AChakraPlayerController* PC = Cast<AChakraPlayerController>(GetOwner());
	if (PC)
	{
		/*UGDHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetMaxHealth(MaxHealth);
		}*/
	}
}

void AChakraPlayerState::HealthRegenRateChanged(const FOnAttributeChangeData& Data)
{
	float HealthRegenRate = Data.NewValue;

	/*// Update the HUD
	AGDPlayerController* PC = Cast<AGDPlayerController>(GetOwner());
	if (PC)
	{
		UGDHUDWidget* HUD = PC->GetHUD();
		if (HUD)
		{
			HUD->SetHealthRegenRate(HealthRegenRate);
		}
	}*/
}

void AChakraPlayerState::ManaChanged(const FOnAttributeChangeData& Data)
{
	float Mana = Data.NewValue;
}

void AChakraPlayerState::MaxManaChanged(const FOnAttributeChangeData& Data)
{
	float MaxMana = Data.NewValue;
}

void AChakraPlayerState::ManaRegenRateChanged(const FOnAttributeChangeData& Data)
{
	float ManaRegenRate = Data.NewValue;
}

void AChakraPlayerState::StaminaChanged(const FOnAttributeChangeData& Data)
{
	float Stamina = Data.NewValue;
}

void AChakraPlayerState::MaxStaminaChanged(const FOnAttributeChangeData& Data)
{
	float MaxStamina = Data.NewValue;
}

void AChakraPlayerState::StaminaRegenRateChanged(const FOnAttributeChangeData& Data)
{
	float StaminaRegenRate = Data.NewValue;
}

void AChakraPlayerState::XPChanged(const FOnAttributeChangeData& Data)
{
	float XP = Data.NewValue;
}

void AChakraPlayerState::GoldChanged(const FOnAttributeChangeData& Data)
{
	float Gold = Data.NewValue;
}

void AChakraPlayerState::CharacterLevelChanged(const FOnAttributeChangeData& Data)
{
	float CharacterLevel = Data.NewValue;
}

void AChakraPlayerState::StunTagChanged(const FGameplayTag CallbackTag, int32 NewCount)
{
	if (NewCount > 0)
	{
		FGameplayTagContainer AbilityTagsToCancel;
		AbilityTagsToCancel.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability")));

		FGameplayTagContainer AbilityTagsToIgnore;
		AbilityTagsToIgnore.AddTag(FGameplayTag::RequestGameplayTag(FName("Ability.NotCanceledByStun")));

		AbilitySystemComponent->CancelAbilities(&AbilityTagsToCancel, &AbilityTagsToIgnore);
	}
}
