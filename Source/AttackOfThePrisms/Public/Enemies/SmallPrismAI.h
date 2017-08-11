// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "SmallPrismAI.generated.h"

/**
 * 
 */
UCLASS()
class ATTACKOFTHEPRISMS_API ASmallPrismAI : public AAIController
{
	GENERATED_BODY()
	
public:

	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	UBehaviorTree* BTAsset;
	
	
	
};
