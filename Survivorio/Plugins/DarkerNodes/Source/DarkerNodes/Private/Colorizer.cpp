/* Copyright (C) 2021 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the Unreal Engine Marketplace
*/

#include "Colorizer.h"
#include "Interfaces/IPluginManager.h"
#include "ISettingsEditorModule.h"
#include "NiagaraEditorStyle.h"
#include "Popup/DNUpdatePopup.h"
#include "Styling/StyleColors.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Settings/EditorStyleSettings.h"

FColorizer::FColorizer()
{
	LoadDatabase();

	DarkerNodesSettings = GetMutableDefault<UDarkerNodesSettings>();

	DarkerNodesSettings->OnSettingChanged().AddRaw(this, &FColorizer::Reload);
	FCoreDelegates::OnPostEngineInit.AddLambda([this]()
	{
		if (DarkerNodesSettings->UpdateMaterials || DarkerNodesSettings->PluginVersionUpdate != CurrentPluginVersion)
		{
			DarkerNodesSettings->UpdateMaterials = false;
			DarkerNodesSettings->PluginVersionUpdate = CurrentPluginVersion;
			DarkerNodesSettings->SaveConfig();
			BrushDatabase->UpdateAndSaveMaterials();
		}
	});

	AppStyle = static_cast<FSlateStyleSet*>(const_cast<ISlateStyle*>(&FAppStyle::Get()));
	NiagaraStyle = static_cast<FSlateStyleSet*>(const_cast<FNiagaraEditorStyle*>(&FNiagaraEditorStyle::Get()));
	CurrentTheme = const_cast<FStyleTheme*>(&USlateThemeManager::Get().GetCurrentTheme());
	
	PluginDirectory = IPluginManager::Get().FindPlugin(TEXT("DarkerNodes"))->GetBaseDir();
	ThemeDirectory = PluginDirectory + FString("/Resources/Theme");
	FontsDirectory = PluginDirectory + FString("/Resources/Fonts");
	GlobalSettingsFile = PluginDirectory + "/Settings.ini";

	if (DarkerNodesSettings->UseGlobalSettings)
	{
		if (FPaths::FileExists(GlobalSettingsFile))
		{
			DarkerNodesSettings->LoadConfig(nullptr, *GlobalSettingsFile);
		}
	}

	EStyleColor StyleColors[] = {
		//EStyleColor::Black,
		EStyleColor::Background,
		EStyleColor::Title,
		EStyleColor::WindowBorder,
		EStyleColor::Foldout,
		EStyleColor::Input,
		EStyleColor::InputOutline,
		EStyleColor::Recessed,
		EStyleColor::Panel,
		EStyleColor::Header,
		EStyleColor::Dropdown,
		EStyleColor::DropdownOutline,
		EStyleColor::Hover,
		EStyleColor::Hover2,
		//EStyleColor::White,
		EStyleColor::White25,
		EStyleColor::Highlight,
		EStyleColor::Primary,
		EStyleColor::PrimaryHover,
		EStyleColor::PrimaryPress,
		EStyleColor::Secondary,
		EStyleColor::Foreground,
		EStyleColor::ForegroundHover,
		EStyleColor::ForegroundInverted,
		EStyleColor::ForegroundHeader,
		EStyleColor::Select,
		EStyleColor::SelectInactive,
		EStyleColor::SelectParent,
		EStyleColor::SelectHover,
		EStyleColor::Notifications
	};
	
	for (auto Color: StyleColors)
	{
		DefaultColors[(int32)Color] = CurrentTheme->LoadedDefaultColors[(int32)Color];
	}

	ReloadStyle();
}

void FColorizer::LoadDatabase()
{
	BrushDatabase = NewObject<UBrushDatabase>();

	BrushDatabase->CreateSlateBrush("GreyBase", "SolidColor.SolidColor");
	BrushDatabase->CreateSlateBrush("GreyDark", "SolidColor.SolidColor");
	BrushDatabase->CreateSlateBrush("GreyLight", "SolidColor.SolidColor");
	BrushDatabase->CreateSlateBrush("Debug", "SolidColor.SolidColor");

	BrushDatabase->CreateSlateBrush("HoverDark", "SolidColor.SolidColor");
	BrushDatabase->CreateSlateBrush("HoverBase", "SolidColor.SolidColor");
	BrushDatabase->CreateSlateBrush("HoverBaseBright", "SolidColor.SolidColor");

	BrushDatabase->CreateSlateBrush("Primary", "SolidColor.SolidColor");
	BrushDatabase->CreateSlateColor("TextColor");
	BrushDatabase->CreateSlateBrush("ScrollbarColor", "SolidColor.SolidColor");
	BrushDatabase->CreateSlateBrush("MainWindowColor", "SolidColor.SolidColor");
	BrushDatabase->CreateSlateBrush("ChildWindowColor", "SolidColor.SolidColor");

	BrushDatabase->CreateSlateColor("GridLine");
	BrushDatabase->CreateSlateColor("GridRule");
	BrushDatabase->CreateSlateColor("GridCenter");

	BrushDatabase->CreateSlateBrush("RegularNode_body", "Box.Box");
	BrushDatabase->CreateSlateBrush("VarNode_body", "Box.Box");
	BrushDatabase->CreateSlateBrush("RegularNode_shadow_selected", "Box.Box");
	BrushDatabase->CreateSlateBrush("VarNode_shadow_selected", "Box.Box");
	BrushDatabase->CreateSlateBrush("RegularNode_color_spill", "HeaderBox.HeaderBox");

	BrushDatabase->CreateSlateBrush("PanelDark", "Panel.Panel");
}

void FColorizer::ResetColors()
{
	GreyDark = FColor(20, 20, 20);
	GreyBase = FColor(40, 40, 40);
	GreyLight = FColor(120, 120, 120);

	TextColor = FColor(200, 200, 200);
	TextShadow = FColor(10, 10, 10);
}

void FColorizer::ReloadStyle()
{
	if (!DarkerNodesSettings->MasterActivate)
	{
		return;
	}

	ResetColors();
	//USlateThemeManager::Get().ValidateActiveTheme();
	
	if (DarkerNodesSettings->Preset != EPresets::SelectPreset)
	{
		switch (DarkerNodesSettings->Preset)
		{
		case EPresets::Coolest:
			DarkerNodesSettings->ThemeLuminosity = 0;
			DarkerNodesSettings->ThemeSaturation = 40;
			DarkerNodesSettings->ThemeHue = 220;
			break;
		case EPresets::Cooler:
			DarkerNodesSettings->ThemeLuminosity = 0;
			DarkerNodesSettings->ThemeSaturation = 25;
			DarkerNodesSettings->ThemeHue = 220;
			break;
		case EPresets::Cool:
			DarkerNodesSettings->ThemeLuminosity = 0;
			DarkerNodesSettings->ThemeSaturation = 10;
			DarkerNodesSettings->ThemeHue = 220;
			break;
		case EPresets::Default:
			DarkerNodesSettings->ThemeLuminosity = 0;
			DarkerNodesSettings->ThemeSaturation = 0;
			DarkerNodesSettings->ThemeHue = 220;
			break;
		case EPresets::Warm:
			DarkerNodesSettings->ThemeLuminosity = 0;
			DarkerNodesSettings->ThemeSaturation = 10;
			DarkerNodesSettings->ThemeHue = 30;
			break;
		case EPresets::Warmer:
			DarkerNodesSettings->ThemeLuminosity = 0;
			DarkerNodesSettings->ThemeSaturation = 25;
			DarkerNodesSettings->ThemeHue = 30;
			break;
		case EPresets::Warmest:
			DarkerNodesSettings->ThemeLuminosity = 0;
			DarkerNodesSettings->ThemeSaturation = 40;
			DarkerNodesSettings->ThemeHue = 30;
			break;
		case EPresets::CoolLight:
			DarkerNodesSettings->ThemeLuminosity = 30;
			DarkerNodesSettings->ThemeSaturation = 10;
			DarkerNodesSettings->ThemeHue = 220;
			break;
		case EPresets::DefaultLight:
			DarkerNodesSettings->ThemeLuminosity = 30;
			DarkerNodesSettings->ThemeSaturation = 0;
			DarkerNodesSettings->ThemeHue = 220;
			break;
		case EPresets::WarmLight:
			DarkerNodesSettings->ThemeLuminosity = 30;
			DarkerNodesSettings->ThemeSaturation = 10;
			DarkerNodesSettings->ThemeHue = 30;
			break;
		default:
			break;
		}

		DarkerNodesSettings->Preset = EPresets::SelectPreset;
		DarkerNodesSettings->SaveConfig();
	}

	EStyleColor StyleColors[] = {
		//EStyleColor::Black,
		EStyleColor::Background,
		EStyleColor::Title,
		EStyleColor::WindowBorder,
		EStyleColor::Foldout,
		EStyleColor::Input,
		EStyleColor::InputOutline,
		EStyleColor::Recessed,
		EStyleColor::Panel,
		EStyleColor::Header,
		EStyleColor::Dropdown,
		EStyleColor::DropdownOutline,
		EStyleColor::Hover,
		EStyleColor::Hover2,
		//EStyleColor::White,
		EStyleColor::White25,
		EStyleColor::Highlight,
		EStyleColor::Primary,
		EStyleColor::PrimaryHover,
		EStyleColor::PrimaryPress,
		EStyleColor::Secondary,
		EStyleColor::Foreground,
		EStyleColor::ForegroundHover,
		EStyleColor::ForegroundInverted,
		EStyleColor::ForegroundHeader,
		EStyleColor::Select,
		EStyleColor::SelectInactive,
		EStyleColor::SelectParent,
		EStyleColor::SelectHover,
		EStyleColor::Notifications
	};
	
	const float Shift = FMath::Pow(FMath::Abs((float)DarkerNodesSettings->ThemeLuminosity / 100.0f), 2) * 0.8f * FMath::Sign(DarkerNodesSettings->ThemeLuminosity);
	
	for (auto Color: StyleColors)
	{
		FColor ThemeColor = DefaultColors[(int32)Color].ToFColorSRGB();
		
		if (Color != EStyleColor::Foreground || !DarkerNodesSettings->KeepForegroundLuminosity)
		{
			ThemeColor = ShiftLight(ThemeColor, Shift);
		}
		
		ThemeColor = ShiftSaturation(ThemeColor, DarkerNodesSettings->ThemeSaturation/100.0f, DarkerNodesSettings->ThemeHue);
		if (DarkerNodesSettings->LightTheme)
		{
			ThemeColor = InvertLight(ThemeColor);
		}
		CurrentTheme->LoadedDefaultColors[(int32)Color] = ThemeColor;
		USlateThemeManager::Get().ResetActiveColorToDefault(Color);
	}

	GreyDark = CurrentTheme->LoadedDefaultColors[(int32)EStyleColor::Background].ToFColorSRGB();
	GreyBase = CurrentTheme->LoadedDefaultColors[(int32)EStyleColor::Panel].ToFColorSRGB();
	GreyLight = CurrentTheme->LoadedDefaultColors[(int32)EStyleColor::Header].ToFColorSRGB();
	Primary = CurrentTheme->LoadedDefaultColors[(int32)EStyleColor::Primary].ToFColorSRGB();

	ScrollbarColor = GreyDark;
	MainWindowColor = GreyBase;
	ChildWindowColor = GreyBase;

	RegularNodeBackground = MixColor(FColor::Black, GreyDark, 0.5f).WithAlpha(255 * 0.75f);
	RegularNodeBorder = MixColor(FColor::Black, GreyDark, 0.5f);

	
	VarNodeBackground = GreyLight.WithAlpha(255 * DarkerNodesSettings->BlueprintVarNodeOpacity);
	VarNodeBorder = GreyLight;

	if (!DarkerNodesSettings->DisableUMGGrid)
	{
		GridLineColor = MixColor(GreyDark, GreyBase, 0.5f);
		GridRuleColor = GreyBase;
		GridCenterColor = MixColor(GreyBase, GreyLight, DarkerNodesSettings->OriginAxisOpacity);
	}
	else
	{
		GridLineColor = GreyDark;
		GridRuleColor = GreyDark;
		GridCenterColor = MixColor(GreyDark, GreyLight, DarkerNodesSettings->OriginAxisOpacity);
	}

	if (DarkerNodesSettings->UseColorCustomization)
	{
		TextColor = DarkerNodesSettings->TextColor;
	}

	if (DarkerNodesSettings->UseWindowCustomization)
	{
		MainWindowColor = DarkerNodesSettings->MainWindowColor;
		ChildWindowColor = DarkerNodesSettings->ChildWindowColor;
	}

	if (DarkerNodesSettings->UseBlueprintColorCustomization)
	{
		GridLineColor = DarkerNodesSettings->GridLineColor;
		GridRuleColor = DarkerNodesSettings->GridRuleColor;
		GridCenterColor = DarkerNodesSettings->GridCenterColor;

		RegularNodeBackground = DarkerNodesSettings->RegularNodeBackground;
		RegularNodeBorder = DarkerNodesSettings->RegularNodeBorder;
		VarNodeBackground = DarkerNodesSettings->VarNodeBackground;
		VarNodeBorder = DarkerNodesSettings->VarNodeBorder;
	}

	HoverDark = MixColor(GreyDark, Primary, 0.1);
	HoverBase = MixColor(GreyBase, Primary, 0.1);
	HoverBaseBright = MixColor(GreyBase, Primary, 0.5);

	if (DarkerNodesSettings->OverwriteColors)
	{
		if (!DarkerNodesSettings->UseColorCustomization)
		{
			DarkerNodesSettings->TextColor = TextColor;
		}

		if (!DarkerNodesSettings->UseWindowCustomization)
		{
			DarkerNodesSettings->MainWindowColor = MainWindowColor;
			DarkerNodesSettings->ChildWindowColor = ChildWindowColor;
		}

		if (!DarkerNodesSettings->UseBlueprintColorCustomization)
		{
			DarkerNodesSettings->GridLineColor = GridLineColor;
			DarkerNodesSettings->GridRuleColor = GridRuleColor;
			DarkerNodesSettings->GridCenterColor = GridCenterColor;

			DarkerNodesSettings->RegularNodeBackground = RegularNodeBackground;
			DarkerNodesSettings->RegularNodeBorder = RegularNodeBorder;
			DarkerNodesSettings->VarNodeBackground = VarNodeBackground;
			DarkerNodesSettings->VarNodeBorder = VarNodeBorder;
		}
	}

	ApplyParameters();
}

void FColorizer::Color()
{
	if (!DarkerNodesSettings->MasterActivate)
	{
		return;
	}

	if (!FApp::HasProjectName())
	{
		return;
	}

	if (DarkerNodesSettings->ActivatePopupOnUpdate)
	{
		DNUpdatePopup::Register();
	}

	ColorText();
	ColorGraph();
	//ColorButtons();
	//ColorCheckbox();
	//ColorPanel();
	//ColorWindow();
	//ColorIcons();
	//ColorIconsCustom();

	ReloadTextureResources();
}


void FColorizer::ReloadTextureResources()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

void FColorizer::Reload(UObject* Object, struct FPropertyChangedEvent& Property)
{
	const FName PropertyName = Property.GetPropertyName();

	if (DarkerNodesSettings->ReloadDefaultStyle)
	{
		UE_LOG(LogTemp, Log, TEXT("[Darker Nodes] Reloading default style..."));
		UEditorStyleSettings* StyleSettings = GetMutableDefault<UEditorStyleSettings>();
		StyleSettings->SelectionColor = FLinearColor(0.728f, 0.364f, 0.003f);
		StyleSettings->RegularColor = FLinearColor(0.035, 0.035, 0.035);
		StyleSettings->RuleColor = FLinearColor(0.008, 0.008, 0.008);
		StyleSettings->CenterColor = FLinearColor::Black;
		StyleSettings->bUseGrid = true;
		StyleSettings->SaveConfig();
		UE_LOG(LogTemp, Log, TEXT("[Darker Nodes] Done!"));

		DarkerNodesSettings->ReloadDefaultStyle = false;
	}

	if (PropertyName == "UseGlobalSettings")
	{
		if (DarkerNodesSettings->UseGlobalSettings)
		{
			if (FPaths::FileExists(GlobalSettingsFile))
			{
				DarkerNodesSettings->LoadConfig(nullptr, *GlobalSettingsFile);
			}
			else
			{
				DarkerNodesSettings->SaveConfig(CPF_Config, *GlobalSettingsFile);
			}
		}
	}

	if (DarkerNodesSettings->LoadGlobalSettings)
	{
		if (FPaths::FileExists(GlobalSettingsFile))
		{
			DarkerNodesSettings->LoadConfig(nullptr, *GlobalSettingsFile);
		}
		DarkerNodesSettings->LoadGlobalSettings = false;
	}

	if (DarkerNodesSettings->ReloadTextureResources)
	{
		DarkerNodesSettings->ReloadTextureResources = false;
		ReloadTextureResources();
	}

	if (DarkerNodesSettings->UpdateMaterials)
	{
		DarkerNodesSettings->UpdateMaterials = false;
		BrushDatabase->UpdateAndSaveMaterials();
	}

	if (!DarkerNodesSettings->MasterActivate)
	{
		return;
	}

	ReloadStyle();

	ISettingsEditorModule* SettingsEditorModule = FModuleManager::GetModulePtr<ISettingsEditorModule>("SettingsEditor");
	if (SettingsEditorModule)
	{
		UEditorStyleSettings* StyleSettings = GetMutableDefault<UEditorStyleSettings>();
		StyleSettings->SelectionColor = FLinearColor::FromSRGBColor(Primary);
		StyleSettings->bUseGrid = !DarkerNodesSettings->DisableBlueprintGrid;
		StyleSettings->SaveConfig();

		if (PropertyName == "FontSize" || PropertyName == "FontFamily")
		{
			SettingsEditorModule->OnApplicationRestartRequired();
		}
	}

	DarkerNodesSettings->SaveConfig();

	if (DarkerNodesSettings->UseGlobalSettings)
	{
		DarkerNodesSettings->SaveConfig(CPF_Config, *GlobalSettingsFile);
	}
}

FColor FColorizer::MixColor(FColor Base, FColor Layer, float Alpha) const
{
	Base.R = FMath::Lerp(Base.R, Layer.R, Alpha);
	Base.G = FMath::Lerp(Base.G, Layer.G, Alpha);
	Base.B = FMath::Lerp(Base.B, Layer.B, Alpha);
	return Base;
}

FColor FColorizer::OffsetColor(FColor Base, int Offset)
{
	Base.R += Offset;
	Base.G += Offset;
	Base.B += Offset;
	return Base;
}
