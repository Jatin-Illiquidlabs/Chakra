// © 2021 BeardGames/Jon Beardsell

using UnrealBuildTool;
using System.Collections.Generic;

public class ChakraTarget : TargetRules
{
	public ChakraTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "Chakra" } );
	}
}
