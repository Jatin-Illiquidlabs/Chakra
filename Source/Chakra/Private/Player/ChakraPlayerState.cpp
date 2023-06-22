// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/ChakraPlayerState.h"
#include "GAS/Attributes/GDAttributeSetBase.h"
#include "GAS/Abilities/ChakraAbilitySystemComponent.h"

AChakraPlayerState::AChakraPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UChakraAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSetBase = CreateDefaultSubobject<UGDAttributeSetBase>(TEXT("AttributeSetBase"));

	NetUpdateFrequency = 100.0f;

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
	// TODO -- implement HUD
}

float AChakraPlayerState::GetHealth() const
{
	return AttributeSetBase->GetHealth();
}

float AChakraPlayerState::GetMaxHealth() const
{
	return AttributeSetBase->GetMaxHealth();
}

float AChakraPlayerState::GetMana() const
{
	return AttributeSetBase->GetMana();
}

float AChakraPlayerState::GetMaxMana() const
{
	return AttributeSetBase->GetMaxMana();
}

int32 AChakraPlayerState::GetCharacterLevel() const
{
	return AttributeSetBase->GetCharacterLevel();
}

void AChakraPlayerState::BeginPlay()
{
	Super::BeginPlay();

	if (AbilitySystemComponent)
	{
		HealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetHealthAttribute()).AddUObject(this, &AChakraPlayerState::HealthChanged);
		MaxHealthChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetHealthAttribute()).AddUObject(this, &AChakraPlayerState::MaxHealthChanged);
		ManaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetHealthAttribute()).AddUObject(this, &AChakraPlayerState::ManaChanged);
		MaxManaChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetHealthAttribute()).AddUObject(this, &AChakraPlayerState::MaxManaChanged);
		CharacterLevelChangedDelegateHandle = AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSetBase->GetHealthAttribute()).AddUObject(this, &AChakraPlayerState::CharacterLevelChanged);

		AbilitySystemComponent->RegisterGameplayTagEvent(FGameplayTag::RequestGameplayTag(FName("State.Debuff.Stun")), EGameplayTagEventType::NewOrRemoved).AddUObject(this, &AChakraPlayerState::StunTagChanged);
		
	}
}

void AChakraPlayerState::HealthChanged(const FOnAttributeChangeData& Data)
{
	UE_LOG(LogTemp, Warning, TEXT("Health Changed!"));
}

void AChakraPlayerState::MaxHealthChanged(const FOnAttributeChangeData& Data)
{
	UE_LOG(LogTemp, Warning, TEXT("Max Helth Changed!"));
}

void AChakraPlayerState::ManaChanged(const FOnAttributeChangeData& Data)
{
	UE_LOG(LogTemp, Warning, TEXT("Mana Changed!"));
}

void AChakraPlayerState::MaxManaChanged(const FOnAttributeChangeData& Data)
{
	UE_LOG(LogTemp, Warning, TEXT("Max Mana Changed!"));
}

void AChakraPlayerState::CharacterLevelChanged(const FOnAttributeChangeData& Data)
{
	UE_LOG(LogTemp, Warning, TEXT("Character Level Changed!"));
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
