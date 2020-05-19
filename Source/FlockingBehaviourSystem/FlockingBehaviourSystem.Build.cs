
// Copyright Sean Neville, 2020

using UnrealBuildTool;

public class FlockingBehaviourSystem : ModuleRules
{
	public FlockingBehaviourSystem(ReadOnlyTargetRules Target) : base(Target)
	{
		MinFilesUsingPrecompiledHeaderOverride = 1;
		
		PrivatePCHHeaderFile = "Public/FlockingBehaviourSystem.h";
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		bEnforceIWYU = true;
		
		PublicDependencyModuleNames.AddRange(new string[]{"Core","CoreUObject","Engine","AIModule"});
        PublicIncludePaths.AddRange(new string[] { System.IO.Path.Combine(ModuleDirectory, "Public") });

        PrivateIncludePaths.AddRange(new string[] { "FlockingBehaviourSystem/Private" });
    }
}

