// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "MainMenuGameMode.h"
#include "MainMenuPC.h"


AMainMenuGameMode::AMainMenuGameMode()
{

	PlayerControllerClass = AMainMenuPC::StaticClass();
}

