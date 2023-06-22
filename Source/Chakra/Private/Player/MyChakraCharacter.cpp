// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/MyChakraCharacter.h"
#include "AI/ChakraAIController.h"
#include "GAS/Abilities/ChakraAbilitySystemComponent.h"
#include "Player/ChakraPlayerState.h"

AMyChakraCharacter::AMyChakraCharacter(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	AIControllerClass = AChakraAIController::StaticClass();

	DeadTag = FGameplayTag::RequestGameplayTag(FName("State.Dead"));
}

void AMyChakraCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	BindASCInput();
}

void AMyChakraCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	AChakraPlayerState* PS = GetPlayerState<AChakraPlayerState>();

	if (PS)
	{

		InitializeStartingValues(PS);
		AddStartupEffects();
		AddCharacterAbilities();
	}
}

void AMyChakraCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AMyChakraCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	AChakraPlayerState* PS = GetPlayerState<AChakraPlayerState>();

	if (PS)
	{
		InitializeStartingValues(PS);
		BindASCInput();
		InitializeAttributes();
	}
}

void AMyChakraCharacter::BindASCInput()
{
	if (!ASCInputBound && AbilitySystemComponent.IsValid() && IsValid(InputComponent))
	{
		AbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent, FGameplayAbilityInputBinds(FString("ConfirmTarget"),
			FString("CancelTarget"), FString("EGDAbilityInputID"), static_cast<int32>(EGDAbilityInputID::Confirm), static_cast<int32>(EGDAbilityInputID::Cancel)));
		ASCInputBound = true;
	}
}

void AMyChakraCharacter::InitializeStartingValues(AChakraPlayerState* PS)
{
		AbilitySystemComponent = Cast<UChakraAbilitySystemComponent>(PS->GetAbilitySystemComponent());
		PS->GetAbilitySystemComponent()->InitAbilityActorInfo(PS, this);
		AttributeSetBase = PS->GetAttributeSetBase();
		AbilitySystemComponent->SetTagMapCount(DeadTag, 0);
		SetHealth(GetMaxHealth());
		SetMana(GetMaxMana());
}
