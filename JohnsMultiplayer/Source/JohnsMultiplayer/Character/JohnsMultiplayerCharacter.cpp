// Fill out your copyright notice in the Description page of Project Settings.


#include "JohnsMultiplayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Controller.h"
#include "Engine.h"
#include "Net/UnrealNetwork.h"
#include "JohnsMultiplayer/Weapon/Weapon.h"
#include "JohnsMultiplayer/CharacterComponents/CombatComponent.h"
#include "JohnsMultiplayer/JohnsMultiplayer.h"
#include "JohnsMultiplayer/PlayerController/JohnsPlayerController.h"
#include "JohnsMultiplayer/GameMode/JohnsMultiplayerGameMode.h"
#include "TimerManager.h"

AJohnsMultiplayerCharacter::AJohnsMultiplayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(30.f, 80.0f);
	SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	GetMesh()->SetCollisionObjectType(ECC_SkeletalMesh);
	
	//init CharacterMovement;
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->JumpZVelocity = 400.f;
	GetCharacterMovement()->AirControl = 0.3f;

	/*init camera
	Create a camera spring arm for third person view (pulls in towards the player if there is a collision)*/
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 300.0f;
	SpringArm->bUsePawnControlRotation = true;

	// Create a follow cam
	FollowCam = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCam->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	FollowCam->bUsePawnControlRotation = false;

	//Init the combat comp
	Combat = CreateDefaultSubobject<UCombatComponent>(TEXT("CombatComponent"));
	Combat->SetIsReplicated(true);

	//Init the hand sphere
	HandComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Hand"));
	HandComponent->SetupAttachment(RootComponent);
	HandComponent->SetRelativeLocation(RelativeHandLocation);
	HandComponent->SetRelativeScale3D(RelativeHandScale);

	//Init timeline comp
	DissolveTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("DissolveTimelineComponent"));
}

void AJohnsMultiplayerCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION(AJohnsMultiplayerCharacter, OverlappingWeapon, COND_OwnerOnly)
	DOREPLIFETIME(AJohnsMultiplayerCharacter, Health);
}

void AJohnsMultiplayerCharacter::OnRep_Health()
{
	UpdateHUDHealth();
}

void AJohnsMultiplayerCharacter::UpdateHUDHealth()
{
	JohnsPlayerController = JohnsPlayerController == nullptr ? Cast<AJohnsPlayerController>(Controller) : JohnsPlayerController;
	if (JohnsPlayerController)
	{
		JohnsPlayerController->SetHUDHealth(Health, MaxHealth);
	}
}

void AJohnsMultiplayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	Health = 100.f;
	UpdateHUDHealth();
	if (HasAuthority())
	{
		OnTakeAnyDamage.AddDynamic(this, &AJohnsMultiplayerCharacter::ReceiveDamage);
	}
}

void AJohnsMultiplayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	HideCameraIfCharacterClose();
}

void AJohnsMultiplayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &AJohnsMultiplayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AJohnsMultiplayerCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &AJohnsMultiplayerCharacter::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &AJohnsMultiplayerCharacter::LookUp);

	PlayerInputComponent->BindAction("Equip", IE_Pressed, this, &AJohnsMultiplayerCharacter::EquipButtonPressed);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AJohnsMultiplayerCharacter::FireButtonPressed);
	PlayerInputComponent->BindAction("Fire", IE_Released, this, &AJohnsMultiplayerCharacter::FireButtonReleased);
}

void AJohnsMultiplayerCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	if (Combat)
	{
		Combat->Character = this;
	}
}

void AJohnsMultiplayerCharacter::HideCameraIfCharacterClose()
{
	if (!IsLocallyControlled()) return;
	if ((FollowCam->GetComponentLocation() - GetActorLocation()).Size() < CameraThreshold)
	{
		GetMesh()->SetVisibility(false);
		if (Combat && Combat->EquippedWeapon && Combat->EquippedWeapon->GetWeaponMesh())
		{
			Combat->EquippedWeapon->GetWeaponMesh()->SetVisibility(false); // bOwnerNoSee = true;
		}
	}
	else
	{
		GetMesh()->SetVisibility(true);
		if (Combat && Combat->EquippedWeapon && Combat->EquippedWeapon->GetWeaponMesh())
		{
			Combat->EquippedWeapon->GetWeaponMesh()->SetVisibility(true);     //bOwnerNoSee = false;
		}
	}
}

void AJohnsMultiplayerCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		const FRotator YawRotation(0, Controller->GetControlRotation().Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AJohnsMultiplayerCharacter::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		const FRotator YawRotation(0, Controller->GetControlRotation().Yaw, 0);

		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);
	}
}

void AJohnsMultiplayerCharacter::Turn(float Value)
{
	AddControllerYawInput(Value);
}

void AJohnsMultiplayerCharacter::LookUp(float Value)
{
	AddControllerPitchInput(Value);
}

void AJohnsMultiplayerCharacter::EquipButtonPressed()
{
	if (Combat)
	{
		if (HasAuthority())
		{
			Combat->EquipWeapon(OverlappingWeapon);
		}
		else
		{
			ServerEquipButtonPressed();
		}
	}
}

void AJohnsMultiplayerCharacter::FireButtonPressed()
{
	if (Combat)
	{
		Combat->FireButtonPressed(true);
	}
}

void AJohnsMultiplayerCharacter::FireButtonReleased()
{
	if (Combat)
	{
		Combat->FireButtonPressed(false);
	}
}

void AJohnsMultiplayerCharacter::ReceiveDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType,
	AController* InstigatorController, AActor* DamageCauser)
{
	Health = FMath::Clamp(Health - Damage, 0.f, MaxHealth);
	UpdateHUDHealth();

	if (Health == 0.f)
	{
		AJohnsMultiplayerGameMode* JohnsMultiplayerGameMode = GetWorld()->GetAuthGameMode<AJohnsMultiplayerGameMode>();
		if (JohnsMultiplayerGameMode)
		{
			JohnsPlayerController = JohnsPlayerController == nullptr ? Cast<AJohnsPlayerController>(Controller) : JohnsPlayerController;
			AJohnsPlayerController* AttackerController = Cast<AJohnsPlayerController>(InstigatorController);
			JohnsMultiplayerGameMode->PlayerEliminated(this, JohnsPlayerController, AttackerController);
		}
	}
}

void AJohnsMultiplayerCharacter::Elim()
{
	MulticastElim();
	GetWorldTimerManager().SetTimer(
		ElimTimer,
		this,
		&AJohnsMultiplayerCharacter::ElimTimerFinished,
		ElimDelay
	);
}

void AJohnsMultiplayerCharacter::MulticastElim_Implementation()
{
	bElimmed = true;

	if (DissolveMaterialInstance)
	{
		DynamicDissolveMatInst = UMaterialInstanceDynamic::Create(DissolveMaterialInstance, this);
		GetMesh()->SetMaterial(0, DynamicDissolveMatInst);
		DynamicDissolveMatInst->SetScalarParameterValue(TEXT("Dissolve"), -0.55f);
		DynamicDissolveMatInst->SetScalarParameterValue(TEXT("Glow"), 200.f);
	}
	StartDissolve();
}

void AJohnsMultiplayerCharacter::ElimTimerFinished()
{
	AJohnsMultiplayerGameMode* JohnsGameMode = GetWorld()->GetAuthGameMode<AJohnsMultiplayerGameMode>();
	if (JohnsGameMode)
	{
		JohnsGameMode->RequestRespawn(this, Controller);
	}
}

void AJohnsMultiplayerCharacter::UpdateDissolveMaterial(float DissolveValue)
{
	if(DynamicDissolveMatInst)
	{
		DynamicDissolveMatInst->SetScalarParameterValue(TEXT("Dissolve"), DissolveValue);
	}
}

void AJohnsMultiplayerCharacter::StartDissolve()
{
	DissolveTrack.BindDynamic(this, &AJohnsMultiplayerCharacter::UpdateDissolveMaterial);
	if (DissolveCurve && DissolveTimeline)
	{
		DissolveTimeline->AddInterpFloat(DissolveCurve, DissolveTrack);
		DissolveTimeline->Play();
	}
}


void AJohnsMultiplayerCharacter::ServerEquipButtonPressed_Implementation()
{
	if (Combat)
	{
		Combat->EquipWeapon(OverlappingWeapon);
	}
}


void AJohnsMultiplayerCharacter::SetOverlappingWeapon(AWeapon* Weapon)
{
	if (OverlappingWeapon)
	{
		OverlappingWeapon->ShowPickupWidget(false);
	}
	
	OverlappingWeapon = Weapon;

	//Handle Player who is Server exception
	if (IsLocallyControlled())
	{
		if (OverlappingWeapon)
		{
			OverlappingWeapon->ShowPickupWidget(true);
		}
	}
}


void AJohnsMultiplayerCharacter::OnRep_OverlappingWeapon(AWeapon* LastWeapon)
{
	if (OverlappingWeapon)
	{
		OverlappingWeapon->ShowPickupWidget(true);
	}
	if (LastWeapon)
	{
		LastWeapon->ShowPickupWidget(false);
	}
}

bool AJohnsMultiplayerCharacter::IsWeaponEquipped()
{
	return (Combat && Combat->EquippedWeapon);
}


