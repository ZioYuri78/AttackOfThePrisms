// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "BTTGetMidTarget.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "Prism.h"

EBTNodeResult::Type UBTTGetMidTarget::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	AAIController* PrismAI = Cast<AAIController>(OwnerComp.GetAIOwner());
	APrism* Prism = Cast<APrism>(PrismAI->GetPawn());

	CandidateTargets.Empty();

	if (!(PrismAI || Prism))
	{
		return EBTNodeResult::Failed;
	}

	for (AActor* Target : Prism->Targets)
	{
		FVector TargetLocation = Target->GetActorLocation();

		AActor* ANearestTarget = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(NearestTarget.SelectedKeyName));
		FVector NearestTargetLocation = ANearestTarget->GetActorLocation();

		AActor* AGoalTarget = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(GoalTarget.SelectedKeyName));
		FVector GoalTargetLocation = AGoalTarget->GetActorLocation();

		if (((TargetLocation.X == NearestTargetLocation.X) || (TargetLocation.Y == NearestTargetLocation.Y)) &&
			((TargetLocation.X == GoalTargetLocation.X) || (TargetLocation.Y == GoalTargetLocation.Y)))
		{
			CandidateTargets.Add(Target);
		}

	}

	if (CandidateTargets.Num() > 0)
	{
		AActor* TempTarget = CandidateTargets[FMath::RandRange(0, CandidateTargets.Num() - 1)];
		OwnerComp.GetBlackboardComponent()->SetValueAsObject(MidTarget.SelectedKeyName, TempTarget);
		//DrawDebugSphere(GetWorld(), TempTarget->GetActorLocation(), 100.0f, 12, FColor::Red, false, 5.0f);
	}
	


	return EBTNodeResult::Succeeded;
}




