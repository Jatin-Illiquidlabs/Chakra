// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/ChakraAIController.h"

#include "NavigationSystem.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Character/ChakraEnemyCharacter.h"
#include "Kismet/GameplayStatics.h"

AChakraAIController::AChakraAIController()
{
	Blackboard = CreateDefaultSubobject<UBlackboardComponent>("BlackboardComponent");
	check(Blackboard);
	BehaviorTreeComponent = CreateDefaultSubobject<UBehaviorTreeComponent>("BehaviorTreeComponent");
	check(BehaviorTreeComponent);
}




