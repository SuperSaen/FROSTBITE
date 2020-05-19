

using UnrealBuildTool;
using System.Collections.Generic;

public class FROSTBITETarget : TargetRules
{
	public FROSTBITETarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "FROSTBITE", "VTMP", "VTMPEditor", "FlockingBehaviourSystem" } );
	}
}
