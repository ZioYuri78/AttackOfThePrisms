// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "SinglePlayerGameMode.h"
#include "PlayerCharacter.h"
#include "GigaPrism.h"
#include "Target.h"
#include "UserWidget.h"
#include "RespawnUI.h"
#include "Item.h"
#include "WidgetLayoutLibrary.h"
#include "BigPrism.h"
#include "SmallPrism.h"

ASinglePlayerGameMode::ASinglePlayerGameMode()
{
	DefaultPawnClass = APlayerCharacter::StaticClass();
}


void ASinglePlayerGameMode::BeginPlay()
{
	MaxWaves = FMath::RandRange(MinWaves, MaxWaves);

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATarget::StaticClass(), SpawnPoints);
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGigaPrism::StaticClass(), BackgroundPrisms);

	StartWaves();
	StartItemsSpawns();

	UGameplayStatics::PlaySound2D(GetWorld(), Music);
}


void ASinglePlayerGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bIsWin) 
	{
		bIsWin = ((PlayerPoints == EnemyPoints) && (EnemyPoints != 0));

		if (bIsWin)
		{
				
			UWidgetLayoutLibrary::RemoveAllWidgets(GetWorld());
			WB_WinInst = CreateWidget<UUserWidget>(GetWorld(), WB_Win);
			if (WB_WinInst)
			{
				WB_WinInst->AddToViewport();
			}

			TArray<AActor*> SmallPrisms;
			UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASmallPrism::StaticClass(), SmallPrisms);

			for (AActor* SP : SmallPrisms)
			{
				Cast<ASmallPrism>(SP)->ExplosionSound = nullptr;
				Cast<ASmallPrism>(SP)->CallDestroy();
			}

			TArray<AActor*> BigPrisms;
			UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABigPrism::StaticClass(), BigPrisms);

			for (AActor* BP : BigPrisms)
			{
				Cast<ABigPrism>(BP)->CallDestroy();
			}
		}
	}

	

	
}

void ASinglePlayerGameMode::StartWaves()
{
	UE_LOG(LogTemp, Warning, TEXT("StartWaves"));
	GetWorld()->GetTimerManager().SetTimer(CallAttackTimerHandle, this, &ASinglePlayerGameMode::CallAttack, FMath::RandRange(MinWavesCooldown, MaxWavesCooldown), true);
	CallAttack();
}


void ASinglePlayerGameMode::StartItemsSpawns()
{
	UE_LOG(LogTemp, Warning, TEXT("StartItemSpawns"));
	GetWorld()->GetTimerManager().SetTimer(SpawnItemTimerHandle, this, &ASinglePlayerGameMode::SpawnItems, ItemSpawnRate, true);
}


void ASinglePlayerGameMode::SpawnItems()
{
	UE_LOG(LogTemp, Warning, TEXT("SpawnItems"));
	if (bIsWin)
	{
		GetWorld()->GetTimerManager().ClearTimer(SpawnItemTimerHandle);
	}
	else
	{
		GetWorld()->SpawnActor<AItem>(ItemHealth, SpawnPoints[FMath::RandRange(0, SpawnPoints.Num()-1)]->GetTransform());
		GetWorld()->SpawnActor<AItem>(ItemShield, SpawnPoints[FMath::RandRange(0, SpawnPoints.Num() - 1)]->GetTransform());
	}
}

void ASinglePlayerGameMode::CallAttack()
{
	UE_LOG(LogTemp, Warning, TEXT("CallAttack"));

	if (!bIsWin)
	{
		if (!(WavesCounter == MaxWaves))
		{
			AGigaPrism* GigaPrism = Cast<AGigaPrism>(BackgroundPrisms[FMath::RandRange(0, BackgroundPrisms.Num()-1)]);
			GigaPrism->SpawnBeam();
			WavesCounter += 1;
		}
		else
		{
			GetWorld()->GetTimerManager().ClearTimer(CallAttackTimerHandle);
		}
	}
}

void ASinglePlayerGameMode::RespawnPlayer()
{
	UE_LOG(LogTemp, Warning, TEXT("CallRespawn"));

	PlayerLives -= 1;

	if (PlayerLives == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("GAME OVER WIDGET"));
		WB_GameOverInst = CreateWidget<UUserWidget>(GetWorld(), WB_GameOver);
		if (WB_GameOverInst)
		{
			WB_GameOverInst->AddToViewport();
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("RESPAWN WIDGET"));
		WB_RespawnInst = CreateWidget<URespawnUI>(GetWorld(), WB_Respawn);
		if (WB_RespawnInst)
		{
			WB_RespawnInst->Timer = RespawnDelay;
			WB_RespawnInst->AddToViewport();
		}

		GetWorld()->GetTimerManager().SetTimer(SpawnPlayerTimerHandle, this, &ASinglePlayerGameMode::SpawnPlayer, RespawnDelay, false);
	}
}


void ASinglePlayerGameMode::SpawnPlayer() 
{
	UE_LOG(LogTemp, Warning, TEXT("Respawn"));
	RestartPlayer(GetWorld()->GetFirstPlayerController());			
}


void ASinglePlayerGameMode::AddEnemyPoint()
{
	UE_LOG(LogTemp, Warning, TEXT("AddEnemyPoint"));
	EnemyPoints += 1;
	OnEnemyPointsChange.Broadcast(EnemyPoints);
}


void ASinglePlayerGameMode::AddPlayerPoint()
{
	UE_LOG(LogTemp, Warning, TEXT("AddEnemyPoint"));
	PlayerPoints += 1;
	OnPlayerPointsChange.Broadcast(PlayerPoints);
}

// TEST PURPOSE ONLY //
void ASinglePlayerGameMode::SpawnBeam()
{
	TArray<AActor*> GG;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AGigaPrism::StaticClass(), GG);
	AGigaPrism* Giga = Cast<AGigaPrism>(GG[0]);
	Giga->SpawnBeam();
}