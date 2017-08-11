// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS(Blueprintable)
class ATTACKOFTHEPRISMS_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	UPROPERTY()
	USceneComponent* SceneRoot;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	USphereComponent* CollisionSphere;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	USkeletalMeshComponent* SkeletalMesh;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	UPointLightComponent* Light;

	UPROPERTY(EditDefaultsOnly, Category = "Item")
	USoundBase* ItemSFX;

	UFUNCTION()
	void BeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
};
