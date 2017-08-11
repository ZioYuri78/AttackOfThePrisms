// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "BigPrismAI.h"



void ABigPrismAI::BeginPlay()
{
	Super::BeginPlay();

	RunBehaviorTree(BTAsset);
}
