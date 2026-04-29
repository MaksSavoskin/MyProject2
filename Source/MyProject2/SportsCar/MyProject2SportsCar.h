// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MyProject2Pawn.h"
#include "MyProject2SportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class AMyProject2SportsCar : public AMyProject2Pawn
{
	GENERATED_BODY()
	
public:

	AMyProject2SportsCar();
};
