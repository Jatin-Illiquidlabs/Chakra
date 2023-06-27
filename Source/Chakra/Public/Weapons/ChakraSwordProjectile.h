// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Player/Weapons/ChakraProjectileBase.h"
#include "ChakraSwordProjectile.generated.h"

class UStaticMeshComponent;

/**
 * 
 */
UCLASS()
class CHAKRA_API AChakraSwordProjectile : public AChakraProjectileBase
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AChakraSwordProjectile();
	
protected:


	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	TObjectPtr<UStaticMeshComponent> StatMesh;

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	TObjectPtr<UNiagaraComponent> NiagaraEffect1;

	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	TObjectPtr<UNiagaraComponent> NiagaraEffect2;
};
