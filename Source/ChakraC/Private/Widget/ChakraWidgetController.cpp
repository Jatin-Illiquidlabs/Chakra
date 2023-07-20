// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/ChakraWidgetController.h"

#include "Game/ChakraPlayerController.h"
#include "Game/ChakraPlayerState.h"
#include "GAS/ChakraAbilitySystemComponent.h"
#include "GAS/ChakraAttributeSet.h"


void UChakraWidgetController::SetWidgetControllerParams(const FWidgetControllerParams& WCParams)
{
	PlayerController = WCParams.PlayerController;
	PlayerState = WCParams.PlayerState;
	AbilitySystemComponent = WCParams.AbilitySystemComponent;
	AttributeSet = WCParams.AttributeSet;
}

void UChakraWidgetController::BroadcastInitialValues()
{
	
}

void UChakraWidgetController::BindCallbacksToDependencies()
{
	
}

void UChakraWidgetController::BroadcastAbilityInfo()
{
	if (!GetAuraASC()->bStartupAbilitiesGiven) return;

	FForEachAbility BroadcastDelegate;
	BroadcastDelegate.BindLambda([this](const FGameplayAbilitySpec& AbilitySpec)
	{
		FChakraAbilityInfo Info = AbilityInfo->FindAbilityInfoForTag(AuraAbilitySystemComponent->GetAbilityTagFromSpec(AbilitySpec));
		Info.InputTag = AuraAbilitySystemComponent->GetInputTagFromSpec(AbilitySpec);
		Info.StatusTag = AuraAbilitySystemComponent->GetStatusFromSpec(AbilitySpec);
		AbilityInfoDelegate.Broadcast(Info);
	});
	GetAuraASC()->ForEachAbility(BroadcastDelegate);
}

AChakraPlayerController* UChakraWidgetController::GetAuraPC()
{
	if (AuraPlayerController == nullptr)
	{
		AuraPlayerController = Cast<AChakraPlayerController>(PlayerController);
	}
	return AuraPlayerController;
}

AChakraPlayerState* UChakraWidgetController::GetAuraPS()
{
	if (AuraPlayerState == nullptr)
	{
		AuraPlayerState = Cast<AChakraPlayerState>(PlayerState);
	}
	return AuraPlayerState;
}

UChakraAbilitySystemComponent* UChakraWidgetController::GetAuraASC()
{
	if (AuraAbilitySystemComponent == nullptr)
	{
		AuraAbilitySystemComponent = Cast<UChakraAbilitySystemComponent>(AbilitySystemComponent);
	}
	return AuraAbilitySystemComponent;
}

UChakraAttributeSet* UChakraWidgetController::GetAuraAS()
{
	if (AuraAttributeSet == nullptr)
	{
		AuraAttributeSet = Cast<UChakraAttributeSet>(AttributeSet);
	}
	return AuraAttributeSet;
}
