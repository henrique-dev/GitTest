// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GitTestPawn.h"
#include "GitTestSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class GITTEST_API AGitTestSportsCar : public AGitTestPawn
{
	GENERATED_BODY()
	
public:

	AGitTestSportsCar();
};
