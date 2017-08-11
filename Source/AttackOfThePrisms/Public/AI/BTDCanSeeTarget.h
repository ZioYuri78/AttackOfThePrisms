// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BehaviorTree/BTDecorator.h"
#include "BTDCanSeeTarget.generated.h"

/**
 * 
 */
UCLASS()
class ATTACKOFTHEPRISMS_API UBTDCanSeeTarget : public UBTDecorator
{
	GENERATED_BODY()
	
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

	UPROPERTY(EditAnywhere, Category = "AI")
	FBlackboardKeySelector CanSeeTarget;
	
	
};
