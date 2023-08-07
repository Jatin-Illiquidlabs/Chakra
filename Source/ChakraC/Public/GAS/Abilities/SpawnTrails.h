// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/ChakraProjectileBase.h"
#include "GAS/Abilities/DamageChakraGameplayAbility.h"
#include "SpawnTrails.generated.h"

/**
 * 
 */
UCLASS()
class CHAKRAC_API USpawnTrails : public UDamageChakraGameplayAbility
{
	GENERATED_BODY()

	USpawnTrails();
	
	virtual FString GetDescription(int32 Level) override;
	virtual FString GetNextLevelDescription(int32 Level) override;

	UFUNCTION(BlueprintCallable)
	void SpawnTrail(const FVector& ProjectileTargetLocation);

protected:

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<AChakraProjectileBase> ProjectileClass;
	
	UPROPERTY(EditAnywhere, Category="Targeting")
	float SweepRadius;

	/* Fallback distance when sweep finds no collision under crosshair. Adjusts final projectile direction */
	UPROPERTY(EditAnywhere, Category="Targeting")
	float SweepDistanceFallback;
	
	UPROPERTY(EditDefaultsOnly)
	int32 NumProjectiles = 5;
	
};
