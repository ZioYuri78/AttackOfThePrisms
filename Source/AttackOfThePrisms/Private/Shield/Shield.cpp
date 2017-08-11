// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "Shield.h"


// Sets default values
AShield::AShield()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SceneRoot->SetCanEverAffectNavigation(true);
	RootComponent = SceneRoot;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetStaticMesh(SM_Shield);
	StaticMesh->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));
	StaticMesh->SetSimulatePhysics(true);
	StaticMesh->SetConstraintMode(EDOFMode::XYPlane);
	StaticMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	StaticMesh->SetCollisionObjectType(ECollisionChannel::ECC_PhysicsBody);
	StaticMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Overlap);
	//collision

	StaticMesh->SetupAttachment(SceneRoot);

}

// Called when the game starts or when spawned
void AShield::BeginPlay()
{
	Super::BeginPlay();

	MID_Base = StaticMesh->CreateDynamicMaterialInstance(0, MI_Base);
	MID_Shield = StaticMesh->CreateDynamicMaterialInstance(1, MI_Shield);		
}

// Called every frame
void AShield::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}


void AShield::OnSpawn()
{	
	StaticMesh->SetMaterial(0, MI_Wireframe);
	MID_Shield->SetScalarParameterValue(TEXT("Opacity"), 0.0f);	
}


void AShield::Spawned()
{	
	StaticMesh->SetMaterial(0, MID_Base);
	MID_Shield->SetScalarParameterValue(TEXT("Opacity"), 0.1f);
	StaticMesh->SetSimulatePhysics(false);
	SetLifeSpan(ShieldLifeSpan);
}


#if WITH_EDITOR

void AShield::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	FName PropertyName = (PropertyChangedEvent.Property) ? PropertyChangedEvent.Property->GetFName() : NAME_None;

	if (PropertyName == GET_MEMBER_NAME_CHECKED(AShield, SM_Shield))
	{
		if (StaticMesh)
		{
			StaticMesh->SetStaticMesh(SM_Shield);
		}
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}

#endif