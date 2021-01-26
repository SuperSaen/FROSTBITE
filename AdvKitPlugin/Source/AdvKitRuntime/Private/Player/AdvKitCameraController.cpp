// Copyright 2015 Pascal Krabbe

#include "Player/AdvKitCameraController.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"


UAdvKitCameraController::UAdvKitCameraController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	SetIsReplicatedByDefault(true);

	CameraLerpAlpha = 1.0f;
	CameraLerpSpeed = 1.0f;
	CameraLerpExponent = 2.0f;
	CurrentCameraComponent = nullptr;
	LastCameraComponent = nullptr;

	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;

	CurrentConfig = 0;

	FCameraConfig ThirdPersonConfig;
	ThirdPersonConfig.ConfigName = FName("Third Person");
	ThirdPersonConfig.CameraComponentName = FName("Third Person Camera");
	ThirdPersonConfig.bIgnoredByCycle = false;
	ThirdPersonConfig.bClampCameraPitch = false;
	ThirdPersonConfig.bClampCameraYaw = false;
	ThirdPersonConfig.bClampCameraRoll = true;
	ThirdPersonConfig.bUseControllerRotationPitch = false;
	ThirdPersonConfig.bUseControllerRotationYaw = false;
	ThirdPersonConfig.bUseControllerRotationRoll = false;
	ThirdPersonConfig.bOrientRotationToMovement = true;
	CameraConfigurations.Add(ThirdPersonConfig);

	FCameraConfig ShoulderConfig;
	ShoulderConfig.ConfigName = FName("Shoulder");
	ShoulderConfig.CameraComponentName = FName("Shoulder Camera");
	ShoulderConfig.bIgnoredByCycle = false;
	ShoulderConfig.bClampCameraPitch = false;
	ShoulderConfig.bClampCameraYaw = false;
	ShoulderConfig.bClampCameraRoll = true;
	ShoulderConfig.bUseControllerRotationPitch = false;
	ShoulderConfig.bUseControllerRotationYaw = true;
	ShoulderConfig.bUseControllerRotationRoll = false;
	ShoulderConfig.bOrientRotationToMovement = false;
	CameraConfigurations.Add(ShoulderConfig);

	FCameraConfig FirstPersonConfig;
	FirstPersonConfig.ConfigName = FName("First Person");
	FirstPersonConfig.CameraComponentName = FName("First Person Camera");
	FirstPersonConfig.bIgnoredByCycle = false;
	FirstPersonConfig.bClampToParentSocket = true;
	FirstPersonConfig.bClampCameraPitch = true;
	FirstPersonConfig.MinCameraPitch = -80;
	FirstPersonConfig.MaxCameraPitch = 80;
	FirstPersonConfig.bClampCameraYaw = true;
	FirstPersonConfig.MinCameraYaw = -60;
	FirstPersonConfig.MaxCameraYaw = 60;
	FirstPersonConfig.bClampCameraRoll = true;
	FirstPersonConfig.bUseControllerRotationPitch = false;
	FirstPersonConfig.bUseControllerRotationYaw = true;
	FirstPersonConfig.bUseControllerRotationRoll = false;
	FirstPersonConfig.bOrientRotationToMovement = false;
	CameraConfigurations.Add(FirstPersonConfig);

	FCameraConfig TargetLockConfig;
	TargetLockConfig.ConfigName = FName("Target Lock");
	TargetLockConfig.CameraComponentName = FName("Target Lock Camera");
	TargetLockConfig.bIgnoredByCycle = true;
	TargetLockConfig.bClampToParentSocket = true;
	TargetLockConfig.bClampCameraPitch = true;
	TargetLockConfig.MinCameraPitch = 0;
	TargetLockConfig.MaxCameraPitch = 0;
	TargetLockConfig.bClampCameraYaw = true;
	TargetLockConfig.MinCameraYaw = 0;
	TargetLockConfig.MaxCameraYaw = 0;
	TargetLockConfig.bClampCameraRoll = true;
	TargetLockConfig.MinCameraRoll = 0;
	TargetLockConfig.MaxCameraRoll = 0;
	TargetLockConfig.bUseControllerRotationPitch = false;
	TargetLockConfig.bUseControllerRotationYaw = false;
	TargetLockConfig.bUseControllerRotationRoll = false;
	TargetLockConfig.bOrientRotationToMovement = true;
	CameraConfigurations.Add(TargetLockConfig);
}

void UAdvKitCameraController::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UAdvKitCameraController, CurrentConfig);
}

void UAdvKitCameraController::NextCamera()
{
	int32 InitialNextConfig = (CurrentConfig + 1) % CameraConfigurations.Num();
	int32 NextConfig = InitialNextConfig;
	while (GetConfig(NextConfig).bIgnoredByCycle)
	{
		NextConfig = (NextConfig + 1) % CameraConfigurations.Num();
		if (NextConfig == InitialNextConfig)
		{
			break;
		}
	}

	SetActiveConfig(NextConfig);
}

void UAdvKitCameraController::PreviousCamera()
{
	auto InitialPrevConfig = CurrentConfig - 1;
	if (InitialPrevConfig < 0)
	{
		InitialPrevConfig = FMath::Max<int32>(CameraConfigurations.Num() - 1, 0);
	}
	int32 PrevConfig = InitialPrevConfig;

	while (GetConfig(PrevConfig).bIgnoredByCycle)
	{
		PrevConfig = PrevConfig - 1;
		if (PrevConfig < 0)
		{
			PrevConfig = FMath::Max<int32>(CameraConfigurations.Num() - 1, 0);
		}

		if (PrevConfig == InitialPrevConfig)
		{
			break;
		}
	}

	SetActiveConfig(PrevConfig);
}

void UAdvKitCameraController::SetActiveConfig(int32 Index)
{
	if (CurrentConfig == Index)
	{
		return;
	}

	if (GetOwnerRole() == ROLE_AutonomousProxy)
	{
		ServerSetActiveConfig(Index);
	}

	CurrentConfig = Index;
	if (CurrentConfig<0 || CurrentConfig>=CameraConfigurations.Num())
	{
		return;
	}

	auto ActiveConfig = GetConfig(CurrentConfig);
	SetActiveCameraComponent(ActiveConfig.Camera);

	auto Character = Cast<ACharacter>(GetOwner());
	if (!Character)
	{
		return;
	}

	Character->bUseControllerRotationPitch = ActiveConfig.bUseControllerRotationPitch;
	Character->bUseControllerRotationYaw = ActiveConfig.bUseControllerRotationYaw;
	Character->bUseControllerRotationRoll = ActiveConfig.bUseControllerRotationRoll;

	auto MovementComponent = Character->GetCharacterMovement();
	if (!MovementComponent)
	{
		return;
	}

	MovementComponent->bOrientRotationToMovement = ActiveConfig.bOrientRotationToMovement;
}

bool UAdvKitCameraController::ServerSetActiveConfig_Validate(int32 Index)
{
	return true;
}

void UAdvKitCameraController::ServerSetActiveConfig_Implementation(int32 Index)
{
	SetActiveConfig(Index);
}

void UAdvKitCameraController::OnRep_CurrentConfig(int32 LastConfig)
{
	if (CurrentConfig != LastConfig)
	{
		SetActiveConfig(CurrentConfig);
	}
}

void UAdvKitCameraController::SetActiveConfigByName(FName NewConfigName)
{
	for (int32 ConfigIndex = 0; ConfigIndex < CameraConfigurations.Num(); ConfigIndex++)
	{
		auto Config = GetConfig(ConfigIndex);
		if (Config.ConfigName.IsEqual(NewConfigName))
		{
			SetActiveConfig(ConfigIndex);
			return;
		}
	}
}

bool UAdvKitCameraController::SetActiveCameraComponent_Implementation(UCameraComponent* NewCameraComponent)
{
	if (!NewCameraComponent)
	{
		return false;
	}

	NewCameraComponent->SetActive(true);

	//Switch camera components and adjust interpolation
	LastCameraComponent = CurrentCameraComponent;
	CurrentCameraComponent = NewCameraComponent;
	CameraLerpAlpha = 1 - CameraLerpAlpha;

	//UE_LOG(LogAdvKit, Log, TEXT("UAdvKitCameraController::SetActiveCameraComponent - New: %s LastCam: %s Alpha: %f"), *GetNameSafe(CurrentCameraComponent), *GetNameSafe(LastCameraComponent), CameraLerpAlpha);

	if (CameraLerpSpeed <= 0.0f && LastCameraComponent)
	{
		LastCameraComponent->SetActive(false);
		LastCameraComponent = nullptr;
	}

	return true;
}


void UAdvKitCameraController::RestrictViewRotation_Implementation(FRotator& DesiredRotation)
{
	auto Config = GetConfig(CurrentConfig);
	//View rotation is only restricted in first person mode
	if (!(Config.bClampCameraPitch || Config.bClampCameraYaw || Config.bClampCameraRoll))
	{
		return;
	}

	if (!Config.Camera)
	{
		return;
	}

	auto AttachParent = Config.Camera->GetAttachParent();
	if (!AttachParent)
	{
		return;
	}

	FQuat GlobalQuat = GetOwner()->GetActorQuat();

	//auto GravityCharacter = Cast<AAdvKitGravityCharacter>(GetOwner());
	//if (GravityCharacter)
	//{
	//	GlobalQuat = GravityCharacter->WorldOrientationComponent->GetComponentQuat();
	//}

	if (Config.bClampToParentSocket)
	{
		FTransform SocketTransform = AttachParent->GetSocketTransform(
			Config.Camera->GetAttachSocketName(), ERelativeTransformSpace::RTS_World);
		GlobalQuat = SocketTransform.GetRotation();
	}

	//Transform given rotation to local space
	FQuat LocalQuat = GlobalQuat.Inverse() * DesiredRotation.Quaternion();
	FRotator LocalRotator = LocalQuat.Rotator();

	//Clamp angles of local rotation
	if (Config.bClampCameraPitch)
	{
		LocalRotator.Pitch = FMath::ClampAngle(LocalRotator.Pitch, Config.MinCameraPitch, Config.MaxCameraPitch);
	}

	if (Config.bClampCameraYaw)
	{
		LocalRotator.Yaw = FMath::ClampAngle(LocalRotator.Yaw, Config.MinCameraYaw, Config.MaxCameraYaw);
	}

	if (Config.bClampCameraRoll)
	{
		LocalRotator.Roll = FMath::ClampAngle(LocalRotator.Roll, Config.MinCameraRoll, Config.MaxCameraRoll);
	}

	//Transform back to world space
	LocalQuat = LocalRotator.Quaternion();
	DesiredRotation = (GlobalQuat * LocalQuat).Rotator();
}

FVector UAdvKitCameraController::GetViewLocation_Implementation(const FVector& OriginalLocation) const
{
	auto Config = GetConfig(CurrentConfig);
	if (!Config.Camera)
	{
		//UE_LOG(LogAdvKit, Warning, TEXT("UAdvKitCameraController::GetViewLocation - Camera Controller has no camera!"));
		return OriginalLocation;
	}

	//Interpolate between last and new camera
	if (LastCameraComponent && CameraLerpAlpha<1.0f)
	{
		//UE_LOG(LogAdvKit, Log, TEXT("UAdvKitCameraController::GetViewLocation - Lerping:"),CameraLerpAlpha);
		return FMath::Lerp<FVector>(LastCameraComponent->GetComponentLocation(), CurrentCameraComponent->GetComponentLocation(), FMath::InterpEaseInOut<float>(0.0f, 1.0f, CameraLerpAlpha, CameraLerpExponent));
	}

	//Current component is completely active
	//UE_LOG(LogAdvKit, Warning, TEXT("UAdvKitCameraController::GetViewLocation - Lerp complete"));
	return Config.Camera->GetComponentLocation();
}

FRotator UAdvKitCameraController::GetViewRotation_Implementation(const FRotator& OriginalRotation) const
{
	auto Config = GetConfig(CurrentConfig);
	if (!Config.Camera)
	{
		return OriginalRotation;
	}

	////Without target lock there is no need to modify the view rotation
	//if (TargetLockCamera == nullptr)
	//{
	//	return SuperRotation;
	//}

	////Lerp from current camera to target lock view
	//if (CurrentCameraComponent == TargetLockCamera)
	//{
	//	return FQuat::FastLerp(OriginalRotation.Quaternion(), CurrentCameraComponent->GetComponentQuat(), FMath::InterpEaseInOut<float>(0.0f, 1.0f, CameraLerpAlpha, CameraLerpExponent)).Rotator();
	//}

	////Lerp from target lock view to current camera
	//if (LastCameraComponent == TargetLockCamera)
	//{
	//	return FQuat::FastLerp(LastCameraComponent->GetComponentQuat(), OriginalRotation.Quaternion(), FMath::InterpEaseInOut<float>(0.0f, 1.0f, CameraLerpAlpha, CameraLerpExponent)).Rotator();
	//}

	return OriginalRotation;
}

FCameraConfig UAdvKitCameraController::GetConfig(int32 Index) const
{
	if (Index < 0 || CameraConfigurations.Num() <= Index)
	{
		FCameraConfig Dummy;
		return Dummy;
	}

	return CameraConfigurations[Index];
}

void UAdvKitCameraController::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//Update camera alpha
	CameraLerpAlpha = FMath::Clamp<float>(CameraLerpAlpha + CameraLerpSpeed*DeltaTime, 0, 1);
	if (CameraLerpAlpha >= 1.0f && LastCameraComponent)
	{
		LastCameraComponent->SetActive(false);
	}

	////Set active target automatically if not locked
	//if (!bLockTarget)
	//{
	//	auto* Target = GetBestTarget(GetAllAvailableTargets());
	//	SetTarget(Target, false);
	//}
}

void UAdvKitCameraController::BeginPlay()
{
	Super::BeginPlay();

	auto Owner = GetOwner();
	if (!Owner)
	{
		return;
	}

	TInlineComponentArray<UCameraComponent*> CameraComponents;
	Owner->GetComponents<UCameraComponent>(/*out*/ CameraComponents);

	if (CameraComponents.Num() == 0)
	{
		return;
	}

	for (int32 i = 0; i < CameraConfigurations.Num(); i++)
	{
		for (auto Component : CameraComponents)
		{
			if (!IsValid(Component))
			{
				continue;
			}

			if (Component->GetName().Equals(CameraConfigurations[i].CameraComponentName.ToString()))
			{
				CameraConfigurations[i].Camera = Component;
				CameraConfigurations[i].Camera->SetActive(false);
				break;
			}
		}
	}

	//Circumvent the check if the current configuration is already active
	auto ConfigToSet = CurrentConfig;
	CurrentConfig = -1;

	SetActiveConfig(ConfigToSet);
}
