// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "GigaPrism.h"
#include "CityBuild.h"
#include "BigPrism.h"

// Sets default values
AGigaPrism::AGigaPrism()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SceneRoot->SetMobility(EComponentMobility::Static);
	RootComponent = SceneRoot;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetWorldScale3D(FVector(60.0f, 60.0f, 60.0f));
	StaticMesh->SetMobility(EComponentMobility::Static);
	StaticMesh->SetupAttachment(SceneRoot);

	BeamStartPoint = CreateDefaultSubobject<USceneComponent>(TEXT("BeamStartPoint"));
	BeamStartPoint->SetRelativeLocation(FVector(0.0f, 0.0f, 7000.0f));
	BBStartPoint = CreateDefaultSubobject<UBillboardComponent>(TEXT("BBStartPoint"));
	BBStartPoint->SetupAttachment(BeamStartPoint);
	BeamStartPoint->SetupAttachment(SceneRoot);

	BeamBase01 = CreateDefaultSubobject<USceneComponent>(TEXT("BeamBase01"));
	BeamBase01->SetRelativeLocation(FVector(-800.0f, -800.0f, 6000.0f));
	BBBase01 = CreateDefaultSubobject<UBillboardComponent>(TEXT("BBBAse01"));
	BBBase01->SetupAttachment(BeamBase01);
	BeamBase01->SetupAttachment(SceneRoot);

	BeamBase02 = CreateDefaultSubobject<USceneComponent>(TEXT("BeamBase02"));
	BeamBase02->SetRelativeLocation(FVector(800.0f, -800.0f, 6000.0f));
	BBBase02 = CreateDefaultSubobject<UBillboardComponent>(TEXT("BBBAse02"));
	BBBase02->SetupAttachment(BeamBase02);
	BeamBase02->SetupAttachment(SceneRoot);

	BeamBase03 = CreateDefaultSubobject<USceneComponent>(TEXT("BeamBase03"));
	BeamBase03->SetRelativeLocation(FVector(-800.0f, 800.0f, 6000.0f));
	BBBase03 = CreateDefaultSubobject<UBillboardComponent>(TEXT("BBBAse03"));
	BBBase03->SetupAttachment(BeamBase03);
	BeamBase03->SetupAttachment(SceneRoot);

	BeamBase04 = CreateDefaultSubobject<USceneComponent>(TEXT("BeamBase04"));
	BeamBase04->SetRelativeLocation(FVector(800.0f, 800.0f, 6000.0f));
	BBBase04 = CreateDefaultSubobject<UBillboardComponent>(TEXT("BBBAse04"));
	BBBase04->SetupAttachment(BeamBase04);
	BeamBase04->SetupAttachment(SceneRoot);
}

// Called when the game starts or when spawned
void AGigaPrism::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::SpawnEmitterAttached(BeamFX, BeamStartPoint)->SetBeamTargetPoint(0, BeamBase01->GetComponentLocation(), 0);
	UGameplayStatics::SpawnEmitterAttached(BeamFX, BeamStartPoint)->SetBeamTargetPoint(0, BeamBase02->GetComponentLocation(), 0);
	UGameplayStatics::SpawnEmitterAttached(BeamFX, BeamStartPoint)->SetBeamTargetPoint(0, BeamBase03->GetComponentLocation(), 0);
	UGameplayStatics::SpawnEmitterAttached(BeamFX, BeamStartPoint)->SetBeamTargetPoint(0, BeamBase04->GetComponentLocation(), 0);
		
}

// Called every frame
void AGigaPrism::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}


void AGigaPrism::SpawnBeam()
{
	UE_LOG(LogTemp, Warning, TEXT("SPAWN BEAM"));
	TArray<AActor*> BuildsArray;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACityBuild::StaticClass(), BuildsArray);

	if (BuildsArray.Num() > 0)
	{
		TargetBuild = Cast<ACityBuild>(BuildsArray[FMath::RandRange(0, BuildsArray.Num() - 1)]);

		UParticleSystemComponent* FiredBeam = UGameplayStatics::SpawnEmitterAttached(BeamFX, BeamStartPoint); 
		FiredBeam->SetBeamTargetPoint(0, TargetBuild->Target->GetComponentLocation(), 0);
		
		FTimerDelegate BeamTimerDelegate;
		BeamTimerDelegate.BindUFunction(this, FName("DestroyBeam"), FiredBeam, TargetBuild);

		GetWorld()->GetTimerManager().SetTimer(BeamTimerHandle, BeamTimerDelegate, 1.0f, false);
		
	}
}


void AGigaPrism::DestroyBeam(UParticleSystemComponent* Beam, ACityBuild* Target)
{
	Beam->DestroyComponent();
	GetWorld()->GetTimerManager().ClearTimer(BeamTimerHandle);	
		
	FVector Location = Target->GetActorLocation() + FVector(0.0f, 0.0f, 500.0f);
	FRotator Rotation = Target->GetActorRotation();
	FVector Scale = FVector(1.0f, 1.0f, 1.0f);
	FActorSpawnParameters SpawnParam;
	SpawnParam.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
	GetWorld()->SpawnActor<ABigPrism>(BigPrism, Location, Rotation, SpawnParam);

	Target->CallDestroy();
}