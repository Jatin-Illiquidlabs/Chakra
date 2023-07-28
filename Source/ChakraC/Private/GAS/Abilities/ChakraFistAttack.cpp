// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abilities/ChakraFistAttack.h"

#include "Character/ChakraCharacter.h"

void UChakraFistAttack::TriggerMeleeAttack()
{
	AChakraCharacter* OwningCharacter = Cast<AChakraCharacter>(GetAvatarActorFromActorInfo());
	if (!OwningCharacter)
	{
		return;
	}
	
	if (TargetEnemy)
	{
		LookAtTargetEnemy();
	}
}

void UChakraFistAttack::LookAtTargetEnemy()
	{
		if (!TargetEnemy)
		{
			return;
		}

		// Get the owner of the ability
		AChakraCharacter* OwningCharacter = Cast<AChakraCharacter>(GetAvatarActorFromActorInfo());
		if (!OwningCharacter)
		{
			return;
		}

		// Calculate the direction to the target enemy
		FVector TargetDirection = TargetEnemy->GetActorLocation() - OwningCharacter->GetActorLocation();
		TargetDirection.Z = 0.0f; // Ignore the Z component for 2D rotation

		// Set the owner character's rotation towards the target enemy
		OwningCharacter->SetActorRotation(TargetDirection.Rotation());
	}
