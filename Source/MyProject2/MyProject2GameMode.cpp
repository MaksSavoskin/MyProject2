// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProject2GameMode.h"
#include "MyProject2PlayerController.h"

AMyProject2GameMode::AMyProject2GameMode()
{
	PlayerControllerClass = AMyProject2PlayerController::StaticClass();
}
