// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "SmallPrismAI.h"


void ASmallPrismAI::BeginPlay()
{
	Super::BeginPlay();

	RunBehaviorTree(BTAsset);
}
