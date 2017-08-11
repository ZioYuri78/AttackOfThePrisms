// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Shield.generated.h"

UCLASS(Blueprintable)
class ATTACKOFTHEPRISMS_API AShield : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShield();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	void OnSpawn();

	void Spawned();

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif


	UPROPERTY(EditDefaultsOnly, Category = "Components")
	UStaticMeshComponent* StaticMesh;

protected:

	// Components
	UPROPERTY(EditDefaultsOnly, Category = "Components")
	USceneComponent* SceneRoot;

	

	// Properties
	UPROPERTY(EditAnywhere, Category = "Shield")
	UStaticMesh* SM_Shield;

	UPROPERTY(EditAnywhere, Category = "Shield")
	UMaterialInterface* MI_Wireframe;

	UPROPERTY(EditAnywhere, Category = "Shield")
	UMaterialInterface* MI_Base;

	UPROPERTY(EditAnywhere, Category = "Shield")
	UMaterialInterface* MI_Shield;

	UPROPERTY()
	UMaterialInstanceDynamic* MID_Base;

	UPROPERTY()
	UMaterialInstanceDynamic* MID_Shield;

	UPROPERTY(EditAnywhere, Category = "Shield")
	float ShieldLifeSpan = 10.0f;
	
	
};
