// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "BTDIsVulnerable.h"
#include "BehaviorTree/BlackboardComponent.h"

bool UBTDIsVulnerable::CalculateRawConditionValue(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) const
{
	Super::CalculateRawConditionValue(OwnerComp, NodeMemory);

	return OwnerComp.GetBlackboardComponent()->GetValueAsBool(IsVulnerable.SelectedKeyName);
}
