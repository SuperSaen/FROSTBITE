// Copyright 2015 Pascal Krabbe

#include "Player/AdvKitCharacterMovementComponent.h"
#include "Player/AdvKitTraceUtilityComponent.h"
#include "Player/AdvKitCharacter.h"
#include "AdvKitLogCategories.h"
#include "Environment/AdvKitZone.h"

#include "Environment/AdvKitTransitionComponent.h"


//Begin CharacterMovementComponent.cpp / Wrapper
#include "Navigation/PathFollowingComponent.h"
#include "Net/UnrealNetwork.h"
#include "Engine/World.h"
#include "Components/SkeletalMeshComponent.h"
#include "TimerManager.h"
//FVector FRootMotionMovementParams::RootMotionScale(1.0f, 1.0f, 1.0f);

DEFINE_LOG_CATEGORY_STATIC(LogAdvKitCharacterMovement, Log, All);

// MAGIC NUMBERS from CharacterMovementComponent.cpp, works for epic, so it whould work for this
const float MAX_STEP_SIDE_Z = 0.08f;	// maximum z value for the normal on the vertical side of steps

//End CharacterMovementComponent.cpp  / Wrapper

void FSavedMove_AdvKitCharacter::SetMoveFor(ACharacter* Character, float InDeltaTime, FVector const& NewAccel, class FNetworkPredictionData_Client_Character& ClientData)
{
	Super::SetMoveFor(Character, InDeltaTime, NewAccel, ClientData);

	auto CharMov = Cast<UAdvKitCharacterMovementComponent>(Character->GetCharacterMovement());
	if (CharMov)
	{
		SavedLocalZoneLocation = CharMov->LocalZoneLocation;
	}

	//auto AdvCharacter = Cast<AAdvKitCharacter>(Character);
	//if (AdvCharacter)
	//{
	//	SavedPendingTransition = AdvCharacter->PendingTransition;
	//}
}

void FSavedMove_AdvKitCharacter::Clear()
{
	Super::Clear();

	//Clear variables back to their default values.
	SavedLocalZoneLocation = FVector::ZeroVector;
	//SavedPendingTransition.Clear();
}

//This is where we compress the flags saved in SetMoveFor. We're basically just ORing a bunch of them together.
uint8 FSavedMove_AdvKitCharacter::GetCompressedFlags() const
{
	uint8 Result = Super::GetCompressedFlags();

	return Result;
}

bool FSavedMove_AdvKitCharacter::CanCombineWith(const FSavedMovePtr& NewMove, ACharacter* Character, float MaxDelta) const
{
	auto AdvMove = ((FSavedMove_AdvKitCharacter*)&NewMove);

	if (SavedLocalZoneLocation != AdvMove->SavedLocalZoneLocation)
	{
		return false;
	}

	//if (SavedPendingTransition.Zone != AdvMove->SavedPendingTransition.Zone
	//	|| SavedPendingTransition.Transition != AdvMove->SavedPendingTransition.Transition
	//	|| SavedPendingTransition.bIsValid != AdvMove->SavedPendingTransition.bIsValid)
	//{
	//	return false;
	//}

	return Super::CanCombineWith(NewMove, Character, MaxDelta);
}

void FSavedMove_AdvKitCharacter::PrepMoveFor(class ACharacter* Character)
{
	Super::PrepMoveFor(Character);

	auto CharMov = Cast<UAdvKitCharacterMovementComponent>(Character->GetCharacterMovement());
	if (CharMov)
	{
		//This is just the exact opposite of SetMoveFor. It copies the state from the saved move to the movement
		//component before a correction is made to a client.
		CharMov->LocalZoneLocation = SavedLocalZoneLocation;

		//Don't update flags here. They're automatically setup before corrections using the compressed flag methods.
	}

	//auto AdvCharacter = Cast<AAdvKitCharacter>(Character);
	//if (AdvCharacter)
	//{
	//	//AdvCharacter->PendingTransition = SavedPendingTransition;
	//}
}

FNetworkPredictionData_Client_AdvKitCharacter::FNetworkPredictionData_Client_AdvKitCharacter(const UCharacterMovementComponent& ClientMovement)
	: Super(ClientMovement)
{

}

FSavedMovePtr FNetworkPredictionData_Client_AdvKitCharacter::AllocateNewMove()
{
	return FSavedMovePtr(new FSavedMove_AdvKitCharacter());
}

class FNetworkPredictionData_Client* UAdvKitCharacterMovementComponent::GetPredictionData_Client() const
{
	check(CharacterOwner != NULL);
	checkSlow(CharacterOwner->Role < ROLE_Authority || (CharacterOwner->GetRemoteRole() == ROLE_AutonomousProxy && GetNetMode() == NM_ListenServer));
	checkSlow(GetNetMode() == NM_Client || GetNetMode() == NM_ListenServer);

	if (!ClientPredictionData)
	{
		auto MutableThis = const_cast<UAdvKitCharacterMovementComponent*>(this);

		MutableThis->ClientPredictionData = new FNetworkPredictionData_Client_AdvKitCharacter(*this);
		MutableThis->ClientPredictionData->MaxSmoothNetUpdateDist = 92.f;
		MutableThis->ClientPredictionData->NoSmoothNetUpdateDist = 140.f;
	}

	return ClientPredictionData;
}

void UAdvKitCharacterMovementComponent::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UAdvKitCharacterMovementComponent, LocalZoneLocation);
	DOREPLIFETIME(UAdvKitCharacterMovementComponent, CurrentBalance);
	DOREPLIFETIME(UAdvKitCharacterMovementComponent, BalanceOffset);
}


UAdvKitCharacterMovementComponent::UAdvKitCharacterMovementComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer), AdvKitCharacterOwner(nullptr)
{
	NavAgentProps.bCanCrouch = true;
	NavAgentProps.bCanSwim = true;

	JumpDistanceLedgeLadderHorizontal = 160.0f;

	LedgeJumpDistanceVertical = 180;
	LedgeJumpDistanceHorizontal = 160;
	LedgeJumpDistanceBack = 250;

	MaxLedgeClimbSpeed = 100.0;
	LedgeOffset = FVector(33, 0, -63);

	LadderJumpDistanceHorizontal = 150;
	LadderJumpDistanceBack = 250;
	MaxLadderClimbSpeed = 150;
	LadderOffset = FVector(25, 0, 8);

	TightSpaceOffset = FVector(-10, 0, -5);
	MaxTightSpaceWalkSpeed = 50;

	MaxBalanceWalkSpeed = 30;
	BalanceRotationRate = 360;
	BalanceOffset = FVector(0, 0, -5);

	WallOffset = FVector(31, 0, 0);
	MaxWallClimbSpeed = 50;

	MaxCeilingClimbSpeed = 125;
	CeilingMinTransitionDot = 0.8f;
	CeilingOffset = FVector(100, 0, 0);

	BalanceChangeTime = 1;
	MaxBalance = 1;
	CounterBalanceMultiplier = 1.5f;
	MinCounterBalanceDot = 0.25f;
	MaxBalanceTurnAroundDot = 0.7f;

	BalanceChangePerSecond = 0.0f;
	CurrentBalance = 0.0f;;
	MinBalanceChangePerSecond = 0.8f;
	MaxBalanceChangePerSecond = 1.0f;

	SwimmingImmersionDepthFlat = 10;
	SwimmingImmersionDepthUpright = -10;
	SwimmingSurfaceMultiplier = 20;
	DivingToSwimmingImmersionDepth = 10;
	MaxUprightSwimSpeed = 100;

	bIgnoreBaseRotation = false;
}

void UAdvKitCharacterMovementComponent::SetMovementVariables(FVector NewVelocity, FVector NewAcceleration)
{
	if (!Acceleration.IsNearlyZero())
	{
		LastNonZeroAcceleration = Acceleration;
	}

	Acceleration = NewAcceleration;
	Velocity = NewVelocity;
}

//TODO look at StopActiveMovement
void UAdvKitCharacterMovementComponent::ZeroMovementVariables()
{
	SetMovementVariables(FVector::ZeroVector, FVector::ZeroVector);
}


void UAdvKitCharacterMovementComponent::TickComponent(float DeltaSeconds, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	SetMovementVariables(Velocity, Acceleration); //Update movement variables

	Super::TickComponent(DeltaSeconds, TickType, ThisTickFunction);
}

float UAdvKitCharacterMovementComponent::GetMaxSpeed() const
{
	switch (GetAdvMovementMode())
	{
	case EAdvKitMovementMode::ClimbingLedge:
		return MaxLedgeClimbSpeed;
	case EAdvKitMovementMode::ClimbingWall:
		return MaxWallClimbSpeed;
	case EAdvKitMovementMode::ClimbingLadder:
		return MaxLadderClimbSpeed;
	case EAdvKitMovementMode::ClimbingCeiling:
		return MaxCeilingClimbSpeed;
	case EAdvKitMovementMode::WalkingTightspace:
		return MaxTightSpaceWalkSpeed;
	case EAdvKitMovementMode::WalkingBalance:
		return MaxBalanceWalkSpeed;
	default: break;
	}

	return Super::GetMaxSpeed();
}

void UAdvKitCharacterMovementComponent::SetUpdatedComponent(USceneComponent* NewUpdatedComponent)
{
	Super::SetUpdatedComponent(NewUpdatedComponent);
	AdvKitCharacterOwner = Cast<AAdvKitCharacter>(PawnOwner);
}

void UAdvKitCharacterMovementComponent::SetAdvMovementMode(EAdvKitMovementMode NewMovementMode, uint8 NewCustomMode)
{
	switch (NewMovementMode)
	{
	//Wrap old movement modes
	case EAdvKitMovementMode::None:
		SetMovementMode(MOVE_None);
		break;
	case EAdvKitMovementMode::Walking:
		SetMovementMode(MOVE_Walking);
		break;
	case EAdvKitMovementMode::NavWalking:
		SetMovementMode(MOVE_NavWalking);
		break;
	case EAdvKitMovementMode::Falling:
		SetMovementMode(MOVE_Falling);
		break;
	case EAdvKitMovementMode::Swimming:
		SetMovementMode(MOVE_Swimming);
		break;
	case EAdvKitMovementMode::Flying:
		SetMovementMode(MOVE_Flying);
		break;
	//Utilize custom movement mode for new modes
	default:
		SetMovementMode(MOVE_Custom, (uint8)NewMovementMode + NewCustomMode);
		break;
	}
}

EAdvKitMovementMode UAdvKitCharacterMovementComponent::GetAdvMovementMode() const
{
	//Convert movement mode to advkit movement mode
	if (MovementMode == MOVE_Custom)
	{
		if (CustomMovementMode >= (uint8)EAdvKitMovementMode::Custom)
		{
			return EAdvKitMovementMode::Custom;
		}

		return (EAdvKitMovementMode)CustomMovementMode;
	}

	return (EAdvKitMovementMode)MovementMode.GetValue();
}

uint8 UAdvKitCharacterMovementComponent::GetAdvCustomMovementMode() const
{
	if (CustomMovementMode >= (uint8)EAdvKitMovementMode::Custom)
	{
		return CustomMovementMode - (uint8)EAdvKitMovementMode::Custom;
	}

	return 0;
}

bool UAdvKitCharacterMovementComponent::IsClimbingWall() const
{
	if (!HasValidData())
	{
		return false;
	}

	return GetAdvMovementMode() == EAdvKitMovementMode::ClimbingWall;
}

bool UAdvKitCharacterMovementComponent::IsClimbingCeiling() const
{
	if (!HasValidData())
	{
		return false;
	}

	return GetAdvMovementMode() == EAdvKitMovementMode::ClimbingCeiling;
}

bool UAdvKitCharacterMovementComponent::IsClimbingLadder() const
{
	if (!HasValidData())
	{
		return false;
	}

	return GetAdvMovementMode() == EAdvKitMovementMode::ClimbingLadder;
}

bool UAdvKitCharacterMovementComponent::IsClimbingLedge() const
{
	if (!HasValidData())
	{
		return false;
	}

	return GetAdvMovementMode() == EAdvKitMovementMode::ClimbingLedge;
}

bool UAdvKitCharacterMovementComponent::IsWalkingTightspace() const
{
	if (!HasValidData())
	{
		return false;
	}

	return GetAdvMovementMode() == EAdvKitMovementMode::WalkingTightspace;
}

bool UAdvKitCharacterMovementComponent::IsWalkingBalance() const
{
	if (!HasValidData())
	{
		return false;
	}

	return GetAdvMovementMode() == EAdvKitMovementMode::WalkingBalance;

}

void UAdvKitCharacterMovementComponent::StartNewPhysics(float DeltaSeconds, int32 Iterations)
{
	if ((DeltaSeconds < 0.0003f) || (Iterations > 7) || !HasValidData())
		return;

	if (UpdatedComponent->IsSimulatingPhysics())
	{
		UE_LOG(LogAdvKitCharacterMovement, Log, TEXT("UCharacterMovementComponent::StartNewPhysics: UpdateComponent (%s) is simulating physics - aborting."), *UpdatedComponent->GetPathName());
		return;
	}

	bMovementInProgress = true;

	//Start new physics depending on mode
	switch (GetAdvMovementMode())
	{
	case EAdvKitMovementMode::None:
		return;
	case EAdvKitMovementMode::Walking:
		PhysWalking(DeltaSeconds, Iterations);
		break;
	case EAdvKitMovementMode::NavWalking:
		PhysNavWalking(DeltaSeconds, Iterations);
		break;
	case EAdvKitMovementMode::Falling:
		PhysFalling(DeltaSeconds, Iterations);
		break;
	case EAdvKitMovementMode::Swimming:
		PhysSwimming(DeltaSeconds, Iterations);
		break;
	case EAdvKitMovementMode::Flying:
		PhysFlying(DeltaSeconds, Iterations);
		break;
	case EAdvKitMovementMode::ClimbingWall:
	case EAdvKitMovementMode::ClimbingCeiling:
	case EAdvKitMovementMode::ClimbingLedge:
	case EAdvKitMovementMode::ClimbingLadder:
	case EAdvKitMovementMode::WalkingTightspace:
	case EAdvKitMovementMode::WalkingBalance:
	case EAdvKitMovementMode::CustomZone:
		PhysZoneMoving(DeltaSeconds, Iterations);
		break;
	case EAdvKitMovementMode::ActionDriven: //Deprecated
		break;
	case EAdvKitMovementMode::Custom:
	default:
		PhysCustom(DeltaSeconds, Iterations);
		break;
	}

	bMovementInProgress = false;

	if (bDeferUpdateMoveComponent)
	{
		SetUpdatedComponent(DeferredUpdatedMoveComponent);
	}
}

void UAdvKitCharacterMovementComponent::PhysSwimming(float DeltaSeconds, int32 Iterations)
{
	Super::PhysSwimming(DeltaSeconds, Iterations);
}

void UAdvKitCharacterMovementComponent::PhysicsRotation(float DeltaSeconds)
{
	if (!HasValidData() || (!CharacterOwner->Controller && !bRunPhysicsWithNoController))
	{
		return;
	}

	const FRotator CurrentRotation = UpdatedComponent->GetComponentRotation();
	//FRotator DeltaRot = GetDeltaRotation(DeltaSeconds);
	//FRotator DesiredRotation = CurrentRotation;

	// Accumulate a desired new rotation.
	FRotator NewRotation = CurrentRotation;
	FVector DeltaMove = FVector::ZeroVector;

	switch (GetAdvMovementMode())
	{
	case EAdvKitMovementMode::None:
	case EAdvKitMovementMode::Walking:
	case EAdvKitMovementMode::NavWalking:
	case EAdvKitMovementMode::Falling:
	case EAdvKitMovementMode::Swimming:
	case EAdvKitMovementMode::Flying:
	case EAdvKitMovementMode::ClimbingCeiling:
	default:
		Super::PhysicsRotation(DeltaSeconds);
		return;
		//case EAdvKitMovementMode::Swimming:
	//{
	//	float ArbitratryUprightSpeedThreshold = MaxUprightSwimSpeed;
	//	FVector AlignVelocity = Velocity;

	//	//if (GetAdvMovementMode() == EAdvKitMovementMode::Swimming)
	//	//{
	//	//	AlignVelocity.Z = 0;
	//	//}

	//	bool Align = AlignVelocity.Size() > ArbitratryUprightSpeedThreshold;
	//	if (Align)
	//	{
	//		FQuat NewQuat = AlignVelocity.Rotation().Quaternion() * FRotator(-90, 0, 0).Quaternion();
	//		NewRotation = FQuat::Slerp(CurrentRotation.Quaternion(), NewQuat, DeltaSeconds*2.f).Rotator(); //TODO rotate at constant rate 
	//	}
	//	else if (!Align && !AlignVelocity.IsNearlyZero())
	//	{
	//		FVector ForwardAxis = AlignVelocity.GetSafeNormal();
	//		ForwardAxis.Z = 0;
	//		FQuat NewQuat = ForwardAxis.Rotation().Quaternion();
	//		NewRotation = FQuat::Slerp(CurrentRotation.Quaternion(), NewQuat, DeltaSeconds*2.f).Rotator(); //TODO rotate at constant rate 
	//	}
	//	else
	//	{
	//		//TODO use character forward vector
	//	}
	//	break;
	//}

	//These zones all have fixed orientations for the character
	case EAdvKitMovementMode::ClimbingWall:
	case EAdvKitMovementMode::WalkingTightspace:
	case EAdvKitMovementMode::ClimbingLedge:
	case EAdvKitMovementMode::ClimbingLadder:
	case EAdvKitMovementMode::WalkingBalance:
	case EAdvKitMovementMode::CustomZone:
		NewRotation = AdvKitCharacterOwner->GetDesiredRotationInZone(GetZone(), LocalZoneLocation);
		break;
	case EAdvKitMovementMode::Custom:
		break;
	}

	// Set the new rotation.
	if (!NewRotation.Equals(CurrentRotation.GetDenormalized(), 0.01f))
	{
		MoveUpdatedComponent(DeltaMove, NewRotation, true);
	}
}

class AAdvKitZone* UAdvKitCharacterMovementComponent::GetZone()
{
	if (!AdvKitCharacterOwner)
	{
		return nullptr;
	}

	return AdvKitCharacterOwner->GetZone();
}

bool UAdvKitCharacterMovementComponent::MoveLocationInZone(FVector GlobalAcceleration, float DeltaSeconds, const FVector& Extent, bool AutoTransition, bool ConstrainAcceleration)
{
	check(AdvKitCharacterOwner);

	//Needs a location to move
	auto Zone = GetZone();
	if (!Zone)
	{
		return false;
	}

	//DrawDebugCoordinateSystem(GetWorld(), LocationInZone->GetGlobalPosition(), UpdatedComponent->GetComponentRotation(), 100);

	FVector GlobalZoneLocation = Zone->GetZoneLocationWorld(LocalZoneLocation);
	FVector ActualAcceleration = ConstrainAcceleration ? Zone->ConstrainDirectionToZone(GlobalAcceleration, GlobalZoneLocation) : GlobalAcceleration;

	//Try to move location in the desired direction

	FVector ExpectedNewLocation = GlobalZoneLocation + ActualAcceleration*DeltaSeconds;

	//Zone->MoveLocationInDirection(LocationInZone, ActualAcceleration*DeltaSeconds, Extent, UpdatedComponent->GetComponentRotation());
	bool bMoved = Zone->MoveLocationInDirectionNew(LocalZoneLocation, ActualAcceleration*DeltaSeconds, Extent, UpdatedComponent->GetComponentRotation());
	FVector NewGlobalZoneLocation = Zone->GetZoneLocationWorld(LocalZoneLocation);

	if (bMoved && FMath::IsNearlyZero(FVector::Dist(NewGlobalZoneLocation, ExpectedNewLocation)))
	{
		return true;
	}

	//Location has not moved should a transition be attempted?
	if (!AutoTransition)
	{
		return true;
	}

	//If the character didn't move it is very likely it reached the end of the zone, 
	//it should try to transition when the player still wants to move
	if (GlobalAcceleration.IsNearlyZero())
	{
		return bMoved;
	}

	UE_LOG(LogAdvKitZone, VeryVerbose, TEXT("MoveLocationInZone attempting Auto Transition %s"), *GetNameSafe(Zone));

	AdvKitCharacterOwner->TryToTransition(
		Zone,
		GlobalZoneLocation,
		ActualAcceleration
		);

	//It might transition but character has not moved
	return bMoved;
}

bool UAdvKitCharacterMovementComponent::PhysMoveInZone(FVector GlobalAcceleration, FVector WorldOffset, float DeltaSeconds, const FVector& Extent, bool AutoTransition, bool ConstrainAcceleration)
{
	if (!CharacterOwner || (!CharacterOwner->Controller && !bRunPhysicsWithNoController && !HasAnimRootMotion() && !CurrentRootMotion.HasOverrideVelocity() && (CharacterOwner->GetLocalRole() != ROLE_SimulatedProxy)))
	{
		ZeroMovementVariables();
		return false;
	}

	ApplyRootMotionToVelocity(DeltaSeconds);

	//DrawDebugDirectionalArrow(GetWorld(), AdvKitCharacterOwner->GetActorLocation(), AdvKitCharacterOwner->GetActorLocation() + GlobalAcceleration, 15, FColor::Green);

	bool bInTransition = AdvKitCharacterOwner->PendingTransition.IsValid();

	bool bMoved = false;
	if (!(HasAnimRootMotion() || CurrentRootMotion.HasOverrideVelocity()) && !bInTransition)
	{
		bMoved = MoveLocationInZone(GlobalAcceleration, DeltaSeconds, Extent, AutoTransition, ConstrainAcceleration);

		//GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Green, CharacterOwner->GetName() + FString(":") + GetRoleString(GetOwnerRole()) + FString("    ----    ") + GetObjectNameSafe(AdvKitCharacterOwner->GetZone()));
		//GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Red, CharacterOwner->GetName() + FString(":") + GetRoleString(GetOwnerRole()) + FString("    ----    ") + LocalZoneLocation.ToString());
		//GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Green, CharacterOwner->GetName() + FString(":") + GetRoleString(GetOwnerRole()) + FString("    ----    ") + GetObjectNameSafe(GetMovementBase()));

		auto* Zone = GetZone();
		if (!IsValid(Zone))
		{
			return false;
		}

		//GEngine->AddOnScreenDebugMessage(-1, -1, FColor::Yellow, CharacterOwner->GetName() + FString(":") + GetRoleString(GetOwnerRole()) + FString("    ----    ") + GetObjectNameSafe(LocationInZone));


		FVector GlobalZoneLocation = Zone->GetZoneLocationWorld(LocalZoneLocation);

		//DrawDebugDirectionalArrow(GetWorld(), GlobalZoneLocation, GlobalZoneLocation + GlobalAcceleration, 15, FColor::Red);
		FVector ComponentLocation = UpdatedComponent->GetComponentLocation();
		
		if (DeltaSeconds == 0)
		{
			return false;
		}

		//Velocity is calculated from delta location
		FVector CharacterMovementDelta = GlobalZoneLocation + WorldOffset - ComponentLocation;
		Velocity = CharacterMovementDelta / DeltaSeconds;
		if (!bMoved && !GlobalAcceleration.IsNearlyZero())
		{
			return false;
		}


		FVector OldLocation = UpdatedComponent->GetComponentLocation();

		FHitResult Hit;
		SafeMoveUpdatedComponent(CharacterMovementDelta, CharacterOwner->GetActorRotation(), true, Hit);
		if (Hit.bBlockingHit && UpdatedComponent)
		{
			if (AdvKitCharacterOwner->TryToTransition(
				GetZone(),
				GetZone()->GetZoneLocationWorld(LocalZoneLocation),
				GlobalAcceleration
				))
			{
				return true;
			}

			SlideAlongSurface(CharacterMovementDelta, 1.f - Hit.Time, Hit.Normal, Hit, true);
		}

		FVector ZoneAdjustDelta = UpdatedComponent->GetComponentLocation() - (OldLocation + CharacterMovementDelta);
		if (!ZoneAdjustDelta.IsNearlyZero())
		{
			bMoved |= MoveLocationInZone(ZoneAdjustDelta, 1.0f, Extent, false, ConstrainAcceleration);
		}
	}
	else
	{
		MoveUpdatedComponent(Velocity*DeltaSeconds, CharacterOwner->GetActorRotation(), false);
	}

	return bMoved;
}

void UAdvKitCharacterMovementComponent::PhysZoneMoving(float DeltaSeconds, int32 Iterations)
{
	//TODO handle the whole balancing stuff in blueprint
	if ((GetAdvMovementMode() == EAdvKitMovementMode::WalkingBalance) && !(HasAnimRootMotion() || CurrentRootMotion.HasOverrideVelocity()))
	{
		//Handle Balance change
		if (!GetWorld()->GetTimerManager().IsTimerActive(ChangeBalanceTimerHandle))
		{
			GetWorld()->GetTimerManager().SetTimer(ChangeBalanceTimerHandle, this, &UAdvKitCharacterMovementComponent::ChangeTargetBalance, BalanceChangeTime, false);
		}

		//Automatic imbalancing
		CurrentBalance += BalanceChangePerSecond*DeltaSeconds;

		//Player trying to re-balance
		float BalanceModificationNormalDot = FVector::DotProduct(UpdatedComponent->GetRightVector(), Acceleration.GetSafeNormal());
		if (FMath::Abs<float>(BalanceModificationNormalDot) > MinCounterBalanceDot)
		{
			CurrentBalance += BalanceModificationNormalDot * DeltaSeconds * CounterBalanceMultiplier;
		}

		//Falling off
		if (CurrentBalance >= MaxBalance || CurrentBalance <= -MaxBalance)
		{
			AdvKitCharacterOwner->TransitionTo(nullptr, nullptr);
			return;
		}
	}

	FVector ZoneAcceleration = AdvKitCharacterOwner->GetZoneAcceleration().GetClampedToMaxSize(AdvKitCharacterOwner->GetMaxZoneSpeed());
	FVector Offset = AdvKitCharacterOwner->GetDesiredOffsetFromZone(GetZone(), LocalZoneLocation);
	FVector Extent = AdvKitCharacterOwner->GetHalfExtentForZone(GetZone());
	PhysMoveInZone(ZoneAcceleration, Offset, DeltaSeconds, Extent, true, false);

	UE_LOG(LogAdvKitZone, VeryVerbose, TEXT("New location is: %s"), *GetActorLocation().ToString());
}

void UAdvKitCharacterMovementComponent::ChangeTargetBalance()
{
	//Random new balance
	BalanceChangePerSecond = FMath::FRandRange(MinBalanceChangePerSecond, MaxBalanceChangePerSecond);
	if (FMath::RandRange(0, 1))
	{
		BalanceChangePerSecond *= -1;
	}
	
	//Restart Timer
	if (IsWalkingBalance())
	{
		if (!GetWorld()->GetTimerManager().IsTimerActive(ChangeBalanceTimerHandle))
		{
			GetWorld()->GetTimerManager().SetTimer(ChangeBalanceTimerHandle,this, &UAdvKitCharacterMovementComponent::ChangeTargetBalance, BalanceChangeTime, false);
		}
	}
}



void UAdvKitCharacterMovementComponent::AccumulateRootMotion(FVector MovementDelta, FRotator NewRotation)
{
	if (!CharacterOwner)
	{
		return;
	}

	//MoveUpdatedComponent(MovementDelta, NewRotation, false);

	FTransform RootMotionTransform;

	RootMotionTransform.SetRotation(
		CharacterOwner->GetMesh()->GetComponentQuat().Inverse()
		*
		NewRotation.Quaternion()
		*
		CharacterOwner->GetMesh()->GetRelativeRotation().Quaternion()
		);

	FVector LocalDelta = CharacterOwner->GetMesh()->GetComponentTransform().InverseTransformVector(MovementDelta);
	RootMotionTransform.SetLocation(LocalDelta);

	RootMotionParams.Accumulate(RootMotionTransform);
}

void UAdvKitCharacterMovementComponent::AccumulateRootMotionRotation(FRotator NewRotation)
{
	//MoveUpdatedComponent(FVector::ZeroVector, NewRotation, false);

	FTransform RootMotionTransform;

	RootMotionTransform.SetRotation(
		CharacterOwner->GetMesh()->GetComponentQuat().Inverse()
		*
		NewRotation.Quaternion()
		*
		CharacterOwner->GetMesh()->GetRelativeRotation().Quaternion()
	);

	RootMotionParams.Accumulate(RootMotionTransform);
}

void UAdvKitCharacterMovementComponent::AddRootMotionMovement(FVector GlobalDelta)
{
	//MoveUpdatedComponent(GlobalDelta, UpdatedComponent->GetComponentRotation(), false);

	FTransform RootMotionTransform;

	FVector LocalDelta = CharacterOwner->GetMesh()->GetComponentTransform().InverseTransformVector(GlobalDelta);
	RootMotionTransform.SetLocation(LocalDelta);

	RootMotionParams.Accumulate(RootMotionTransform);
}

void UAdvKitCharacterMovementComponent::AddRootMotionRotation(FRotator AdditionalRotation)
{
	//MoveUpdatedComponent(FVector::ZeroVector, UpdatedComponent->GetComponentRotation() + AdditionalRotation, false);

	FTransform RootMotionTransform;

	RootMotionTransform.SetRotation(
		AdditionalRotation.Quaternion()
		*
		CharacterOwner->GetMesh()->GetRelativeRotation().Quaternion()
		);

	RootMotionParams.Accumulate(RootMotionTransform);
}

void UAdvKitCharacterMovementComponent::OnMovementUpdated(float DeltaSeconds, const FVector & OldLocation, const FVector & OldVelocity)
{
	Super::OnMovementUpdated(DeltaSeconds, OldLocation, OldVelocity);

	if (!AdvKitCharacterOwner)
	{
		return;
	}

	////Store movement vector
	//if (PawnOwner->IsLocallyControlled())
	//{
	//	MoveDirection = PawnOwner->GetLastMovementInputVector();
	//}
	////Send movement vector to server
	//if (PawnOwner->Role < ROLE_Authority)
	//{
	//	ServerSetMoveDirection(MoveDirection);
	//}
}