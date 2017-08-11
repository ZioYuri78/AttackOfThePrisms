// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "BTSPrismIsUnderAttack.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "BigPrism.h"
#include "SmallPrism.h"

void UBTSPrismIsUnderAttack::TickNode(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AAIController* SPrismAI = OwnerComp.GetAIOwner();
	ASmallPrism* SPrism = Cast<ASmallPrism>(SPrismAI->GetPawn());

	ABigPrism* BPrism = Cast<ABigPrism>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(Prism.SelectedKeyName));
	if (!BPrism)
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsBool(IsPrismUnderAttack.SelectedKeyName, false);		
	}
	else
	{
		if (BPrism->bIsUnderAttack)
		{
			SPrism->CurrentBigPrism = BPrism;
			OwnerComp.GetBlackboardComponent()->SetValueAsBool(IsPrismUnderAttack.SelectedKeyName, true);
		}
		else
		{
			OwnerComp.GetBlackboardComponent()->SetValueAsBool(IsPrismUnderAttack.SelectedKeyName, false);
		}
	}

}
