// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/ChakraAbilitySystemGlobals.h"

#include "ChakraAbilityTypes.h"


FGameplayEffectContext* UChakraAbilitySystemGlobals::AllocGameplayEffectContext() const
{
	return new FChakraGameplayEffectContext();
}
