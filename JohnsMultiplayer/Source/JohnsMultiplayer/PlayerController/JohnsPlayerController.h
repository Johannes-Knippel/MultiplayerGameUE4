// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "JohnsPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class JOHNSMULTIPLAYER_API AJohnsPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	void SetHUDHealth(float Health, float MaxHealth);

private:
	class AJohnsHUD* JohnsHUD;

protected:
	virtual void BeginPlay() override;
};
