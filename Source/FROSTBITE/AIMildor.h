

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AIMildor.generated.h"

UCLASS()
class FROSTBITE_API AAIMildor : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAIMildor();


	UFUNCTION(BlueprintNativeEvent, Category = "AIVariables")
		void GetPerceptionLocRot(FVector &OutLocation, FRotator &OutRotation) const;
		void GetPerceptionLocRot_Implementation(FVector &OutLocation, FRotator &OutRotation) const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void GetActorEyesViewPoint(FVector & Location, FRotator & Rotation) const override;

};
