// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/ChakraPlayerState.h"

#include "GAS/ChakraAbilitySystemComponent.h"
#include "GAS/ChakraAttributeSet.h"
#include "Net/UnrealNetwork.h"


AChakraPlayerState::AChakraPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UChakraAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UChakraAttributeSet>("AttributeSet");
	
	NetUpdateFrequency = 100.f;
}

void AChakraPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(AChakraPlayerState, Level);
	DOREPLIFETIME(AChakraPlayerState, XP);
	DOREPLIFETIME(AChakraPlayerState, AttributePoints);
	DOREPLIFETIME(AChakraPlayerState, SpellPoints);
}

UAbilitySystemComponent* AChakraPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void AChakraPlayerState::AddToXP(int32 InXP)
{
	XP += InXP;
	OnXPChangedDelegate.Broadcast(XP);
}

void AChakraPlayerState::AddToLevel(int32 InLevel)
{
	Level += InLevel;
	OnLevelChangedDelegate.Broadcast(Level);
}

void AChakraPlayerState::SetXP(int32 InXP)
{
	XP = InXP;
	OnXPChangedDelegate.Broadcast(XP);
}

void AChakraPlayerState::SetLevel(int32 InLevel)
{
	Level = InLevel;
	OnLevelChangedDelegate.Broadcast(Level);
}

void AChakraPlayerState::OnRep_Level(int32 OldLevel)
{
	OnLevelChangedDelegate.Broadcast(Level);
}

void AChakraPlayerState::OnRep_XP(int32 OldXP)
{
	OnXPChangedDelegate.Broadcast(XP);
}

void AChakraPlayerState::OnRep_AttributePoints(int32 OldAttributePoints)
{
	OnAttributePointsChangedDelegate.Broadcast(AttributePoints);
}

void AChakraPlayerState::OnRep_SpellPoints(int32 OldSpellPoints)
{
	OnSpellPointsChangedDelegate.Broadcast(SpellPoints);
}

void AChakraPlayerState::AddToAttributePoints(int32 InPoints)
{
	AttributePoints += InPoints;
	OnAttributePointsChangedDelegate.Broadcast(AttributePoints);
}

void AChakraPlayerState::AddToSpellPoints(int32 InPoints)
{
	SpellPoints += InPoints;
	OnSpellPointsChangedDelegate.Broadcast(SpellPoints);
}