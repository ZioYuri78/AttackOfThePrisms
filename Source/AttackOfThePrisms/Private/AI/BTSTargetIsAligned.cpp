// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "BTSTargetIsAligned.h"
#include "BehaviorTree/BlackboardComponent.h"

void UBTSTargetIsAligned::TickNode(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AActor* ANearestTarget = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(NearestTarget.SelectedKeyName));
	AActor* AGoalTarget = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(GoalTarget.SelectedKeyName));

	if (ANearestTarget && AGoalTarget)
	{
		FVector NearestTargetLocation = ANearestTarget->GetActorLocation();
		FVector GoalTargetLocation = AGoalTarget->GetActorLocation();

		bool bIsAligned = (NearestTargetLocation.X == GoalTargetLocation.X) || (NearestTargetLocation.Y == GoalTargetLocation.Y);

		OwnerComp.GetBlackboardComponent()->SetValueAsBool(IsAligned.SelectedKeyName, bIsAligned);

	}
}




