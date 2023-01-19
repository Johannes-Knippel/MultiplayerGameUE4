// Fill out your copyright notice in the Description page of Project Settings.


#include "JohnsMultiplayerGameMode.h"

#include "GameFramework/PlayerStart.h"
#include "JohnsMultiplayer/Character/JohnsMultiplayerCharacter.h"
#include "JohnsMultiplayer/PlayerController/JohnsPlayerController.h"
#include "Kismet/GameplayStatics.h"

void AJohnsMultiplayerGameMode::PlayerEliminated(AJohnsMultiplayerCharacter* ElimmedCharacter,
	AJohnsPlayerController* VictimController, AJohnsPlayerController* AttackerController)
{
	if (ElimmedCharacter)
	{
		ElimmedCharacter->Elim();
	}
}

void AJohnsMultiplayerGameMode::RequestRespawn(ACharacter* ElimmedCharacter, AController* ElimmedController)
{
	if (ElimmedCharacter)
	{
		ElimmedCharacter->Reset(); //unpossesing
		ElimmedCharacter->Destroy();
	}
	if (ElimmedController)
	{
		TArray<AActor*> PlayerStarts;
		UGameplayStatics::GetAllActorsOfClass(this, APlayerStart::StaticClass(), PlayerStarts);
		int32 Selection = FMath::RandRange(0, PlayerStarts.Num() - 1);
		RestartPlayerAtPlayerStart(ElimmedController, PlayerStarts[Selection]);
	}
}

