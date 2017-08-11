// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "SmallPrism.h"
#include "PlayerCharacter.h"
#include "Target.h"
#include "BigPrism.h"


// Sets default values
ASmallPrism::ASmallPrism()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationYaw = false;
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	

	GetCapsuleComponent()->SetCapsuleHalfHeight(50.0f);
	GetCapsuleComponent()->SetCapsuleRadius(50.0f);
	GetCapsuleComponent()->SetSimulatePhysics(true);
	GetCapsuleComponent()->SetAngularDamping(0.1f);
	GetCapsuleComponent()->BodyInstance.bLockXRotation = true;
	GetCapsuleComponent()->BodyInstance.bLockYRotation = true;
	GetCapsuleComponent()->BodyInstance.bLockZRotation = true;
	GetCapsuleComponent()->SetNotifyRigidBodyCollision(true);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Ignore);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_BPItem, ECR_Ignore);

	GetCharacterMovement()->bOrientRotationToMovement = true;
	
	OnActorHit.AddDynamic(this, &ASmallPrism::OnHit);
	
}

// Called when the game starts or when spawned
void ASmallPrism::BeginPlay()
{
	Super::BeginPlay();
	
	MID_SmallPrism = GetMesh()->CreateDynamicMaterialInstance(0);

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATarget::StaticClass(), Targets);
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABigPrism::StaticClass(), BigPrisms);

	for (AActor* BP : BigPrisms)
	{
		Cast<ABigPrism>(BP)->OnDestroyed.AddDynamic(this, &ASmallPrism::OnBigPrismDestroyed);
		Cast<ABigPrism>(BP)->OnAttackChange.AddDynamic(this, &ASmallPrism::OnBigPrismIsUnderAttack);
	}


}

// Called every frame
void ASmallPrism::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}


void ASmallPrism::OnHit(AActor * SelfActor, AActor * OtherActor, FVector NormalImpulse, const FHitResult & Hit)
{
	if (Cast<APlayerCharacter>(OtherActor))
	{
		UE_LOG(LogTemp, Warning, TEXT("OnHit"));
		TSubclassOf<UDamageType> const ValidDamageTypeClass = TSubclassOf<UDamageType>(UDamageType::StaticClass());
		FDamageEvent DamageEvent(ValidDamageTypeClass);
		OtherActor->TakeDamage(Damage, DamageEvent, NULL, this);
	}
	
}


void ASmallPrism::CallDestroy()
{
	UE_LOG(LogTemp, Warning, TEXT("CALL DESTROY"));
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), EsplosionFX, GetActorTransform());
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), ExplosionSound, GetActorLocation());
	Destroy();
}


void ASmallPrism::OnBigPrismDestroyed(AActor* DestroyedActor)
{
	UE_LOG(LogTemp, Warning, TEXT("OnBigPrismDestroyed"));
	BigPrisms.Remove(DestroyedActor);

	if (Cast<ABigPrism>(DestroyedActor) == CurrentBigPrism)
	{
		bIsVulnerable = true;
		MID_SmallPrism->SetVectorParameterValue(FName("Base Color"), FLinearColor::White);
		MID_SmallPrism->SetVectorParameterValue(FName("Emissive Color"), FLinearColor::Red);
	}
}


void ASmallPrism::OnBigPrismIsUnderAttack(bool bIsUnderAttack)
{
	//UE_LOG(LogTemp, Warning, TEXT("OnBigPrismIsUnderAttack"));
	if (bIsUnderAttack)
	{
		MID_SmallPrism->SetVectorParameterValue(FName("Emissive Color"), FLinearColor::Red);
	}
	else
	{
		MID_SmallPrism->SetVectorParameterValue(FName("Emissive Color"), FLinearColor::Green);
	}
}