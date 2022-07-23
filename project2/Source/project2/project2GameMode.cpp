// Copyright Epic Games, Inc. All Rights Reserved.

#include "project2GameMode.h"
#include "project2Character.h"
#include "UObject/ConstructorHelpers.h"

Aproject2GameMode::Aproject2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
