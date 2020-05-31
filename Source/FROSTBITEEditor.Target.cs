

using UnrealBuildTool;
using System.Collections.Generic;

public class FROSTBITEEditorTarget : TargetRules
{
	public FROSTBITEEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "FROSTBITE", "FlockingBehaviourSystem" } );
	}
}
