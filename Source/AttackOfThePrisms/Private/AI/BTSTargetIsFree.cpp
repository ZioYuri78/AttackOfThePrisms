// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "BTSTargetIsFree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Target.h"

void UBTSTargetIsFree::TickNode(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AActor* ActorTarget = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(NearTarget.SelectedKeyName));
	

	if (ActorTarget)
	{
		
		OwnerComp.GetBlackboardComponent()->SetValueAsBool(IsFree.SelectedKeyName, Cast<ATarget>(ActorTarget)->IsFree);

	}
}

