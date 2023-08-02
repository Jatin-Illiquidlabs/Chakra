// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ChakraEnemyCharacter.h"


#include "ChakraGameplayTags.h"
#include "EngineUtils.h"
#include "AI/ChakraAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "ChakraC/ChakraC.h"
#include "Character/ChakraCharacter.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GAS/ChakraAbilitySystemComponent.h"
#include "GAS/ChakraAbilitySystemLibrary.h"
#include "GAS/ChakraAttributeSet.h"
#include "Kismet/GameplayStatics.h"
#include "Widget/ChakraUserWidget.h"

AChakraEnemyCharacter::AChakraEnemyCharacter()
{
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

	AbilitySystemComponent = CreateDefaultSubobject<UChakraAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

	DetectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("DetectionSphere"));
	DetectionSphere->SetupAttachment(RootComponent);
	DetectionSphere->InitSphereRadius(500.0f); // Set the detection radius of the sphere


	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bUseControllerDesiredRotation = true;

	AttributeSet = CreateDefaultSubobject<UChakraAttributeSet>("AttributeSet");

	HealthBar = CreateDefaultSubobject<UWidgetComponent>("HealthBar");
	HealthBar->SetupAttachment(GetRootComponent());
	
	BaseWalkSpeed = 250.f;

	MoveDistanceThreshold = 300.0f;
}

void AChakraEnemyCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (!HasAuthority()) return;
	AuraAIController = Cast<AChakraAIController>(NewController);
	AuraAIController->GetBlackboardComponent()->InitializeBlackboard(*BehaviorTree->BlackboardAsset);
	AuraAIController->RunBehaviorTree(BehaviorTree);
	AuraAIController->GetBlackboardComponent()->SetValueAsBool(FName("HitReacting"), false);
	AuraAIController->GetBlackboardComponent()->SetValueAsBool(FName("RangedAttacker"), CharacterClass != ECharacterClass::Warrior);
}

void AChakraEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	DetectAndDrawSphere();

	ACharacter* DeadEnemy = nullptr;
	float ClosestDistance = MoveDistanceThreshold;
	for (TActorIterator<AChakraEnemyCharacter> It(GetWorld()); It; ++It)
	{
		AChakraEnemyCharacter* Enemy = *It;
		if (Enemy != this && Enemy->bDead)
		{
			float Distance = FVector::Distance(GetActorLocation(), Enemy->GetActorLocation());
			if (Distance < ClosestDistance)
			{
				ClosestDistance = Distance;
				DeadEnemy = Enemy;
			}
		}
	}

	if (DeadEnemy)
	{
		MoveTowardsTargetPosition(DeadEnemy->GetActorLocation());
	}
}

void AChakraEnemyCharacter::HighlightActor()
{
	GetMesh()->SetRenderCustomDepth(true);
	GetMesh()->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
	Weapon->SetRenderCustomDepth(true);
	Weapon->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
}

void AChakraEnemyCharacter::UnHighlightActor()
{
	GetMesh()->SetRenderCustomDepth(false);
	Weapon->SetRenderCustomDepth(false);
}

int32 AChakraEnemyCharacter::GetPlayerLevel_Implementation()
{
	return Level;
}

void AChakraEnemyCharacter::Die(const FVector& DeathImpulse)
{
	SetLifeSpan(LifeSpan);
	if (AuraAIController) AuraAIController->GetBlackboardComponent()->SetValueAsBool(FName("Dead"), true);
	
	Super::Die(DeathImpulse);

	TArray<AActor*> FoundDeadBodies;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), TEXT("DeadBody"), FoundDeadBodies);
}

void AChakraEnemyCharacter::SetCombatTarget_Implementation(AActor* InCombatTarget)
{
	CombatTarget = InCombatTarget;
}

AActor* AChakraEnemyCharacter::GetCombatTarget_Implementation() const
{
	return CombatTarget;
}

void AChakraEnemyCharacter::DetectAndDrawSphere()
{
	TArray<AActor*> OverlappingActors;
	DetectionSphere->GetOverlappingActors(OverlappingActors, AChakraEnemyCharacter::StaticClass());

	if (OverlappingActors.Num() > 0)
	{
		for (AActor* Actor : OverlappingActors)
		{
			// Check if the overlapped actor is another enemy (AEnemyCharacter)
			AChakraEnemyCharacter* OtherEnemy = Cast<AChakraEnemyCharacter>(Actor);
			if (OtherEnemy && OtherEnemy != this)
			{
				if (OtherEnemy->bDead)
				{
					// Draw a debug sphere at the location of the overlapped enemy
					FVector SphereCenter = OtherEnemy->GetActorLocation();
					float SphereRadius = 50.0f; // You can adjust this radius to your preference
					DrawDebugSphere(GetWorld(), SphereCenter, SphereRadius, 12, FColor::Green, false, 0.1f, 0, 1);
				}
			}
		}
	}
}

void AChakraEnemyCharacter::MoveTowardsTargetPosition(FVector TargetPosition)
{
	FVector CharacterLocation = GetActorLocation();
	FVector Direction = TargetPosition - CharacterLocation;
	Direction.Z = 0.0f;

	float DistanceToTarget = Direction.Size();

	UCharacterMovementComponent* MovementComponent = GetCharacterMovement();
	if (MovementComponent)
	{
		if (DistanceToTarget <= 50.0f)
		{
			MovementComponent->StopMovementImmediately(); // Stop the movement if distance is less than or equal to 10 units
			return;
			SetActorRotation(GetActorRotation());
			if (AbilitySystemComponent)
			{
				FGameplayTagContainer GameplayTagContainer;
				GameplayTagContainer.AddTag(FGameplayTag::RequestGameplayTag("Abilities.Fire.FireBolt")); // Add your ability tag here
				AbilitySystemComponent->TryActivateAbilitiesByTag(GameplayTagContainer);
            
			}
		}
		else
		{
			Direction.Normalize();

			// Set character rotation to look at the target position
			FRotator NewRotation = Direction.Rotation();
			NewRotation.Pitch = 0.0f; // Resetting pitch rotation to avoid tilting
			SetActorRotation(NewRotation);

			AddMovementInput(Direction, 1.0f);
		}

		
	}
}

void AChakraEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	GetCharacterMovement()->MaxWalkSpeed = BaseWalkSpeed;
	InitAbilityActorInfo();
	if (HasAuthority())
	{
		UChakraAbilitySystemLibrary::GiveStartupAbilities(this, AbilitySystemComponent, CharacterClass);	
	}

	
	if (UChakraUserWidget* AuraUserWidget = Cast<UChakraUserWidget>(HealthBar->GetUserWidgetObject()))
	{
		AuraUserWidget->SetWidgetController(this);
	}
	
	if (const UChakraAttributeSet* AuraAS = Cast<UChakraAttributeSet>(AttributeSet))
	{
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AuraAS->GetHealthAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnHealthChanged.Broadcast(Data.NewValue);
			}
		);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AuraAS->GetMaxHealthAttribute()).AddLambda(
			[this](const FOnAttributeChangeData& Data)
			{
				OnMaxHealthChanged.Broadcast(Data.NewValue);
			}
		);
		
		AbilitySystemComponent->RegisterGameplayTagEvent(FChakraGameplayTags::Get().Effects_HitReact, EGameplayTagEventType::NewOrRemoved).AddUObject(
			this,
			&AChakraEnemyCharacter::HitReactTagChanged
		);

		OnHealthChanged.Broadcast(AuraAS->GetHealth());
		OnMaxHealthChanged.Broadcast(AuraAS->GetMaxHealth());
	}
	
}

void AChakraEnemyCharacter::HitReactTagChanged(const FGameplayTag CallbackTag, int32 NewCount)
{
	bHitReacting = NewCount > 0;
	GetCharacterMovement()->MaxWalkSpeed = bHitReacting ? 0.f : BaseWalkSpeed;
	if (AuraAIController && AuraAIController->GetBlackboardComponent())
	{
		AuraAIController->GetBlackboardComponent()->SetValueAsBool(FName("HitReacting"), bHitReacting);
	}
}

void AChakraEnemyCharacter::InitAbilityActorInfo()
{
	AbilitySystemComponent->InitAbilityActorInfo(this, this);
	Cast<UChakraAbilitySystemComponent>(AbilitySystemComponent)->AbilityActorInfoSet();
	AbilitySystemComponent->RegisterGameplayTagEvent(FChakraGameplayTags::Get().Debuff_Stun, EGameplayTagEventType::NewOrRemoved).AddUObject(this, &AChakraEnemyCharacter::StunTagChanged);


	if (HasAuthority())
	{
		InitializeDefaultAttributes();		
	}
	OnAscRegistered.Broadcast(AbilitySystemComponent);
}

void AChakraEnemyCharacter::InitializeDefaultAttributes() const
{
	UChakraAbilitySystemLibrary::InitializeDefaultAttributes(this, CharacterClass, Level, AbilitySystemComponent);
}

void AChakraEnemyCharacter::StunTagChanged(const FGameplayTag CallbackTag, int32 NewCount)
{
	Super::StunTagChanged(CallbackTag, NewCount);
	
	if (AuraAIController && AuraAIController->GetBlackboardComponent())
	{
		AuraAIController->GetBlackboardComponent()->SetValueAsBool(FName("Stunned"), bIsStunned);
	}
}
