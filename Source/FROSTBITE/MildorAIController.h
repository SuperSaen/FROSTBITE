

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MildorAIController.generated.h"

/**
 * 
 */
UCLASS()
class FROSTBITE_API AMildorAIController : public AAIController
{
	GENERATED_BODY()


public:
	AMildorAIController();

	UPROPERTY(VisibleAnywhere, Category = "Perception")
		class UAIPerceptionComponent* perceptionComp;
	UPROPERTY(EditDefaultsOnly, Category = "Perception")
		class UAISenseConfig_Sight* sightConfig;
	
};
