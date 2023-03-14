// Copyright Epic Games, Inc. All Rights Reserved.

#include "vectors3dGameMode.h"
#include "vectors3dCharacter.h"
#include "UObject/ConstructorHelpers.h"

Avectors3dGameMode::Avectors3dGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
