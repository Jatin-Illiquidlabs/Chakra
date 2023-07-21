// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abilities/ChakraSpawnProjectile.h"

#include "Kismet/KismetMathLibrary.h"


void UChakraSpawnProjectile::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                             const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                             const FGameplayEventData* TriggerEventData)
{
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

void UChakraSpawnProjectile::SpawnProjectile(const FVector& ProjectileTargetLocation, const FGameplayTag& SocketTag, bool bOverridePitch, float PitchOverride)
{
	const bool bIsServer = GetAvatarActorFromActorInfo()->HasAuthority();
	if (!bIsServer) return;
	
	const FVector SocketLocation = ICombatInterface::Execute_GetCombatSocketLocation(
		GetAvatarActorFromActorInfo(),
		SocketTag);
	
	const auto Rotation = UKismetMathLibrary::FindLookAtRotation(SocketLocation, ProjectileTargetLocation);

	FCollisionQueryParams queryParams;
	queryParams.AddIgnoredActor(GetAvatarActorFromActorInfo());
	queryParams.bTraceComplex = true;
	queryParams.bReturnPhysicalMaterial = true;
	
	FTransform SpawnTransform;
	SpawnTransform.SetLocation(SocketLocation);
	SpawnTransform.SetRotation(FQuat(Rotation));
		
	AChakraProjectileBase* Projectile = GetWorld()->SpawnActorDeferred<AChakraProjectileBase>(
		ProjectileClass,
		SpawnTransform,
		GetOwningActorFromActorInfo(),
		Cast<APawn>(GetOwningActorFromActorInfo()),
		ESpawnActorCollisionHandlingMethod::AlwaysSpawn);
	
	Projectile->DamageEffectParams = MakeDamageEffectParamsFromClassDefaults();
		
	Projectile->FinishSpawning(SpawnTransform);
}
