// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BehaviorTree/BTTaskNode.h"
#include "BTTGetNearestPrism.generated.h"

/**
 * 
 */
UCLASS()
class ATTACKOFTHEPRISMS_API UBTTGetNearestPrism : public UBTTaskNode
{
	GENERATED_BODY()
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY(EditAnywhere, Category = "AI")
	FBlackboardKeySelector NearestPrism;

	UPROPERTY()
	TArray<float> PrismsDistances;
	
	
};
