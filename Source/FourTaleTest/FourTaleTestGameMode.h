// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FourTaleTestGameMode.generated.h"

UCLASS(minimalapi)
class AFourTaleTestGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AFourTaleTestGameMode();

	//void GameTimer();
	//void TimerTick();
	//void GameEnd();
	
	FTimerHandle GameTimerHandle;

protected:

	UPROPERTY(EditDefaultsOnly, Category = "GameplaySetting")
	float RoundTime;

};



