// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class AttackOfThePrismsTarget : TargetRules
{
	public AttackOfThePrismsTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
        ExtraModuleNames.Add("AttackOfThePrisms");
	}
	
}
