// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/Abilities/GA_TeleportAbility.h"

#include "Actors/SwordProjectile.h"
#include "Character/ChakraCharacterBase.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GAS/ChakraAbilitySystemLibrary.h"
#include "Navigation/PathFollowingComponent.h"

UGA_TeleportAbility::UGA_TeleportAbility()
{
	SweepRadius = 20.0f;
	SweepDistanceFallback = 5000;
}

FString UGA_TeleportAbility::GetDescription(int32 Level)
{
	const int32 ScaledDamage = Damage.GetValueAtLevel(Level);
	const float ManaCost = FMath::Abs(GetManaCost(Level));
	const float Cooldown = GetCooldown(Level);
	if (Level == 1)
	{
		return FString::Printf(TEXT(
			// Title
			"<Title>FIRE BOLT</>\n\n"

			// Level
			"<Small>Level: </><Level>%d</>\n"
			// ManaCost
			"<Small>ManaCost: </><ManaCost>%.1f</>\n"
			// Cooldown
			"<Small>Cooldown: </><Cooldown>%.1f</>\n\n"
			
			"<Default>Launches a bolt of fire, "
			"exploding on impact and dealing: </>"

			// Damage
			"<Damage>%d</><Default> fire damage with"
			" a chance to burn</>"),

			// Values
			Level,
			ManaCost,
			Cooldown,
			ScaledDamage);
	}
	else
	{
		return FString::Printf(TEXT(
			// Title
			"<Title>FIRE BOLT</>\n\n"

			// Level
			"<Small>Level: </><Level>%d</>\n"
			// ManaCost
			"<Small>ManaCost: </><ManaCost>%.1f</>\n"
			// Cooldown
			"<Small>Cooldown: </><Cooldown>%.1f</>\n\n"

			// Number of FireBolts
			"<Default>Launches %d bolts of fire, "
			"exploding on impact and dealing: </>"

			// Damage
			"<Damage>%d</><Default> fire damage with"
			" a chance to burn</>"),

			// Values
			Level,
			ManaCost,
			Cooldown,
			FMath::Min(Level, NumProjectiles),
			ScaledDamage);		
	}
}

FString UGA_TeleportAbility::GetNextLevelDescription(int32 Level)
{
	const int32 ScaledDamage = Damage.GetValueAtLevel(Level);
	const float ManaCost = FMath::Abs(GetManaCost(Level));
	const float Cooldown = GetCooldown(Level);
	return FString::Printf(TEXT(
			// Title
			"<Title>NEXT LEVEL: </>\n\n"

			// Level
			"<Small>Level: </><Level>%d</>\n"
			// ManaCost
			"<Small>ManaCost: </><ManaCost>%.1f</>\n"
			// Cooldown
			"<Small>Cooldown: </><Cooldown>%.1f</>\n\n"

			// Number of FireBolts
			"<Default>Launches %d bolts of fire, "
			"exploding on impact and dealing: </>"

			// Damage
			"<Damage>%d</><Default> fire damage with"
			" a chance to burn</>"),

			// Values
			Level,
			ManaCost,
			Cooldown,
			FMath::Min(Level, NumProjectiles),
			ScaledDamage);
}

void UGA_TeleportAbility::ProjectileAttack(const FVector& ProjectileTargetLocation, const FGameplayTag& SocketTag)
{
	if (ensureAlways(ProjectileClass))
	{
		const FVector SocketLocation = ICombatInterface::Execute_GetCombatSocketLocation(
		GetAvatarActorFromActorInfo(),
		SocketTag);

		// Calculate TraceStart and TraceEnd
		FVector TraceStart = SocketLocation;
		FVector TraceEnd = ProjectileTargetLocation;

		// Perform a sweep and adjust TraceEnd if a blocking hit is found
		FCollisionShape Shape;
		Shape.SetSphere(SweepRadius);

		FCollisionQueryParams Params;
		Params.AddIgnoredActor(Cast<AChakraCharacterBase>(GetAvatarActorFromActorInfo()));

		FHitResult Hit;
		if (GetWorld()->SweepSingleByChannel(Hit, TraceStart, TraceEnd, FQuat::Identity, ECC_GameTraceChannel1, Shape, Params))
		{
			TraceEnd = Hit.ImpactPoint;
		}

		// Draw debug visuals (optional)
		DrawDebugSphere(GetWorld(), TraceEnd, 10.0f, 12, FColor::Red, false, 5.0f);
		DrawDebugLine(GetWorld(), TraceStart, TraceEnd, FColor::Green, false, 5.0f);

		// Find new direction/rotation from Hand pointing to impact point in the world.
		FRotator ProjRotation = (TraceEnd - SocketLocation).Rotation();

		// Initialize the projectile with the calculated TraceStart and TraceEnd
		ASwordProjectile* Projectile = GetWorld()->SpawnActor<ASwordProjectile>(ProjectileClass, TraceStart, ProjRotation);
		if (Projectile)
		{
			Projectile->InitializeProjectile(TraceStart, TraceEnd);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to spawn SwordProjectile!"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("ProjectileClass is not set in UGA_TeleportAbility!"));
	}
}

