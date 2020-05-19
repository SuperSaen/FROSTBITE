

#include "MildorAIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"

AMildorAIController::AMildorAIController()
{
	
	perceptionComp = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComp"));
	sightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("sightConfig"));

	if (perceptionComp && sightConfig)
	{
		perceptionComp->ConfigureSense(*sightConfig);
		perceptionComp->SetDominantSense(*sightConfig->GetSenseImplementation());

		sightConfig->SightRadius = 2000.f;
		sightConfig->LoseSightRadius = 2200.f;
		sightConfig->PeripheralVisionAngleDegrees = 90.f;

		sightConfig->DetectionByAffiliation.bDetectEnemies = true;
		sightConfig->DetectionByAffiliation.bDetectFriendlies = true;
		sightConfig->DetectionByAffiliation.bDetectNeutrals = true;

	}
}
