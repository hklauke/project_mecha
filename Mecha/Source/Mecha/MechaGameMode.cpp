// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MechaGameMode.h"
#include "MechaHUD.h"
#include "MechaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMechaGameMode::AMechaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMechaHUD::StaticClass();
}
