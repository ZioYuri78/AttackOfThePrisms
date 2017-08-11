// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BehaviorTree/BTTaskNode.h"
#include "BTTMoveTo.generated.h"

/**
 * 
 */
UCLASS()
class ATTACKOFTHEPRISMS_API UBTTMoveTo : public UBTTaskNode
{
	GENERATED_BODY()
	
	UBTTMoveTo();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	
	UPROPERTY(EditAnywhere, Category = "AI")
	FBlackboardKeySelector Target;

	UPROPERTY(EditAnywhere, Category = "AI")
	float ForceStrength = 0.0f;

	UPROPERTY()
	bool bStopOnOverlap;

	UPROPERTY()
	FVector TargetLocation;
	
	UPROPERTY()
	FVector ForceVector;

	UPROPERTY()
	FVector ResultVector;
	
};
