// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abilities/ChakraAbilitySystemComponent.h"

void UChakraAbilitySystemComponent::ReceiveDamage(UChakraAbilitySystemComponent* SourceASC, float UnmitigatedDamage,
	float MitigatedDamage)
{
	ReceivedDamage.Broadcast(SourceASC, UnmitigatedDamage, MitigatedDamage);
}
