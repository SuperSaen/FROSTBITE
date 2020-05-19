

using UnrealBuildTool;
using System.Collections.Generic;

public class FROSTBITEEditorTarget : TargetRules
{
	public FROSTBITEEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "FROSTBITE", "VTMP", "VTMPEditor", "FlockingBehaviourSystem" } );
	}
}
