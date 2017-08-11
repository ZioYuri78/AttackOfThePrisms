// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "Prism.h"


// Sets default values
APrism::APrism()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APrism::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APrism::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}


