// Fill out your copyright notice in the Description page of Project Settings.


#include "ChakraAssetManager.h"
#include "AbilitySystemGlobals.h"

void UChakraAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
	UAbilitySystemGlobals::Get().InitGlobalData();
	UE_LOG(LogTemp, Warning, TEXT("Hello World"))
}
