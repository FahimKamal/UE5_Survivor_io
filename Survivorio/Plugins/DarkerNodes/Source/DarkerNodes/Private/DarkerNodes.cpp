/* Copyright (C) 2021 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the Unreal Engine Marketplace
*/

#include "DarkerNodes.h"
#include "DarkerNodesCommands.h"
#include "Interfaces/IPluginManager.h"
#include "Interfaces/IMainFrameModule.h"
#include "Popup/DNUpdatePopup.h"

#define LOCTEXT_NAMESPACE "FDarkerNodesModule"

void FDarkerNodesModule::StartupModule()
{
	const FString ShaderDirectory =  IPluginManager::Get().FindPlugin(TEXT("DarkerNodes"))->GetBaseDir() + FString("/Shaders");
	AddShaderSourceDirectoryMapping("/DarkerNodes", ShaderDirectory);
	
	Colorizer.Color();

	auto const CommandBindings = FModuleManager::LoadModuleChecked< IMainFrameModule >("MainFrame").GetMainFrameCommandBindings();
	DarkerNodesCommands::Register();
    
	CommandBindings->MapAction(
        DarkerNodesCommands::Get().RestartEditorCommand,
        FExecuteAction::CreateRaw(this, &FDarkerNodesModule::RestartEditor)
    );
}

void FDarkerNodesModule::RestartEditor()
{
	FUnrealEdMisc::Get().RestartEditor(false);
}

void FDarkerNodesModule::ShutdownModule()
{
}


#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FDarkerNodesModule, DarkerNodes)
