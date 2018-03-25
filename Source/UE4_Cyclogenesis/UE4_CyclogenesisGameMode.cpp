// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UE4_CyclogenesisGameMode.h"
#include "UE4_CyclogenesisCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4_CyclogenesisGameMode::AUE4_CyclogenesisGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
