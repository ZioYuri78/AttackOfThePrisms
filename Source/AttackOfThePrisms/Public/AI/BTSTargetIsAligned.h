// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BehaviorTree/BTService.h"
#include "BTSTargetIsAligned.generated.h"

/**
 * 
 */
UCLASS()
class ATTACKOFTHEPRISMS_API UBTSTargetIsAligned : public UBTService
{
	GENERATED_BODY()
	
	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, Category = "AI")
	FBlackboardKeySelector GoalTarget;

	UPROPERTY(EditAnywhere, Category = "AI")
	FBlackboardKeySelector NearestTarget;

	UPROPERTY(EditAnywhere, Category = "AI")
	FBlackboardKeySelector IsAligned;
	
	
};
