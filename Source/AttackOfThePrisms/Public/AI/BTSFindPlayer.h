// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BehaviorTree/BTService.h"
#include "BTSFindPlayer.generated.h"

/**
 * 
 */
UCLASS()
class ATTACKOFTHEPRISMS_API UBTSFindPlayer : public UBTService
{
	GENERATED_BODY()
	
	UBTSFindPlayer();
	
	virtual void OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;;
	
	UPROPERTY(EditAnywhere, Category = "AI")
	FBlackboardKeySelector Player;
};
