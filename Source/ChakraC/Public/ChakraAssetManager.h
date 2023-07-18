// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "ChakraAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class CHAKRAC_API UChakraAssetManager : public UAssetManager
{
	GENERATED_BODY()
public:

	static UChakraAssetManager& Get();

protected:

	virtual void StartInitialLoading() override;
};
