// Fill out your copyright notice in the Description page of Project Settings.


#include "JohnsPlayerController.h"
#include "JohnsMultiplayer/HUD/JohnsHUD.h"
#include "JohnsMultiplayer/HUD/CharacterOverlay.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"



void AJohnsPlayerController::BeginPlay()
{
	Super::BeginPlay();

	JohnsHUD = Cast<AJohnsHUD>(GetHUD());
}

void AJohnsPlayerController::SetHUDHealth(float Health, float MaxHealth)
{
	JohnsHUD = JohnsHUD == nullptr ? Cast<AJohnsHUD>(GetHUD()) : JohnsHUD;
	bool bHUDValid = JohnsHUD &&
		JohnsHUD->CharacterOverlay &&
		JohnsHUD->CharacterOverlay->HealthBar &&
		JohnsHUD->CharacterOverlay->HealthText;
	if (bHUDValid)
	{
		const float HealthPercent = Health / MaxHealth;
		JohnsHUD->CharacterOverlay->HealthBar->SetPercent(HealthPercent);
		FString HealthText = FString::Printf(TEXT(" % d / % d"), FMath::CeilToInt(Health), FMath::CeilToInt(MaxHealth));
		JohnsHUD->CharacterOverlay->HealthText->SetText(FText::FromString(HealthText));
	}
}