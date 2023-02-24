// © 2021 BeardGames/Jon Beardsell

using UnrealBuildTool;
using System.Collections.Generic;

public class ChakraEditorTarget : TargetRules
{
	public ChakraEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "Chakra" } );
	}
}
