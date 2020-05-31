#include "Player/AdvKitGravityCharacter.h"
#include "Player/AdvKitGravityCharacterMovementComponent.h"

#include "Player/AdvKitTraceUtilityComponent.h"

#include "Environment/AdvKitZone.h"
#include "Player/AdvKitTargetPoint.h"

#include "Net/UnrealNetwork.h"

AAdvKitGravityCharacter::AAdvKitGravityCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UAdvKitGravityCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	//Initialize trace component
	TraceWorldOrientation = ObjectInitializer.CreateDefaultSubobject<UAdvKitTraceUtilityComponent>(this, TEXT("TraceWorldOrientation"));
	if (TraceWorldOrientation)
	{
		TraceWorldOrientation->SetupAttachment(RootComponent);
		TraceWorldOrientation->SetRelativeRotation(FRotator(-90, 0, 0));
		TraceWorldOrientation->SetRelativeLocation(-FVector(0, 0, -90));
		TraceWorldOrientation->SetTraceLength(500);
		TraceWorldOrientation->SetDebugLineColor(FColor::Green);
	}
}

void AAdvKitGravityCharacter::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AAdvKitGravityCharacter, WorldOrientationComponent);
}

class UAdvKitGravityCharacterMovementComponent* AAdvKitGravityCharacter::GetAdvGravityMovementComponent() const
{
	return Cast<UAdvKitGravityCharacterMovementComponent>(GetMovementComponent());
}

void AAdvKitGravityCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	//Initialize orientation component
	WorldOrientationComponent = FindComponentByClass<UAdvKitOrientationComponent>();
}

bool AAdvKitGravityCharacter::CanWallWalkOn_Implementation(FFindFloorResult NewFloor)
{
	//Dummy implementation 
	return true;
}

void AAdvKitGravityCharacter::SetNewOrientation(FVector GravityUpVector, FVector Origin, bool bForce)
{
	if (!WorldOrientationComponent)
	{
		return;
	}

	if (GetLocalRole() < ROLE_AutonomousProxy)
	{
		return;
	}

	//Call server if client
	if (GetLocalRole() == ROLE_AutonomousProxy)
	{
		SetNewOrientationServer(GravityUpVector, Origin, bForce);
	}

	WorldOrientationComponent->SetOrientation(Origin, GravityUpVector, bForce);
}

bool AAdvKitGravityCharacter::SetNewOrientationServer_Validate(FVector GravityUpVector, FVector Origin, bool bForce)
{
	return true;
}

void AAdvKitGravityCharacter::SetNewOrientationServer_Implementation(FVector GravityUpVector, FVector Origin, bool bForce)
{
	SetNewOrientation(GravityUpVector, Origin, bForce);
}

void AAdvKitGravityCharacter::FaceRotation(FRotator NewControlRotation, float DeltaSeconds)
{
	if (GetZone())
	{
		return;
	}

	if (!WorldOrientationComponent)
	{
		Super::FaceRotation(NewControlRotation, DeltaSeconds);
		return;
	}

	FRotator CurrentRotation = WorldOrientationComponent->TransformRotationW2L(GetActorRotation());
	NewControlRotation = WorldOrientationComponent->TransformRotationW2L(NewControlRotation);

	if (!bUseControllerRotationPitch)
	{
		NewControlRotation.Pitch = CurrentRotation.Pitch;
	}
		
	if (!bUseControllerRotationYaw) //TODO better management of this rotation lock
	{
		NewControlRotation.Yaw = CurrentRotation.Yaw;
	}

	if (!bUseControllerRotationRoll)
	{
		NewControlRotation.Roll = CurrentRotation.Roll;
	}

	if (bFaceLockedTarget && bLockTarget && CurrentTarget)
	{
		FVector LocationDifference = CurrentTarget->GetActorLocation() - GetActorLocation();
		LocationDifference = WorldOrientationComponent->TransformDirectionW2L(LocationDifference);
		LocationDifference.Z = 0;
		NewControlRotation = LocationDifference.Rotation();
	}

	NewControlRotation = (WorldOrientationComponent->TransformRotationL2W(NewControlRotation));
	SetActorRotation(NewControlRotation);
}
