// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Prism.h"
#include "SmallPrism.generated.h"

UCLASS(Blueprintable)
class ATTACKOFTHEPRISMS_API ASmallPrism : public APrism
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASmallPrism();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UFUNCTION()
	void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult &Hit);
	

	UFUNCTION()
	void CallDestroy();

	UFUNCTION()
	void OnBigPrismDestroyed(AActor* DestroyedActor);

	UFUNCTION()
	void OnBigPrismIsUnderAttack(bool bIsUnderAttack);


	UPROPERTY(VisibleAnywhere, Category = "SmallPrism")
	TArray<AActor*> BigPrisms;

	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SmallPrism")
	//TArray<AActor*> Targets;

	UPROPERTY(VisibleAnywhere, Category = "SmallPrism")
	float Damage = 1.0f;
	
	UPROPERTY()
	UMaterialInstanceDynamic* MID_SmallPrism;

	UPROPERTY(EditAnywhere, Category = "SmallPrism")
	bool bIsVulnerable = false;

	UPROPERTY(VisibleAnywhere, Category = "SmallPrism")
	class ABigPrism* CurrentBigPrism;
	
	UPROPERTY(EditDefaultsOnly, Category = "SmallPrism")
	USoundBase* ExplosionSound;

	UPROPERTY(EditDefaultsOnly, Category = "SmallPrism" )
	UParticleSystem* EsplosionFX;

	
	
};
