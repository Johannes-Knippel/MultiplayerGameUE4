// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "JohnsMultiplayerGameMode.generated.h"

/**
 * 
 */
UCLASS()
class JOHNSMULTIPLAYER_API AJohnsMultiplayerGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	virtual void PlayerEliminated(class AJohnsMultiplayerCharacter* ElimmedCharacter, class AJohnsPlayerController* VictimController, AJohnsPlayerController* AttackerController);
	virtual void RequestRespawn(class ACharacter* ElimmedCharacter, AController* ElimmedController);
};
