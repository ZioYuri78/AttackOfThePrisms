// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "CityBuild.h"
#include "SinglePlayerGameMode.h"


// Sets default values
ACityBuild::ACityBuild()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->bUseDefaultCollision = true;
	StaticMesh->bGenerateOverlapEvents = true;
	StaticMesh->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	RootComponent = StaticMesh;

	Target = CreateDefaultSubobject<USceneComponent>(TEXT("Target"));
	Target->SetRelativeLocation(FVector(0.0f, 0.0f, 600.0f));
	Target->SetupAttachment(StaticMesh);

	TargetBillboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("TargetBillboard"));
	TargetBillboard->SetupAttachment(Target);
}

// Called when the game starts or when spawned
void ACityBuild::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACityBuild::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}


void ACityBuild::CallDestroy()
{
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), ExplosionSFX, GetActorLocation());
	UParticleSystemComponent* PSC = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorTransform());
	PSC->SetWorldScale3D(FVector(50.0f, 50.0f, 50.0f));
	ASinglePlayerGameMode* GM = Cast<ASinglePlayerGameMode>(UGameplayStatics::GetGameMode(this));
	GM->AddEnemyPoint();
	Destroy();

}