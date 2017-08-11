// Fill out your copyright notice in the Description page of Project Settings.

#include "AttackOfThePrisms.h"
#include "PlayerCharacter.h"
#include "SinglePlayerGameMode.h"
#include "Shield.h"
#include "Projectile.h"



// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->SetNotifyRigidBodyCollision(true);
	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, 90.0f, 0.0f));

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetRelativeLocation(FVector(0.0f, 0.0f, 100.0f));
	SpringArm->TargetArmLength = 400.f;
	SpringArm->bUsePawnControlRotation = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));	
	Camera->SetupAttachment(SpringArm);

	SpringArm->SetupAttachment(GetCapsuleComponent());


	ProjectileSpawnR = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileSpawnR"));
	ProjectileSpawnR->SetRelativeLocation(FVector(90.0f, 43.0f, 19.0f));
	ProjectileSpawnR->SetupAttachment(GetCapsuleComponent());
	UBillboardComponent *PSRBillboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("PSRBillboard"));
	PSRBillboard->SetupAttachment(ProjectileSpawnR);

	ProjectileSpawnL = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileSpawnL"));
	ProjectileSpawnL->SetRelativeLocation(FVector(90.0f, -43.0f, 19.0f));
	ProjectileSpawnL->SetupAttachment(GetCapsuleComponent());
	UBillboardComponent *PSLBillboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("PSLBillboard"));
	PSLBillboard->SetupAttachment(ProjectileSpawnL);

	ShieldSpawnPoint = CreateDefaultSubobject<USceneComponent>( TEXT("ShieldSpawnPoint"));
	ShieldSpawnPoint->SetRelativeLocation(FVector(182.0f, 0.0f, -88.0f));
	ShieldSpawnPoint->SetupAttachment(GetCapsuleComponent());

	SpecialBarrier = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpecialBarrier"));
	SpecialBarrier->SetRelativeLocation(FVector(-48.0f, 0.0f, 0.0f));
	SpecialBarrier->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
	SpecialBarrier->SetRelativeScale3D(FVector(3.0f, 3.0f, 5.0f));
	SpecialBarrier->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	SpecialBarrier->SetVisibility(false);
	if (SM_SpecialBarrier)
	{
		SpecialBarrier->SetStaticMesh(SM_SpecialBarrier);
	}	
	SpecialBarrier->SetupAttachment(ShieldSpawnPoint);

	RadialForce = CreateDefaultSubobject<URadialForceComponent>(TEXT("RadialForce"));
	RadialForce->Radius = 500.0f;
	RadialForce->ImpulseStrength = 5000.0f;
	RadialForce->bImpulseVelChange = true;
	RadialForce->bIgnoreOwningActor = true;
	RadialForce->ForceStrength = 1000.0f;
	RadialForce->SetupAttachment(GetCapsuleComponent());

	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->MaxWalkSpeed = 1200.0f;

	PhysicsHandle = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("PhysicsHandle"));

	SpecialTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("SpecialTimeline"));
	SpecialInterpFunction.BindUFunction(this, FName{ TEXT("SpecialTimelineFloatReturn") });
	SpecialTimelineFinished.BindUFunction(this, FName{ TEXT("OnSpecialTimelineFinished") });

	CooldownTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("CooldownTimeline"));
	CooldownInterpFunction.BindUFunction(this, FName{ TEXT("CooldownTimelineFloatReturn") });
	CooldownTimelineFinished.BindUFunction(this, FName{ TEXT("OnCooldownTimelineFinished") });
	
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->ViewPitchMin = -45.0f;
	UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->ViewPitchMax = 10.0f;

	UWidgetLayoutLibrary::RemoveAllWidgets(GetWorld());
	WB_HUDInst = CreateWidget<UUserWidget>(GetWorld(), WB_HUD);
	if (WB_HUDInst)
	{
		WB_HUDInst->AddToViewport();
	}

	OnDestroyed.AddDynamic(this, &APlayerCharacter::CallRespawn);

	WB_InGameMenuInst = CreateWidget<UUserWidget>(GetWorld(), WB_InGameMenu);
	if (WB_InGameMenuInst)
	{
		WB_InGameMenuInst->AddToViewport();
		WB_InGameMenuInst->SetVisibility(ESlateVisibility::Collapsed);
	}

	SpecialTimeline->AddInterpFloat(SpecialCurve, SpecialInterpFunction, FName{ TEXT("SpecialTimeline") });
	SpecialTimeline->SetTimelineFinishedFunc(SpecialTimelineFinished);
	
	CooldownTimeline->AddInterpFloat(CooldownCurve, CooldownInterpFunction, FName{ TEXT("CooldownTimeline") });
	CooldownTimeline->SetTimelineFinishedFunc(CooldownTimelineFinished);

	
}

// Called every frame
void APlayerCharacter::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

	PhysicsHandle->SetTargetLocation(ShieldSpawnPoint->GetComponentLocation());
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

	InputComponent->BindAxis("MoveForward", this, &APlayerCharacter::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);
	InputComponent->BindAxis("Turn", this, &APlayerCharacter::Turn);
	InputComponent->BindAxis("LookUp", this, &APlayerCharacter::LookUp);

	InputComponent->BindAction("InGameMenu", IE_Pressed, this, &APlayerCharacter::ShowMenu).bExecuteWhenPaused = true;
	InputComponent->BindAction("Shield", IE_Pressed, this, &APlayerCharacter::OnSpawnShield);
	InputComponent->BindAction("Shield", IE_Released, this, &APlayerCharacter::SpawnShield);
	InputComponent->BindAction("Sprint", IE_Pressed, this, &APlayerCharacter::StartSprint);
	InputComponent->BindAction("Sprint", IE_Released, this, &APlayerCharacter::StopSprint);
	InputComponent->BindAction("Fire", IE_Pressed, this, &APlayerCharacter::PullTrigger);
	InputComponent->BindAction("Fire", IE_Released, this, &APlayerCharacter::ReleaseTrigger);
	InputComponent->BindAction("Special", IE_Pressed, this, &APlayerCharacter::Special);
	

}


void APlayerCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		
		FRotator Rotation = Controller->GetControlRotation();
		
		if (GetCharacterMovement()->IsMovingOnGround() || GetCharacterMovement()->IsFalling())
		{
			Rotation.Pitch = 0.0f;
		}
		// add movement in that direction
		const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}


void APlayerCharacter::MoveRight(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{

		FRotator Rotation = Controller->GetControlRotation();

		if (GetCharacterMovement()->IsMovingOnGround() || GetCharacterMovement()->IsFalling())
		{
			Rotation.Pitch = 0.0f;
		}
		// add movement in that direction
		const FVector Direction = FRotationMatrix(Rotation).GetScaledAxis(EAxis::Y);
		AddMovementInput(Direction, Value);
	}
}


void APlayerCharacter::Turn(float Value)
{
	AddControllerYawInput(Value);
}


void APlayerCharacter::LookUp(float Value)
{
	AddControllerPitchInput(Value);
}


void APlayerCharacter::ShowMenu()
{
	if (!GetWorld()->IsPaused())
	{
		WB_InGameMenuInst->SetVisibility(ESlateVisibility::Visible);
		APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
		if (PC)
		{
			PC->bShowMouseCursor = true;

			FInputModeGameAndUI InputMode;
			InputMode.SetWidgetToFocus(WB_InGameMenuInst->TakeWidget());
			PC->SetInputMode(InputMode);

			UGameplayStatics::SetGamePaused(GetWorld(), true);
		}
	}
	else
	{
		UnPause();
	}

}


void APlayerCharacter::OnSpawnShield()
{
	if (Shields > 0)
	{
		FTransform SpawnTransform = ShieldSpawnPoint->GetComponentTransform();
		CurrentShield = GetWorld()->SpawnActor<AShield>(BP_Shield, SpawnTransform);
		CurrentShield->OnSpawn();		
		PhysicsHandle->GrabComponentAtLocation(CurrentShield->StaticMesh, NAME_None, ShieldSpawnPoint->GetComponentLocation());
	}
}


void APlayerCharacter::SpawnShield()
{
	if (Shields > 0)
	{
		CurrentShield->Spawned();
		PhysicsHandle->ReleaseComponent();
		Shields -= 1;
		OnShieldChange.Broadcast(Shields);
	}
}


void APlayerCharacter::StartSprint()
{
	if (!bIsInvulerable)
	{
		GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
	}
}

void APlayerCharacter::StopSprint()
{
	if (!bIsInvulerable)
	{
		GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	}
}


void APlayerCharacter::PullTrigger()
{
	
	if (!FireTimerHandle.IsValid())
	{
		bIsFire = true;
		Fire();
		GetWorld()->GetTimerManager().SetTimer(FireTimerHandle, this, &APlayerCharacter::Fire, (1 / RoundsPerSeconds), true);
		UE_LOG(LogTemp, Warning, TEXT("TRIGGER PULLED"));
	}
	
}


void APlayerCharacter::ReleaseTrigger()
{
	bIsFire = false;
	GetWorld()->GetTimerManager().ClearTimer(FireTimerHandle);
	UE_LOG(LogTemp, Warning, TEXT("TRIGGER RELEASED"));
}


void APlayerCharacter::Fire()
{
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), FireSound, GetActorLocation());
	GetWorld()->SpawnActor<AProjectile>(BP_Projectile, ProjectileSpawnR->GetComponentTransform());
	GetWorld()->SpawnActor<AProjectile>(BP_Projectile, ProjectileSpawnL->GetComponentTransform());
	
}



void APlayerCharacter::Special()
{
	if (bIsSpecialAvailable)
	{
		RadialForce->FireImpulse();
		
		bIsSpecialAvailable = false;
		SpecialBarrier->SetVisibility(true);
		GetCharacterMovement()->MaxWalkSpeed = SpecialSpeed;
		bIsInvulerable = true;
		SpecialBarrier->SetCollisionResponseToAllChannels(ECR_Block);
		SpecialBarrier->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		SpecialTimeline->PlayFromStart();					
	}
}


void APlayerCharacter::RefillHealth()
{
	Health = MaxHealth;
	OnHealthChange.Broadcast(Health);
}


void APlayerCharacter::AddShield() 
{
	if (Shields < MaxShields)
	{
		Shields += 1;
		OnShieldChange.Broadcast(Shields);
	}
}


float APlayerCharacter::TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	if (!bIsInvulerable)
	{
		Health -= Damage;
		OnHealthChange.Broadcast(Health);
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DamageEffect, GetActorTransform());

		if (Health <= 0.0f)
		{
			WB_HUDInst->RemoveFromParent();
			Destroy();
		}
	}

	return Health;
}


void APlayerCharacter::UnPause()
{
	WB_InGameMenuInst->SetVisibility(ESlateVisibility::Collapsed);
	APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
	if (PC)
	{
		PC->bShowMouseCursor = false;

		FInputModeGameOnly InputMode;
		PC->SetInputMode(InputMode);

		UGameplayStatics::SetGamePaused(GetWorld(), false);
	}
}





void APlayerCharacter::CallRespawn(AActor* DestroyedActor)
{
	ASinglePlayerGameMode* GameMode = Cast<ASinglePlayerGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	GameMode->RespawnPlayer();
	
}


void APlayerCharacter::SpecialTimelineFloatReturn(float Value)
{
	SpecialCooldown = Value;
}

void APlayerCharacter::OnSpecialTimelineFinished()
{
	UE_LOG(LogTemp, Warning, TEXT("Special Timeline Finished"));
	SpecialBarrier->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	bIsInvulerable = false;
	SpecialBarrier->SetVisibility(false);
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	CooldownTimeline->PlayFromStart();
}


void APlayerCharacter::CooldownTimelineFloatReturn(float Value)
{
	SpecialCooldown = Value;
}

void APlayerCharacter::OnCooldownTimelineFinished()
{
	UE_LOG(LogTemp, Warning, TEXT("Cooldown Timeline Finished"));	
	bIsSpecialAvailable = true;
}


#if WITH_EDITOR

void APlayerCharacter::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	FName PropertyName = (PropertyChangedEvent.Property) ? PropertyChangedEvent.Property->GetFName() : NAME_None;

	if (PropertyName == GET_MEMBER_NAME_CHECKED(APlayerCharacter, SM_SpecialBarrier))
	{
		if (SpecialBarrier)
		{
			SpecialBarrier->SetStaticMesh(SM_SpecialBarrier);
		}
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}

#endif