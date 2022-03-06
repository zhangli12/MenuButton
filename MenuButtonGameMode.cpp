// Copyright Epic Games, Inc. All Rights Reserved.

#include "MenuButtonGameMode.h"
#include "MenuButtonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMenuButtonGameMode::AMenuButtonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
