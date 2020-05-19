// Copyright Sean Neville, 2020

using UnrealBuildTool;

public class VTMP : ModuleRules
{
	public VTMP(ReadOnlyTargetRules Target) : base(Target)
	{
		MinFilesUsingPrecompiledHeaderOverride = 1;
		
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		bEnforceIWYU = true;
		
		PublicDependencyModuleNames.AddRange(new string[]{"Core","CoreUObject","Engine","Slate","SlateCore","ProceduralMeshComponent","Foliage"});
		PublicIncludePaths.AddRange(new string[] { "VTMP/Public"});
		PrivateIncludePaths.AddRange(new string[] { "VTMP/Private"});
	}
}

