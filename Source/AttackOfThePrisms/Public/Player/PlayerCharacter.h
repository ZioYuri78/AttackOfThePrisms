// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "Blueprint/UserWidget.h"
#include <WidgetLayoutLibrary.h>
#include "PlayerCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShieldChange, int32, Shields);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChange, float, Health);

UCLASS()
class ATTACKOFTHEPRISMS_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	
	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	void MoveForward(float Value);

	void MoveRight(float Value);

	void Turn(float Value);

	void LookUp(float Value);

	void ShowMenu();

	void OnSpawnShield();

	void SpawnShield();

	void StartSprint();

	void StopSprint();

	void PullTrigger();

	void ReleaseTrigger();

	void Fire();

	void Special();

	UFUNCTION(BlueprintCallable, Category = "Health")
	void RefillHealth();

	UFUNCTION(BlueprintCallable, Category = "Shield")
	void AddShield();	

	UFUNCTION(BlueprintCallable, Category = "Pause")
	void UnPause();



	

	
	UFUNCTION()
	void CallRespawn(AActor* DestroyedActor);
	
	UPROPERTY(BlueprintAssignable, Category = "EventDispatchers")
	FOnShieldChange OnShieldChange;

	UPROPERTY(BlueprintAssignable, Category = "EventDispatchers")
	FOnHealthChange OnHealthChange;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	

protected:

	
	// Components
	UPROPERTY(EditDefaultsOnly, Category = "Components")
	USpringArmComponent* SpringArm;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	UCameraComponent* Camera;
	
	UPROPERTY(EditDefaultsOnly, Category = "Components")
	USceneComponent* ProjectileSpawnR;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	USceneComponent* ProjectileSpawnL;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	USceneComponent* ShieldSpawnPoint;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	UStaticMeshComponent* SpecialBarrier;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	URadialForceComponent* RadialForce;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	UPhysicsHandleComponent* PhysicsHandle;

	// Special Timeline
	UPROPERTY()
	UTimelineComponent* SpecialTimeline;

	UPROPERTY(EditAnywhere, Category = "Special")
	UCurveFloat* SpecialCurve; 

	FOnTimelineFloat SpecialInterpFunction{};
	
	FOnTimelineEvent SpecialTimelineFinished{};

	UFUNCTION()
	void SpecialTimelineFloatReturn(float Value);

	UFUNCTION()
	void OnSpecialTimelineFinished();

	// Special Cooldown Timeline
	UPROPERTY()
	UTimelineComponent* CooldownTimeline;

	UPROPERTY(EditAnywhere, Category = "Special")
	UCurveFloat* CooldownCurve;

	FOnTimelineFloat CooldownInterpFunction{};
	
	FOnTimelineEvent CooldownTimelineFinished{};

	UFUNCTION()
	void CooldownTimelineFloatReturn(float Value);

	UFUNCTION()
	void OnCooldownTimelineFinished();

	// Properties
	UPROPERTY(EditAnywhere, Category = "Weapon")
	TSubclassOf<class AProjectile> BP_Projectile;

	UPROPERTY(EditAnywhere, Category = "Weapon")
	float RoundsPerSeconds = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Weapon")
	bool bIsFire = false;

	UPROPERTY(EditAnywhere, Category = "Weapon")
	USoundBase* FireSound;

	UPROPERTY(EditAnywhere, Category = "Speed")
	float WalkSpeed = 1200.0f;

	UPROPERTY(EditAnywhere, Category = "Speed")
	float RunSpeed = 1800.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Health")
	float MaxHealth = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Health")
	float Health = 100.0f;

	UPROPERTY(EditAnywhere, Category = "Health")
	bool bIsInvulerable = false;

	UPROPERTY(EditAnywhere, Category = "Shields")
	TSubclassOf<class AShield> BP_Shield;

	UPROPERTY(EditAnywhere, Category = "Shields")
	int32 MaxShields = 3;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Shields")
	int32 Shields = 3;

	UPROPERTY()
	class AShield* CurrentShield;
	
	UPROPERTY(EditAnywhere, Category = "Special")
	float SpecialSpeed = 2400.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Special")
	float SpecialCooldown = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Special")
	bool bIsSpecialAvailable = true;

	UPROPERTY(EditAnywhere, Category = "Special")
	UStaticMesh* SM_SpecialBarrier;
	
	UPROPERTY(EditAnywhere, Category = "Head Up Display")
	TSubclassOf<UUserWidget> WB_HUD;

	UPROPERTY()
	UUserWidget* WB_HUDInst;

	UPROPERTY(EditAnywhere, Category = "In Game Menu")
	TSubclassOf<UUserWidget> WB_InGameMenu;

	UPROPERTY()
	UUserWidget* WB_InGameMenuInst;

	UPROPERTY()
	FTimerHandle FireTimerHandle;

	UPROPERTY()
	FTimerHandle DelayTimerHandle;

	UPROPERTY(EditAnywhere, Category = "Damage")
	UParticleSystem* DamageEffect;


};
