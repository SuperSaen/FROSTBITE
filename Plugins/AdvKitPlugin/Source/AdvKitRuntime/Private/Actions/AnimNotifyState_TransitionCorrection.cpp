// Copyright 2015 Pascal Krabbe


#include "Actions/AnimNotifyState_TransitionCorrection.h"
#include "AdvKitLogCategories.h"

#include "Player/AdvKitCharacter.h"
#include "Player/AdvKitCharacterMovementComponent.h"

#include "Animation/AnimInstance.h"
#include "Animation/AnimMontage.h"
#include "Animation/AnimComposite.h"
#include "Environment/AdvKitZone.h"
#include "Environment/AdvKitTransitionComponent.h"


//FRootMotionSource_TransitionCorrection::FRootMotionSource_TransitionCorrection()
//	: Force(EForceInit::ForceInitToZero)
//	, StrengthOverTime(nullptr)
//{
//}
//
//FRootMotionSource* FRootMotionSource_TransitionCorrection::Clone() const
//{
//	FRootMotionSource_TransitionCorrection* CopyPtr = new FRootMotionSource_TransitionCorrection(*this);
//	return CopyPtr;
//}
//
//bool FRootMotionSource_TransitionCorrection::Matches(const FRootMotionSource* Other) const
//{
//	if (!FRootMotionSource::Matches(Other))
//	{
//		return false;
//	}
//
//	// We can cast safely here since in FRootMotionSource::Matches() we ensured ScriptStruct equality
//	const FRootMotionSource_TransitionCorrection* OtherCast = static_cast<const FRootMotionSource_TransitionCorrection*>(Other);
//
//	return FVector::PointsAreNear(Force, OtherCast->Force, 0.1f) &&
//		StrengthOverTime == OtherCast->StrengthOverTime;
//}
//
//bool FRootMotionSource_TransitionCorrection::MatchesAndHasSameState(const FRootMotionSource* Other) const
//{
//	// Check that it matches
//	if (!FRootMotionSource::MatchesAndHasSameState(Other))
//	{
//		return false;
//	}
//
//	return true; // ConstantForce has no unique state
//}
//
//bool FRootMotionSource_TransitionCorrection::UpdateStateFrom(const FRootMotionSource* SourceToTakeStateFrom, bool bMarkForSimulatedCatchup)
//{
//	if (!FRootMotionSource::UpdateStateFrom(SourceToTakeStateFrom, bMarkForSimulatedCatchup))
//	{
//		return false;
//	}
//
//	return true; // ConstantForce has no unique state other than Time which is handled by FRootMotionSource
//}
//
//void FRootMotionSource_TransitionCorrection::PrepareRootMotion
//(
//	float SimulationTime,
//	float MovementTickTime,
//	const ACharacter& Character,
//	const UCharacterMovementComponent& MoveComponent
//	)
//{
//	RootMotionParams.Clear();
//
//	FTransform NewTransform(Force);
//
//	// Scale strength of force over time
//	if (StrengthOverTime)
//	{
//		const float TimeValue = Duration > 0.f ? FMath::Clamp(GetTime() / Duration, 0.f, 1.f) : GetTime();
//		const float TimeFactor = StrengthOverTime->GetFloatValue(TimeValue);
//		NewTransform.ScaleTranslation(TimeFactor);
//	}
//
//	// Scale force based on Simulation/MovementTime differences
//	// Ex: Force is to go 200 cm per second forward.
//	//     To catch up with server state we need to apply
//	//     3 seconds of this root motion in 1 second of
//	//     movement tick time -> we apply 600 cm for this frame
//	if (SimulationTime != MovementTickTime && MovementTickTime > SMALL_NUMBER)
//	{
//		const float Multiplier = SimulationTime / MovementTickTime;
//		NewTransform.ScaleTranslation(Multiplier);
//	}
//
//	RootMotionParams.Set(NewTransform);
//
//	SetTime(GetTime() + SimulationTime);
//}
//
//bool FRootMotionSource_TransitionCorrection::NetSerialize(FArchive& Ar, UPackageMap* Map, bool& bOutSuccess)
//{
//	if (!FRootMotionSource::NetSerialize(Ar, Map, bOutSuccess))
//	{
//		return false;
//	}
//
//	Ar << Force; // TODO-RootMotionSource: Quantization
//	Ar << StrengthOverTime;
//
//	bOutSuccess = true;
//	return true;
//}
//
//UScriptStruct* FRootMotionSource_TransitionCorrection::GetScriptStruct() const
//{
//	return FRootMotionSource_TransitionCorrection::StaticStruct();
//}
//
//FString FRootMotionSource_TransitionCorrection::ToSimpleString() const
//{
//	return FString::Printf(TEXT("[ID:%u]FRootMotionSource_TransitionCorrection %s"), LocalID, *InstanceName.GetPlainNameString());
//}
//
//void FRootMotionSource_TransitionCorrection::AddReferencedObjects(class FReferenceCollector& Collector)
//{
//	Collector.AddReferencedObject(StrengthOverTime);
//
//	FRootMotionSource::AddReferencedObjects(Collector);
//}

FVector FTransitionLocation::GetLocation(AAdvKitCharacter* Character) const
{
	//if (!Zone || !Character)
	//{
		return Location;
	//}

	//FVector OffsetFromZone = Character->GetDesiredOffsetFromZone(Zone, LocalZoneLocation);
	//return Zone->GetZoneLocationWorld(LocalZoneLocation) + OffsetFromZone;
}

FRotator FTransitionLocation::GetRotation(AAdvKitCharacter* Character) const
{
	//if (!Zone || !Character)
	//{
		return Rotation;
	//}

	//return Character->GetDesiredRotationInZone(Zone, LocalZoneLocation);
}

void FTransitionLocation::Clear()
{
	Zone = nullptr;
	LocalZoneLocation = FVector::ZeroVector;
	Location = FVector::ZeroVector;
	Rotation = FRotator::ZeroRotator;
}
//
//#if WITH_EDITOR
//void UAnimNotifyState_TransitionCorrection::OnAnimNotifyCreatedInEditor(FAnimNotifyEvent& ContainingAnimNotifyEvent)
//{
//	return;
//	//TODO
//	UE_LOG(LogAdvKit, Error, TEXT("UAnimNotifyState_TransitionCorrection::OnAnimNotifyCreatedInEditor"));
//
//	const UAnimSequenceBase* Sequence = ContainingAnimNotifyEvent.GetLinkedSequence();
//	auto MutableSequence = const_cast<UAnimSequenceBase*>(Sequence);
//	UE_LOG(LogAdvKit, Error, TEXT("UAnimNotifyState_TransitionCorrection::OnAnimNotifyCreatedInEditor after Sequence"));
//
//	USkeleton* CurrentSkeleton = Sequence->GetSkeleton();
//	UE_LOG(LogAdvKit, Error, TEXT("UAnimNotifyState_TransitionCorrection::OnAnimNotifyCreatedInEditor after Skeleton"));
//	check(CurrentSkeleton);
//
//	const FSmartNameMapping* Mapping = CurrentSkeleton->GetSmartNameContainer(USkeleton::AnimCurveMappingName);
//	
//	UE_LOG(LogAdvKit, Error, TEXT("UAnimNotifyState_TransitionCorrection::OnAnimNotifyCreatedInEditor after Mapping"));
//	TArray<USkeleton::AnimCurveUID> CurveUids;
//	Mapping->FillUidArray(CurveUids);
//
//	UE_LOG(LogAdvKit, Error, TEXT("UAnimNotifyState_TransitionCorrection::OnAnimNotifyCreatedInEditor after everything"));
//
//	bool bHasLocationCurve = false;
//	USkeleton::AnimCurveUID LocationCurveId = 0;
//	bool bHasRotationCurve = false;
//	USkeleton::AnimCurveUID RotationCurveId = 0;
//
//	for (USkeleton::AnimCurveUID Id : CurveUids)
//	{
//		FName CurveName;
//		if (!Mapping->GetName(Id, CurveName))
//		{
//			continue;
//		}
//
//		if (MutableSequence->RawCurveData.GetCurveData(Id))
//		{
//			FName CurveName;
//			if (Mapping->GetName(Id, CurveName))
//			{
//				if (CurveName.IsEqual(LocationCurveName))
//				{
//					LocationCurveId = Id;
//					bHasLocationCurve = true;
//				}
//
//				if (CurveName.IsEqual(LocationCurveName))
//				{
//					RotationCurveId = Id;
//					bHasRotationCurve = true;
//				}
//
//				UE_LOG(LogAdvKit, Warning, TEXT("Curve %s"), *CurveName.ToString());
//
//				//SmartNameList.Add(FSmartNameSortItem(CurveName, Id));
//			}
//		}
//	}
//
//	if (bHasLocationCurve)
//	{
//		UE_LOG(LogAdvKit, Error, TEXT("UAnimNotifyState_TransitionCorrection::OnAnimNotifyCreatedInEditor Has Location Curve"));
//	}
//	if (bHasRotationCurve)
//	{
//		UE_LOG(LogAdvKit, Error, TEXT("UAnimNotifyState_TransitionCorrection::OnAnimNotifyCreatedInEditor Has Rotation Curve"));
//	}
//
//	if (!bHasLocationCurve)
//	{
//		MutableSequence->Modify(true);
//		MutableSequence->RawCurveData.AddCurveData(LocationCurveId);
//		MutableSequence->MarkRawDataAsModified();
//		auto CurveData = MutableSequence->RawCurveData.GetCurveData(LocationCurveId);
//		if (CurveData)
//		{
//			MutableSequence->RawCurveData.AddFloatCurveKey(LocationCurveId, EAnimCurveFlags::ACF_DefaultCurve, 0, 0);
//			MutableSequence->RawCurveData.AddFloatCurveKey(LocationCurveId, EAnimCurveFlags::ACF_DefaultCurve, MutableSequence->GetPlayLength(), 1);
//		}
//	}
//
//	//if (!bHasRotationCurve && LocationCurveId != RotationCurveId)
//	//{
//	//	MutableSequence->Modify(true);
//	//	MutableSequence->RawCurveData.AddCurveData(RotationCurveId);
//	//	MutableSequence->MarkRawDataAsModified();
//	//	auto CurveData = MutableSequence->RawCurveData.GetCurveData(RotationCurveId);
//	//	if (CurveData)
//	//	{
//	//		MutableSequence->RawCurveData.AddFloatCurveKey(RotationCurveId, EAnimCurveFlags::ACF_DefaultCurve, 0, 0);
//	//		MutableSequence->RawCurveData.AddFloatCurveKey(RotationCurveId, EAnimCurveFlags::ACF_DefaultCurve, MutableSequence->GetPlayLength(), 1);
//	//	}
//	//}
//
//	//auto Container = Skeleton->GetSmartNameContainer(Skeleton->AnimCurveMappingName);
//	//for (int32 i = 0; i < Container->GetNumNames(); i++)
//	//{
//	//	FName OutName;
//	//	if (Container->GetName(i, OutName))
//	//	{
//	//		UE_LOG(LogAdvKit, Warning, TEXT("Curve %s"), *OutName.ToString());
//	//	}
//	//	else
//	//	{
//	//		UE_LOG(LogAdvKit, Warning, TEXT("No name for %d"), i);
//	//	}
//	//}
//	//Sequence->RawCurveData.GetCurveData
//	//for (auto Curve : Sequence->RawCurveData.FloatCurves)
//	//{
//	//	UE_LOG(LogAdvKit, Warning, TEXT("Curve %d"), Curve.CurveUid);
//	//}
//}
//#endif

UAnimNotifyState_TransitionCorrection::UAnimNotifyState_TransitionCorrection(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bAbsoluteTransitionCorrection = false;
	
	LocationCurveName = FName("Transition Correction");
	RotationCurveName = FName("Transition Correction");
	EnforcementCurveName = FName("Transition Correction Enforcement");

	//CharacterOwner->TransitionCorrectionData.LastLocationAlpha = 0;
	//CharacterOwner->TransitionCorrectionData.LastRotationAlpha = 0;

	//CharacterOwner->TransitionCorrectionData.TranslationDifference = FVector::ZeroVector;
	//CharacterOwner->TransitionCorrectionData.RotationDifference = FRotator::ZeroRotator;

	//Location = FVector::ZeroVector;
	//Rotation = FRotator::ZeroRotator;
}

AAdvKitCharacter* UAnimNotifyState_TransitionCorrection::GetOwningCharacter(USkeletalMeshComponent * MeshComp) const
{
	return Cast<AAdvKitCharacter>(MeshComp->GetOwner());
}

UAdvKitCharacterMovementComponent* UAnimNotifyState_TransitionCorrection::GetOwningMovementComponent(USkeletalMeshComponent * MeshComp) const
{
	auto Character = GetOwningCharacter(MeshComp);
	if (!Character)
	{
		return nullptr;
	}

	return Character->GetAdvMovementComponent();
}

void UAnimNotifyState_TransitionCorrection::NotifyBegin(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float TotalDuration)
{
	auto CharacterOwner = GetOwningCharacter(MeshComp);
	if (!CharacterOwner)
	{
		return;
	}

	CharacterOwner->TransitionCorrectionData.PreviousLocation.Clear();
	CharacterOwner->TransitionCorrectionData.NextLocation.Clear();
	
	auto MovementComponent = GetOwningMovementComponent(MeshComp);
	if (!MovementComponent)
	{
		return;
	}

	auto Transition = CharacterOwner->PendingTransition.Transition;
	auto Zone = CharacterOwner->PendingTransition.Zone;

	if (!Transition && !Zone)
	{
		UE_LOG(LogAdvKitZone, Error, TEXT("UAnimNotifyState_TransitionCorrection::NotifyBegin - Has no transition or zone!"));
	}

	FVector TranslationOffset = FVector::ZeroVector;
	FQuat RotationOffset = FQuat::Identity;

	auto Montage = Cast<UAnimMontage>(Animation);
	if (Montage)
	{
		float Start = 0;

		auto AnimInst = MeshComp->GetAnimInstance();
		if (AnimInst)
		{
			Start = AnimInst->Montage_GetPosition(Montage);
		}
		
		float End = Start + TotalDuration;
		auto RootMotion = Montage->ExtractRootMotionFromTrackRange(Start, End);
		RootMotion = MeshComp->ConvertLocalRootMotionToWorld(RootMotion);
			
		TranslationOffset = RootMotion.GetTranslation();
		RotationOffset = RootMotion.GetRotation();
	}

	auto AnimSequence = Cast<UAnimSequence>(Animation);
	if (AnimSequence)
	{
		float Start = 0;
		//auto AnimInst = MeshComp->GetAnimInstance();
		//if (AnimInst)
		//{
			//UE_LOG(LogAdvKit, Error,TEXT("max current: %f"), AnimSequence->GetMaxCurrentTime());
		//}

		float End = AnimSequence->GetPlayLength();

		auto RootMotion = AnimSequence->ExtractRootMotionFromRange(Start, End);
		RootMotion = MeshComp->ConvertLocalRootMotionToWorld(RootMotion);

		TranslationOffset = RootMotion.GetTranslation();
		RotationOffset = RootMotion.GetRotation();
	}

	auto AnimComposite = Cast<UAnimComposite>(Animation);
	if (AnimComposite)
	{
		//AnimComposite->ExtractRootMotionFromTrack(); TODO
	}

	TranslationOffset *= CharacterOwner->GetAnimRootMotionTranslationScale();

	CharacterOwner->TransitionCorrectionData.LastLocationAlpha = 0;
	CharacterOwner->TransitionCorrectionData.LastRotationAlpha = 0;
	CharacterOwner->TransitionCorrectionData.TranslationDifference = FVector::ZeroVector;
	CharacterOwner->TransitionCorrectionData.RotationDifference = FRotator::ZeroRotator;

	CharacterOwner->TransitionCorrectionData.PreviousLocation.Zone = CharacterOwner->GetZone();
	CharacterOwner->TransitionCorrectionData.PreviousLocation.LocalZoneLocation = MovementComponent->LocalZoneLocation;
	CharacterOwner->TransitionCorrectionData.PreviousLocation.Location = CharacterOwner->GetActorLocation();
	CharacterOwner->TransitionCorrectionData.PreviousLocation.Rotation = CharacterOwner->GetActorRotation();

	FQuat RotationAfterMontage = CharacterOwner->GetActorQuat() * RotationOffset;
	FVector LocationAfterMontage = CharacterOwner->GetActorLocation() + TranslationOffset;

	CharacterOwner->TransitionCorrectionData.NextLocation.Location = LocationAfterMontage;
	CharacterOwner->TransitionCorrectionData.NextLocation.Rotation = RotationAfterMontage.Rotator();

	//Calculate the necessary delta for the transition
	if (Zone)
	{
		FVector HalfExtent = CharacterOwner->GetHalfExtentForZone(Zone);
		
		UE_LOG(LogAdvKitZone, Verbose, TEXT("UAnimNotifyState_TransitionCorrection::NotifyBegin - Location after montage: %s"), *LocationAfterMontage.ToString());

		CharacterOwner->TransitionCorrectionData.NextLocation.Zone = Zone;
		CharacterOwner->TransitionCorrectionData.NextLocation.LocalZoneLocation = Zone->GetClosestZoneLocationNew(
			LocationAfterMontage,
			HalfExtent,
			RotationAfterMontage.Rotator());

		UE_LOG(LogAdvKitZone, Verbose, TEXT("UAnimNotifyState_TransitionCorrection::NotifyBegin - CharacterOwner->TransitionCorrectionData.NextLocation.LocalZoneLocation: %s"), *CharacterOwner->TransitionCorrectionData.NextLocation.LocalZoneLocation.ToString());

		//Find out where exactly the character will be positioned after the transition
		FVector OffsetFromZone = CharacterOwner->GetDesiredOffsetFromZone(Zone, CharacterOwner->TransitionCorrectionData.NextLocation.LocalZoneLocation);
		CharacterOwner->TransitionCorrectionData.NextLocation.Location = CharacterOwner->TransitionCorrectionData.NextLocation.Zone->GetZoneLocationWorld(CharacterOwner->TransitionCorrectionData.NextLocation.LocalZoneLocation) + OffsetFromZone;
		CharacterOwner->TransitionCorrectionData.TranslationDifference = CharacterOwner->TransitionCorrectionData.NextLocation.Location - LocationAfterMontage;

		UE_LOG(LogAdvKitZone, Verbose, TEXT("UAnimNotifyState_TransitionCorrection::NotifyBegin - CharacterOwner->TransitionCorrectionData.NextLocation.Location: %s"), *CharacterOwner->TransitionCorrectionData.NextLocation.Location.ToString());

		//Calculate delta rotation
		CharacterOwner->TransitionCorrectionData.NextLocation.Rotation = CharacterOwner->GetDesiredRotationInZone(Zone, CharacterOwner->TransitionCorrectionData.NextLocation.LocalZoneLocation);
		//UE_LOG(LogAdvKitZone, Verbose, TEXT("Rotations: %s / %s"), *CharacterOwner->TransitionCorrectionData.NextLocation.Rotation.ToString(), *RotationAfterMontage.Rotator().ToString());

		CharacterOwner->TransitionCorrectionData.RotationDifference = (CharacterOwner->TransitionCorrectionData.NextLocation.Rotation.Quaternion() * RotationAfterMontage.Inverse()).Rotator();
		
		//DrawDebugCapsule(GEngine->GetWorldFromContextObjectChecked(CharacterOwner), CharacterOwner->TransitionCorrectionData.NextLocation.GetLocation(CharacterOwner), HalfExtent.Z, HalfExtent.X, CharacterOwner->TransitionCorrectionData.NextLocation.GetRotation(CharacterOwner).Quaternion(), FColor::Red, false, 5.0f,0,3);
		//DrawDebugLine(GEngine->GetWorldFromContextObjectChecked(CharacterOwner), CharacterOwner->GetActorLocation(), CharacterOwner->TransitionCorrectionData.NextLocation.GetLocation(CharacterOwner), FColor::Red, false, 5.0f, 0, 2);
		UE_LOG(LogAdvKitZone, Verbose, TEXT("UAnimNotifyState_TransitionCorrection::NotifyBegin - Expected Orientation after: %s / %s"), *CharacterOwner->TransitionCorrectionData.NextLocation.GetLocation(CharacterOwner).ToString(), *CharacterOwner->TransitionCorrectionData.NextLocation.GetRotation(CharacterOwner).ToString());
		UE_LOG(LogAdvKitZone, Verbose, TEXT("UAnimNotifyState_TransitionCorrection::NotifyBegin - Transition Offsets: %s / %s"), *CharacterOwner->TransitionCorrectionData.TranslationDifference.ToString(), *CharacterOwner->TransitionCorrectionData.RotationDifference.ToString());

		return;
	}

	//Only transition was given, but no zone, so it must be an exit transition
	if (Transition)
	{
		CharacterOwner->TransitionCorrectionData.NextLocation.Zone = nullptr;
		CharacterOwner->TransitionCorrectionData.NextLocation.Location = Transition->GetClosestTargetPosition(CharacterOwner->GetActorLocation());
		CharacterOwner->TransitionCorrectionData.NextLocation.Rotation = RotationAfterMontage.Rotator();
		CharacterOwner->TransitionCorrectionData.TranslationDifference = CharacterOwner->TransitionCorrectionData.NextLocation.Location - LocationAfterMontage;
		return;
	}
}

void UAnimNotifyState_TransitionCorrection::NotifyTick(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation, float FrameDeltaTime)
{
	//UE_LOG(LogAdvKitZone, Log, TEXT("Tick: %ss"), *GetNameSafe(this));

	//TODO Find out why enabling this for ROLE_Autonomous it doesn't work anymore.
	if (MeshComp->GetOwnerRole() < ROLE_AutonomousProxy)
	{
		return;
	}

	//if (MeshComp->GetOwnerRole() != ROLE_Authority)
	//{
	//	return;
	//}

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

	float LocationAlpha = 0;
	float RotationAlpha = 0;

	UAnimInstance * AnimInst = MeshComp->GetAnimInstance();
	if(AnimInst)
	{
		LocationAlpha = AnimInst->GetCurveValue(LocationCurveName);
		RotationAlpha = AnimInst->GetCurveValue(RotationCurveName);
	}

	if (!bAbsoluteTransitionCorrection)
	{
		float LocationDifAlpha = LocationAlpha - CharacterOwner->TransitionCorrectionData.LastLocationAlpha;
		float RotationDifAlpha = RotationAlpha - CharacterOwner->TransitionCorrectionData.LastRotationAlpha;

		CharacterOwner->TransitionCorrectionData.LastLocationAlpha = LocationAlpha;
		CharacterOwner->TransitionCorrectionData.LastRotationAlpha = RotationAlpha;

		const FQuat NewWorldRotation = (CharacterOwner->TransitionCorrectionData.RotationDifference * RotationDifAlpha).Quaternion() * CharacterOwner->GetActorRotation().Quaternion();

		UE_LOG(LogAdvKitZone, VeryVerbose, TEXT("UAnimNotifyState_TransitionCorrection::NotifyTick - Correcting Transition Relative: %f * %s / %f * %s"), LocationDifAlpha, *CharacterOwner->TransitionCorrectionData.TranslationDifference.ToString(), RotationDifAlpha, *CharacterOwner->TransitionCorrectionData.RotationDifference.ToString());

		//CharacterOwner->AddActorWorldOffset(CharacterOwner->TransitionCorrectionData.TranslationDifference * LocationDifAlpha);
		//CharacterOwner->AddActorWorldRotation(CharacterOwner->TransitionCorrectionData.RotationDifference * RotationDifAlpha);


		//DrawDebugLine(GEngine->GetWorldFromContextObjectChecked(CharacterOwner), CharacterOwner->GetActorLocation(), CharacterOwner->TransitionCorrectionData.NextLocation.GetLocation(CharacterOwner), FColor::Green);

		MovementComponent->AccumulateRootMotion(CharacterOwner->TransitionCorrectionData.TranslationDifference * LocationDifAlpha, NewWorldRotation.Rotator());
	}
	else
	{
		FVector TransitionLocation = FMath::Lerp<FVector>(CharacterOwner->TransitionCorrectionData.PreviousLocation.GetLocation(CharacterOwner), CharacterOwner->TransitionCorrectionData.NextLocation.GetLocation(CharacterOwner), LocationAlpha);
		FQuat TransitionRotation = FQuat::Slerp(
			CharacterOwner->TransitionCorrectionData.PreviousLocation.GetRotation(CharacterOwner).Quaternion(),
			CharacterOwner->TransitionCorrectionData.NextLocation.GetRotation(CharacterOwner).Quaternion(),
			LocationAlpha);
		
		float EnforcementAlpha = AnimInst->GetCurveValue(EnforcementCurveName);
		FVector NewLocation = FMath::Lerp<FVector>(CharacterOwner->GetActorLocation(), TransitionLocation, EnforcementAlpha);
		FRotator NewRotation = FQuat::Slerp(
				CharacterOwner->GetActorRotation().Quaternion(),
				TransitionRotation, EnforcementAlpha).Rotator();

		//CharacterOwner->SetActorRotation(NewRotation);
		//CharacterOwner->SetActorLocation(NewLocation);

		FVector LocationDelta = NewLocation - CharacterOwner->GetActorLocation();
		UE_LOG(LogAdvKitZone, VeryVerbose, TEXT("UAnimNotifyState_TransitionCorrection::NotifyTick - Correcting Transition Absolute: %s / %s"), *LocationDelta.ToString(), *NewRotation.ToString());

		MovementComponent->AccumulateRootMotion(LocationDelta, NewRotation);
	}
}

void UAnimNotifyState_TransitionCorrection::NotifyEnd(USkeletalMeshComponent * MeshComp, UAnimSequenceBase * Animation)
{
	auto CharacterOwner = GetOwningCharacter(MeshComp);
	if (!CharacterOwner)
	{
		return;
	}
	
	CharacterOwner->TransitionCorrectionData.PreviousLocation.Clear();
	CharacterOwner->TransitionCorrectionData.NextLocation.Clear();
}
