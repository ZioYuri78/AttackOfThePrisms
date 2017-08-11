// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "BTSCanSeeTarget.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "Prism.h"

void UBTSCanSeeTarget::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AAIController* PrismAI = OwnerComp.GetAIOwner();
	

	if(PrismAI)
	{
		bool CanSee = PrismAI->LineOfSightTo(Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(Target.SelectedKeyName)));
		OwnerComp.GetBlackboardComponent()->SetValueAsBool(CanSeeTarget.SelectedKeyName, CanSee);
	}

}



