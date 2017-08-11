// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "MainMenuPC.h"


AMainMenuPC::AMainMenuPC()
{
	bShowMouseCursor = true;
}


void AMainMenuPC::BeginPlay()
{
	Super::BeginPlay();
	
	UWidgetLayoutLibrary::RemoveAllWidgets(GetWorld());
	UGameplayStatics::PlaySound2D(GetWorld(), MenuMusic);
	
	MenuInst = CreateWidget<UUserWidget>(GetWorld(), WB_MainMenu);
	if (MenuInst)
	{
		MenuInst->AddToViewport();

		FInputModeUIOnly InputMode;
		InputMode.SetWidgetToFocus(MenuInst->TakeWidget());
		
		SetInputMode(InputMode);
	}
}


