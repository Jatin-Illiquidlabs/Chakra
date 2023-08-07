// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/ChakraProjectileBase.h"
#include "SwordProjectile.generated.h"

/**
 * 
 */
UCLASS()
class CHAKRAC_API ASwordProjectile : public AChakraProjectileBase
{
	GENERATED_BODY()

public:
	ASwordProjectile();

	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(BlueprintReadOnly)
	FVector TargetLocation;
	

	void InitializeProjectile(FVector SpawnLocation, FVector Target);

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Movement")
	float ProjectileSpeed = 1000.0f;

	FVector InitialLocation;
	

};
