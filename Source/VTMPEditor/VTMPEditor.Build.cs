// Copyright Sean Neville, 2020

using UnrealBuildTool;

public class VTMPEditor : ModuleRules
{
	public VTMPEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		
		PublicIncludePaths.AddRange(new string[] {System.IO.Path.Combine(ModuleDirectory, "Public")});

        PrivateIncludePaths.AddRange(new string[] { "VTMPEditor/Private" });

        PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"MeshDescription",
                "ProceduralMeshComponent",
				"UnrealEd",
				"StaticMeshDescription",
                "Foliage"
				
			}
			);
					
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
                "InputCore",
                "UnrealEd",
                "LevelEditor",
                "ViewportInteraction",
                "VTMP"
				
			}
			);
	}
}
