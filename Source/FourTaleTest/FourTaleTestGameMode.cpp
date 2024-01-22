// Copyright Epic Games, Inc. All Rights Reserved.

#include "FourTaleTestGameMode.h"
#include "FourTaleTestCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "TimerManager.h"

AFourTaleTestGameMode::AFourTaleTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

#define PrintString(String) GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, String)

//	void GameTimer();

//	{

//		GetWorld()->GetTimerManager().SetTimer(GameTimerHandle, this, TimerTick, 1.f, true);

//	}

//	void TimerTick();
//	{
//		RoundTime = RoundTime - 1;

//		if (RoundTime <= 0)
//		{

//			GameEnd;

//		}
//	}
}

