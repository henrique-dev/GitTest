// Copyright Epic Games, Inc. All Rights Reserved.

#include "GitTestGameMode.h"
#include "GitTestPlayerController.h"

AGitTestGameMode::AGitTestGameMode()
{
	PlayerControllerClass = AGitTestPlayerController::StaticClass();
}
