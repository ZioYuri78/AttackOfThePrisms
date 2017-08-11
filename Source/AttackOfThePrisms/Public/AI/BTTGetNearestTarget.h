// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BehaviorTree/BTTaskNode.h"
#include "BTTGetNearestTarget.generated.h"

/**
 * 
 */
UCLASS()
class ATTACKOFTHEPRISMS_API UBTTGetNearestTarget : public UBTTaskNode
{
	GENERATED_BODY()
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY(EditAnywhere, Category = "AI")
	FBlackboardKeySelector NearestTarget;

	UPROPERTY()
	TArray<float> TargetsDistances;
	
	
};
