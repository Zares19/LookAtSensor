// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LookAtSensor_CPP : ModuleRules
{
	public LookAtSensor_CPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
