// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "LookAtSensor_CPPHUD.generated.h"

UCLASS()
class ALookAtSensor_CPPHUD : public AHUD
{
	GENERATED_BODY()

public:
	ALookAtSensor_CPPHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

