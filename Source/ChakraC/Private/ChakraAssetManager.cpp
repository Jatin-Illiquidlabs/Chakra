// Fill out your copyright notice in the Description page of Project Settings.


#include "ChakraAssetManager.h"

#include "AbilitySystemGlobals.h"
#include "ChakraGameplayTags.h"

UChakraAssetManager& UChakraAssetManager::Get()
{
	check(GEngine);
	
	UChakraAssetManager* ChakraAssetManager = Cast<UChakraAssetManager>(GEngine->AssetManager);
	return *ChakraAssetManager;
}

void UChakraAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
	FChakraGameplayTags::InitializeNativeGameplayTags();

	// This is required to use Target Data!
	UAbilitySystemGlobals::Get().InitGlobalData();
}
