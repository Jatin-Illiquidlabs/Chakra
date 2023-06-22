// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "GDAttributeSetBase.generated.h"

//Uses macros form Attributes.h

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName) \

/**
 * 
 */
UCLASS()
class CHAKRA_API UGDAttributeSetBase : public UAttributeSet
{
	GENERATED_BODY()
	
public:

	UGDAttributeSetBase();

	//AttributeSet Overrides

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	//Current Health, When 0 we expect owner to die unless prevent by an ability. Capped by MaxHealth.
	//Positive changes can directly use this.
	//Negative changes to Health should go through Damage meta attribute.

	UPROPERTY(BlueprintReadOnly, Category= "Health", ReplicatedUsing= OnRep_Health)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UGDAttributeSetBase, Health)

	//MaxHealth is it own attribute since GameplayEffects may modify it
	UPROPERTY(BlueprintReadOnly, Category= "Health" , ReplicatedUsing= OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UGDAttributeSetBase, MaxHealth)

	//Health regen rate will passively increase Health every second
	UPROPERTY(BlueprintReadOnly, Category= "Health", ReplicatedUsing= OnRep_HealthRegenRate)
	FGameplayAttributeData HealthRegenRate;
	ATTRIBUTE_ACCESSORS(UGDAttributeSetBase, HealthRegenRate)

	//Current Mana, used to execute special abilites. Capped by MaxMana
	UPROPERTY(BlueprintReadOnly, Category= "Mana", ReplicatedUsing= OnRep_Mana)
	FGameplayAttributeData Mana;
	ATTRIBUTE_ACCESSORS(UGDAttributeSetBase, Mana)

	//MaxMana is its own attribute since GameplayEffects may modify it
	UPROPERTY(BlueprintReadOnly, Category= "Mana", ReplicatedUsing= OnRep_MaxMana)
	FGameplayAttributeData MaxMana;
	ATTRIBUTE_ACCESSORS(UGDAttributeSetBase, MaxMana)

	//Mana regen rate will passively increase mana every second
	UPROPERTY(BlueprintReadOnly, Category= "Mana", ReplicatedUsing= OnRep_ManaRegenRate)
	FGameplayAttributeData ManaRegenRate;
	ATTRIBUTE_ACCESSORS(UGDAttributeSetBase, ManaRegenRate)

	UPROPERTY(BlueprintReadOnly, Category = "Character Level", ReplicatedUsing = OnRep_CharacterLevel)
	FGameplayAttributeData CharacterLevel;
	ATTRIBUTE_ACCESSORS(UGDAttributeSetBase, CharacterLevel)

	UPROPERTY(BlueprintReadOnly, Category = "Damage", meta = (HideFromLevelInfos))
	FGameplayAttributeData Damage;
	ATTRIBUTE_ACCESSORS(UGDAttributeSetBase, Damage)

protected:
	//Helper function to proportionally adjust the value of an attribute when it's associated max attribute changes.
	// (i.e. when max health increases, Health increases by an amount that maintains the some percentage as before)
	void AdjustAttributeForMaxChange(FGameplayAttributeData& AffectedAttribute, const FGameplayAttributeData& MaxAttribute, float NewMaxValue, const FGameplayAttribute& AffectedAttributeProperty);

	/*
	 * These OnRep func exist to make sure that the ability system internal representations are synchronized properly during replication
	 */

	UFUNCTION()
	virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);

	UFUNCTION()
	virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);

	UFUNCTION()
	virtual void OnRep_HealthRegenRate(const FGameplayAttributeData& OldRegenRate);

	UFUNCTION()
	virtual void OnRep_Mana(const FGameplayAttributeData& OldMana);

	UFUNCTION()
	virtual void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana);

	UFUNCTION()
	virtual void OnRep_ManaRegenRate(const FGameplayAttributeData& OldManaRegenRate);
	
	UFUNCTION()
	virtual void OnRep_CharacterLevel(const FGameplayAttributeData& OldCharacterLevel);

private:
	FGameplayTag HitDirectionFrontTag;
	FGameplayTag HitDirectionBackTag;
	FGameplayTag HitDirectionRightTag;
	FGameplayTag HitDirectionLeftTag;
};


