// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "ChakraAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class CHAKRA_API UChakraAssetManager : public UAssetManager
{
	GENERATED_BODY()
	
public:
	
	virtual void StartInitialLoading() override;
};
