// Copyright Epic Games, Inc. All Rights Reserved.


#include "JohnsMultiplayerGameModeBase.h"

AJohnsMultiplayerGameModeBase::AJohnsMultiplayerGameModeBase()
{
	//set our bp character to be the default pawn (same structure as in Unreal Template)
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBP(TEXT("/Game/Blueprints/Character/BP_JohnsMultiplayerCharacter"));
	if (PlayerPawnBP.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBP.Class;
	}
}
