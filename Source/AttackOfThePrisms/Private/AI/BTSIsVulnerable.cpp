// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "BTSIsVulnerable.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "SmallPrismAI.h"
#include "SmallPrism.h"

void UBTSIsVulnerable::TickNode(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	ASmallPrismAI* SmallPrismAI = Cast<ASmallPrismAI>(OwnerComp.GetAIOwner());
	ASmallPrism* SmallPrism = Cast<ASmallPrism>(SmallPrismAI->GetPawn());

	if (SmallPrism)
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsBool(IsVulnerable.SelectedKeyName, SmallPrism->bIsVulnerable);
	}
}
