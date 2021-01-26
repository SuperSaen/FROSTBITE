// Copyright 2015 Pascal Krabbe

#include "Items/AdvKitFireModeConfiguration.h"

UAdvKitFireModeConfiguration::UAdvKitFireModeConfiguration(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Spread = 0;
	bFireOnStop = false;
	bWantsToFire = false;
	CharacterFireMontage = nullptr;
	FireType = EAdvKitRifleFireType::InstantHit;

	AmmunitionPerShot = 1;
	InstantDamage = 10;
	TraceDistance = 10000;

	bShouldRefire = true;
	RefireTime = 0.5f;

	//bAutoActivate = true;
	//SetNetAddressable();
	//SetIsReplicated(true);
}

