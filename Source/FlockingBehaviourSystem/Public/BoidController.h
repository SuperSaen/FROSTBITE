// Copyright Sean Neville, 2020

#pragma once

#include "AIController.h"
#include "BoidController.generated.h"

/**
 * The controller that will possess the boid
 */
UCLASS()
class FLOCKINGBEHAVIOURSYSTEM_API ABoidController : public AAIController
{
	GENERATED_BODY()

public:
	ABoidController();
};
