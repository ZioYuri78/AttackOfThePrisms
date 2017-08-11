// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "BTTMoveTo.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "SmallPrism.h"


UBTTMoveTo::UBTTMoveTo()
{
	bNotifyTick = true;
}


EBTNodeResult::Type UBTTMoveTo::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	return EBTNodeResult::InProgress;
}


void UBTTMoveTo::TickTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);
	
	AAIController* OwnerController = OwnerComp.GetAIOwner();
	AActor* ControlledPawn = OwnerController->GetPawn();
	if (!ControlledPawn)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
	}

	AActor* TargetActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(Target.SelectedKeyName));
	bStopOnOverlap = ControlledPawn->IsOverlappingActor(TargetActor);
	if (bStopOnOverlap)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}

	APrism* Prism = Cast<APrism>(ControlledPawn);	
	
	if (TargetActor)
	{
		TargetLocation = TargetActor->GetActorLocation();
	}

	
	UCapsuleComponent* CapsuleComponent = Prism->GetCapsuleComponent();
	if (!CapsuleComponent)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
	}

	ForceVector = (TargetLocation - Prism->GetActorLocation()) * FVector(1.0f, 1.0f, 0.0f);
	ForceVector = ForceVector.GetSafeNormal(0.1f);
	
	ResultVector = ForceVector * ForceStrength;
	CapsuleComponent->AddForce(ResultVector);
	
	if (CapsuleComponent->GetComponentVelocity().Size() > 100.0f)
	{
		FRotator RotationFromX = CapsuleComponent->GetComponentVelocity().Rotation();
		FRotator TempRotator = FRotator(0.0f, RotationFromX.Yaw, 0.0f);
		// Basically UKismetMathLibrary::ComposeRotators(FRotator A, FRotator B)
		FQuat AQuat = FQuat(TempRotator);
		FQuat BQuat = FQuat(FRotator(0.0f, 0.0f, 0.0f));
		FRotator NewRotation = FRotator(BQuat*AQuat);
		//--------------------------------------------
		Prism->GetMesh()->SetWorldRotation(NewRotation);
	}
	
	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
}

