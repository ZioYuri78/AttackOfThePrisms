// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "Prism.generated.h"

UCLASS()
class ATTACKOFTHEPRISMS_API APrism : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APrism();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Prism")
	TArray<AActor*> Targets;
	
};
