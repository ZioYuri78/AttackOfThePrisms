// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "BTTGetNearestTarget.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Prism.h"
#include "AIController.h"

EBTNodeResult::Type UBTTGetNearestTarget::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	TargetsDistances.Empty();

	AAIController* PrismAI = Cast<AAIController>(OwnerComp.GetAIOwner());
	APrism* Prism = Cast<APrism>(PrismAI->GetPawn());
	if (Prism == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	for (AActor* Target : Prism->Targets)
	{
		TargetsDistances.Add(Target->GetDistanceTo(Prism));
	}

	if (TargetsDistances.Num() > 0)
	{
		int32 MinIndex = 0;
		FMath::Min(TargetsDistances, &MinIndex);
		OwnerComp.GetBlackboardComponent()->SetValueAsObject(NearestTarget.SelectedKeyName, Prism->Targets[MinIndex]);
		//DrawDebugSphere(GetWorld(), Prism->Targets[MinIndex]->GetActorLocation(), 100, 12, FColor::Blue, false, 5.0f);
		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;
}



