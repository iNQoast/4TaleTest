// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FourTaleTest : ModuleRules
{
	public FourTaleTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
