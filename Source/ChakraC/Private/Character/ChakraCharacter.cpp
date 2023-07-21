 // Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ChakraCharacter.h"

#include "ChakraGameplayTags.h"
#include "Camera/CameraComponent.h"
#include "NiagaraComponent.h"
#include "Components/ArrowComponent.h"
#include "Data/LevelUpInfo.h"
#include "Game/ChakraPlayerController.h"
#include "Game/ChakraPlayerState.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GAS/ChakraAbilitySystemComponent.h"

AChakraCharacter::AChakraCharacter()
{
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>("CameraBoom");
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->SetUsingAbsoluteRotation(true);
	CameraBoom->bDoCollisionTest = false;

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
