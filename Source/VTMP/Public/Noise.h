// Copyright Sean Neville, 2020

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Noise.generated.h"


UENUM(BlueprintType)
enum class EAbsType : uint8
{
	Regular,
	Ridged,
	Billow
};

UENUM(BlueprintType)
enum class ENoiseType : uint8
{
	Simplex,
	Value
};

UENUM(BlueprintType)
enum class EValueNoiseType : uint8
{
	Linear,
	Cubic,
	Quintic
};

UCLASS()
class VTMP_API UNoise : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

private:

	static unsigned char perm[];
	static float  grad(int hash, float x, float y, float z);
	

public:

	UFUNCTION(BlueprintCallable, Category = "Noise")
	static void SetNoiseSeed(const int32& newSeed);
	
	UFUNCTION(BlueprintCallable, Category = "Noise")
	static float SimplexNoise3D(float x, float y, float z);
	

	UFUNCTION(BlueprintCallable, Category = "Noise")
	static float ValueNoise(EValueNoiseType Type, FVector x);

private:
	

	static FVector FracV(FVector x);

	static FVector FloorV(FVector x);

	static float myRandomMagic(FVector p);


};

