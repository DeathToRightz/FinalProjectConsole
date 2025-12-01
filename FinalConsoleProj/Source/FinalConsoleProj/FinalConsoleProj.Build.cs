// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FinalConsoleProj : ModuleRules
{
	public FinalConsoleProj(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"FinalConsoleProj",
			"FinalConsoleProj/Variant_Horror",
			"FinalConsoleProj/Variant_Horror/UI",
			"FinalConsoleProj/Variant_Shooter",
			"FinalConsoleProj/Variant_Shooter/AI",
			"FinalConsoleProj/Variant_Shooter/UI",
			"FinalConsoleProj/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
