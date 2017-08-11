// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BehaviorTree/BTService.h"
#include "BTSTargetIsFree.generated.h"

/**
 * 
 */
UCLASS()
class ATTACKOFTHEPRISMS_API UBTSTargetIsFree : public UBTService
{
	GENERATED_BODY()
	
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	

	UPROPERTY(EditAnywhere, Category = "AI")
	FBlackboardKeySelector NearTarget;

	UPROPERTY(EditAnywhere, Category = "AI")
	FBlackboardKeySelector IsFree;
	
	
};
