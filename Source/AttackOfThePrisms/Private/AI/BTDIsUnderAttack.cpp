// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "BTDIsUnderAttack.h"
#include "BehaviorTree/BlackboardComponent.h"

bool UBTDIsUnderAttack::CalculateRawConditionValue(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) const
{
	Super::CalculateRawConditionValue(OwnerComp, NodeMemory);

	return OwnerComp.GetBlackboardComponent()->GetValueAsBool(IsUnderAttack.SelectedKeyName);
}




