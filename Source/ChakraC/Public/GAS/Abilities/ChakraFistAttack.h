// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/ChakraEnemyCharacter.h"
#include "GAS/Abilities/DamageChakraGameplayAbility.h"
#include "ChakraFistAttack.generated.h"

/**
 * 
 */
UCLASS()
class CHAKRAC_API UChakraFistAttack : public UDamageChakraGameplayAbility
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Melee Attack")
	void TriggerMeleeAttack();

protected:
	AChakraEnemyCharacter* TargetEnemy;

private:
	
	void LookAtTargetEnemy();
};
