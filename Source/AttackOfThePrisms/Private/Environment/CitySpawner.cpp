// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "CitySpawner.h"
#include "CityBuild.h"
#include "Target.h"


// Sets default values
ACitySpawner::ACitySpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);
	
	
}

// Called when the game starts or when spawned
void ACitySpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACitySpawner::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void ACitySpawner::OnConstruction(const FTransform & Transform)
{
	if (CityBuild && Checkpoint)
	{
				
		CleanChildsArray(ChildBuildsArray);

		CleanChildsArray(ChildCheckpointsArray);
				
		RegisterAllComponents();
		
		for (int32 i = 0; i < GridSizeY; i++)
		{

			for (int32 j = 0; j < GridSizeX; j++)
			{
			
				GenerateChild(i, j, CityBuild, ChildBuildsArray);
				GenerateChild(i, j, Checkpoint, ChildCheckpointsArray, TileSize / 2);

			}
		}
	}	
}


void ACitySpawner::CleanChildsArray(TArray<UChildActorComponent*> &ChildsArray)
{
	for (auto It = ChildsArray.CreateIterator(); It; It++)
	{

		(*It)->DestroyComponent();

	}

	ChildsArray.Empty();
}


void ACitySpawner::GenerateChild(int32 i, int32 j, TSubclassOf<AActor> Child, TArray<UChildActorComponent*> &ChildsArray, float Offset) 
{
	FString CompName = Child->GetName() + "_" + FString::FromInt(i) + "_" + FString::FromInt(j);
	FName InitialName = (*CompName);

	UChildActorComponent* NewComp = NewObject<UChildActorComponent>(this, InitialName);

	ChildsArray.Add(NewComp);

	if (NewComp)
	{
		GLog->Log("Registering comp...");

		NewComp->RegisterComponent();
		NewComp->SetChildActorClass(Child);
		NewComp->CreateChildActor();

		FVector Location = FVector((j*TileSize)+Offset, (i*TileSize)+Offset, 0.0f);
		FRotator Rotation = FRotator(0.0f, FMath::RandRange(0.0f, 45.0f), 0.0f);
		FVector Scale = FVector(1.0f, 1.0f, FMath::RandRange(0.5f, 2.0f));

		NewComp->SetRelativeLocation(Location);
		NewComp->SetRelativeRotation(Rotation);
		NewComp->SetRelativeScale3D(Scale);
		NewComp->AttachToComponent(SceneRoot, FAttachmentTransformRules::KeepRelativeTransform);

	}
}

