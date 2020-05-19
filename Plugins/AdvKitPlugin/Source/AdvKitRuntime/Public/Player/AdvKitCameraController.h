// Copyright 2015 Pascal Krabbe

#pragma once

#include "Components/ActorComponent.h"
#include "AdvKitCameraController.generated.h"

/**
 */
USTRUCT(BlueprintType)
struct FCameraConfig
{
	GENERATED_USTRUCT_BODY();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	FName ConfigName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	FName CameraComponentName;

	/** True if this config should be skipped when doing an automatic Next/Prev camera call */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	bool bIgnoredByCycle;

	/** When restricting the camera, use the attachment socket as the reference space (as opposed to the owning actor)*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	bool bClampToParentSocket;

	/** Restrict the camera pitch to the head socket's orientation in this view */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	bool bClampCameraPitch;

	/** Minimum angle to clamp pitch to in this view */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera", meta = (EditCondition = bClampCameraPitch))
	float MinCameraPitch;

	/** Maximum angle to clamp pitch to in first person */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera", meta = (EditCondition = bClampCameraPitch))
	float MaxCameraPitch;

	/** Restrict the camera yaw to the head socket's orientation in first person view*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	bool bClampCameraYaw;

	/** Minimum angle to clamp yaw to in first person */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera", meta = (EditCondition = bClampCameraYaw))
	float MinCameraYaw;

	/** Maximum angle to clamp yaw to in first person */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera", meta = (EditCondition = bClampCameraYaw))
	float MaxCameraYaw;

	/** Restrict the camera roll to the head socket's orientation in first person view*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	bool bClampCameraRoll;

	/** Minimum angle to clamp roll to in first person */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera", meta = (EditCondition = bClampCameraRoll))
	float MinCameraRoll;

	/** Maximum angle to clamp roll to in first person */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera", meta = (EditCondition = bClampCameraRoll))
	float MaxCameraRoll;

	/** If true, this Pawn's pitch will be updated to match the Controller's ControlRotation pitch, if controlled by a PlayerController. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	bool bUseControllerRotationPitch;

	/** If true, this Pawn's yaw will be updated to match the Controller's ControlRotation yaw, if controlled by a PlayerController. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	bool bUseControllerRotationYaw;

	/** If true, this Pawn's roll will be updated to match the Controller's ControlRotation roll, if controlled by a PlayerController. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	bool bUseControllerRotationRoll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	bool bOrientRotationToMovement;

	/** Camera used when in target lock mode. Tag camera component with "Target Lock" auto assign this property. */
	UPROPERTY(BlueprintReadOnly, Category = "Camera")
	class UCameraComponent* Camera;

	FCameraConfig()
		: ConfigName(NAME_None)
		, CameraComponentName(NAME_None)
		, bIgnoredByCycle(false)
		, bClampToParentSocket(false)
		, bClampCameraPitch(false)
		, MinCameraPitch(-89)
		, MaxCameraPitch(89)
		, bClampCameraYaw(false)
		, MinCameraYaw(-89)
		, MaxCameraYaw(89)
		, bClampCameraRoll(false)
		, MinCameraRoll(0)
		, MaxCameraRoll(0)
		, bUseControllerRotationPitch(false)
		, bUseControllerRotationYaw(false)
		, bUseControllerRotationRoll(false)
		, bOrientRotationToMovement(true)
		, Camera(nullptr)
	{

	}
};


/**
 */
UCLASS(Blueprintable, ClassGroup = Camera, hidecategories = (Mobility, LOD, Events, Collision, Physics, Rendering, "Rendering | Material", TextureStreaming, Input, Lighting, Base, Activation), meta = (BlueprintSpawnableComponent))
class ADVKITRUNTIME_API UAdvKitCameraController : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	TArray<FCameraConfig> CameraConfigurations;

public:


	/** How fast to switch between cameras */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float CameraLerpSpeed;

	/** Current interpolation alpha of camera switch */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float CameraLerpAlpha;

	/** Exponent of interpolation camera curve */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float CameraLerpExponent;

	/** Previous camera component */
	UPROPERTY(BlueprintReadWrite, Category = "Camera")
	UCameraComponent* LastCameraComponent;

	/** Currently active camera component */
	UPROPERTY(BlueprintReadWrite, Category = "Camera")
	UCameraComponent* CurrentCameraComponent;

	/** Currently active camera configuration */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera", ReplicatedUsing=OnRep_CurrentConfig)
	int32 CurrentConfig;


	/**
	 * Constructor
	 */
	UAdvKitCameraController(const FObjectInitializer& ObjectInitializer);

	/**
	 * If the character has multiple cameras, switch to the next one
	 */
	UFUNCTION(BlueprintCallable, Category = "Camera")
	virtual void NextCamera();

	/**
	 * If the character has multiple cameras, switch to the previous one
	 */
	UFUNCTION(BlueprintCallable, Category = "Camera")
	virtual void PreviousCamera();

	UFUNCTION(BlueprintCallable, Category = "Camera")
	virtual void SetActiveConfig(int32 Index);

	UFUNCTION(Server,Reliable,WithValidation)
	void ServerSetActiveConfig(int32 Index);
	virtual void ServerSetActiveConfig_Implementation(int32 Index);

	UFUNCTION()
	virtual void OnRep_CurrentConfig(int32 LastConfig);

	UFUNCTION(BlueprintCallable, Category = "Camera")
	virtual void SetActiveConfigByName(FName NewConfigName);

	/**
	 * Set a specific camera mode to be the active camera
	 * @param	NewCameraComponent component to activate
	 * @return	True if activation was successful
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Camera")
	bool SetActiveCameraComponent(UCameraComponent* NewCameraComponent);
	virtual bool SetActiveCameraComponent_Implementation(UCameraComponent* NewCameraComponent);

	/**
	 * Restricts the controller's view rotation. By default only used in first person to
	 * restrict the camera if configured.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Camera")
	void RestrictViewRotation(FRotator& DesiredRotation);
	virtual void RestrictViewRotation_Implementation(FRotator& DesiredRotation);

	UFUNCTION(BlueprintNativeEvent, Category = "Camera")
	FVector GetViewLocation(const FVector& OriginalLocation) const;
	virtual FVector GetViewLocation_Implementation(const FVector& OriginalLocation) const;
	
	UFUNCTION(BlueprintNativeEvent, Category = "Camera")
	FRotator GetViewRotation(const FRotator& OriginalRotation) const;
	virtual FRotator GetViewRotation_Implementation(const FRotator& OriginalRotation) const;

	FCameraConfig GetConfig(int32 Index) const;

	//Begin UActorComponent Interface
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void BeginPlay() override;
	//End UActorComponent Interface

};
