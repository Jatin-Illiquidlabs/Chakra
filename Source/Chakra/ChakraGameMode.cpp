// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChakraGameMode.h"
#include "ChakraPlayerController.h"
#include "ChakraCharacter.h"
#include "UObject/ConstructorHelpers.h"

AChakraGameMode::AChakraGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AChakraPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}