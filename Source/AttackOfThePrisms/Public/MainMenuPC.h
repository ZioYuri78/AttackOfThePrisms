// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"
#include <WidgetLayoutLibrary.h>
#include "MainMenuPC.generated.h"

/**
 * 
 */
UCLASS()
class ATTACKOFTHEPRISMS_API AMainMenuPC : public APlayerController
{
	GENERATED_BODY()
	
public:

	AMainMenuPC();

	virtual void BeginPlay() override;


protected:
	
	UPROPERTY(EditAnywhere, Category = "Menu Music")
	USoundBase* MenuMusic;

	UPROPERTY(EditAnywhere, Category = "Menu Widget")
	TSubclassOf<UUserWidget> WB_MainMenu;

	UPROPERTY()
	UUserWidget* MenuInst;
	
	
};


