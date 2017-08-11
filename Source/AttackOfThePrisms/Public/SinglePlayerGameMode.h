// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameMode.h"
#include "SinglePlayerGameMode.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnemyPointsChange, int32, EnemyPoints);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerPointsChange, int32, PlayerPoints);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerDead, int32, PlayerLives);


UCLASS()
class ATTACKOFTHEPRISMS_API ASinglePlayerGameMode : public AAttackOfThePrismsGameMode
{
	GENERATED_BODY()

	ASinglePlayerGameMode();
	
public:

	
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void StartWaves();

	UFUNCTION()
	void StartItemsSpawns();

	UFUNCTION()
	void SpawnItems();

	UFUNCTION()
	void CallAttack();

	UFUNCTION()
	void RespawnPlayer();

	UFUNCTION()
	void SpawnPlayer();

	UFUNCTION()
	void AddEnemyPoint();

	UFUNCTION()
	void AddPlayerPoint();
	
	// Timers
	UPROPERTY()
	FTimerHandle CallAttackTimerHandle;

	UPROPERTY()
	FTimerHandle SpawnPlayerTimerHandle;

	UPROPERTY()
	FTimerHandle SpawnItemTimerHandle;

	// Event Dispatchers
	UPROPERTY(BlueprintAssignable, Category = "EventDispatchers")
	FOnEnemyPointsChange OnEnemyPointsChange;

	UPROPERTY(BlueprintAssignable, Category = "EventDispatchers")
	FOnPlayerPointsChange OnPlayerPointsChange;

	UPROPERTY(BlueprintAssignable, Category = "EventDispatchers")
	FOnPlayerDead OnPlayerDead;
	
	// Properties
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player")
	int32 PlayerLives = 3;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player")
	int32 PlayerPoints = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Enemy")
	int32 EnemyPoints = 0;

	UPROPERTY(EditAnywhere, Category = "Waves")
	int32 MinWaves = 5;
	
	UPROPERTY(EditAnywhere, Category = "Waves")
	int32 MaxWaves = 10;

	UPROPERTY(VisibleAnywhere, Transient, Category = "Waves")
	int32 WavesCounter = 0;

	UPROPERTY(EditAnywhere, Category = "Waves")
	float MinWavesCooldown = 5.0f;

	UPROPERTY(EditAnywhere, Category = "Waves")
	float MaxWavesCooldown = 8.0f;

	UPROPERTY(VisibleAnywhere, Category = "Gameplay")
	TArray<AActor*> SpawnPoints;

	UPROPERTY(VisibleAnywhere, Category = "Gameplay")
	TArray<AActor*> BackgroundPrisms;

	UPROPERTY(EditAnywhere, Category ="Gameplay")
	bool bIsWin = false;

	UPROPERTY(EditDefaultsOnly, Category = "Music")
	USoundBase* Music;

	UPROPERTY(EditAnywhere, Category = "Gameplay")
	float ItemSpawnRate = 30.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Items")
	TSubclassOf<class AItem> ItemHealth;

	UPROPERTY(EditDefaultsOnly, Category = "Items")
	TSubclassOf<class AItem> ItemShield;

	UPROPERTY(EditAnywhere, Category = "Gameplay")
	int32 RespawnDelay = 3;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<class UUserWidget> WB_GameOver;

	UPROPERTY()
	class UUserWidget* WB_GameOverInst;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<class UUserWidget> WB_Respawn;

	UPROPERTY()
	class URespawnUI* WB_RespawnInst;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<class UUserWidget> WB_Win;

	UPROPERTY()
	class UUserWidget* WB_WinInst;

	




	// TEST PURPOSE ONLY //		
	UFUNCTION(Exec)
	void SpawnBeam();
};
