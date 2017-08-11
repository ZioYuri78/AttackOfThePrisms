// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

UCLASS(Blueprintable)
class ATTACKOFTHEPRISMS_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	

protected:

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	USphereComponent* CollisionSphere;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	UParticleSystemComponent* FireEffect;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
	UParticleSystem* ImpactEffect;

	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
	float Damage = 5.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
	USoundBase* ImpactSound;
	

	UFUNCTION()
	void BeginOverlap(AActor* OverlappedActor, AActor* OtherActor);


	
};
