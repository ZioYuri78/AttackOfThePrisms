// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"
#include "RespawnUI.generated.h"

/**
 * 
 */
UCLASS()
class ATTACKOFTHEPRISMS_API URespawnUI : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Timer")
	int32 Timer = 3;
	
	
};
