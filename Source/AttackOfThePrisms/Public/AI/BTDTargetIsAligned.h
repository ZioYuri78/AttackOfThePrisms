// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BehaviorTree/BTDecorator.h"
#include "BTDTargetIsAligned.generated.h"

/**
 * 
 */
UCLASS()
class ATTACKOFTHEPRISMS_API UBTDTargetIsAligned : public UBTDecorator
{
	GENERATED_BODY()
	
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

	UPROPERTY(EditAnywhere, Category = "AI")
	FBlackboardKeySelector IsAligned;
	
	
};
