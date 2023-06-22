// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ChakraPlayerState.h"
#include "Chakra/ChakraCharacter.h"
#include "MyChakraCharacter.generated.h"

/**
 * 
 */
UCLASS()
class CHAKRA_API AMyChakraCharacter : public AChakraCharacter
{
	GENERATED_BODY()

public:
	AMyChakraCharacter(const class FObjectInitializer& ObjectInitializer);

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	virtual void PossessedBy(AController* NewController) override;

protected:

	bool ASCInputBound = false;

	FGameplayTag DeadTag;

	virtual void BeginPlay() override;

    virtual void OnRep_PlayerState() override;

	void BindASCInput();
	
	void InitializeStartingValues(AChakraPlayerState* PS);
};
