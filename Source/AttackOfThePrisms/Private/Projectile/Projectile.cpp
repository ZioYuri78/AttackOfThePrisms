// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "Projectile.h"
#include "BigPrism.h"
#include "SmallPrism.h"


// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
	CollisionSphere->SetSphereRadius(13.0f);
	CollisionSphere->SetNotifyRigidBodyCollision(true);
	CollisionSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionSphere->SetCollisionObjectType(ECC_WorldDynamic);
	CollisionSphere->SetCollisionResponseToChannel(ECC_Visibility, ECR_Overlap);
	CollisionSphere->SetCollisionResponseToChannel(ECC_Camera, ECR_Overlap);
	CollisionSphere->SetCollisionResponseToChannel(ECC_Target, ECR_Ignore);
	CollisionSphere->SetCollisionResponseToChannel(ECC_BPTarget, ECR_Ignore);
	CollisionSphere->SetCollisionResponseToChannel(ECC_BPItem, ECR_Ignore);
	RootComponent = CollisionSphere;

	FireEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireBall"));
	FireEffect->SetupAttachment(CollisionSphere);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->InitialSpeed = 3000.0f;
	ProjectileMovement->ProjectileGravityScale = 0.0f;
	
	OnActorBeginOverlap.AddDynamic(this, &AProjectile::BeginOverlap);
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("FIRE"));
	
}

// Called every frame
void AProjectile::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void AProjectile::BeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	if (OtherActor != this)
	{
		ABigPrism* BigPrism = Cast<ABigPrism>(OtherActor);
		if (BigPrism)
		{
			BigPrism->bIsUnderAttack = true;
			UGameplayStatics::ApplyDamage(BigPrism, Damage, nullptr, this, nullptr);
			
			if (BigPrism->IsValidLowLevelFast())
			{
				UGameplayStatics::PlaySoundAtLocation(this, ImpactSound, BigPrism->GetActorLocation());
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffect, GetActorTransform());
			}
			
			Destroy();
		}
		else
		{
			ASmallPrism* SmallPrism = Cast<ASmallPrism>(OtherActor);
			if (SmallPrism)
			{
				if (SmallPrism->bIsVulnerable)
				{
					UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffect, GetActorTransform());
					SmallPrism->CallDestroy();										
				}
				else
				{
					UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffect, GetActorTransform());					
				}

				Destroy();
			}
			else
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffect, GetActorTransform());
				Destroy();
			}
		}
	}
}

