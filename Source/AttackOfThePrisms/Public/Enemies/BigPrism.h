// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Prism.h"
#include "BigPrism.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttackChange, bool, bIsUnderAttack);

UCLASS(Blueprintable)
class ATTACKOFTHEPRISMS_API ABigPrism : public APrism
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABigPrism();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UFUNCTION()
	void TakeAnyDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	UFUNCTION()
	void CallDestroy();

	UFUNCTION()
	void Spawner();

	UFUNCTION()
	void SpawnSmallPrism();

	UFUNCTION()
	void ChangeIsUnderAttack();

	// Timers
	UPROPERTY()
	FTimerHandle SpawnSmallPrismTimerHandle;

	UPROPERTY()
	FTimerHandle ChangeIsUnderAttackTimerHandle;

	// EventDispatchers
	UPROPERTY()
	FOnAttackChange OnAttackChange;

	// Components
	UPROPERTY(EditDefaultsOnly, Category = "Components")
	USceneComponent* SpawnPoint;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	UBillboardComponent* SpawnPointBillboard;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	UParticleSystemComponent* DustParticle;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	URadialForceComponent* RadialForce;

	// Properties
	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "BigPrism")
	//TArray<AActor*> Targets;
		
	UPROPERTY(EditAnywhere, Category = "BigPrism")
	bool bIsUnderAttack = false;

	UPROPERTY(EditAnywhere, Category = "BigPrism")
	float UnderAttackCooldown = 10.0f;

	UPROPERTY(EditAnywhere, Category = "BigPrism")
	float Health = 250.0f;

	UPROPERTY(EditAnywhere, Category = "BigPrism")
	int32 MaxSpawn = 15;

	UPROPERTY(VisibleAnywhere, Transient, Category = "BigPrism")
	int32 SpawnCounter = 0;

	UPROPERTY(EditAnywhere, Category = "BigPrism")
	USoundBase* ExplosionSFX;

	UPROPERTY(EditAnywhere, Category = "BigPrism")
	UParticleSystem* ExplosionFX;

	UPROPERTY(EditAnywhere, Category = "BigPrism")
	TSubclassOf<class ASmallPrism> SmallPrism;

	UPROPERTY(EditAnywhere, Category = "BigPrism")
	USkeletalMesh* SK_Damage_01;

	UPROPERTY(EditAnywhere, Category = "BigPrism")
	USkeletalMesh* SK_Damage_02;

	UPROPERTY()
	UMaterialInstanceDynamic* MID_Base;

	UPROPERTY()
	bool bDamageLevel00 = false; // Not Used

	UPROPERTY()
	bool bDamageLevel01 = false;

	UPROPERTY()
	bool bDamageLevel02 = false;

	//---------------------

	bool bDoTick = false;
	bool bDoTick2 = false;



	
	
};
