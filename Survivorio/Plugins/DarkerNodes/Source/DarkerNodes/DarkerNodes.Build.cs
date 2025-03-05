/* Copyright (C) 2021 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the Unreal Engine Marketplace
*/

using System.IO;
using UnrealBuildTool;

public class DarkerNodes : ModuleRules
{
	public DarkerNodes(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(
			new string[] { }
		);

		PrivateIncludePaths.AddRange(
			new string[] { }
		);

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core"
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"RenderCore",
				"Engine",
				"Slate",
				"SlateCore",
				"InputCore",
				"UnrealEd",
				"EditorStyle",
				"PIEPreviewDeviceProfileSelector",
				"Projects",
				"DeveloperSettings",
				"NiagaraEditor",
				"GraphEditor",
				//Check usefulness
				"SceneOutliner",
				"ToolMenus",
				"HierarchicalLODUtilities",
				"ApplicationCore",
				"WebBrowser",
				"SettingsEditor",
			}
		);

		DynamicallyLoadedModuleNames.AddRange(
			new string[]
				{ }
		);


		// DesktopPlatform is only available for Editor and Program targets (running on a desktop platform)
		bool IsDesktopPlatformType = Target.Platform == UnrealBuildTool.UnrealTargetPlatform.Win64
		                             || Target.Platform == UnrealBuildTool.UnrealTargetPlatform.Mac
		                             || Target.Platform == UnrealBuildTool.UnrealTargetPlatform.Linux;
		if (Target.Type == TargetType.Editor || (Target.Type == TargetType.Program && IsDesktopPlatformType))
		{
			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"DesktopPlatform",
				}
			);
		}
	}
}