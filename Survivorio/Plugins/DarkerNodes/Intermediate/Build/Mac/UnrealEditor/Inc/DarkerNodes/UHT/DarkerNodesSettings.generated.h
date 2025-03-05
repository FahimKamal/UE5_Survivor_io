// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DarkerNodesSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DARKERNODES_DarkerNodesSettings_generated_h
#error "DarkerNodesSettings.generated.h already included, missing '#pragma once' in DarkerNodesSettings.h"
#endif
#define DARKERNODES_DarkerNodesSettings_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_103_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDarkerNodesSettings(); \
	friend struct Z_Construct_UClass_UDarkerNodesSettings_Statics; \
public: \
	DECLARE_CLASS(UDarkerNodesSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DarkerNodes"), NO_API) \
	DECLARE_SERIALIZER(UDarkerNodesSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_103_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDarkerNodesSettings(UDarkerNodesSettings&&); \
	UDarkerNodesSettings(const UDarkerNodesSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDarkerNodesSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDarkerNodesSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDarkerNodesSettings) \
	NO_API virtual ~UDarkerNodesSettings();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_100_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_103_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_103_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_103_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DARKERNODES_API UClass* StaticClass<class UDarkerNodesSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h


#define FOREACH_ENUM_EPRESETS(op) \
	op(EPresets::SelectPreset) \
	op(EPresets::Coolest) \
	op(EPresets::Cooler) \
	op(EPresets::Cool) \
	op(EPresets::Default) \
	op(EPresets::Warm) \
	op(EPresets::Warmer) \
	op(EPresets::Warmest) \
	op(EPresets::CoolLight) \
	op(EPresets::DefaultLight) \
	op(EPresets::WarmLight) 

enum class EPresets : uint8;
template<> struct TIsUEnumClass<EPresets> { enum { Value = true }; };
template<> DARKERNODES_API UEnum* StaticEnum<EPresets>();

#define FOREACH_ENUM_EHEADERSTYLE(op) \
	op(EHeaderStyle::Gradient) \
	op(EHeaderStyle::Plain) \
	op(EHeaderStyle::Outline) 

enum class EHeaderStyle : uint8;
template<> struct TIsUEnumClass<EHeaderStyle> { enum { Value = true }; };
template<> DARKERNODES_API UEnum* StaticEnum<EHeaderStyle>();

#define FOREACH_ENUM_EBUTTONPADDING(op) \
	op(EButtonPadding::None) \
	op(EButtonPadding::Small) \
	op(EButtonPadding::Normal) \
	op(EButtonPadding::Big) 

enum class EButtonPadding : uint8;
template<> struct TIsUEnumClass<EButtonPadding> { enum { Value = true }; };
template<> DARKERNODES_API UEnum* StaticEnum<EButtonPadding>();

#define FOREACH_ENUM_EBUTTONBORDER(op) \
	op(EButtonBorder::None) \
	op(EButtonBorder::Dark) \
	op(EButtonBorder::Light) 

enum class EButtonBorder : uint8;
template<> struct TIsUEnumClass<EButtonBorder> { enum { Value = true }; };
template<> DARKERNODES_API UEnum* StaticEnum<EButtonBorder>();

#define FOREACH_ENUM_EFONTFAMILY(op) \
	op(EFontFamily::BalsamiqSans) \
	op(EFontFamily::Cannonade) \
	op(EFontFamily::CaskaydiaCove) \
	op(EFontFamily::EudoxusSans) \
	op(EFontFamily::GolosUI) \
	op(EFontFamily::Jua) \
	op(EFontFamily::Junction) \
	op(EFontFamily::NewTelegraph) \
	op(EFontFamily::Roboto) \
	op(EFontFamily::XXIIAven) 

enum class EFontFamily : uint8;
template<> struct TIsUEnumClass<EFontFamily> { enum { Value = true }; };
template<> DARKERNODES_API UEnum* StaticEnum<EFontFamily>();

#define FOREACH_ENUM_EFONTSIZE(op) \
	op(EFontSize::Small) \
	op(EFontSize::Normal) \
	op(EFontSize::Big) \
	op(EFontSize::Bigger) 

enum class EFontSize : uint8;
template<> struct TIsUEnumClass<EFontSize> { enum { Value = true }; };
template<> DARKERNODES_API UEnum* StaticEnum<EFontSize>();

#define FOREACH_ENUM_EBLUEPRINTVARNODELINE(op) \
	op(EBlueprintVarNodeLine::Thin) \
	op(EBlueprintVarNodeLine::Thick) 

enum class EBlueprintVarNodeLine : uint8;
template<> struct TIsUEnumClass<EBlueprintVarNodeLine> { enum { Value = true }; };
template<> DARKERNODES_API UEnum* StaticEnum<EBlueprintVarNodeLine>();

#define FOREACH_ENUM_EBLUEPRINTVARNODESTYLE(op) \
	op(EBlueprintVarNodeStyle::DarkSolid) \
	op(EBlueprintVarNodeStyle::LightSolid) \
	op(EBlueprintVarNodeStyle::DarkGlass) \
	op(EBlueprintVarNodeStyle::LightGlass) 

enum class EBlueprintVarNodeStyle : uint8;
template<> struct TIsUEnumClass<EBlueprintVarNodeStyle> { enum { Value = true }; };
template<> DARKERNODES_API UEnum* StaticEnum<EBlueprintVarNodeStyle>();

#define FOREACH_ENUM_EICONSTYLE(op) \
	op(EIconStyle::Line) \
	op(EIconStyle::Solid) 

enum class EIconStyle : uint8;
template<> struct TIsUEnumClass<EIconStyle> { enum { Value = true }; };
template<> DARKERNODES_API UEnum* StaticEnum<EIconStyle>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
