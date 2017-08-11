// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "Target.h"


// Sets default values
ATarget::ATarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	RootComponent = SceneRoot;

	TargetBillboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("TargetBillboard"));
	TargetBillboard->SetupAttachment(SceneRoot);

	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
	CollisionSphere->SetCollisionObjectType(ECC_BPTarget);	
	CollisionSphere->SetCollisionResponseToChannel(ECC_Target, ECR_Ignore);
	CollisionSphere->SetCollisionResponseToChannel(ECC_BPTarget, ECR_Ignore);
	CollisionSphere->SetCollisionResponseToChannel(ECC_Item, ECR_Ignore);
	CollisionSphere->SetCollisionResponseToChannel(ECC_BPItem, ECR_Ignore);
	CollisionSphere->SetSphereRadius(100.0f);
	CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &ATarget::BeginOverlap);
	CollisionSphere->OnComponentEndOverlap.AddDynamic(this, &ATarget::EndOverlap);
	CollisionSphere->SetupAttachment(SceneRoot);
}

// Called when the game starts or when spawned
void ATarget::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATarget::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}


void ATarget::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	IsFree = false;
}


void ATarget::EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	IsFree = true;
}