// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "CityBuild.generated.h"

UCLASS(Blueprintable)
class ATTACKOFTHEPRISMS_API ACityBuild : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACityBuild();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UFUNCTION(BlueprintCallable, Category = "")
	void CallDestroy();
	
	UPROPERTY(EditDefaultsOnly, Category = "Components")
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	USceneComponent* Target;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	UBillboardComponent* TargetBillboard;

	UPROPERTY(EditDefaultsOnly, Category = "Build")
	USoundBase* ExplosionSFX;
	
	UPROPERTY(EditDefaultsOnly, Category = "Build")
	UParticleSystem* ExplosionEffect;
};
