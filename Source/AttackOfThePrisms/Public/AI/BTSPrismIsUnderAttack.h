// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BehaviorTree/BTService.h"
#include "BTSPrismIsUnderAttack.generated.h"

/**
 * 
 */
UCLASS()
class ATTACKOFTHEPRISMS_API UBTSPrismIsUnderAttack : public UBTService
{
	GENERATED_BODY()
	
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	
	UPROPERTY(EditAnywhere, Category = "AI")
	FBlackboardKeySelector Prism;

	UPROPERTY(EditAnywhere, Category = "AI")
	FBlackboardKeySelector IsPrismUnderAttack;
	
};
