// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProject2WheelRear.h"
#include "UObject/ConstructorHelpers.h"

UMyProject2WheelRear::UMyProject2WheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}