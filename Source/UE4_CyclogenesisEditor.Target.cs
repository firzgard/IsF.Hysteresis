// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class UE4_CyclogenesisEditorTarget : TargetRules
{
	public UE4_CyclogenesisEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("UE4_Cyclogenesis");
	}
}
