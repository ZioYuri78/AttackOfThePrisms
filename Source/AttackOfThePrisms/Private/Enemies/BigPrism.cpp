// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "BigPrism.h"
#include "Target.h"
#include "SmallPrism.h"
#include "SinglePlayerGameMode.h"

// Sets default values
ABigPrism::ABigPrism()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationYaw = false;
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

	GetCapsuleComponent()->SetCapsuleHalfHeight(400.0f);
	GetCapsuleComponent()->SetCapsuleRadius(150.0f);
	GetCapsuleComponent()->BodyInstance.bLockXRotation = true;
	GetCapsuleComponent()->BodyInstance.bLockYRotation = true;

	GetMesh()->SetRelativeLocation(FVector(0.0f, 0.0f, -380.0f));
	GetMesh()->SetCollisionProfileName(FName("NoCollision"));
	

	SpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("SpawnPoint"));
	SpawnPoint->SetRelativeLocation(FVector(-313.0f, 0.0f, 80.0f));
	SpawnPoint->SetRelativeRotation(FRotator(0.0f, -180.0f, 0.0f));
	SpawnPoint->SetupAttachment(GetMesh());

	SpawnPointBillboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("SpawnPointBillboard"));
	SpawnPointBillboard->SetupAttachment(SpawnPoint);

	DustParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DustParticle"));
	DustParticle->SetRelativeLocation(FVector(0.0f, 0.0f, -10.0f));
	DustParticle->SetRelativeScale3D(FVector(2.0f, 3.0f, 1.0f));
	DustParticle->SetupAttachment(GetMesh());

	RadialForce = CreateDefaultSubobject<URadialForceComponent>(TEXT("RadialForce"));
	RadialForce->SetRelativeLocation(FVector(0.0f, 0.0f, -356.0f));
	RadialForce->Radius = 300.0f;
	RadialForce->ImpulseStrength = 50.0f;
	RadialForce->bImpulseVelChange = true;
	RadialForce->bIgnoreOwningActor = true;
	RadialForce->SetupAttachment(GetCapsuleComponent());

	GetCharacterMovement()->bOrientRotationToMovement = true;

	OnTakeAnyDamage.AddDynamic(this, &ABigPrism::TakeAnyDamage);
}

// Called when the game starts or when spawned
void ABigPrism::BeginPlay()
{
	Super::BeginPlay();

	MID_Base = GetMesh()->CreateDynamicMaterialInstance(0);

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATarget::StaticClass(), Targets);
	
	Spawner();
}

// Called every frame
void ABigPrism::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

	RadialForce->FireImpulse();

	if (bIsUnderAttack)
	{
		bDoTick2 = false;

		if (bDoTick)
		{
			return;
		}
		else
		{
			MID_Base->SetVectorParameterValue(FName("Emissive Color"), FLinearColor::Red);
			OnAttackChange.Broadcast(bIsUnderAttack);
			GetWorld()->GetTimerManager().SetTimer(ChangeIsUnderAttackTimerHandle, this, &ABigPrism::ChangeIsUnderAttack, UnderAttackCooldown, false);
			bDoTick = true;
			UE_LOG(LogTemp, Warning, TEXT("bIsUnderAttack = true"));
		}		
	}
	else
	{
		if (bDoTick2)
		{
			return;
		}
		else
		{
			MID_Base->SetVectorParameterValue(FName("Emissive Color"), FLinearColor::Green);
			bDoTick2 = true;
			UE_LOG(LogTemp, Warning, TEXT("bIsUnderAttack = false"));
		}

	}
	
	
}


void ABigPrism::TakeAnyDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	Health -= Damage;

	if (Health <= 0.0f)
	{
		CallDestroy();
		return;
	}

	if (Health <= 90.0f)
	{
		if (bDamageLevel02)
		{
			return;
		}
		else
		{
			Spawner();
			GetMesh()->SetSkeletalMesh(SK_Damage_02);
			UParticleSystemComponent* DestroyFX = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionFX, GetActorTransform());
			DestroyFX->SetWorldScale3D(FVector(5.0f, 5.0f, 5.0f));
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), ExplosionSFX, GetActorLocation());

			bDamageLevel02 = true;
		}
				
	}

	if (Health <= 170.0f)
	{
		if (bDamageLevel01)
		{
			return;
		}
		else
		{
			Spawner();
			GetMesh()->SetSkeletalMesh(SK_Damage_01);
			UParticleSystemComponent* DestroyFX = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionFX, GetActorTransform());
			DestroyFX->SetWorldScale3D(FVector(5.0f, 5.0f, 5.0f));
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), ExplosionSFX, GetActorLocation());

			bDamageLevel01 = true;
		}
		
		
	}


}


void ABigPrism::CallDestroy()
{
	UE_LOG(LogTemp, Warning, TEXT("CallDestroy"));
	UParticleSystemComponent* DestroyFX = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionFX, GetActorTransform());
	DestroyFX->SetWorldScale3D(FVector(5.0f, 5.0f, 5.0f));
	
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), ExplosionSFX, GetActorLocation());

	ASinglePlayerGameMode* GM = Cast<ASinglePlayerGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	GM->AddPlayerPoint();

	Destroy();

}


void ABigPrism::Spawner()
{
	GetWorld()->GetTimerManager().SetTimer(SpawnSmallPrismTimerHandle, this, &ABigPrism::SpawnSmallPrism, 0.3f, true);
}


void ABigPrism::SpawnSmallPrism()
{
	if (SpawnCounter == MaxSpawn)
	{
		GetWorld()->GetTimerManager().ClearTimer(SpawnSmallPrismTimerHandle);
		SpawnCounter = 0;
	}
	else
	{
		FActorSpawnParameters SpawnParameters = FActorSpawnParameters();
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		GetWorld()->SpawnActor<ASmallPrism>(SmallPrism, SpawnPoint->GetComponentTransform(), SpawnParameters);
		SpawnCounter += 1;
	}
}


void ABigPrism::ChangeIsUnderAttack()
{
	bIsUnderAttack = false;
	OnAttackChange.Broadcast(bIsUnderAttack);
	bDoTick = false;
}

//---------------------------

