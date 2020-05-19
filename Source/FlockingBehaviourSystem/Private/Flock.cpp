// Copyright Sean Neville, 2020

#include "Flock.h"
#include "Goal.h"
#include "Boid.h"
#include "FlockWorker.h"
#include "Components/BillboardComponent.h"
#include "Engine/Texture2D.h"
#include "Engine/World.h"

AFlock::AFlock()
{
	PrimaryActorTick.bCanEverTick = false;

	// Scene component
	SceneComponent = CreateDefaultSubobject<USceneComponent>(FName("Default Scene Root"));
	RootComponent = SceneComponent;

	// Billboard component
	BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(FName("Billboard"));
	BillboardComponent->SetupAttachment(SceneComponent);
	BillboardComponent->SetRelativeLocation(FVector(0.0f));
	BillboardComponent->SetRelativeScale3D(FVector(0.5f));
	BillboardComponent->bIsScreenSizeScaled = true;

	BillboardSprite = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), nullptr, TEXT("Texture2D'/FlockingBehaviourSystem/FlockIcon.FlockIcon'")));
	if (BillboardSprite)
		BillboardComponent->SetSprite(BillboardSprite);

	BoidSettings.BoidMaterials.AddDefaulted();
}

void AFlock::BeginPlay()
{
	Super::BeginPlay();

	// Spawn 'X' number of boids into world
	for (int32 i = 0; i < SpawnSettings.NumberOfBoids; i++)
		AddBoid();

	if (!BoidSettings.BoidMesh)
		UE_LOG(LogTemp, Warning, TEXT("No static mesh selected. Will default back to cone mesh!"))

	CreateNewThread();
}

void AFlock::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	// Destroy the worker thread
	Worker->Shutdown();
}

#if WITH_EDITOR
void AFlock::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.GetPropertyName() == "bEnableGoalSeeking")
	{
		if (FlockSettings.Goal)
			FlockSettings.Goal->ToggleVisibility(FlockSettings.bEnableGoalSeeking);
	}
	else if (PropertyChangedEvent.GetPropertyName() == "SpawnRadius")
	{
		if (SpawnSettings.SpawnRadius > BoidSettings.WanderDistance)
			BoidSettings.WanderDistance = SpawnSettings.SpawnRadius;
	}
}
#endif





void AFlock::AddBoid_Implementation()
{
	// Lambda function, to generate a random point on sphere (this is used for spawning boids on the generated point)
	const auto GetRandomPointOnSphere = [](const FVector Center, const float Radius)
	{
		const float Angle = FMath::FRandRange(0.0f, PI);
		const float Phi = FMath::FRandRange(0.0f, 2 * PI);

		const float X = Center.X + Radius * FMath::Sin(Angle) * FMath::Cos(Phi);
		const float Y = Center.Y + Radius * FMath::Sin(Angle) * FMath::Sin(Phi);
		const float Z = Center.Z + Radius * FMath::Cos(Angle);

		return FVector(X, Y, Z);
	};


	// Spawn a new boid into the world
	const auto Boid = GetWorld()->SpawnActor<ABoid>(ABoid::StaticClass(), GetRandomPointOnSphere(GetActorLocation(), SpawnSettings.SpawnRadius), BoidSettings.Rotation);
	Boid->SpawnDefaultController();
	
	// Set its properties
	Boid->ApplyBoidSpawnSettings(this);

	Boid->ApplyBoidFlockSettings(this);
	
	// Add to the array of boids
	Boids.AddUnique(Boid);
}

void AFlock::CreateNewThread()
{
	Worker = new FlockWorker(&Boids);
}
