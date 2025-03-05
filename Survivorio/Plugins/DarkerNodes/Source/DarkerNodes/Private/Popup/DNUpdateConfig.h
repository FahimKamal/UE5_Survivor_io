/* Copyright (C) 2021 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the UE4 Marketplace
*/

#pragma once

#include "Engine/DeveloperSettings.h"
#include "DNUpdateConfig.generated.h"

UCLASS(config = EditorPerProjectUserSettings)
class DARKERNODES_API UDNUpdateConfig : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UDNUpdateConfig()
	{
	}

	UPROPERTY(config)
	FString PluginVersionUpdate = "";
};
