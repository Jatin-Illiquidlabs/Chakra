 // Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ChakraCharacter.h"

#include "ChakraGameplayTags.h"
#include "Camera/CameraComponent.h"
#include "NiagaraComponent.h"
#include "Character/ChakraEnemyCharacter.h"
#include "Components/ArrowComponent.h"
#include "Components/SphereComponent.h"
#include "Data/LevelUpInfo.h"
#include "Game/ChakraPlayerController.h"
#include "Game/ChakraPlayerState.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GAS/ChakraAbilitySystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

 AChakraCharacter::AChakraCharacter()
{
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>("CameraBoom");
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->SetUsingAbsoluteRotation(true);
	CameraBoom->bDoCollisionTest = false;

 	OverlapSphere = CreateDefaultSubobject<USphereComponent>(TEXT("OverlapSphere"));
 	OverlapSphere->SetupAttachment(GetRootComponent());
 	OverlapSphere->SetSphereRadius(700.f); // Sphere yarıçapını ihtiyacınıza göre ayarlayın
 	OverlapSphere->OnComponentBeginOverlap.AddDynamic(this, &AChakraCharacter::OnEnemyEnterDetectionSphere);

 	OverlappingEnemies.Empty();

	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>("TopDownCameraComponent");
	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false;
	
	LevelUpNiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>("LevelUpNiagaraComponent");
	LevelUpNiagaraComponent->SetupAttachment(GetRootComponent());
	LevelUpNiagaraComponent->bAutoActivate = false;
	
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	CharacterClass = ECharacterClass::Elementalist;
}

void AChakraCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	// Init ability actor info for the Server
	InitAbilityActorInfo();
	AddCharacterAbilities();
}

void AChakraCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	// Init ability actor info for the Client
	InitAbilityActorInfo();
}

void AChakraCharacter::AddToXP_Implementation(int32 InXP)
{
	AChakraPlayerState* ChakraPlayerState = GetPlayerState<AChakraPlayerState>();
	check(ChakraPlayerState);
	ChakraPlayerState->AddToXP(InXP);
}

void AChakraCharacter::LevelUp_Implementation()
{
	MulticastLevelUpParticles();
}

void AChakraCharacter::MulticastLevelUpParticles_Implementation() const
{
	if (IsValid(LevelUpNiagaraComponent))
	{
		const FVector CameraLocation = TopDownCameraComponent->GetComponentLocation();
		const FVector NiagaraSystemLocation = LevelUpNiagaraComponent->GetComponentLocation();
		const FRotator ToCameraRotation = (CameraLocation - NiagaraSystemLocation).Rotation();
		LevelUpNiagaraComponent->SetWorldRotation(ToCameraRotation);
		LevelUpNiagaraComponent->Activate(true);
	}
}

int32 AChakraCharacter::GetXP_Implementation() const
{
	const AChakraPlayerState* AuraPlayerState = GetPlayerState<AChakraPlayerState>();
	check(AuraPlayerState);
	return AuraPlayerState->GetXP();
}

int32 AChakraCharacter::FindLevelForXP_Implementation(int32 InXP) const
{
	const AChakraPlayerState* AuraPlayerState = GetPlayerState<AChakraPlayerState>();
	check(AuraPlayerState);
	return AuraPlayerState->LevelUpInfo->FindLevelForXP(InXP);
}

int32 AChakraCharacter::GetAttributePointsReward_Implementation(int32 Level) const
{
	const AChakraPlayerState* AuraPlayerState = GetPlayerState<AChakraPlayerState>();
	check(AuraPlayerState);
	return AuraPlayerState->LevelUpInfo->LevelUpInformation[Level].AttributePointAward;
}

int32 AChakraCharacter::GetSpellPointsReward_Implementation(int32 Level) const
{
	const AChakraPlayerState* AuraPlayerState = GetPlayerState<AChakraPlayerState>();
	check(AuraPlayerState);
	return AuraPlayerState->LevelUpInfo->LevelUpInformation[Level].SpellPointAward;
}

void AChakraCharacter::AddToPlayerLevel_Implementation(int32 InPlayerLevel)
{
	AChakraPlayerState* ChakraPlayerState = GetPlayerState<AChakraPlayerState>();
	check(ChakraPlayerState);
	ChakraPlayerState->AddToLevel(InPlayerLevel);

	if (UChakraAbilitySystemComponent* AuraASC = Cast<UChakraAbilitySystemComponent>(GetAbilitySystemComponent()))
	{
		AuraASC->UpdateAbilityStatuses(ChakraPlayerState->GetPlayerLevel());
	}
}

void AChakraCharacter::AddToAttributePoints_Implementation(int32 InAttributePoints)
{
	AChakraPlayerState* AuraPlayerState = GetPlayerState<AChakraPlayerState>();
	check(AuraPlayerState);
	AuraPlayerState->AddToAttributePoints(InAttributePoints);
}

void AChakraCharacter::AddToSpellPoints_Implementation(int32 InSpellPoints)
{
	AChakraPlayerState* AuraPlayerState = GetPlayerState<AChakraPlayerState>();
	check(AuraPlayerState);
	AuraPlayerState->AddToSpellPoints(InSpellPoints);
}

int32 AChakraCharacter::GetAttributePoints_Implementation() const
{
	AChakraPlayerState* ChakraPlayerState = GetPlayerState<AChakraPlayerState>();
	check(ChakraPlayerState);
	return ChakraPlayerState->GetAttributePoints();
}

int32 AChakraCharacter::GetSpellPoints_Implementation() const
{
	AChakraPlayerState* ChakraPlayerState = GetPlayerState<AChakraPlayerState>();
	check(ChakraPlayerState);
	return ChakraPlayerState->GetSpellPoints();
}

void AChakraCharacter::ShowMagicCircle_Implementation(UMaterialInterface* DecalMaterial)
{
	if (AChakraPlayerController* ChakraPlayerController = Cast<AChakraPlayerController>(GetController()))
	{
		ChakraPlayerController->ShowMagicCircle(DecalMaterial);
		ChakraPlayerController->bShowMouseCursor = false;
	}
}

void AChakraCharacter::HideMagicCircle_Implementation()
{
	if (AChakraPlayerController* AuraPlayerController = Cast<AChakraPlayerController>(GetController()))
	{
		AuraPlayerController->HideMagicCircle();
		AuraPlayerController->bShowMouseCursor = true;
	}
}

 int32 AChakraCharacter::GetPlayerLevel_Implementation()
{
	const AChakraPlayerState* ChakraPlayerState = GetPlayerState<AChakraPlayerState>();
	check(ChakraPlayerState);
	return ChakraPlayerState->GetPlayerLevel();
}

void AChakraCharacter::OnRep_Stunned()
{
	if (UChakraAbilitySystemComponent* AuraASC = Cast<UChakraAbilitySystemComponent>(AbilitySystemComponent))
	{
		const FChakraGameplayTags& GameplayTags = FChakraGameplayTags::Get();
		FGameplayTagContainer BlockedTags;
		BlockedTags.AddTag(GameplayTags.Player_Block_CursorTrace);
		BlockedTags.AddTag(GameplayTags.Player_Block_InputHeld);
		BlockedTags.AddTag(GameplayTags.Player_Block_InputPressed);
		BlockedTags.AddTag(GameplayTags.Player_Block_InputReleased);
		if (bIsStunned)
		{
			AuraASC->AddLooseGameplayTags(BlockedTags);
			//StunDebuffComponent->Activate();
		}
		else
		{
			AuraASC->RemoveLooseGameplayTags(BlockedTags);
			//StunDebuffComponent->Deactivate();
		}
	}
}

void AChakraCharacter::OnRep_Burned()
{
	if (bIsBurned)
	{
		//BurnDebuffComponent->Activate();
	}
	else
	{
		//BurnDebuffComponent->Deactivate();
	}
}

 void AChakraCharacter::Tick(float DeltaSeconds)
 {
	 Super::Tick(DeltaSeconds);
 	
 }

 void AChakraCharacter::BeginPlay()
 {
	 Super::BeginPlay();
 
 }


 void AChakraCharacter::AutoActivateAbility()
 {
 	if (AChakraPlayerController* ChakraPlayerController = Cast<AChakraPlayerController>(GetController()))
 	{
	    if (ChakraPlayerController->bAutoRunning)
	    {
	    	AbilitySystemComponent->CancelAbilities();
	    }
	    else
	    {
	    	TArray<AActor*> OverlappingActors;
	    	GetOverlappingActors(OverlappingActors, AChakraEnemyCharacter::StaticClass());
            
	    	// Eğer düşmanlar varsa yeteneği çalıştırın
	    	if (OverlappingActors.Num() > 0)
	    	{
	    		if (AbilitySystemComponent)
	    		{
	    			FGameplayTagContainer GameplayTagContainer;
	    			GameplayTagContainer.AddTag(FGameplayTag::RequestGameplayTag("Abilities.Fire.FireBolt")); // Add your ability tag here
	    			AbilitySystemComponent->TryActivateAbilitiesByTag(GameplayTagContainer);
            
	    		}
	    	}
	    }
 	}
 	
 }

 void AChakraCharacter::OnEnemyEnterDetectionSphere(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                                                    UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
 {

 	if (AChakraPlayerController* ChakraPlayerController = Cast<AChakraPlayerController>(GetController()))
 	{
	    if (ChakraPlayerController->bAutoRunning)
	    {
	    	OverlappingEnemies.Empty();
	    	GetWorldTimerManager().ClearTimer(TimerHandle_AutoAbility);
	    }
	    else
	    {
	    	// Eğer çarpışan aktör bir düşman karakteri ise listeye ekleyin
	    	AChakraEnemyCharacter* Enemy = Cast<AChakraEnemyCharacter>(OtherActor);
	    	if (Enemy)
	    	{
	    		OverlappingEnemies.AddUnique(Enemy);
        
	    		// Eğer şu an hiçbir düşman odaklanmamışsa, çarpışan düşmana odaklanın
	    		if (OverlappingEnemies.Num() == 1)
	    		{
	    			FocusOnEnemy(Enemy);
	    			GetWorldTimerManager().SetTimer(TimerHandle_AutoAbility, this, &AChakraCharacter::AutoActivateAbility, AbilityInterval, true);
	    		}
	    	}
	    }
 	}
 }


 void AChakraCharacter::SwitchFocusToNextEnemy()
 {
 	if (OverlappingEnemies.Num() > 1)
 	{
 		OverlappingEnemies.RemoveAt(0);
 		FocusOnEnemy(OverlappingEnemies[0]);
 	}
 	else if (OverlappingEnemies.Num() == 1)
 	{
 		OverlappingEnemies.RemoveAt(0);
 		// Odaklanacak düşman kalmadı, bu durumda başka bir işlem yapabilirsiniz
 	}
 }

void AChakraCharacter::OnEnemyDeath(AActor* DeadEnemy)
 {
 	// Ölen düşman listede mi diye kontrol edin ve listede ise odağını diğer düşmana çevirin
 	if (OverlappingEnemies.Contains(DeadEnemy))
 	{
 		SwitchFocusToNextEnemy();
 	}
 }

 void AChakraCharacter::FocusOnEnemy(AActor* TargetEnemy)
 {
 	if (!IsValid(TargetEnemy))
 	{
 		return; // Hedef düşman geçerli değilse işlemi sonlandırın
 	}

 	FRotator LookAtRotation = FRotationMatrix::MakeFromX(TargetEnemy->GetActorLocation() - GetActorLocation()).Rotator();
 	LookAtRotation.Pitch = 0.0f; // Optional: Set the pitch to 0 to avoid tilting the character upwards/downwards.
 	SetActorRotation(LookAtRotation);
 	
 	
 }


 void AChakraCharacter::InitAbilityActorInfo()
{
	AChakraPlayerState* ChakraPlayerState = GetPlayerState<AChakraPlayerState>();
	check(ChakraPlayerState);
	ChakraPlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(ChakraPlayerState, this);
	Cast<UChakraAbilitySystemComponent>(ChakraPlayerState->GetAbilitySystemComponent())->AbilityActorInfoSet();
	AbilitySystemComponent = ChakraPlayerState->GetAbilitySystemComponent();
	AttributeSet = ChakraPlayerState->GetAttributeSet();
	OnAscRegistered.Broadcast(AbilitySystemComponent);
	AbilitySystemComponent->RegisterGameplayTagEvent(FChakraGameplayTags::Get().Debuff_Stun, EGameplayTagEventType::NewOrRemoved).AddUObject(this, &AChakraCharacter::StunTagChanged);
	
	InitializeDefaultAttributes();
}
