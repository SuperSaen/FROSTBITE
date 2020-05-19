// Copyright 2015 Pascal Krabbe

#pragma once

#include "Components/ActorComponent.h"
#include "Sound/SoundCue.h"

#include "AdvKitFootstepComponent.generated.h"

/**
 * @brief Configuration struct to assign a sound cue to a specific surface
 */
USTRUCT(BlueprintType)
struct FFootStepSound
{
	GENERATED_USTRUCT_BODY();

public:
	/** Physical surface to play sound for */
	UPROPERTY(EditAnywhere, Category = "Footstep")
	TEnumAsByte<EPhysicalSurface> Surface;

	/** Sound cue that is played on configured surface */
	UPROPERTY(EditAnywhere, Category = "Footstep")
	USoundCue* Sound;
};


/**
 * @brief Utility component to play foot step sounds depending on what surface is beneath a 
 * foot of the owning character
 */
UCLASS(Blueprintable, ClassGroup = Utility, hidecategories = (Mobility, LOD, Events, Collision, Physics, Rendering, "Rendering | Material", TextureStreaming, Input, Lighting, Base, Activation), meta = (BlueprintSpawnableComponent))
class ADVKITRUNTIME_API UAdvKitFootstepComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	/** List of sounds configured for surfaces */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Footstep")
	TArray<FFootStepSound> FootStepSounds;

	/** List of foot sockets on the character */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Footstep")
	TArray<FName> FootSocketNames;

	/** How far down to trace below a foot socket to detect the surface */
	UPROPERTY(EditAnywhere, Category = "Footstep")
	float FootStepTraceDistance;

public:

	/**
	 * Constructor
	 */
	UAdvKitFootstepComponent(const FObjectInitializer& ObjectInitializer);

	/**
	 * Tries to play a footstep sound for a configured foot.
	 * @param	Foot 	Index (in Socket Array) of foot socket to play sound for
	 */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvKit")
	void PlayFootstep(int32 Foot);
	virtual void PlayFootstep_Implementation(int32 Foot);

	/**
	 * Tries to play a footstep sound for a configured foot.
	 * @param	Foot 	Index (in Socket Array) of foot socket to play sound for
	 * @return	Audio component playing the sound of the footstep
	 */
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category = "AdvKit")
	UAudioComponent* PlayFootstepAttached(int32 Foot);
	virtual UAudioComponent* PlayFootstepAttached_Implementation(int32 Foot);

private:

	/**
	 * Internal method since, both public methods basically do the same and this safes copypasta
	 * @param	Foot 	Index (in Socket Array) of foot socket to play sound for
	 * @param	bAttached	Whether to attach the sound or not
	 * @return	Audio component playing the sound of the footstep if bAttached is true
	 */
	virtual UAudioComponent* InternalPlayFootstep(int32 Foot, bool bAttached);
};
