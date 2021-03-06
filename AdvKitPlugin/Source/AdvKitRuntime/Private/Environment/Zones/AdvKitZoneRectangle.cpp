// Copyright 2015 Pascal Krabbe

#include "Environment/Zones/AdvKitZoneRectangle.h"

#include "DrawDebugHelpers.h"

AAdvKitZoneRectangle::AAdvKitZoneRectangle(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	LocalRectMinBoundary = FVector(20, -100, -100);
	LocalRectMaxBoundary = FVector(20, 100, 100);
}

FVector AAdvKitZoneRectangle::GetZoneRectMinWorld()
{
	return GetTransform().TransformPositionNoScale(LocalRectMinBoundary);
}

FVector AAdvKitZoneRectangle::GetZoneRectMaxWorld()
{
	return GetTransform().TransformPositionNoScale(LocalRectMaxBoundary);
}

FVector AAdvKitZoneRectangle::ConstrainPositionToZone_Implementation(const FVector& WorldPosition, const FVector& HalfExtent, const FRotator& ExtentWorldRotation) const
{
	//Convert location to local space
	FVector PositionLocal = GetTransform().InverseTransformPositionNoScale(WorldPosition);

	//Get projected half extent
	FVector ProjectedExtent = GetProjectedHalfExtent(HalfExtent,ExtentWorldRotation);

	//Constrain location to plane and clamp sides
	PositionLocal.X = LocalRectMinBoundary.X;
	PositionLocal.Y = FMath::Clamp<float>(PositionLocal.Y, LocalRectMinBoundary.Y + ProjectedExtent.Y, LocalRectMaxBoundary.Y - ProjectedExtent.Y);
	PositionLocal.Z = FMath::Clamp<float>(PositionLocal.Z, LocalRectMinBoundary.Z + ProjectedExtent.Z, LocalRectMaxBoundary.Z - ProjectedExtent.Z);

	//Transform result back to world space
	return GetTransform().TransformPositionNoScale(PositionLocal);
}

FVector AAdvKitZoneRectangle::ConstrainDirectionToZone_Implementation(const FVector& WorldDirection, const FVector& AtWorldLocation) const
{
	//Transform direction to local space
	FVector DirectionLocal = GetTransform().InverseTransformVectorNoScale(WorldDirection);

	//Project onto plane
	DirectionLocal.X = 0;

	//Transform back to world space
	return GetTransform().TransformVectorNoScale(DirectionLocal);
}


FVector AAdvKitZoneRectangle::GetProjectedHalfExtent(const FVector& HalfExtent, const FRotator& ExtentWorldRotation) const
{
	//Transform to local space
	FVector GlobalExtent = ExtentWorldRotation.RotateVector(HalfExtent);
	FVector LocalHalfExtent = GetActorQuat().Inverse() * GlobalExtent;
	
	//Make sure values are positive
	LocalHalfExtent.X = FMath::Abs<float>(LocalHalfExtent.X);
	LocalHalfExtent.Y = FMath::Abs<float>(LocalHalfExtent.Y);
	LocalHalfExtent.Z = FMath::Abs<float>(LocalHalfExtent.Z);
	return LocalHalfExtent;
}

void AAdvKitZoneRectangle::DrawDebug_Implementation(const FColor& DebugColor, const float& DebugThickness,
	const float& DebugLifeTime)
{
	Super::DrawDebug_Implementation(DebugColor,DebugThickness,DebugLifeTime);

	auto const Transform = GetTransform();

	auto CornerLB = Transform.TransformPositionNoScale(LocalRectMinBoundary);
	auto CornerRB = Transform.TransformPositionNoScale(FVector(0, LocalRectMaxBoundary.Y, LocalRectMinBoundary.Z));
	auto CornerLT = Transform.TransformPositionNoScale(FVector(0, LocalRectMinBoundary.Y, LocalRectMaxBoundary.Z));
	auto CornerRT = Transform.TransformPositionNoScale(LocalRectMaxBoundary);
	
	DrawDebugLine(GetWorld(), CornerLB, CornerLT, DebugColor, false, DebugLifeTime, 0, DebugThickness);
	DrawDebugLine(GetWorld(), CornerLT, CornerRT, DebugColor, false, DebugLifeTime, 0, DebugThickness);
	DrawDebugLine(GetWorld(), CornerRT, CornerRB, DebugColor, false, DebugLifeTime, 0, DebugThickness);
	DrawDebugLine(GetWorld(), CornerRB, CornerLB, DebugColor, false, DebugLifeTime, 0, DebugThickness);
}
