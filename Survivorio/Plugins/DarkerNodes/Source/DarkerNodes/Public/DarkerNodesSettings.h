/* Copyright (C) 2021 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the Unreal Engine Marketplace
*/

#pragma once

#include "Engine/DeveloperSettings.h"
#include "DarkerNodesSettings.generated.h"


UENUM(BlueprintType)
enum class EPresets : uint8
{
	SelectPreset,
	Coolest,
	Cooler,
	Cool,
	Default,
	Warm,
	Warmer,
	Warmest,
	CoolLight,
	DefaultLight,
	WarmLight,
};

UENUM(BlueprintType)
enum class EHeaderStyle : uint8
{
	Gradient,
	Plain,
	Outline
};

UENUM(BlueprintType)
enum class EButtonPadding : uint8
{
	None,
	Small,
	Normal,
	Big
};

UENUM(BlueprintType)
enum class EButtonBorder : uint8
{
	None,
	Dark,
	Light
};

UENUM(BlueprintType)
enum class EFontFamily : uint8
{
	BalsamiqSans UMETA(DisplayName = "BalsamiqSans (Handwritten)"),
	Cannonade UMETA(DisplayName = "Cannonade (Sans Serif)"),
	CaskaydiaCove UMETA(DisplayName = "Caskaydia Cove (Monospace)"),
	EudoxusSans UMETA(DisplayName = "Exodus Sans (Sans Serif)"),
	GolosUI UMETA(DisplayName = "Golos UI (Sans Serif)"),
	Jua UMETA(DisplayName = "Jua (Handwritten)"),
	Junction UMETA(DisplayName = "Junction (Sans Serif)"),
	NewTelegraph UMETA(DisplayName = "New Telegraph (Slab Serif)"),
	Roboto UMETA(DisplayName = "Roboto (Sans Serif)"),
	XXIIAven UMETA(DisplayName = "XXII Aven (Sans Serif)")
};

UENUM(BlueprintType)
enum class EFontSize : uint8
{
	Small,
	Normal,
	Big,
	Bigger
};

UENUM(BlueprintType)
enum class EBlueprintVarNodeLine : uint8
{
	Thin,
	Thick
};

UENUM(BlueprintType)
enum class EBlueprintVarNodeStyle : uint8
{
	DarkSolid,
	LightSolid,
	DarkGlass,
	LightGlass
};

UENUM(BlueprintType)
enum class EIconStyle : uint8
{
	Line,
	Solid
};


UCLASS(config = EditorPerProjectUserSettings, meta = (DisplayName = "Darker Nodes Plugin"))
class DARKERNODES_API UDarkerNodesSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UDarkerNodesSettings()
	{
		CategoryName = TEXT("Plugins");
		SectionName = TEXT("Darker Nodes Plugin");
	}

	/* -----[ Activation ] ----- */

	/* Activate or deactivate the whole plugin. Default: true */
	UPROPERTY(config, EditAnywhere, Category = "Activation")
	bool MasterActivate = true;

	/* Use global settings across all your projects. When activated, it will load the global settings (overwriting this one).
	If no global settings exists, it will create it based on this one. Future updates will then be saved to global settings. */
	UPROPERTY(config, EditAnywhere, Category = "Activation")
	bool UseGlobalSettings = false;

	/* Force reload the global settings (if it was modified outside this instance for example). */
	UPROPERTY(config, EditAnywhere, Category = "Activation", meta = (EditCondition = "UseGlobalSettings"))
	bool LoadGlobalSettings = false;

	/* Reload the default style (you must disable Master Activate first). */
	UPROPERTY(config, EditAnywhere, Category = "Activation", meta = (EditCondition = "!MasterActivate"))
	bool ReloadDefaultStyle = false;

	/* Display a popup with changelog on update. Default: tru */
	UPROPERTY(config, EditAnywhere, Category = "Activation")
	bool ActivatePopupOnUpdate = true;

	/* This should fix missing elements by updating and saving the theme materials. */
	UPROPERTY(config, EditAnywhere, Category = "Activation", meta = (DisplayName = "Fix Missing Elements"))
	bool UpdateMaterials = true;

	/* Internal value to fix elements on plugin update. */
	UPROPERTY(config)
	FString PluginVersionUpdate = "";

	/* -----[ Theme ] ----- */

	/* Select a theme preset */
	UPROPERTY(config, EditAnywhere, Category = "Theme")
	EPresets Preset = EPresets::SelectPreset;

	/* Variations of luminosity of the theme (making it lighter or darker). Default: 0 */
	UPROPERTY(config, EditAnywhere, Category = "Theme", meta = (UIMin = -100, ClampMin = -100, UIMax = 100, ClampMax = 100))
	int32 ThemeLuminosity = 0;

	/* Variations of the saturation of the theme (making it greyer or more colorful). Default: 10 */
	UPROPERTY(config, EditAnywhere, Category = "Theme", meta = (UIMin = -100, ClampMin = -100, UIMax = 100, ClampMax = 100))
	int32 ThemeSaturation = 10;

	/* Variations of the hue of the theme (changing the color). Default: 30 */
	UPROPERTY(config, EditAnywhere, Category = "Theme", meta = (UIMin = 0, ClampMin = 0, UIMax = 360, ClampMax = 360))
	int32 ThemeHue = 220;

	/* Keep font luminosity, useful when you use a low luminosity */
	UPROPERTY(config, EditAnywhere, Category = "Theme")
	bool KeepForegroundLuminosity = false;

	/* Use light theme and invert luminosity (warning: experimental feature) */
	UPROPERTY(config, EditAnywhere, Category = "Theme", meta = (DisplayName = "Light Theme (experimental)"))
	bool LightTheme = false;
	
	/* -----[ Fonts ] ----- */

	/* Font to use in the editor (it won't work on all texts). Default: Normal */
	UPROPERTY(config, EditAnywhere, Category = "Fonts", meta = (DisplayName = "Font Size (experimental)"))
	EFontSize FontSize = EFontSize::Normal;

	/* Font to use in the editor. Default: Roboto */
	UPROPERTY(config, EditAnywhere, Category = "Fonts")
	EFontFamily FontFamily = EFontFamily::Roboto;

	/* Use a custom font for regular texts. Default: false */
	UPROPERTY(config, EditAnywhere, Category = "Fonts")
	bool UseCustomRegularFont = false;

	/* Path to the regular TTF font. */
	UPROPERTY(config, EditAnywhere, Category = "Fonts", meta = (EditCondition = "UseCustomRegularFont", FilePathFilter="ttf"))
	FFilePath RegularFont;

	/* Use a custom font for bold texts. Default: false */
	UPROPERTY(config, EditAnywhere, Category = "Fonts")
	bool UseCustomBoldFont = false;

	/* Path to the bold TTF font. */
	UPROPERTY(config, EditAnywhere, Category = "Fonts", meta = (EditCondition = "UseCustomBoldFont", FilePathFilter="ttf"))
	FFilePath BoldFont;

	/* Use a custom font for italic texts. Default: false */
	UPROPERTY(config, EditAnywhere, Category = "Fonts")
	bool UseCustomItalicFont = false;

	/* Path to the italic TTF font. */
	UPROPERTY(config, EditAnywhere, Category = "Fonts", meta = (EditCondition = "UseCustomItalicFont", FilePathFilter="ttf"))
	FFilePath ItalicFont;

	/* -----[ Blueprint ] ----- */

	/* Activate or deactivate the blueprint theme. Default: true */
	UPROPERTY(config, EditAnywhere, Category = "Blueprint")
	bool ActivateBlueprintTheme = true;

	/* Radius of regular nodes. Default: 2px */
	UPROPERTY(config, EditAnywhere, Category = "Blueprint", meta = (EditCondition = "ActivateBlueprintTheme", ClampMin = "0"))
	int32 BlueprintRegularNodeRadius = 8;

	/* Radius of var nodes. Default: 2px */
	UPROPERTY(config, EditAnywhere, Category = "Blueprint", meta = (EditCondition = "ActivateBlueprintTheme", ClampMin = "0"))
	int32 BlueprintVarNodeRadius = 8;

	/* Style of the VarNode top line. Default: Thin */
	UPROPERTY(config, EditAnywhere, Category = "Blueprint", meta = (EditCondition = "ActivateBlueprintTheme"))
	EBlueprintVarNodeLine BlueprintVarNodeLine = EBlueprintVarNodeLine::Thin;
	
	/* Variations of the grey background (making it lighter or darker). Default: darker */
	UPROPERTY(config, EditAnywhere, Category = "Blueprint", meta = (UIMin = 0, ClampMin = 0, UIMax = 1, ClampMax = 1))
	float BlueprintVarNodeOpacity = 0.5;

	/* Opacity of blueprint nodes header. Default: 0.25 */
	UPROPERTY(config, EditAnywhere, Category = "Blueprint", meta = (ClampMin = "0", ClampMax="1"))
	float BlueprintNodeHeaderOpacity = 0.25f;

	/* Saturation of blueprint nodes header. Default: 1.0 */
	UPROPERTY(config, EditAnywhere, Category = "Blueprint", meta = (ClampMin = "0", ClampMax="1"))
	float BlueprintNodeHeaderSaturation = 1.0f;

	/* Add a padding to make nodes match the grid on the top left corner. Default: false */
	UPROPERTY(config, EditAnywhere, Category = "Blueprint")
	bool ExtendNodes = false;

	/* Disable the blueprint grid. Default: false */
	UPROPERTY(config, EditAnywhere, Category = "Blueprint")
	bool DisableBlueprintGrid = false;

	/* Disable the UMG grid. Default: false */
	UPROPERTY(config, EditAnywhere, Category = "Blueprint", meta = (EditCondition = "DisableBlueprintGrid"))
	bool DisableUMGGrid = false;

	/* Opacity of the origin axis of the background grid. Default: 1.0 */
	UPROPERTY(config, EditAnywhere, Category = "Blueprint", meta = (ClampMin = "0", ClampMax="1"))
	float OriginAxisOpacity = 1.0f;

	/* Keep the default color of blueprint comments. Default: false */
	UPROPERTY(config, EditAnywhere, Category = "Blueprint")
	bool KeepDefaultCommentColor = false;
	
	/* -----[ Customization ] ----- */

	/* When "Use [Type] Customization" is unticked, overwrite the customized colors with the current theme colors. Default: true */
	UPROPERTY(config, EditAnywhere, Category = "Customization")
	bool OverwriteColors = true;

	/* Customize the colors more in-depth. Default: false */
	UPROPERTY(config, EditAnywhere, Category = "Customization|Color")
	bool UseColorCustomization = false;

	/* Text color of the theme. Default: RGB(200,200,200) */
	UPROPERTY(config, EditAnywhere, Category = "Customization|Color", meta = (EditCondition = "UseColorCustomization"))
	FColor TextColor = FColor(200, 200, 200);

	/* Customize the colors more in-depth. Default: false */
	UPROPERTY(config, EditAnywhere, Category = "Customization|Windows")
	bool UseWindowCustomization = false;

	/* Outline color of the main editor window. Default: RGB(40,40,40) */
	UPROPERTY(config, EditAnywhere, Category = "Customization|Windows", meta = (EditCondition = "UseWindowCustomization"))
	FColor MainWindowColor = FColor(40, 40, 40);

	/* Outline color of child editor windows. Default: RGB(40,40,40) */
	UPROPERTY(config, EditAnywhere, Category = "Customization|Windows", meta = (EditCondition = "UseWindowCustomization"))
	FColor ChildWindowColor = FColor(40, 40, 40);

	/* Customize the colors of Blueprint graphs. Default: false */
	UPROPERTY(config, EditAnywhere, Category = "Customization|Blueprint")
	bool UseBlueprintColorCustomization = false;

	/* Color for grid lines in Blueprint graphs and UMG editor. */
	UPROPERTY(config, EditAnywhere, Category = "Customization|Blueprint", meta = (EditCondition = "UseBlueprintColorCustomization"))
	FColor GridLineColor;

	/* Color for grid rules in Blueprint graphs and UMG editor. */
	UPROPERTY(config, EditAnywhere, Category = "Customization|Blueprint", meta = (EditCondition = "UseBlueprintColorCustomization"))
	FColor GridRuleColor;

	/* Color for grid center in Blueprint graphs and UMG editor. */
	UPROPERTY(config, EditAnywhere, Category = "Customization|Blueprint", meta = (EditCondition = "UseBlueprintColorCustomization"))
	FColor GridCenterColor;

	/* Background of regular Blueprint nodes. */
	UPROPERTY(config, EditAnywhere, Category = "Customization|Blueprint", meta = (EditCondition = "UseBlueprintColorCustomization"))
	FColor RegularNodeBackground;

	/* Border of regular Blueprint nodes. */
	UPROPERTY(config, EditAnywhere, Category = "Customization|Blueprint", meta = (EditCondition = "UseBlueprintColorCustomization"))
	FColor RegularNodeBorder;

	/* Background of var Blueprint nodes. */
	UPROPERTY(config, EditAnywhere, Category = "Customization|Blueprint", meta = (EditCondition = "UseBlueprintColorCustomization"))
	FColor VarNodeBackground;

	/* Border of var Blueprint nodes. */
	UPROPERTY(config, EditAnywhere, Category = "Customization|Blueprint", meta = (EditCondition = "UseBlueprintColorCustomization"))
	FColor VarNodeBorder;

	/* Force texture resources reload. */
	UPROPERTY(config, EditAnywhere, Category = "Debug")
	bool ReloadTextureResources = false;

	virtual FName GetContainerName() const override
	{
		return "Editor";
	}

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION <= 25
	DECLARE_EVENT_OneParam(UDarkerNodesSettings, FSettingChangedEvent, FName);
	FSettingChangedEvent& OnSettingChanged( ) { return SettingChangedEvent; }
    
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override
	{
		Super::PostEditChangeProperty(PropertyChangedEvent);
    
		const FName Name = (PropertyChangedEvent.Property != nullptr) ? PropertyChangedEvent.Property->GetFName() : NAME_None;
		SettingChangedEvent.Broadcast(Name);
	}
    
	private:
    
	FSettingChangedEvent SettingChangedEvent;
#endif
};
