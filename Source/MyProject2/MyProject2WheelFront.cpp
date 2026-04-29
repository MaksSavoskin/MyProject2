// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProject2WheelFront.h"
#include "UObject/ConstructorHelpers.h"

UMyProject2WheelFront::UMyProject2WheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}