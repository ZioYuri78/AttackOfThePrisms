// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "CitySpawner.generated.h"

UCLASS(Blueprintable)
class ATTACKOFTHEPRISMS_API ACitySpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACitySpawner();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
	
	virtual void OnConstruction(const FTransform& Transform) override;

	UPROPERTY()
	USceneComponent* SceneRoot;	
	
	UPROPERTY(EditAnywhere, Category = "Grid")
	float TileSize = 1200.0f;

	UPROPERTY(EditAnywhere, Category = "Grid")
	int32 GridSizeX = 2;

	UPROPERTY(EditAnywhere, Category = "Grid")
	int32 GridSizeY = 2;

	UPROPERTY(EditAnywhere, Category = "Grid")
	TSubclassOf<AActor> CityBuild;

	UPROPERTY(EditAnywhere, Category = "Grid")
	TSubclassOf<AActor> Checkpoint;

private:

	void CleanChildsArray(TArray<UChildActorComponent*> &ChildsArray);

	void GenerateChild(int32 i, int32 j, TSubclassOf<AActor> Child, TArray<UChildActorComponent*> &ChildsArray, float Offset = 0.0f);


	UPROPERTY()
	TArray<UChildActorComponent*> ChildBuildsArray;

	UPROPERTY()
	TArray<UChildActorComponent*> ChildCheckpointsArray;
	
	

	
	
};
