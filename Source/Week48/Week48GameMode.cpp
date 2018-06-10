// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Week48GameMode.h"
#include "Week48HUD.h"
#include "Week48Character.h"
#include "UObject/ConstructorHelpers.h"

AWeek48GameMode::AWeek48GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AWeek48HUD::StaticClass();
}
