// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_ShooterGameMode.h"
#include "FPS_ShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_ShooterGameMode::AFPS_ShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
