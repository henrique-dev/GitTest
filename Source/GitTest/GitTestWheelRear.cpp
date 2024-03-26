// Copyright Epic Games, Inc. All Rights Reserved.

#include "GitTestWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UGitTestWheelRear::UGitTestWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}