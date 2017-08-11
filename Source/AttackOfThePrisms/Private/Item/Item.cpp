// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "Item.h"


// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	RootComponent = SceneRoot;

	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));	
	CollisionSphere->SetSphereRadius(40.0f);
	CollisionSphere->SetCollisionObjectType(ECC_BPItem);	
	CollisionSphere->SetupAttachment(SceneRoot);
	CollisionSphere->RelativeLocation = FVector(0.0f, 0.0f, 40.0f);

	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	SkeletalMesh->SetupAttachment(SceneRoot);

	Light = CreateDefaultSubobject<UPointLightComponent>(TEXT("Light"));
	Light->SetIntensity(7500.0f);
	Light->SetAttenuationRadius(500.0f);
	Light->SetupAttachment(CollisionSphere);

	OnActorBeginOverlap.AddDynamic(this, &AItem::BeginOverlap);
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItem::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
	
}


void AItem::BeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	UGameplayStatics::PlaySoundAtLocation(this, ItemSFX, GetActorLocation());
	Destroy();
}