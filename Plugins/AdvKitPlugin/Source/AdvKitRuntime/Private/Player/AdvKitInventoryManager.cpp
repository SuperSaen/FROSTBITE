// Copyright 2015 Pascal Krabbe

#include "Player/AdvKitInventoryManager.h"
#include "Player/AdvKitCharacter.h"
#include "Player/AdvKitCharacterMovementComponent.h"
#include "Engine/World.h"
#include "Net/UnrealNetwork.h"


AAdvKitInventoryManager::AAdvKitInventoryManager(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;

	SetRemoteRoleForBackwardsCompat(ROLE_AutonomousProxy);
	bReplicates = true;
	bNetUseOwnerRelevancy = true;
	SetReplicatingMovement(true);
}

void AAdvKitInventoryManager::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	AAdvKitCharacter* CharacterOwner = Cast<AAdvKitCharacter>(GetOwner());
	if (!IsValid(CharacterOwner))
	{
		return;
	}

	if (GetLocalRole() < ROLE_Authority)
	{
		return;
	}
}


void AAdvKitInventoryManager::EndPlay(EEndPlayReason::Type Reason)
{
	if (GetLocalRole() < ROLE_Authority)
	{
		return;
	}

	Super::EndPlay(Reason);
}

void AAdvKitInventoryManager::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (GetLocalRole() < ROLE_AutonomousProxy)
	{
		return;
	}
}


void AAdvKitInventoryManager::OwnerDied()
{
}

