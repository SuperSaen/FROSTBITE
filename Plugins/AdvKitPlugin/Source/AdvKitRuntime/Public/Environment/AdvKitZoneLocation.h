// Copyright 2015 Pascal Krabbe

#pragma once

#include "UObject/Object.h"
#include "AdvKitZoneLocation.generated.h"

/**
 * @brief Base class for object that defines a location inside a zone. 
 * 
 * Different zones can have different location specifiers. This class 
 * takes care of storing a location and all the conversion methods 
 * required to position the character.
 */
UCLASS()
class ADVKITRUNTIME_API UAdvKitZoneLocation : public UObject
{
	GENERATED_BODY()

};
