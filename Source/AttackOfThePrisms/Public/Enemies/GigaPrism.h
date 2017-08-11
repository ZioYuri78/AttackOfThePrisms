// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "GigaPrism.generated.h"

UCLASS(Blueprintable)
class ATTACKOFTHEPRISMS_API AGigaPrism : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGigaPrism();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UFUNCTION()
	void SpawnBeam();
	
	UPROPERTY(EditDefaultsOnly, Category = "Components")
	USceneComponent* SceneRoot;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	USceneComponent* BeamStartPoint;

	UPROPERTY()
	UBillboardComponent* BBStartPoint;
	
	UPROPERTY(EditDefaultsOnly, Category = "Components")
	USceneComponent* BeamBase01;

	UPROPERTY()
	UBillboardComponent* BBBase01;	

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	USceneComponent* BeamBase02;

	UPROPERTY()
	UBillboardComponent* BBBase02;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	USceneComponent* BeamBase03;

	UPROPERTY()
	UBillboardComponent* BBBase03;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	USceneComponent* BeamBase04;

	UPROPERTY()
	UBillboardComponent* BBBase04;


	UPROPERTY(EditDefaultsOnly, Category = "Components")
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(VisibleDefaultsOnly, Category = "GigaPrism")
	class ACityBuild* TargetBuild;

	UPROPERTY(EditDefaultsOnly, Category = "GigaPrism")
	UParticleSystem* BeamFX;

	UPROPERTY(EditDefaultsOnly, Category = "GigaPrism")
	TSubclassOf<class ABigPrism> BigPrism;
		
	UPROPERTY()
	FTimerHandle BeamTimerHandle;
		
	UFUNCTION()
	void DestroyBeam(UParticleSystemComponent* Beam, ACityBuild* Target);
};
