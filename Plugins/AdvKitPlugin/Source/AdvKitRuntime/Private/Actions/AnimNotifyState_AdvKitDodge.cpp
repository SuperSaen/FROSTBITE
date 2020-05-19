// Copyright 2015 Pascal Krabbe

#include "Actions/AnimNotifyState_AdvKitDodge.h"
#include "Player/AdvKitGravityCharacter.h"
#include "Player/AdvKitGravityCharacterMovementComponent.h"
#include "Player/AdvKitTargetPoint.h"
#include "Components/SkeletalMeshComponent.h"


UAnimNotifyState_AdvKitDodge::UAnimNotifyState_AdvKitDodge(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DodgeAlpha = 0.0f;
	DodgeDuration = 0.0f;
	DodgeSpeed = 600;


	DodgeSpeedCurve.GetRichCurve()->AddKey(0, 1);
	DodgeSpeedCurve.GetRichCurve()->AddKey(1, 1);
}

AAdvKitCharacter* UAnimNotifyState_AdvKitDodge::GetOwningCharacter(USkeletalMeshComponent * MeshComp) const
{
	return Cast<AAdvKitCharacter>(MeshComp->GetOwner());
}

UAdvKitCharacterMovementComponent* UAnimNotifyState_AdvKitDodge::GetOwningMovementComponent(USkeletalMeshComponent * MeshComp) const
{
	auto Character = GetOwningCharacter(MeshComp);
	if (!Character)
	{
		return nullptr;
	}

	return Character->GetAdvMovementComponent();
}

void UAnimNotifyState_AdvKitDodge::NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration)
{
	if(Received_NotifyBegin(MeshComp, Animation, TotalDuration))
	{
		return;
	}

	DodgeAlpha = 0;
	LastCharacterLocation = FVector::ZeroVector;
	DodgeDuration = TotalDuration;

	auto CharacterOwner = GetOwningCharacter(MeshComp);
	if (!CharacterOwner)
	{
		return;
	}

	LastCharacterLocation = CharacterOwner->GetActorLocation();

	//Dodge forward
	DodgeDirection = CharacterOwner->GetActorForwardVector();

	//Dodge away from target
	if (CharacterOwner->bLockTarget)
	{
		DodgeDirection = -CharacterOwner->GetActorForwardVector();
	}

	auto MovementComponent = GetOwningMovementComponent(MeshComp);
	if (!MovementComponent)
	{
		return;
	}

	//Get dodge direction by current acceleration
	FVector CurrentAcceleration = MovementComponent->GetCurrentAcceleration();
	if (!CurrentAcceleration.IsNearlyZero())
	{
		DodgeDirection = CurrentAcceleration;
	}

	UAdvKitOrientationComponent* OrienationComponent = nullptr;
	auto GravityOwner = Cast<AAdvKitGravityCharacter>(CharacterOwner);
	if (GravityOwner)
	{
		OrienationComponent = GravityOwner->WorldOrientationComponent;
	}

	FRotator NewRotation = CharacterOwner->GetActorRotation();
	if (OrienationComponent)
	{
		NewRotation = OrienationComponent->TransformRotationW2L(NewRotation);
	}

	if (!DodgeDirection.IsNearlyZero())
	{
		NewRotation = DodgeDirection.Rotation();
	}

	if (OrienationComponent)
	{
		NewRotation = OrienationComponent->TransformRotationL2W(NewRotation);
	}

	CharacterOwner->SetActorRotation(NewRotation);
}

void UAnimNotifyState_AdvKitDodge::NotifyTick(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float FrameDeltaTime)
{
	if (Received_NotifyTick(MeshComp, Animation, FrameDeltaTime))
	{
		return;
	}

	auto CharacterOwner = GetOwningCharacter(MeshComp);
	if (!CharacterOwner)
	{
		return;
	}

	auto MovementComponent = GetOwningMovementComponent(MeshComp);
	if (!MovementComponent)
	{
		return;
	}

	UAdvKitOrientationComponent* OrienationComponent = nullptr;
	auto GravityOwner = Cast<AAdvKitGravityCharacter>(CharacterOwner);
	if (GravityOwner)
	{
		OrienationComponent = GravityOwner->WorldOrientationComponent;
	}

	//Update dodge 
	DodgeAlpha += FrameDeltaTime / DodgeDuration;
	if (DodgeAlpha > 1)
	{
		DodgeAlpha = 1;
		return;
	}

	//If the character is locked to a target, the dodge direction will be modified to accommodate it
	if (CharacterOwner->bLockTarget)
	{
		DodgeDirection = ModifyAccelerationWhenTargetLocked(CharacterOwner, DodgeDirection);
	}

	//Calculate where to go how fast
	FVector DodgeAcceleration = DodgeDirection.GetSafeNormal()*DodgeSpeed*DodgeSpeedCurve.GetRichCurve()->Eval(DodgeAlpha);

	//Actual movement is governed by delta time
	FVector DodgeDelta = DodgeAcceleration * FrameDeltaTime;
	if (OrienationComponent)
	{
		DodgeDelta = OrienationComponent->TransformDirectionW2L(DodgeDelta);
	}

	//Calculate location changes for rotation
	FVector NewCharacterLocation = CharacterOwner->GetActorLocation();
	FVector CharacterLocationDelta = NewCharacterLocation - LastCharacterLocation;
	LastCharacterLocation = NewCharacterLocation;

	if (OrienationComponent)
	{
		CharacterLocationDelta = OrienationComponent->TransformDirectionW2L(CharacterLocationDelta);
	}
	CharacterLocationDelta.Z = 0;

	//In case movement delta is zero rotator cannot be created 
	if (CharacterLocationDelta.IsNearlyZero())
	{
		//Substitute with intended delta
		CharacterLocationDelta = DodgeDelta;
		if (OrienationComponent)
		{
			CharacterLocationDelta = OrienationComponent->TransformDirectionW2L(CharacterLocationDelta);
		}
		CharacterLocationDelta.Z = 0;
	}

	FRotator NewRotation = CharacterOwner->GetActorRotation();
	if (OrienationComponent)
	{
		NewRotation = OrienationComponent->TransformRotationW2L(NewRotation);
	}

	if (!CharacterLocationDelta.IsNearlyZero())
	{
		NewRotation = CharacterLocationDelta.Rotation();
	}

	if (OrienationComponent)
	{
		NewRotation = OrienationComponent->TransformRotationL2W(NewRotation);
		DodgeDelta = OrienationComponent->TransformDirectionL2W(DodgeDelta);
	}

	//Apply movement and rotation
	MovementComponent->AccumulateRootMotion(DodgeDelta, NewRotation);
}

FVector UAnimNotifyState_AdvKitDodge::ModifyAccelerationWhenTargetLocked(AAdvKitCharacter* CharacterOwner, const FVector& OriginalAcceleration)
{
	//Cannot modify acceleration without target
	if (!CharacterOwner || !CharacterOwner->CurrentTarget || !CharacterOwner->bLockTarget)
	{
		return OriginalAcceleration;
	}

	//Flattened Direction from character to target
	auto CurrentTarget = CharacterOwner->CurrentTarget;
	FVector ForwardVector = (CharacterOwner->GetActorLocation() - CurrentTarget->GetActorLocation()).GetSafeNormal();
	ForwardVector.Z = 0;

	//Make acceleration vector perpendicular to forward vector
	FVector UpVector = FVector::CrossProduct(ForwardVector, OriginalAcceleration.GetSafeNormal());
	FVector AccelVector = FVector::CrossProduct(UpVector, ForwardVector);

	//Interpolate acceleration vector by difference between intended and actual direction
	float AccelDot = FVector::DotProduct(AccelVector, OriginalAcceleration.GetSafeNormal());
	if (AccelDot < 0.5f)
	{
		return FMath::Lerp<FVector>(OriginalAcceleration, AccelVector*OriginalAcceleration.Size(), AccelDot / 0.5f);
	}

	//Fully commit to radial acceleration
	return AccelVector*OriginalAcceleration.Size();
}
