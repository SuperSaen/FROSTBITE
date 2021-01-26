// Copyright 2015 Pascal Krabbe

#include "Actions/AnimNotify_OrientToZone.h"
#include "Player/AdvKitCharacter.h"
#include "Environment/AdvKitZone.h"
#include "Components/SkeletalMeshComponent.h"

UAnimNotify_OrientToZone::UAnimNotify_OrientToZone()
	: Super()
{
	bSetLocation = false;
	Location = FVector::ZeroVector;
	bSetRotation = true;
	Rotation = FRotator::ZeroRotator;
}

void UAnimNotify_OrientToZone::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::Notify(MeshComp, Animation);

	auto Character = Cast<AAdvKitCharacter>(MeshComp->GetOwner());
	if (!Character)
	{
		return;
	}

	auto Zone = Character->GetZone();
	if (Character->PendingTransition.IsValid())
	{
		Zone = Character->PendingTransition.Zone;
	}
	
	if(!Zone)
	{
		return;
	}

	FVector ClosestLocation = Zone->ConstrainPositionToZone(Character->GetActorLocation(), FVector::ZeroVector);
	FVector Forward = Zone->GetClosestZoneForwardVector(Character->GetActorLocation());
	FVector Right = Zone->GetClosestZoneRightVector(Character->GetActorLocation());

	FTransform ZoneTransform;
	ZoneTransform.SetTranslation(ClosestLocation);
	ZoneTransform.SetFromMatrix(FRotationMatrix::MakeFromXY(Forward, Right));

	if (bSetRotation)
	{
		Character->SetActorRotation(ZoneTransform.GetRotation()*Rotation.Quaternion());
	}

	if (bSetLocation)
	{
		Character->SetActorLocation(ZoneTransform.TransformPosition(Location));
	}

	//Apply changes immediately
	Character->UpdateComponentTransforms();
}
