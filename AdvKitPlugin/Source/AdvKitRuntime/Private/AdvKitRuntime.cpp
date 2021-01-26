// Copyright 2015 Pascal Krabbe

#include "AdvKitRuntime.h"
#include "AdvKitLogCategories.h"

/*! \mainpage 
*
* \section intro_sec Introduction
*
* Welcome to the Adventure Kit API documentation. You can find the wiki documentation <a href="https://github.com/FreetimeStudio/Adventure-Kit-Public/wiki">here</a>.
*
* \section install_sec Installation
* Check the setup guide for everything you need to do to get the kit running: <a href="https://github.com/FreetimeStudio/Adventure-Kit-Public/wiki/Setup">Setup Guide</a>
*
* \section quicklinks_sec Quick Links
* Links to quickly get to the section you want.
*
* \subsection Characters
* - @ref AAdvKitCharacter
*	- @ref UAdvKitCharacterMovementComponent
* - @ref AAdvKitGravityCharacter
*	- @ref UAdvKitGravityCharacterMovementComponent
*   - @ref AAdvKitGravityPlayerController
*
* \subsection Inventory
* - @ref AAdvKitInventoryManager
* - @ref AAdvKitInventoryItem
* - @ref AAdvKitWeapon
* - @ref AAdvKitInventoryPickup
* - @ref AAdvKitUsable
*
*
* \subsection Zones
* - @ref AAdvKitZone
*   - @ref AAdvKitZoneLine
*   - @ref AAdvKitZoneRectangle
* - @ref UAdvKitTransitionComponent
*   - @ref UAdvKitTransitionComponentPoint
*   - @ref UAdvKitTransitionComponentLine
*/

DEFINE_LOG_CATEGORY(LogAdvKit);
DEFINE_LOG_CATEGORY(LogAdvKitZone);
DEFINE_LOG_CATEGORY(LogAdvKitItem);
DEFINE_LOG_CATEGORY(LogAdvKitSwitch);
DEFINE_LOG_CATEGORY(LogAdvKitWeapon);
DEFINE_LOG_CATEGORY(LogAdvKitAction);
DEFINE_LOG_CATEGORY(LogAdvKitCharacter);

#define LOCTEXT_NAMESPACE "FAdvKitRuntimeModule"

void FAdvKitRuntimeModule::StartupModule()
{

}


void FAdvKitRuntimeModule::ShutdownModule()
{

}

#undef LOCTEXT_NAMESPACE

//
//FString GetRoleString(ENetRole Role)
//{
//	switch (Role)
//	{
//	case ROLE_Authority:
//		return FString("ROLE_Authority");
//	case ROLE_AutonomousProxy:
//		return FString("ROLE_AutonomousProxy");
//	case ROLE_None:
//		return FString("ROLE_None");
//	case ROLE_SimulatedProxy:
//		return FString("ROLE_SimulatedProxy");
//	}
//
//	return FString("(null)");
//}
//
//FString GetAdvMovementModeString(EAdvKitMovementMode Mode)
//{
//	switch (Mode)
//	{
//	case EAdvKitMovementMode::None:
//		return FString("None");
//	case EAdvKitMovementMode::Walking:
//		return FString("Walking");
//	case EAdvKitMovementMode::NavWalking:
//		return FString("NavWalking");
//	case EAdvKitMovementMode::Falling:
//		return FString("Falling");
//	case EAdvKitMovementMode::Swimming:
//		return FString("Swimming");
//	case EAdvKitMovementMode::Flying:
//		return FString("Flying");
//	case EAdvKitMovementMode::ClimbingWall:
//		return FString("ClimbingWall");
//	case EAdvKitMovementMode::ClimbingCeiling:
//		return FString("ClimbingCeiling");
//	case EAdvKitMovementMode::ClimbingLedge:
//		return FString("ClimbingLedge");
//	case EAdvKitMovementMode::ClimbingLadder:
//		return FString("ClimbingLadder");
//	case EAdvKitMovementMode::WalkingTightspace:
//		return FString("WalkingTightspace");
//	case EAdvKitMovementMode::WalkingBalance:
//		return FString("WalkingBalance");
//	case EAdvKitMovementMode::ActionDriven:
//		return FString("ActionDriven");
//	case EAdvKitMovementMode::Custom:
//		return FString("Custom");
//	}
//
//	return FString("(null)");
//}
//
//void LogRole(ENetRole Role)
//{
//	UE_LOG(LogAdvKit, Log, TEXT("Role is %s"),*GetRoleString(Role));
//}
//
//void LogMovementMode(EAdvKitMovementMode Mode)
//{
//	UE_LOG(LogAdvKit, Log, TEXT("MovementMode is %s"), *GetAdvMovementModeString(Mode));
//}
//

IMPLEMENT_MODULE(FAdvKitRuntimeModule, AdvKitRuntime)
