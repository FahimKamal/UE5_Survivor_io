// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DarkerNodes/Public/DarkerNodesSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDarkerNodesSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
DARKERNODES_API UClass* Z_Construct_UClass_UDarkerNodesSettings();
DARKERNODES_API UClass* Z_Construct_UClass_UDarkerNodesSettings_NoRegister();
DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeLine();
DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeStyle();
DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EButtonBorder();
DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EButtonPadding();
DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EFontFamily();
DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EFontSize();
DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EHeaderStyle();
DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EIconStyle();
DARKERNODES_API UEnum* Z_Construct_UEnum_DarkerNodes_EPresets();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
UPackage* Z_Construct_UPackage__Script_DarkerNodes();
// End Cross Module References

// Begin Enum EPresets
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPresets;
static UEnum* EPresets_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPresets.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPresets.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EPresets, (UObject*)Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EPresets"));
	}
	return Z_Registration_Info_UEnum_EPresets.OuterSingleton;
}
template<> DARKERNODES_API UEnum* StaticEnum<EPresets>()
{
	return EPresets_StaticEnum();
}
struct Z_Construct_UEnum_DarkerNodes_EPresets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cool.Name", "EPresets::Cool" },
		{ "Cooler.Name", "EPresets::Cooler" },
		{ "Coolest.Name", "EPresets::Coolest" },
		{ "CoolLight.Name", "EPresets::CoolLight" },
		{ "Default.Name", "EPresets::Default" },
		{ "DefaultLight.Name", "EPresets::DefaultLight" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "SelectPreset.Name", "EPresets::SelectPreset" },
		{ "Warm.Name", "EPresets::Warm" },
		{ "Warmer.Name", "EPresets::Warmer" },
		{ "Warmest.Name", "EPresets::Warmest" },
		{ "WarmLight.Name", "EPresets::WarmLight" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPresets::SelectPreset", (int64)EPresets::SelectPreset },
		{ "EPresets::Coolest", (int64)EPresets::Coolest },
		{ "EPresets::Cooler", (int64)EPresets::Cooler },
		{ "EPresets::Cool", (int64)EPresets::Cool },
		{ "EPresets::Default", (int64)EPresets::Default },
		{ "EPresets::Warm", (int64)EPresets::Warm },
		{ "EPresets::Warmer", (int64)EPresets::Warmer },
		{ "EPresets::Warmest", (int64)EPresets::Warmest },
		{ "EPresets::CoolLight", (int64)EPresets::CoolLight },
		{ "EPresets::DefaultLight", (int64)EPresets::DefaultLight },
		{ "EPresets::WarmLight", (int64)EPresets::WarmLight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DarkerNodes_EPresets_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
	nullptr,
	"EPresets",
	"EPresets",
	Z_Construct_UEnum_DarkerNodes_EPresets_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DarkerNodes_EPresets_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DarkerNodes_EPresets_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DarkerNodes_EPresets_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DarkerNodes_EPresets()
{
	if (!Z_Registration_Info_UEnum_EPresets.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPresets.InnerSingleton, Z_Construct_UEnum_DarkerNodes_EPresets_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPresets.InnerSingleton;
}
// End Enum EPresets

// Begin Enum EHeaderStyle
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHeaderStyle;
static UEnum* EHeaderStyle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHeaderStyle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHeaderStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EHeaderStyle, (UObject*)Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EHeaderStyle"));
	}
	return Z_Registration_Info_UEnum_EHeaderStyle.OuterSingleton;
}
template<> DARKERNODES_API UEnum* StaticEnum<EHeaderStyle>()
{
	return EHeaderStyle_StaticEnum();
}
struct Z_Construct_UEnum_DarkerNodes_EHeaderStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Gradient.Name", "EHeaderStyle::Gradient" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "Outline.Name", "EHeaderStyle::Outline" },
		{ "Plain.Name", "EHeaderStyle::Plain" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHeaderStyle::Gradient", (int64)EHeaderStyle::Gradient },
		{ "EHeaderStyle::Plain", (int64)EHeaderStyle::Plain },
		{ "EHeaderStyle::Outline", (int64)EHeaderStyle::Outline },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DarkerNodes_EHeaderStyle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
	nullptr,
	"EHeaderStyle",
	"EHeaderStyle",
	Z_Construct_UEnum_DarkerNodes_EHeaderStyle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DarkerNodes_EHeaderStyle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DarkerNodes_EHeaderStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DarkerNodes_EHeaderStyle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DarkerNodes_EHeaderStyle()
{
	if (!Z_Registration_Info_UEnum_EHeaderStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHeaderStyle.InnerSingleton, Z_Construct_UEnum_DarkerNodes_EHeaderStyle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHeaderStyle.InnerSingleton;
}
// End Enum EHeaderStyle

// Begin Enum EButtonPadding
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EButtonPadding;
static UEnum* EButtonPadding_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EButtonPadding.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EButtonPadding.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EButtonPadding, (UObject*)Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EButtonPadding"));
	}
	return Z_Registration_Info_UEnum_EButtonPadding.OuterSingleton;
}
template<> DARKERNODES_API UEnum* StaticEnum<EButtonPadding>()
{
	return EButtonPadding_StaticEnum();
}
struct Z_Construct_UEnum_DarkerNodes_EButtonPadding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Big.Name", "EButtonPadding::Big" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "None.Name", "EButtonPadding::None" },
		{ "Normal.Name", "EButtonPadding::Normal" },
		{ "Small.Name", "EButtonPadding::Small" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EButtonPadding::None", (int64)EButtonPadding::None },
		{ "EButtonPadding::Small", (int64)EButtonPadding::Small },
		{ "EButtonPadding::Normal", (int64)EButtonPadding::Normal },
		{ "EButtonPadding::Big", (int64)EButtonPadding::Big },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DarkerNodes_EButtonPadding_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
	nullptr,
	"EButtonPadding",
	"EButtonPadding",
	Z_Construct_UEnum_DarkerNodes_EButtonPadding_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DarkerNodes_EButtonPadding_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DarkerNodes_EButtonPadding_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DarkerNodes_EButtonPadding_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DarkerNodes_EButtonPadding()
{
	if (!Z_Registration_Info_UEnum_EButtonPadding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EButtonPadding.InnerSingleton, Z_Construct_UEnum_DarkerNodes_EButtonPadding_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EButtonPadding.InnerSingleton;
}
// End Enum EButtonPadding

// Begin Enum EButtonBorder
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EButtonBorder;
static UEnum* EButtonBorder_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EButtonBorder.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EButtonBorder.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EButtonBorder, (UObject*)Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EButtonBorder"));
	}
	return Z_Registration_Info_UEnum_EButtonBorder.OuterSingleton;
}
template<> DARKERNODES_API UEnum* StaticEnum<EButtonBorder>()
{
	return EButtonBorder_StaticEnum();
}
struct Z_Construct_UEnum_DarkerNodes_EButtonBorder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dark.Name", "EButtonBorder::Dark" },
		{ "Light.Name", "EButtonBorder::Light" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "None.Name", "EButtonBorder::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EButtonBorder::None", (int64)EButtonBorder::None },
		{ "EButtonBorder::Dark", (int64)EButtonBorder::Dark },
		{ "EButtonBorder::Light", (int64)EButtonBorder::Light },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DarkerNodes_EButtonBorder_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
	nullptr,
	"EButtonBorder",
	"EButtonBorder",
	Z_Construct_UEnum_DarkerNodes_EButtonBorder_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DarkerNodes_EButtonBorder_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DarkerNodes_EButtonBorder_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DarkerNodes_EButtonBorder_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DarkerNodes_EButtonBorder()
{
	if (!Z_Registration_Info_UEnum_EButtonBorder.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EButtonBorder.InnerSingleton, Z_Construct_UEnum_DarkerNodes_EButtonBorder_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EButtonBorder.InnerSingleton;
}
// End Enum EButtonBorder

// Begin Enum EFontFamily
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFontFamily;
static UEnum* EFontFamily_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFontFamily.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFontFamily.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EFontFamily, (UObject*)Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EFontFamily"));
	}
	return Z_Registration_Info_UEnum_EFontFamily.OuterSingleton;
}
template<> DARKERNODES_API UEnum* StaticEnum<EFontFamily>()
{
	return EFontFamily_StaticEnum();
}
struct Z_Construct_UEnum_DarkerNodes_EFontFamily_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BalsamiqSans.DisplayName", "BalsamiqSans (Handwritten)" },
		{ "BalsamiqSans.Name", "EFontFamily::BalsamiqSans" },
		{ "BlueprintType", "true" },
		{ "Cannonade.DisplayName", "Cannonade (Sans Serif)" },
		{ "Cannonade.Name", "EFontFamily::Cannonade" },
		{ "CaskaydiaCove.DisplayName", "Caskaydia Cove (Monospace)" },
		{ "CaskaydiaCove.Name", "EFontFamily::CaskaydiaCove" },
		{ "EudoxusSans.DisplayName", "Exodus Sans (Sans Serif)" },
		{ "EudoxusSans.Name", "EFontFamily::EudoxusSans" },
		{ "GolosUI.DisplayName", "Golos UI (Sans Serif)" },
		{ "GolosUI.Name", "EFontFamily::GolosUI" },
		{ "Jua.DisplayName", "Jua (Handwritten)" },
		{ "Jua.Name", "EFontFamily::Jua" },
		{ "Junction.DisplayName", "Junction (Sans Serif)" },
		{ "Junction.Name", "EFontFamily::Junction" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "NewTelegraph.DisplayName", "New Telegraph (Slab Serif)" },
		{ "NewTelegraph.Name", "EFontFamily::NewTelegraph" },
		{ "Roboto.DisplayName", "Roboto (Sans Serif)" },
		{ "Roboto.Name", "EFontFamily::Roboto" },
		{ "XXIIAven.DisplayName", "XXII Aven (Sans Serif)" },
		{ "XXIIAven.Name", "EFontFamily::XXIIAven" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFontFamily::BalsamiqSans", (int64)EFontFamily::BalsamiqSans },
		{ "EFontFamily::Cannonade", (int64)EFontFamily::Cannonade },
		{ "EFontFamily::CaskaydiaCove", (int64)EFontFamily::CaskaydiaCove },
		{ "EFontFamily::EudoxusSans", (int64)EFontFamily::EudoxusSans },
		{ "EFontFamily::GolosUI", (int64)EFontFamily::GolosUI },
		{ "EFontFamily::Jua", (int64)EFontFamily::Jua },
		{ "EFontFamily::Junction", (int64)EFontFamily::Junction },
		{ "EFontFamily::NewTelegraph", (int64)EFontFamily::NewTelegraph },
		{ "EFontFamily::Roboto", (int64)EFontFamily::Roboto },
		{ "EFontFamily::XXIIAven", (int64)EFontFamily::XXIIAven },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DarkerNodes_EFontFamily_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
	nullptr,
	"EFontFamily",
	"EFontFamily",
	Z_Construct_UEnum_DarkerNodes_EFontFamily_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DarkerNodes_EFontFamily_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DarkerNodes_EFontFamily_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DarkerNodes_EFontFamily_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DarkerNodes_EFontFamily()
{
	if (!Z_Registration_Info_UEnum_EFontFamily.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFontFamily.InnerSingleton, Z_Construct_UEnum_DarkerNodes_EFontFamily_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFontFamily.InnerSingleton;
}
// End Enum EFontFamily

// Begin Enum EFontSize
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFontSize;
static UEnum* EFontSize_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFontSize.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFontSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EFontSize, (UObject*)Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EFontSize"));
	}
	return Z_Registration_Info_UEnum_EFontSize.OuterSingleton;
}
template<> DARKERNODES_API UEnum* StaticEnum<EFontSize>()
{
	return EFontSize_StaticEnum();
}
struct Z_Construct_UEnum_DarkerNodes_EFontSize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Big.Name", "EFontSize::Big" },
		{ "Bigger.Name", "EFontSize::Bigger" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "Normal.Name", "EFontSize::Normal" },
		{ "Small.Name", "EFontSize::Small" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFontSize::Small", (int64)EFontSize::Small },
		{ "EFontSize::Normal", (int64)EFontSize::Normal },
		{ "EFontSize::Big", (int64)EFontSize::Big },
		{ "EFontSize::Bigger", (int64)EFontSize::Bigger },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DarkerNodes_EFontSize_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
	nullptr,
	"EFontSize",
	"EFontSize",
	Z_Construct_UEnum_DarkerNodes_EFontSize_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DarkerNodes_EFontSize_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DarkerNodes_EFontSize_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DarkerNodes_EFontSize_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DarkerNodes_EFontSize()
{
	if (!Z_Registration_Info_UEnum_EFontSize.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFontSize.InnerSingleton, Z_Construct_UEnum_DarkerNodes_EFontSize_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFontSize.InnerSingleton;
}
// End Enum EFontSize

// Begin Enum EBlueprintVarNodeLine
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlueprintVarNodeLine;
static UEnum* EBlueprintVarNodeLine_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBlueprintVarNodeLine.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBlueprintVarNodeLine.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeLine, (UObject*)Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EBlueprintVarNodeLine"));
	}
	return Z_Registration_Info_UEnum_EBlueprintVarNodeLine.OuterSingleton;
}
template<> DARKERNODES_API UEnum* StaticEnum<EBlueprintVarNodeLine>()
{
	return EBlueprintVarNodeLine_StaticEnum();
}
struct Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "Thick.Name", "EBlueprintVarNodeLine::Thick" },
		{ "Thin.Name", "EBlueprintVarNodeLine::Thin" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBlueprintVarNodeLine::Thin", (int64)EBlueprintVarNodeLine::Thin },
		{ "EBlueprintVarNodeLine::Thick", (int64)EBlueprintVarNodeLine::Thick },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeLine_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
	nullptr,
	"EBlueprintVarNodeLine",
	"EBlueprintVarNodeLine",
	Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeLine_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeLine_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeLine_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeLine_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeLine()
{
	if (!Z_Registration_Info_UEnum_EBlueprintVarNodeLine.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlueprintVarNodeLine.InnerSingleton, Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeLine_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBlueprintVarNodeLine.InnerSingleton;
}
// End Enum EBlueprintVarNodeLine

// Begin Enum EBlueprintVarNodeStyle
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlueprintVarNodeStyle;
static UEnum* EBlueprintVarNodeStyle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBlueprintVarNodeStyle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBlueprintVarNodeStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeStyle, (UObject*)Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EBlueprintVarNodeStyle"));
	}
	return Z_Registration_Info_UEnum_EBlueprintVarNodeStyle.OuterSingleton;
}
template<> DARKERNODES_API UEnum* StaticEnum<EBlueprintVarNodeStyle>()
{
	return EBlueprintVarNodeStyle_StaticEnum();
}
struct Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DarkGlass.Name", "EBlueprintVarNodeStyle::DarkGlass" },
		{ "DarkSolid.Name", "EBlueprintVarNodeStyle::DarkSolid" },
		{ "LightGlass.Name", "EBlueprintVarNodeStyle::LightGlass" },
		{ "LightSolid.Name", "EBlueprintVarNodeStyle::LightSolid" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBlueprintVarNodeStyle::DarkSolid", (int64)EBlueprintVarNodeStyle::DarkSolid },
		{ "EBlueprintVarNodeStyle::LightSolid", (int64)EBlueprintVarNodeStyle::LightSolid },
		{ "EBlueprintVarNodeStyle::DarkGlass", (int64)EBlueprintVarNodeStyle::DarkGlass },
		{ "EBlueprintVarNodeStyle::LightGlass", (int64)EBlueprintVarNodeStyle::LightGlass },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeStyle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
	nullptr,
	"EBlueprintVarNodeStyle",
	"EBlueprintVarNodeStyle",
	Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeStyle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeStyle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeStyle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeStyle()
{
	if (!Z_Registration_Info_UEnum_EBlueprintVarNodeStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlueprintVarNodeStyle.InnerSingleton, Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeStyle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBlueprintVarNodeStyle.InnerSingleton;
}
// End Enum EBlueprintVarNodeStyle

// Begin Enum EIconStyle
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIconStyle;
static UEnum* EIconStyle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIconStyle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIconStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DarkerNodes_EIconStyle, (UObject*)Z_Construct_UPackage__Script_DarkerNodes(), TEXT("EIconStyle"));
	}
	return Z_Registration_Info_UEnum_EIconStyle.OuterSingleton;
}
template<> DARKERNODES_API UEnum* StaticEnum<EIconStyle>()
{
	return EIconStyle_StaticEnum();
}
struct Z_Construct_UEnum_DarkerNodes_EIconStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Line.Name", "EIconStyle::Line" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "Solid.Name", "EIconStyle::Solid" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIconStyle::Line", (int64)EIconStyle::Line },
		{ "EIconStyle::Solid", (int64)EIconStyle::Solid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DarkerNodes_EIconStyle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DarkerNodes,
	nullptr,
	"EIconStyle",
	"EIconStyle",
	Z_Construct_UEnum_DarkerNodes_EIconStyle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DarkerNodes_EIconStyle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DarkerNodes_EIconStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DarkerNodes_EIconStyle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DarkerNodes_EIconStyle()
{
	if (!Z_Registration_Info_UEnum_EIconStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIconStyle.InnerSingleton, Z_Construct_UEnum_DarkerNodes_EIconStyle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIconStyle.InnerSingleton;
}
// End Enum EIconStyle

// Begin Class UDarkerNodesSettings
void UDarkerNodesSettings::StaticRegisterNativesUDarkerNodesSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDarkerNodesSettings);
UClass* Z_Construct_UClass_UDarkerNodesSettings_NoRegister()
{
	return UDarkerNodesSettings::StaticClass();
}
struct Z_Construct_UClass_UDarkerNodesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Darker Nodes Plugin" },
		{ "IncludePath", "DarkerNodesSettings.h" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MasterActivate_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/* Activate or deactivate the whole plugin. Default: true */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Activate or deactivate the whole plugin. Default: true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseGlobalSettings_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/* Use global settings across all your projects. When activated, it will load the global settings (overwriting this one).\n\x09If no global settings exists, it will create it based on this one. Future updates will then be saved to global settings. */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Use global settings across all your projects. When activated, it will load the global settings (overwriting this one).\n      If no global settings exists, it will create it based on this one. Future updates will then be saved to global settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadGlobalSettings_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/* Force reload the global settings (if it was modified outside this instance for example). */" },
		{ "EditCondition", "UseGlobalSettings" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Force reload the global settings (if it was modified outside this instance for example)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadDefaultStyle_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/* Reload the default style (you must disable Master Activate first). */" },
		{ "EditCondition", "!MasterActivate" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Reload the default style (you must disable Master Activate first)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivatePopupOnUpdate_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/* Display a popup with changelog on update. Default: tru */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Display a popup with changelog on update. Default: tru" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateMaterials_MetaData[] = {
		{ "Category", "Activation" },
		{ "Comment", "/* This should fix missing elements by updating and saving the theme materials. */" },
		{ "DisplayName", "Fix Missing Elements" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "This should fix missing elements by updating and saving the theme materials." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PluginVersionUpdate_MetaData[] = {
		{ "Comment", "/* Internal value to fix elements on plugin update. */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Internal value to fix elements on plugin update." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[] = {
		{ "Category", "Theme" },
		{ "Comment", "/* Select a theme preset */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Select a theme preset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThemeLuminosity_MetaData[] = {
		{ "Category", "Theme" },
		{ "ClampMax", "100" },
		{ "ClampMin", "-100" },
		{ "Comment", "/* Variations of luminosity of the theme (making it lighter or darker). Default: 0 */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Variations of luminosity of the theme (making it lighter or darker). Default: 0" },
		{ "UIMax", "100" },
		{ "UIMin", "-100" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThemeSaturation_MetaData[] = {
		{ "Category", "Theme" },
		{ "ClampMax", "100" },
		{ "ClampMin", "-100" },
		{ "Comment", "/* Variations of the saturation of the theme (making it greyer or more colorful). Default: 10 */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Variations of the saturation of the theme (making it greyer or more colorful). Default: 10" },
		{ "UIMax", "100" },
		{ "UIMin", "-100" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThemeHue_MetaData[] = {
		{ "Category", "Theme" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Variations of the hue of the theme (changing the color). Default: 30 */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Variations of the hue of the theme (changing the color). Default: 30" },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeepForegroundLuminosity_MetaData[] = {
		{ "Category", "Theme" },
		{ "Comment", "/* Keep font luminosity, useful when you use a low luminosity */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Keep font luminosity, useful when you use a low luminosity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightTheme_MetaData[] = {
		{ "Category", "Theme" },
		{ "Comment", "/* Use light theme and invert luminosity (warning: experimental feature) */" },
		{ "DisplayName", "Light Theme (experimental)" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Use light theme and invert luminosity (warning: experimental feature)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[] = {
		{ "Category", "Fonts" },
		{ "Comment", "/* Font to use in the editor (it won't work on all texts). Default: Normal */" },
		{ "DisplayName", "Font Size (experimental)" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Font to use in the editor (it won't work on all texts). Default: Normal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontFamily_MetaData[] = {
		{ "Category", "Fonts" },
		{ "Comment", "/* Font to use in the editor. Default: Roboto */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Font to use in the editor. Default: Roboto" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseCustomRegularFont_MetaData[] = {
		{ "Category", "Fonts" },
		{ "Comment", "/* Use a custom font for regular texts. Default: false */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Use a custom font for regular texts. Default: false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegularFont_MetaData[] = {
		{ "Category", "Fonts" },
		{ "Comment", "/* Path to the regular TTF font. */" },
		{ "EditCondition", "UseCustomRegularFont" },
		{ "FilePathFilter", "ttf" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Path to the regular TTF font." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseCustomBoldFont_MetaData[] = {
		{ "Category", "Fonts" },
		{ "Comment", "/* Use a custom font for bold texts. Default: false */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Use a custom font for bold texts. Default: false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoldFont_MetaData[] = {
		{ "Category", "Fonts" },
		{ "Comment", "/* Path to the bold TTF font. */" },
		{ "EditCondition", "UseCustomBoldFont" },
		{ "FilePathFilter", "ttf" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Path to the bold TTF font." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseCustomItalicFont_MetaData[] = {
		{ "Category", "Fonts" },
		{ "Comment", "/* Use a custom font for italic texts. Default: false */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Use a custom font for italic texts. Default: false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItalicFont_MetaData[] = {
		{ "Category", "Fonts" },
		{ "Comment", "/* Path to the italic TTF font. */" },
		{ "EditCondition", "UseCustomItalicFont" },
		{ "FilePathFilter", "ttf" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Path to the italic TTF font." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateBlueprintTheme_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "Comment", "/* Activate or deactivate the blueprint theme. Default: true */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Activate or deactivate the blueprint theme. Default: true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintRegularNodeRadius_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Radius of regular nodes. Default: 2px */" },
		{ "EditCondition", "ActivateBlueprintTheme" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Radius of regular nodes. Default: 2px" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintVarNodeRadius_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Radius of var nodes. Default: 2px */" },
		{ "EditCondition", "ActivateBlueprintTheme" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Radius of var nodes. Default: 2px" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintVarNodeLine_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "Comment", "/* Style of the VarNode top line. Default: Thin */" },
		{ "EditCondition", "ActivateBlueprintTheme" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Style of the VarNode top line. Default: Thin" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintVarNodeOpacity_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Variations of the grey background (making it lighter or darker). Default: darker */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Variations of the grey background (making it lighter or darker). Default: darker" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintNodeHeaderOpacity_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Opacity of blueprint nodes header. Default: 0.25 */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Opacity of blueprint nodes header. Default: 0.25" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintNodeHeaderSaturation_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Saturation of blueprint nodes header. Default: 1.0 */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Saturation of blueprint nodes header. Default: 1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtendNodes_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "Comment", "/* Add a padding to make nodes match the grid on the top left corner. Default: false */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Add a padding to make nodes match the grid on the top left corner. Default: false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisableBlueprintGrid_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "Comment", "/* Disable the blueprint grid. Default: false */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Disable the blueprint grid. Default: false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisableUMGGrid_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "Comment", "/* Disable the UMG grid. Default: false */" },
		{ "EditCondition", "DisableBlueprintGrid" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Disable the UMG grid. Default: false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginAxisOpacity_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Opacity of the origin axis of the background grid. Default: 1.0 */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Opacity of the origin axis of the background grid. Default: 1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeepDefaultCommentColor_MetaData[] = {
		{ "Category", "Blueprint" },
		{ "Comment", "/* Keep the default color of blueprint comments. Default: false */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Keep the default color of blueprint comments. Default: false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverwriteColors_MetaData[] = {
		{ "Category", "Customization" },
		{ "Comment", "/* When \"Use [Type] Customization\" is unticked, overwrite the customized colors with the current theme colors. Default: true */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "When \"Use [Type] Customization\" is unticked, overwrite the customized colors with the current theme colors. Default: true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseColorCustomization_MetaData[] = {
		{ "Category", "Customization|Color" },
		{ "Comment", "/* Customize the colors more in-depth. Default: false */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Customize the colors more in-depth. Default: false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[] = {
		{ "Category", "Customization|Color" },
		{ "Comment", "/* Text color of the theme. Default: RGB(200,200,200) */" },
		{ "EditCondition", "UseColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Text color of the theme. Default: RGB(200,200,200)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseWindowCustomization_MetaData[] = {
		{ "Category", "Customization|Windows" },
		{ "Comment", "/* Customize the colors more in-depth. Default: false */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Customize the colors more in-depth. Default: false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainWindowColor_MetaData[] = {
		{ "Category", "Customization|Windows" },
		{ "Comment", "/* Outline color of the main editor window. Default: RGB(40,40,40) */" },
		{ "EditCondition", "UseWindowCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Outline color of the main editor window. Default: RGB(40,40,40)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildWindowColor_MetaData[] = {
		{ "Category", "Customization|Windows" },
		{ "Comment", "/* Outline color of child editor windows. Default: RGB(40,40,40) */" },
		{ "EditCondition", "UseWindowCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Outline color of child editor windows. Default: RGB(40,40,40)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseBlueprintColorCustomization_MetaData[] = {
		{ "Category", "Customization|Blueprint" },
		{ "Comment", "/* Customize the colors of Blueprint graphs. Default: false */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Customize the colors of Blueprint graphs. Default: false" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridLineColor_MetaData[] = {
		{ "Category", "Customization|Blueprint" },
		{ "Comment", "/* Color for grid lines in Blueprint graphs and UMG editor. */" },
		{ "EditCondition", "UseBlueprintColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Color for grid lines in Blueprint graphs and UMG editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridRuleColor_MetaData[] = {
		{ "Category", "Customization|Blueprint" },
		{ "Comment", "/* Color for grid rules in Blueprint graphs and UMG editor. */" },
		{ "EditCondition", "UseBlueprintColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Color for grid rules in Blueprint graphs and UMG editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridCenterColor_MetaData[] = {
		{ "Category", "Customization|Blueprint" },
		{ "Comment", "/* Color for grid center in Blueprint graphs and UMG editor. */" },
		{ "EditCondition", "UseBlueprintColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Color for grid center in Blueprint graphs and UMG editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegularNodeBackground_MetaData[] = {
		{ "Category", "Customization|Blueprint" },
		{ "Comment", "/* Background of regular Blueprint nodes. */" },
		{ "EditCondition", "UseBlueprintColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Background of regular Blueprint nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegularNodeBorder_MetaData[] = {
		{ "Category", "Customization|Blueprint" },
		{ "Comment", "/* Border of regular Blueprint nodes. */" },
		{ "EditCondition", "UseBlueprintColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Border of regular Blueprint nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VarNodeBackground_MetaData[] = {
		{ "Category", "Customization|Blueprint" },
		{ "Comment", "/* Background of var Blueprint nodes. */" },
		{ "EditCondition", "UseBlueprintColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Background of var Blueprint nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VarNodeBorder_MetaData[] = {
		{ "Category", "Customization|Blueprint" },
		{ "Comment", "/* Border of var Blueprint nodes. */" },
		{ "EditCondition", "UseBlueprintColorCustomization" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Border of var Blueprint nodes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReloadTextureResources_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/* Force texture resources reload. */" },
		{ "ModuleRelativePath", "Public/DarkerNodesSettings.h" },
		{ "ToolTip", "Force texture resources reload." },
	};
#endif // WITH_METADATA
	static void NewProp_MasterActivate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MasterActivate;
	static void NewProp_UseGlobalSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseGlobalSettings;
	static void NewProp_LoadGlobalSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LoadGlobalSettings;
	static void NewProp_ReloadDefaultStyle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReloadDefaultStyle;
	static void NewProp_ActivatePopupOnUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivatePopupOnUpdate;
	static void NewProp_UpdateMaterials_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UpdateMaterials;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PluginVersionUpdate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Preset_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Preset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ThemeLuminosity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ThemeSaturation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ThemeHue;
	static void NewProp_KeepForegroundLuminosity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_KeepForegroundLuminosity;
	static void NewProp_LightTheme_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LightTheme;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FontSize_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FontSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FontFamily_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FontFamily;
	static void NewProp_UseCustomRegularFont_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseCustomRegularFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegularFont;
	static void NewProp_UseCustomBoldFont_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseCustomBoldFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoldFont;
	static void NewProp_UseCustomItalicFont_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseCustomItalicFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItalicFont;
	static void NewProp_ActivateBlueprintTheme_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ActivateBlueprintTheme;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlueprintRegularNodeRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlueprintVarNodeRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlueprintVarNodeLine_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlueprintVarNodeLine;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlueprintVarNodeOpacity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlueprintNodeHeaderOpacity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlueprintNodeHeaderSaturation;
	static void NewProp_ExtendNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ExtendNodes;
	static void NewProp_DisableBlueprintGrid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableBlueprintGrid;
	static void NewProp_DisableUMGGrid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableUMGGrid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginAxisOpacity;
	static void NewProp_KeepDefaultCommentColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_KeepDefaultCommentColor;
	static void NewProp_OverwriteColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OverwriteColors;
	static void NewProp_UseColorCustomization_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseColorCustomization;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
	static void NewProp_UseWindowCustomization_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseWindowCustomization;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MainWindowColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildWindowColor;
	static void NewProp_UseBlueprintColorCustomization_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseBlueprintColorCustomization;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridLineColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridRuleColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridCenterColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegularNodeBackground;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegularNodeBorder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VarNodeBackground;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VarNodeBorder;
	static void NewProp_ReloadTextureResources_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReloadTextureResources;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDarkerNodesSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MasterActivate_SetBit(void* Obj)
{
	((UDarkerNodesSettings*)Obj)->MasterActivate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MasterActivate = { "MasterActivate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MasterActivate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MasterActivate_MetaData), NewProp_MasterActivate_MetaData) };
void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGlobalSettings_SetBit(void* Obj)
{
	((UDarkerNodesSettings*)Obj)->UseGlobalSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGlobalSettings = { "UseGlobalSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGlobalSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseGlobalSettings_MetaData), NewProp_UseGlobalSettings_MetaData) };
void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_LoadGlobalSettings_SetBit(void* Obj)
{
	((UDarkerNodesSettings*)Obj)->LoadGlobalSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_LoadGlobalSettings = { "LoadGlobalSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_LoadGlobalSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadGlobalSettings_MetaData), NewProp_LoadGlobalSettings_MetaData) };
void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadDefaultStyle_SetBit(void* Obj)
{
	((UDarkerNodesSettings*)Obj)->ReloadDefaultStyle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadDefaultStyle = { "ReloadDefaultStyle", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadDefaultStyle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadDefaultStyle_MetaData), NewProp_ReloadDefaultStyle_MetaData) };
void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ActivatePopupOnUpdate_SetBit(void* Obj)
{
	((UDarkerNodesSettings*)Obj)->ActivatePopupOnUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ActivatePopupOnUpdate = { "ActivatePopupOnUpdate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ActivatePopupOnUpdate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivatePopupOnUpdate_MetaData), NewProp_ActivatePopupOnUpdate_MetaData) };
void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UpdateMaterials_SetBit(void* Obj)
{
	((UDarkerNodesSettings*)Obj)->UpdateMaterials = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UpdateMaterials = { "UpdateMaterials", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UpdateMaterials_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateMaterials_MetaData), NewProp_UpdateMaterials_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_PluginVersionUpdate = { "PluginVersionUpdate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, PluginVersionUpdate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PluginVersionUpdate_MetaData), NewProp_PluginVersionUpdate_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_Preset_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, Preset), Z_Construct_UEnum_DarkerNodes_EPresets, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preset_MetaData), NewProp_Preset_MetaData) }; // 1393925167
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeLuminosity = { "ThemeLuminosity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, ThemeLuminosity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThemeLuminosity_MetaData), NewProp_ThemeLuminosity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeSaturation = { "ThemeSaturation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, ThemeSaturation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThemeSaturation_MetaData), NewProp_ThemeSaturation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeHue = { "ThemeHue", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, ThemeHue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThemeHue_MetaData), NewProp_ThemeHue_MetaData) };
void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_KeepForegroundLuminosity_SetBit(void* Obj)
{
	((UDarkerNodesSettings*)Obj)->KeepForegroundLuminosity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_KeepForegroundLuminosity = { "KeepForegroundLuminosity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_KeepForegroundLuminosity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeepForegroundLuminosity_MetaData), NewProp_KeepForegroundLuminosity_MetaData) };
void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_LightTheme_SetBit(void* Obj)
{
	((UDarkerNodesSettings*)Obj)->LightTheme = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_LightTheme = { "LightTheme", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_LightTheme_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightTheme_MetaData), NewProp_LightTheme_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_FontSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, FontSize), Z_Construct_UEnum_DarkerNodes_EFontSize, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontSize_MetaData), NewProp_FontSize_MetaData) }; // 4091391034
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_FontFamily_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_FontFamily = { "FontFamily", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, FontFamily), Z_Construct_UEnum_DarkerNodes_EFontFamily, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontFamily_MetaData), NewProp_FontFamily_MetaData) }; // 3289446958
void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomRegularFont_SetBit(void* Obj)
{
	((UDarkerNodesSettings*)Obj)->UseCustomRegularFont = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomRegularFont = { "UseCustomRegularFont", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomRegularFont_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseCustomRegularFont_MetaData), NewProp_UseCustomRegularFont_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_RegularFont = { "RegularFont", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, RegularFont), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegularFont_MetaData), NewProp_RegularFont_MetaData) };
void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomBoldFont_SetBit(void* Obj)
{
	((UDarkerNodesSettings*)Obj)->UseCustomBoldFont = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomBoldFont = { "UseCustomBoldFont", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomBoldFont_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseCustomBoldFont_MetaData), NewProp_UseCustomBoldFont_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BoldFont = { "BoldFont", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, BoldFont), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoldFont_MetaData), NewProp_BoldFont_MetaData) };
void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomItalicFont_SetBit(void* Obj)
{
	((UDarkerNodesSettings*)Obj)->UseCustomItalicFont = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomItalicFont = { "UseCustomItalicFont", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomItalicFont_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseCustomItalicFont_MetaData), NewProp_UseCustomItalicFont_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ItalicFont = { "ItalicFont", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, ItalicFont), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItalicFont_MetaData), NewProp_ItalicFont_MetaData) };
void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ActivateBlueprintTheme_SetBit(void* Obj)
{
	((UDarkerNodesSettings*)Obj)->ActivateBlueprintTheme = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ActivateBlueprintTheme = { "ActivateBlueprintTheme", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ActivateBlueprintTheme_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateBlueprintTheme_MetaData), NewProp_ActivateBlueprintTheme_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintRegularNodeRadius = { "BlueprintRegularNodeRadius", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, BlueprintRegularNodeRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintRegularNodeRadius_MetaData), NewProp_BlueprintRegularNodeRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeRadius = { "BlueprintVarNodeRadius", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, BlueprintVarNodeRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintVarNodeRadius_MetaData), NewProp_BlueprintVarNodeRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeLine_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeLine = { "BlueprintVarNodeLine", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, BlueprintVarNodeLine), Z_Construct_UEnum_DarkerNodes_EBlueprintVarNodeLine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintVarNodeLine_MetaData), NewProp_BlueprintVarNodeLine_MetaData) }; // 502972066
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeOpacity = { "BlueprintVarNodeOpacity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, BlueprintVarNodeOpacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintVarNodeOpacity_MetaData), NewProp_BlueprintVarNodeOpacity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintNodeHeaderOpacity = { "BlueprintNodeHeaderOpacity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, BlueprintNodeHeaderOpacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintNodeHeaderOpacity_MetaData), NewProp_BlueprintNodeHeaderOpacity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintNodeHeaderSaturation = { "BlueprintNodeHeaderSaturation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, BlueprintNodeHeaderSaturation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintNodeHeaderSaturation_MetaData), NewProp_BlueprintNodeHeaderSaturation_MetaData) };
void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ExtendNodes_SetBit(void* Obj)
{
	((UDarkerNodesSettings*)Obj)->ExtendNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ExtendNodes = { "ExtendNodes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ExtendNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtendNodes_MetaData), NewProp_ExtendNodes_MetaData) };
void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableBlueprintGrid_SetBit(void* Obj)
{
	((UDarkerNodesSettings*)Obj)->DisableBlueprintGrid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableBlueprintGrid = { "DisableBlueprintGrid", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableBlueprintGrid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisableBlueprintGrid_MetaData), NewProp_DisableBlueprintGrid_MetaData) };
void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableUMGGrid_SetBit(void* Obj)
{
	((UDarkerNodesSettings*)Obj)->DisableUMGGrid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableUMGGrid = { "DisableUMGGrid", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableUMGGrid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisableUMGGrid_MetaData), NewProp_DisableUMGGrid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_OriginAxisOpacity = { "OriginAxisOpacity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, OriginAxisOpacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginAxisOpacity_MetaData), NewProp_OriginAxisOpacity_MetaData) };
void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_KeepDefaultCommentColor_SetBit(void* Obj)
{
	((UDarkerNodesSettings*)Obj)->KeepDefaultCommentColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_KeepDefaultCommentColor = { "KeepDefaultCommentColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_KeepDefaultCommentColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeepDefaultCommentColor_MetaData), NewProp_KeepDefaultCommentColor_MetaData) };
void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_OverwriteColors_SetBit(void* Obj)
{
	((UDarkerNodesSettings*)Obj)->OverwriteColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_OverwriteColors = { "OverwriteColors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_OverwriteColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverwriteColors_MetaData), NewProp_OverwriteColors_MetaData) };
void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseColorCustomization_SetBit(void* Obj)
{
	((UDarkerNodesSettings*)Obj)->UseColorCustomization = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseColorCustomization = { "UseColorCustomization", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseColorCustomization_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseColorCustomization_MetaData), NewProp_UseColorCustomization_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, TextColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextColor_MetaData), NewProp_TextColor_MetaData) };
void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseWindowCustomization_SetBit(void* Obj)
{
	((UDarkerNodesSettings*)Obj)->UseWindowCustomization = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseWindowCustomization = { "UseWindowCustomization", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseWindowCustomization_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseWindowCustomization_MetaData), NewProp_UseWindowCustomization_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MainWindowColor = { "MainWindowColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, MainWindowColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainWindowColor_MetaData), NewProp_MainWindowColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ChildWindowColor = { "ChildWindowColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, ChildWindowColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildWindowColor_MetaData), NewProp_ChildWindowColor_MetaData) };
void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseBlueprintColorCustomization_SetBit(void* Obj)
{
	((UDarkerNodesSettings*)Obj)->UseBlueprintColorCustomization = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseBlueprintColorCustomization = { "UseBlueprintColorCustomization", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseBlueprintColorCustomization_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseBlueprintColorCustomization_MetaData), NewProp_UseBlueprintColorCustomization_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GridLineColor = { "GridLineColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, GridLineColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridLineColor_MetaData), NewProp_GridLineColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GridRuleColor = { "GridRuleColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, GridRuleColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridRuleColor_MetaData), NewProp_GridRuleColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GridCenterColor = { "GridCenterColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, GridCenterColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridCenterColor_MetaData), NewProp_GridCenterColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_RegularNodeBackground = { "RegularNodeBackground", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, RegularNodeBackground), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegularNodeBackground_MetaData), NewProp_RegularNodeBackground_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_RegularNodeBorder = { "RegularNodeBorder", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, RegularNodeBorder), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegularNodeBorder_MetaData), NewProp_RegularNodeBorder_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_VarNodeBackground = { "VarNodeBackground", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, VarNodeBackground), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VarNodeBackground_MetaData), NewProp_VarNodeBackground_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_VarNodeBorder = { "VarNodeBorder", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDarkerNodesSettings, VarNodeBorder), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VarNodeBorder_MetaData), NewProp_VarNodeBorder_MetaData) };
void Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadTextureResources_SetBit(void* Obj)
{
	((UDarkerNodesSettings*)Obj)->ReloadTextureResources = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadTextureResources = { "ReloadTextureResources", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDarkerNodesSettings), &Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadTextureResources_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReloadTextureResources_MetaData), NewProp_ReloadTextureResources_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDarkerNodesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MasterActivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseGlobalSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_LoadGlobalSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadDefaultStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ActivatePopupOnUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UpdateMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_PluginVersionUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_Preset_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_Preset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeLuminosity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeSaturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ThemeHue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_KeepForegroundLuminosity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_LightTheme,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_FontSize_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_FontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_FontFamily_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_FontFamily,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomRegularFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_RegularFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomBoldFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BoldFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseCustomItalicFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ItalicFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ActivateBlueprintTheme,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintRegularNodeRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeLine_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintVarNodeOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintNodeHeaderOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_BlueprintNodeHeaderSaturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ExtendNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableBlueprintGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_DisableUMGGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_OriginAxisOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_KeepDefaultCommentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_OverwriteColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseColorCustomization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_TextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseWindowCustomization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_MainWindowColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ChildWindowColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_UseBlueprintColorCustomization,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GridLineColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GridRuleColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_GridCenterColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_RegularNodeBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_RegularNodeBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_VarNodeBackground,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_VarNodeBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDarkerNodesSettings_Statics::NewProp_ReloadTextureResources,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDarkerNodesSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_DarkerNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDarkerNodesSettings_Statics::ClassParams = {
	&UDarkerNodesSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDarkerNodesSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDarkerNodesSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UDarkerNodesSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDarkerNodesSettings()
{
	if (!Z_Registration_Info_UClass_UDarkerNodesSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDarkerNodesSettings.OuterSingleton, Z_Construct_UClass_UDarkerNodesSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDarkerNodesSettings.OuterSingleton;
}
template<> DARKERNODES_API UClass* StaticClass<UDarkerNodesSettings>()
{
	return UDarkerNodesSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDarkerNodesSettings);
UDarkerNodesSettings::~UDarkerNodesSettings() {}
// End Class UDarkerNodesSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPresets_StaticEnum, TEXT("EPresets"), &Z_Registration_Info_UEnum_EPresets, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1393925167U) },
		{ EHeaderStyle_StaticEnum, TEXT("EHeaderStyle"), &Z_Registration_Info_UEnum_EHeaderStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3940559686U) },
		{ EButtonPadding_StaticEnum, TEXT("EButtonPadding"), &Z_Registration_Info_UEnum_EButtonPadding, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 11453384U) },
		{ EButtonBorder_StaticEnum, TEXT("EButtonBorder"), &Z_Registration_Info_UEnum_EButtonBorder, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3237662601U) },
		{ EFontFamily_StaticEnum, TEXT("EFontFamily"), &Z_Registration_Info_UEnum_EFontFamily, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3289446958U) },
		{ EFontSize_StaticEnum, TEXT("EFontSize"), &Z_Registration_Info_UEnum_EFontSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4091391034U) },
		{ EBlueprintVarNodeLine_StaticEnum, TEXT("EBlueprintVarNodeLine"), &Z_Registration_Info_UEnum_EBlueprintVarNodeLine, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 502972066U) },
		{ EBlueprintVarNodeStyle_StaticEnum, TEXT("EBlueprintVarNodeStyle"), &Z_Registration_Info_UEnum_EBlueprintVarNodeStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2721252003U) },
		{ EIconStyle_StaticEnum, TEXT("EIconStyle"), &Z_Registration_Info_UEnum_EIconStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1756774388U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDarkerNodesSettings, UDarkerNodesSettings::StaticClass, TEXT("UDarkerNodesSettings"), &Z_Registration_Info_UClass_UDarkerNodesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDarkerNodesSettings), 333395128U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_3225052390(TEXT("/Script/DarkerNodes"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Public_DarkerNodesSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
