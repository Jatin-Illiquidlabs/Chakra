#include "WaveActor.h"

#include "Animation/AnimInstanceProxy.h"
#include "Components/AudioComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "PhysicsEngine/RadialForceComponent.h"

// Sets default values
AWaveActor::AWaveActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    SphereComp = CreateDefaultSubobject<USphereComponent>("Sphere");
	SphereComp->SetCollisionProfileName("Projectile");
	SphereComp->OnComponentHit.AddDynamic(this, &AWaveActor::OnActorHit);
	RootComponent = SphereComp;

	AudioComp = CreateDefaultSubobject<UAudioComponent>("AudiComp");
	AudioComp->SetupAttachment(SphereComp);

	EffectComp = CreateDefaultSubobject<UParticleSystemComponent>("Particle");
	EffectComp->SetupAttachment(RootComponent);

	ImpactVFX = CreateDefaultSubobject<UParticleSystem>("Particle2");

	MoveComp = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovement");
	MoveComp->bRotationFollowsVelocity = true;
	MoveComp->bInitialVelocityInLocalSpace = true;
	MoveComp->ProjectileGravityScale = 0.0f;
	MoveComp->InitialSpeed = 8000;

	RadialComp = CreateDefaultSubobject<URadialForceComponent>("ForceComp");
	RadialComp->SetupAttachment(SphereComp);

	RadialComp->SetAutoActivate(false);
	
	RadialComp->Radius = 750.0f;
	RadialComp->ImpulseStrength = -2500.0f;
	RadialComp->bImpulseVelChange = true;

	RadialComp->AddCollisionChannelToAffect(ECC_WorldDynamic);
	
}

// Called when the game starts or when spawned
void AWaveActor::BeginPlay()
{
	Super::BeginPlay();
	
	RadialComp->SetAutoActivate(true);
	SphereComp->IgnoreActorWhenMoving(GetInstigator(), true);
	
}

void AWaveActor::OnActorHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	FVector NormalImpulse, const FHitResult& Hit)
{
	UGameplayStatics::PlaySoundAtLocation(this, Magic_Impact, Hit.ImpactPoint);
	Explode();
	Destroy();
}

void AWaveActor::Explode_Implementation()
{
	if (ensure(!IsPendingKill()))
	{
		UGameplayStatics::SpawnEmitterAtLocation(this, ImpactVFX, GetActorLocation(), GetActorRotation());
		Destroy();
	}
}

void AWaveActor::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

// Called every frame
void AWaveActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}