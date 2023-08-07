 // Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/SwordProjectile.h"

ASwordProjectile::ASwordProjectile()
{
 PrimaryActorTick.bCanEverTick = true;

 MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
 MeshComponent->SetupAttachment(RootComponent);
 // Assuming you have a mesh assigned to the MeshComponent in the Editor.
 // If not, you can do it programmatically.

 SetReplicates(true);

 // Directly set bool instead of going through SetReplicates(true) within constructor,
 // Only use SetReplicates() outside constructor
 bReplicates = true;
}

void ASwordProjectile::BeginPlay()
{
 Super::BeginPlay();

 InitialLocation = GetActorLocation();
}

void ASwordProjectile::Tick(float DeltaTime)
{
 Super::Tick(DeltaTime);

 if (ProjectileSpeed > 0.0f)
 {
  FVector CurrentLocation = GetActorLocation();
  FVector NewLocation = FMath::VInterpConstantTo(CurrentLocation, TargetLocation, DeltaTime, ProjectileSpeed);
  SetActorLocation(NewLocation);

  if (GetActorLocation().Equals(TargetLocation, 1.0f))
  {
   // The projectile has reached the target, so stop its movement.
   ProjectileSpeed = 0.0f;

   FString DebugMessage = FString::Printf(TEXT("Projectile reached target location: %s"));
   GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, DebugMessage);
   
   
  }
 }
 
}

void ASwordProjectile::InitializeProjectile(FVector SpawnLocation, FVector Target)
{
 SetActorLocation(SpawnLocation);
 TargetLocation = Target;
}