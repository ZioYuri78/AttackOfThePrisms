// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "BTTGetNearestPrism.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "SmallPrism.h"
#include "AIController.h"

EBTNodeResult::Type UBTTGetNearestPrism::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	PrismsDistances.Empty();

	AAIController* SPrismAI = OwnerComp.GetAIOwner();
	ASmallPrism* SPrism = Cast<ASmallPrism>(SPrismAI->GetPawn());

	if (!(SPrismAI && SPrism))
	{
		return EBTNodeResult::Failed;
	}

	for (AActor* BPrism : SPrism->BigPrisms)
	{
		PrismsDistances.Add(BPrism->GetDistanceTo(SPrism));
	}

	if (PrismsDistances.Num() > 0)
	{
		int32 MinIndex = 0;
		FMath::Min(PrismsDistances, &MinIndex);
		OwnerComp.GetBlackboardComponent()->SetValueAsObject(NearestPrism.SelectedKeyName, SPrism->BigPrisms[MinIndex]);
		//DrawDebugSphere(GetWorld(), SPrism->BigPrisms[MinIndex]->GetActorLocation(), 100, 12, FColor::Silver, false, 1.0f);
		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;
}
