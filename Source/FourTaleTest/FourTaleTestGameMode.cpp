// Copyright Epic Games, Inc. All Rights Reserved.

#include "FourTaleTestGameMode.h"
#include "FourTaleTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFourTaleTestGameMode::AFourTaleTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
