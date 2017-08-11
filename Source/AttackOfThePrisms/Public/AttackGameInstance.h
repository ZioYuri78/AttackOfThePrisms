// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/GameInstance.h"
#include "AttackGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class ATTACKOFTHEPRISMS_API UAttackGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
	virtual void Init() override;

	UFUNCTION()
	virtual void BeginLoadingScreen(const FString& MapName);

	UFUNCTION()
	virtual void EndLoadingScreen();
	
	
};
