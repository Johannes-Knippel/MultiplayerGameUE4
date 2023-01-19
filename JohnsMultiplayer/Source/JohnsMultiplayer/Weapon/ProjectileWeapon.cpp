// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileWeapon.h"
#include "Projectile.h"

void AProjectileWeapon::Fire(const FVector& HitTarget)
{
	Super::Fire(HitTarget);
	
	if (!HasAuthority()) return;
	APawn* InstigatorPawn = Cast<APawn>(GetOwner());

	if (GetWeaponMesh())
	{
		FTransform SocketTransform = GetProjectileSpawnLocationMeshComponent()->GetComponentTransform();
		//From our weaponMesh to hit location from TraceUnderCrosshairs
		FVector ToTarget = HitTarget - SocketTransform.GetLocation();
		FRotator TargetRotation = ToTarget.Rotation();
		
		if (ProjectileClass)
		{
			FActorSpawnParameters SpawnParameters;
			SpawnParameters.Owner = GetOwner();
			SpawnParameters.Instigator = InstigatorPawn;
			UWorld* World = GetWorld();
			if (World)
			{
				World->SpawnActor<AProjectile>(
					ProjectileClass,
					GetProjectileSpawnLocationMeshComponent()->GetComponentLocation(),
					TargetRotation,
					SpawnParameters
					);
				/*if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("%f,%f,%f"), 
					GetProjectileSpawnLocationMeshComponent()->GetComponentLocation().X,
					GetProjectileSpawnLocationMeshComponent()->GetComponentLocation().Y,
					GetProjectileSpawnLocationMeshComponent()->GetComponentLocation().Z));*/
			}
		}
	}
}
