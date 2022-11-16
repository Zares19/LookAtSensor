// Copyright Epic Games, Inc. All Rights Reserved.

#include "LookAtSensor_CPPGameMode.h"
#include "LookAtSensor_CPPHUD.h"
#include "LookAtSensor_CPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALookAtSensor_CPPGameMode::ALookAtSensor_CPPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALookAtSensor_CPPHUD::StaticClass();
}
