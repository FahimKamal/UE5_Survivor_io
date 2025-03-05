/* Copyright (C) 2021 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the Unreal Engine Marketplace
*/

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"

#define LOCTEXT_NAMESPACE "DarkerNodesCommands"

class DarkerNodesCommands : public TCommands<DarkerNodesCommands>
{
public:
	DarkerNodesCommands()
        : TCommands<DarkerNodesCommands>(
            TEXT("DarkerNodes"),
            FText::FromString("Darker Nodes"),
            NAME_None,
            "DarkerNodesStyle")
	{
	}

	TSharedPtr<FUICommandInfo> RestartEditorCommand;

	virtual void RegisterCommands() override
	{
		UI_COMMAND(RestartEditorCommand, "Restart Editor", "Trigger an editor restart", EUserInterfaceActionType::Button, FInputChord());
	}
};

#undef LOCTEXT_NAMESPACE
