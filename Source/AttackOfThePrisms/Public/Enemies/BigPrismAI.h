// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "BigPrismAI.generated.h"

/**
 * 
 */
UCLASS()
class ATTACKOFTHEPRISMS_API ABigPrismAI : public AAIController
{
	GENERATED_BODY()
	
public:

	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	UBehaviorTree* BTAsset;
	
	
};
