// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "BTSFindPlayer.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTSFindPlayer::UBTSFindPlayer()
{
	bNotifyBecomeRelevant = true;
}


void UBTSFindPlayer::OnBecomeRelevant(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	Super::OnBecomeRelevant(OwnerComp, NodeMemory);

	ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	if (PlayerCharacter)
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsObject(Player.SelectedKeyName, PlayerCharacter);
	}
}
