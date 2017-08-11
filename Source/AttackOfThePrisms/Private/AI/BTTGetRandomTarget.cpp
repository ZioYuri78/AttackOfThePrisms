// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "BTTGetRandomTarget.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Prism.h"
#include "AIController.h"

EBTNodeResult::Type UBTTGetRandomTarget::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	AAIController* PrismAI = Cast<AAIController>(OwnerComp.GetAIOwner());
	APrism* Prism = Cast<APrism>(PrismAI->GetPawn());
	if (Prism == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	if (Prism->Targets.Num() > 0)
	{
		AActor* TempTarget = Prism->Targets[FMath::RandRange(0, Prism->Targets.Num() - 1)];
		if (TempTarget)
		{

			OwnerComp.GetBlackboardComponent()->SetValueAsObject(GoalTarget.SelectedKeyName, TempTarget);
			//DrawDebugSphere(GetWorld(), TempTarget->GetActorLocation(), 100, 12, FColor::Green, false, 5.0f);
			return EBTNodeResult::Succeeded;
		}
	}

	return EBTNodeResult::Failed;
}



