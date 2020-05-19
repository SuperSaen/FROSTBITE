

#include "AIMildor.h"

// Sets default values
AAIMildor::AAIMildor()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAIMildor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAIMildor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAIMildor::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void AAIMildor::GetActorEyesViewPoint(FVector &Location, FRotator &Rotation) const
{
	GetPerceptionLocRot(Location, Rotation);
}


void AAIMildor::GetPerceptionLocRot_Implementation(FVector &OutLocation, FRotator &OutRotation) const
{
	OutLocation = GetActorLocation() + FVector(0, 0, 50);
	OutRotation = GetActorRotation();
}