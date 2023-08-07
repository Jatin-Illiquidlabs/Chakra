// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/ChakraProjectileBase.h"
#include "Actors/SwordProjectile.h"
#include "GAS/Abilities/DamageChakraGameplayAbility.h"
#include "GA_ChakraSpawnSword.generated.h"

/**
 * 
 */
UCLASS()
class CHAKRAC_API UGA_ChakraSpawnSword : public UDamageChakraGameplayAbility
{
	GENERATED_BODY()
protected:

	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	UFUNCTION(BlueprintCallable, Category = "Projectile")
	void SpawnProjectile(const FVector& ProjectileTargetLocation, const FGameplayTag& SocketTag, bool bOverridePitch = false, float PitchOverride = 0.f);
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<ASwordProjectile> ProjectileClass;

	UPROPERTY(EditDefaultsOnly)
	int32 NumProjectiles = 5;
};