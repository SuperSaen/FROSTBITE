// Copyright 2015 Pascal Krabbe

#include "Environment/AdvKitTransitionBuilderModule.h"

#include "Player/AdvKitCharacter.h"
#include "AdvKitTypes.h"
#include "AdvKitLogCategories.h"

#include "Environment/AdvKitZone.h"
#include "Environment/Zones/AdvKitZoneSpline.h"

#include "Environment/Transitions/AdvKitTransitionComponentPoint.h"
#include "Environment/Transitions/AdvKitTransitionComponentLine.h"
#include "Environment/Transitions/AdvKitTransitionComponentRect.h"
#include "Environment/Transitions/AdvKitTransitionComponentSpline.h"

#include "Engine/Engine.h"

UAdvKitTransitionBuilderModule::UAdvKitTransitionBuilderModule(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DefaultCharacterClasses.Add(AAdvKitCharacter::StaticClass());
	ErrorMarginPosition = 3.0f;
	ErrorMarginDot = 0.01f;
}

void UAdvKitTransitionBuilderModule::CreateTransitions_Implementation(TArray<AAdvKitZone*>& OutAffectedZones)
{
	CreatedOrUpdatedTransitions.Empty();
	AffectedZones.Empty();

	auto Zone = GetOuterZone();
	if (!Zone)
	{
		UE_LOG(LogAdvKit, Error, TEXT("Cannot create transition without a zone!"))
		return;
	}

	TArray<UAdvKitTransitionComponent*> AllTransitionsByThisModule = GetPreExistingTransitions(Zone);

	for(auto CharacterClass : DefaultCharacterClasses)
	{ 
		if (!CharacterClass)
		{
			UE_LOG(LogAdvKit, Error, TEXT("Invalid character class!"))
			continue;
		}

		if (!CanCreateTransitionsFor(CharacterClass, Zone))
		{
			UE_LOG(LogAdvKit, Error, TEXT("%s cannot create transitions for zone %s with character %s!"), *GetName(), *Zone->GetName(), *CharacterClass->GetName());
			continue;
		}

		CreateTransitionsFor(CharacterClass, Zone);
	}

	for (auto NewTransition : CreatedOrUpdatedTransitions)
	{
		AllTransitionsByThisModule.Remove(NewTransition);
	}

	for (auto OldTransition : AllTransitionsByThisModule)
	{
		OutAffectedZones.AddUnique(OldTransition->TargetZone.Get());
		OldTransition->DestroyComponent();
	}

	OutAffectedZones.Append(AffectedZones);
	//for (auto AffectedZone : AffectedZones)
	//{
	//	OutAffectedZones.AddUnique(AffectedZone);
	//}

	CreatedOrUpdatedTransitions.Empty();
	AffectedZones.Empty();
}

AAdvKitZone* UAdvKitTransitionBuilderModule::GetOuterZone() const
{
	return GetTypedOuter<AAdvKitZone>();
}

bool UAdvKitTransitionBuilderModule::CanCreateTransitionsFor_Implementation(TSubclassOf<AAdvKitCharacter> ForCharacterClass, AAdvKitZone* ForZone)
{
	//Dummy implementation, override in subclass.
	return false;
}

bool UAdvKitTransitionBuilderModule::CanCreateTransitionsFor_Implementation(UClass* ForCharacterClass, AAdvKitZone* ForZone)
{
	if(!ForCharacterClass->IsChildOf(AAdvKitCharacter::StaticClass()))
	{
		return false;
	}

	TSubclassOf<AAdvKitCharacter> Class = ForCharacterClass;
	return CanCreateTransitionsFor_Implementation(Class, ForZone);
}

void UAdvKitTransitionBuilderModule::CreateTransitionsFor_Implementation(TSubclassOf<AAdvKitCharacter> ForCharacterClass, AAdvKitZone* ForZone)
{
	//Gather potential targets
	TArray<AAdvKitZone*> TargetZones;
	if (!GatherPotentialTargetZones_Implementation(ForCharacterClass, ForZone, TargetZones))
	{
		//No targets means there can be no transitions
		return;
	}

	//Try to create transitions for all potential targets
	for (auto TargetZone : TargetZones)
	{
		if (CreateTransitionBetween_Implementation(ForCharacterClass, ForZone, TargetZone))
		{
			//Created transitions to this target, so the zone was affected
			AffectedZones.AddUnique(TargetZone);
		}
	}
}

void UAdvKitTransitionBuilderModule::CreateTransitionsFor_Implementation(UClass* ForCharacterClass, AAdvKitZone* ForZone)
{
	if (!ForCharacterClass->IsChildOf(AAdvKitCharacter::StaticClass()))
	{
		return;
	}

	TSubclassOf<AAdvKitCharacter> Class = ForCharacterClass;
	CreateTransitionsFor_Implementation(Class, ForZone);
}

bool UAdvKitTransitionBuilderModule::GatherPotentialTargetZones_Implementation(TSubclassOf<AAdvKitCharacter> ForCharacterClass, AAdvKitZone* ForZone, TArray<AAdvKitZone*>& OutZones)
{
	//Dummy implementation, override in subclass.
	OutZones.Empty();
	return false;
}

bool UAdvKitTransitionBuilderModule::CreateTransitionBetween_Implementation(UClass* ForCharacterClass, AAdvKitZone* SourceZone, AAdvKitZone* TargetZone)
{
	if (!ForCharacterClass->IsChildOf(AAdvKitCharacter::StaticClass()))
	{
		return false;
	}

	TSubclassOf<AAdvKitCharacter> Class = ForCharacterClass;
	return CreateTransitionBetween_Implementation(Class, SourceZone, TargetZone);
}

bool UAdvKitTransitionBuilderModule::CreateTransitionBetween_Implementation(TSubclassOf<AAdvKitCharacter> ForCharacterClass, AAdvKitZone* SourceZone, AAdvKitZone* TargetZone)
{
	//Dummy implementation, override in subclass.
	return false;
}

FVector UAdvKitTransitionBuilderModule::GetCharacterHalfExtent(TSubclassOf<AAdvKitCharacter> ForCharacterClass, AAdvKitZone* ForZone) const
{
	check(ForCharacterClass);
	check(ForZone);

	auto DefaultCharacter = GetDefaultCharacterObject(ForCharacterClass);
	check(DefaultCharacter);

	return DefaultCharacter->GetHalfExtentForZone(ForZone);
}

const UAdvKitCharacterMovementComponent* UAdvKitTransitionBuilderModule::GetCharacterMovementComponent(TSubclassOf<AAdvKitCharacter> ForCharacterClass) const
{
	auto DefaultCharacter = GetDefaultCharacterObject(ForCharacterClass);
	check(DefaultCharacter);

	return DefaultCharacter->GetAdvMovementComponent();
}

const FAdvKitMovementProperties* UAdvKitTransitionBuilderModule::GetCharacterMovementProperties(TSubclassOf<AAdvKitCharacter> ForCharacterClass) const
{
	auto DefaultCharacter = GetDefaultCharacterObject(ForCharacterClass);
	check(DefaultCharacter);

	return DefaultCharacter->GetAdvMovementProperties();
}

const FAdvKitMovementProperties UAdvKitTransitionBuilderModule::GetCharacterMovementProperties_BP(TSubclassOf<AAdvKitCharacter> ForCharacterClass) const
{
	FAdvKitMovementProperties Properties;

	auto DefaultCharacter = GetDefaultCharacterObject(ForCharacterClass);
	check(DefaultCharacter);

	Properties = *DefaultCharacter->GetAdvMovementProperties();
	return Properties;
}

AAdvKitCharacter* UAdvKitTransitionBuilderModule::GetDefaultCharacterObject(TSubclassOf<AAdvKitCharacter> ForCharacterClass) const
{
	check(ForCharacterClass);

	//Not sure if this can ever happen, but I am a pessimist :P
	AAdvKitCharacter* DefaultCharacter = ForCharacterClass.GetDefaultObject();
	if (!DefaultCharacter)
	{
		UE_LOG(LogAdvKit, Error, TEXT("UAdvKitTransitionBuilderModule::GetDefaultCharacterObject Given character class does not have default object!"));
		return nullptr;
	}

	return DefaultCharacter;
}


bool UAdvKitTransitionBuilderModule::OverlapForCloseZones(AAdvKitZone* ToZone, FVector OverlapStart, FVector OverlapEnd, float OverlapRadius, TArray<AAdvKitZone*>& OutOtherZones)
{
	static const float Half = 0.5f;

	//Cannot overlap without the zone or the engine
	if (!ToZone)
	{
		UE_LOG(LogAdvKit,Error,TEXT("Cannot create transition for nullptr zone!"))
		return false;
	}

	//Get world for overlap check
	UWorld* World = GEngine->GetWorldFromContextObjectChecked(ToZone);
	if (!World)
	{
		UE_LOG(LogAdvKit, Error, TEXT("Cannot create transitions without World!"))
		return false;
	}

	//Params for overlap
	TArray<FOverlapResult> OverlapResults;
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(ToZone);
	FCollisionObjectQueryParams ObjectQueryParams;

	//Create overlap box
	FVector LocalStart = ToZone->GetTransform().InverseTransformPositionNoScale(OverlapStart);
	FVector LocalEnd = ToZone->GetTransform().InverseTransformPositionNoScale(OverlapEnd);
	FVector BoxExtent = (LocalEnd - LocalStart)*Half + FVector(1, 1, 1)*OverlapRadius;
	FVector BoxLocation = FMath::Lerp<FVector>(OverlapStart, OverlapEnd, Half);

	//Execute overlap
	if (!World->OverlapMultiByObjectType(OverlapResults, BoxLocation, ToZone->GetActorQuat(), ObjectQueryParams, FCollisionShape::MakeBox(BoxExtent), QueryParams))
	{
		//Nothing was found
		return false;
	}

	//Filter zones from overlap results
	for (FOverlapResult Result : OverlapResults)
	{
		if (!Result.Actor.IsValid())
		{
			//Only actors can be zones
			continue;
		}

		if(!Result.Actor->IsA<AAdvKitZone>())
		{
			//Not a zone
			continue;
		}

		//Add zone to result
		OutOtherZones.AddUnique(Cast<AAdvKitZone>(Result.Actor.Get()));
	}

	//Return if any zones were found
	return (OutOtherZones.Num() != 0);
}

TArray<UAdvKitTransitionComponent*> UAdvKitTransitionBuilderModule::GetPreExistingTransitions(FString Id, AAdvKitZone* FromZone, AAdvKitZone* ToZone, TSubclassOf<AAdvKitCharacter> ForCharacterClass) const
{
	TArray<UAdvKitTransitionComponent*> OutArray;
	auto Transitions = FromZone->GetComponentsByClass(UAdvKitTransitionComponent::StaticClass());

	//Go through all transitions
	for (auto Component : Transitions)
	{
		auto TransitionComponent = Cast<UAdvKitTransitionComponent>(Component);

		//Check if usable by character
		if (ForCharacterClass != TransitionComponent->UseableBy)
		{
			continue;
		}

		if (TransitionComponent->TransitionId != Id)
		{
			continue;
		}

		//Add all transitions to the result
		OutArray.Add(TransitionComponent);
	}

	return OutArray;

}


TArray<UAdvKitTransitionComponent*> UAdvKitTransitionBuilderModule::GetPreExistingTransitions(class AAdvKitZone* FromZone, class AAdvKitZone* ToZone) const
{
	TArray<UAdvKitTransitionComponent*> OutArray;

	auto Transitions = FromZone->GetComponentsByClass(UAdvKitTransitionComponent::StaticClass());

	//Go through all transitions
	for (auto Component : Transitions)
	{
		auto TransitionComponent = Cast<UAdvKitTransitionComponent>(Component);

		if (TransitionComponent->TargetZone != ToZone)
		{
			continue;
		}

		if (TransitionComponent->CreatedByBuildModule != this)
		{
			continue;
		}

		//Add all transitions to the result
		OutArray.Add(TransitionComponent);
	}

	return OutArray;

}

TArray<UAdvKitTransitionComponent*> UAdvKitTransitionBuilderModule::GetPreExistingTransitions(class AAdvKitZone* FromZone) const
{
	TArray<UAdvKitTransitionComponent*> OutArray;

	auto Transitions = FromZone->GetComponentsByClass(UAdvKitTransitionComponent::StaticClass());

	//Go through all transitions
	for (auto Component : Transitions)
	{
		auto TransitionComponent = Cast<UAdvKitTransitionComponent>(Component);
		if (/*TransitionComponent->CreatedByBuildModule && */TransitionComponent->CreatedByBuildModule != this)
		{
			continue;
		}

		//Add all transitions to the result
		OutArray.Add(TransitionComponent);
	}

	return OutArray;

}

UAdvKitTransitionComponentPoint* UAdvKitTransitionBuilderModule::CreateTransitionPoint(
	UAdvKitTransitionBuilderModule* ForModule,
	FString Id, 
	AAdvKitZone* SourceZone, 
	const FVector& WorldSourceLocation, 
	const FVector& WorldTargetLocation, 
	TSubclassOf<AAdvKitCharacter> ForCharacter, 
	EAdvKitMovementMode MovementMode, 
	AAdvKitZone* TargetZone, 
	uint8 CustomMovementMode)
{
	bool bRenameTransition = true;
	UAdvKitTransitionComponentPoint* Transition = nullptr;

	FString UniqueId = MakeUniqueId(ForModule, Id, SourceZone, TargetZone);

	if (ForModule)
	{
		auto ExistingTransitions = ForModule->GetPreExistingTransitions(UniqueId, SourceZone, TargetZone, ForCharacter);
		if (ExistingTransitions.Num() > 0)
		{
			Transition = Cast<UAdvKitTransitionComponentPoint>(ExistingTransitions[0]);
			if (Transition)
			{
				bRenameTransition = false;
			}
		}
	}

	if (!Transition)
	{
		Transition = UAdvKitTransitionBuilderModule::CreateTransitionComponent<UAdvKitTransitionComponentPoint>(SourceZone, FName("TransitionPoint"));
	}

	if (!Transition)
	{
		return nullptr;
	}

	Transition->Init(ForCharacter, WorldSourceLocation, WorldTargetLocation, MovementMode, TargetZone, CustomMovementMode);
	PostInitTransition(ForModule, Id, Transition, bRenameTransition);
	return Transition;
}

UAdvKitTransitionComponentLine* UAdvKitTransitionBuilderModule::CreateTransitionLine(
	UAdvKitTransitionBuilderModule* ForModule, 
	FString Id, 
	AAdvKitZone* SourceZone, 
	const FVector& MinWorldSourceLocation, 
	const FVector& MinWorldTargetLocation, 
	const FVector& MaxWorldSourceLocation, 
	const FVector& MaxWorldTargetLocation, 
	TSubclassOf<AAdvKitCharacter> ForCharacter, 
	EAdvKitMovementMode MovementMode,
	AAdvKitZone* TargetZone, 
	uint8 CustomMovementMode)
{
	bool bRenameTransition = true;
	UAdvKitTransitionComponentLine* Transition = nullptr;
	FString UniqueId = MakeUniqueId(ForModule, Id, SourceZone, TargetZone);

	if (ForModule)
	{
		auto ExistingTransitions = ForModule->GetPreExistingTransitions(UniqueId, SourceZone, TargetZone, ForCharacter);
		if (ExistingTransitions.Num() > 0)
		{
			Transition = Cast<UAdvKitTransitionComponentLine>(ExistingTransitions[0]);
			if (Transition)
			{
				bRenameTransition = false;
			}
		}
	}

	if (!Transition)
	{
		Transition = UAdvKitTransitionBuilderModule::CreateTransitionComponent<UAdvKitTransitionComponentLine>(SourceZone, FName("TransitionLine"));
	}

	if (!Transition)
	{
		return nullptr;
	}
	Transition->Init(ForCharacter, MinWorldSourceLocation, MinWorldTargetLocation, MaxWorldSourceLocation, MaxWorldTargetLocation, MovementMode, TargetZone, CustomMovementMode);

	PostInitTransition(ForModule, Id, Transition, bRenameTransition);
	return Transition;
}

UAdvKitTransitionComponentSpline* UAdvKitTransitionBuilderModule::CreateTransitionSpline(
	UAdvKitTransitionBuilderModule* ForModule, 
	FString Id,
	AAdvKitZone* SourceZone,
	const float& MinSourceDistance,
	const FVector& MinWorldSourcePosition,
	const float& MinTargetDistance,
	const FVector& MinWorldTargetPosition,
	const float& MaxSourceDistance,
	const FVector& MaxWorldSourcePosition,
	const float& MaxTargetDistance,
	const FVector& MaxWorldTargetPosition,
	TSubclassOf<AAdvKitCharacter> ForCharacter,
	EAdvKitMovementMode MovementMode,
	AAdvKitZone* TargetZone,
	uint8 CustomMovementMode
	)
{
	bool bRenameTransition = true;
	UAdvKitTransitionComponentSpline* Transition = nullptr;
	FString UniqueId = MakeUniqueId(ForModule, Id, SourceZone, TargetZone);

	if (ForModule)
	{
		auto ExistingTransitions = ForModule->GetPreExistingTransitions(UniqueId, SourceZone, TargetZone, ForCharacter);
		if (ExistingTransitions.Num() > 0)
		{
			Transition = Cast<UAdvKitTransitionComponentSpline>(ExistingTransitions[0]);
			if (Transition)
			{
				bRenameTransition = false;
			}
		}
	}

	if (!Transition)
	{
		Transition = UAdvKitTransitionBuilderModule::CreateTransitionComponent<UAdvKitTransitionComponentSpline>(SourceZone, FName("TransitionSpline"));
	}

	if (!Transition)
	{
		return nullptr;
	}

	Transition->Init(ForCharacter,
		MinSourceDistance,
		MinWorldSourcePosition,
		MinTargetDistance,
		MinWorldTargetPosition,
		MaxSourceDistance,
		MaxWorldSourcePosition,
		MaxTargetDistance,
		MaxWorldTargetPosition,
		MovementMode,
		TargetZone,
		CustomMovementMode);

	PostInitTransition(ForModule, Id, Transition, bRenameTransition);
	return Transition;
}

UAdvKitTransitionComponentRect* UAdvKitTransitionBuilderModule::CreateTransitionRect(
	UAdvKitTransitionBuilderModule* ForModule,
	FString Id,
	AAdvKitZone* SourceZone,
	const FVector& MinWorldSourceLocation,
	const FVector& MinWorldTargetLocation,
	const FVector& MaxWorldSourceLocation,
	const FVector& MaxWorldTargetLocation,
	TSubclassOf<AAdvKitCharacter> ForCharacter,
	EAdvKitMovementMode MovementMode,
	AAdvKitZone* TargetZone,
	uint8 CustomMovementMode)
{
	bool bRenameTransition = true;
	UAdvKitTransitionComponentRect* Transition = nullptr;
	FString UniqueId = MakeUniqueId(ForModule, Id, SourceZone, TargetZone);

	if (ForModule)
	{
		auto ExistingTransitions = ForModule->GetPreExistingTransitions(UniqueId, SourceZone, TargetZone, ForCharacter);
		if (ExistingTransitions.Num() > 0)
		{
			Transition = Cast<UAdvKitTransitionComponentRect>(ExistingTransitions[0]);
			if (Transition)
			{
				bRenameTransition = false;
			}
		}
	}

	if (!Transition)
	{
		Transition = UAdvKitTransitionBuilderModule::CreateTransitionComponent<UAdvKitTransitionComponentRect>(SourceZone, FName("TransitionRect"));
	}

	if (!Transition)
	{
		return nullptr;
	}
	Transition->Init(ForCharacter, MinWorldSourceLocation, MinWorldTargetLocation, MaxWorldSourceLocation, MaxWorldTargetLocation, MovementMode, TargetZone, CustomMovementMode);

	PostInitTransition(ForModule, Id, Transition, bRenameTransition);
	return Transition;
}

void UAdvKitTransitionBuilderModule::PostInitTransition(UAdvKitTransitionBuilderModule* ForModule, FString Id, UAdvKitTransitionComponent* Transition, bool bRenameTransition)
{
	if (!Transition)
	{
		return;
	}

	auto TargetZone = Transition->TargetZone.Get();

	FString UniqueId = MakeUniqueId(ForModule, Id, Cast<AAdvKitZone>(Transition->GetOwner()), TargetZone);
	if (ForModule)
	{
		ForModule->CreatedOrUpdatedTransitions.AddUnique(Transition);
		ForModule->AffectedZones.AddUnique(Transition->TargetZone.Get());
		Transition->CreatedByBuildModule = ForModule;
	}
	Transition->TransitionId = UniqueId;

	if (ForModule && bRenameTransition)
	{
		FString NewName = Id;
		if (TargetZone)
		{
			NewName += "_to_" + TargetZone->GetName();
		}

		NewName = MakeUniqueObjectName(ForModule->GetOuter(), UAdvKitTransitionComponentPoint::StaticClass(), FName(*NewName)).ToString();
		Transition->Rename(*NewName, ForModule->GetOuter());
	}
}

template <typename T>
T* UAdvKitTransitionBuilderModule::CreateTransitionComponent(AAdvKitZone* OnZone, FName TransitionName)
{
	if (!IsValid(OnZone))
	{
		return nullptr;
	}

	//Create new transition object
	FName NewName = MakeUniqueObjectName(OnZone, T::StaticClass(), TransitionName);
	auto Template = T::StaticClass()->GetDefaultObject();
	auto NewTransition = Cast<T>(OnZone->CreateComponentFromTemplate(Cast<T>(Template), NewName));

	//New transition was not created
	if (!NewTransition)
	{
		UE_LOG(LogTemp, Error, TEXT("No Transition"));
		return nullptr;
	}

	//Add component
	OnZone->BlueprintCreatedComponents.Add(NewTransition);
	NewTransition->CreationMethod = EComponentCreationMethod::Instance;
	NewTransition->RegisterComponent();

	//Initialize transition
	//NewTransition->Init(ForCharacter, WorldSourceLocation, WorldTargetLocation, MovementMode, TargetZone, CustomMovementMode);
	return NewTransition;
}

FString UAdvKitTransitionBuilderModule::MakeUniqueId(UAdvKitTransitionBuilderModule* ForModule, FString BaseId, AAdvKitZone* SourceZone, AAdvKitZone* TargetZone)
{
	FString NewId = BaseId;
	if (ForModule)
	{
		NewId = ForModule->GetName() + "_" + NewId;
	}

	//if (SourceZone)
	//{
	//	NewId += "_From_" + SourceZone->GetName();
	//}

	if (TargetZone)
	{
		NewId += "_To_" + TargetZone->GetName();
	}

	return NewId;
}
