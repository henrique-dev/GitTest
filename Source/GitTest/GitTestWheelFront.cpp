// Copyright Epic Games, Inc. All Rights Reserved.

#include "GitTestWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UGitTestWheelFront::UGitTestWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}