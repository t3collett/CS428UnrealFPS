// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MeltdownGameMode.h"
#include "MeltdownHUD.h"
#include "MeltdownCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMeltdownGameMode::AMeltdownGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FPS_Character_Base"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMeltdownHUD::StaticClass();
}
