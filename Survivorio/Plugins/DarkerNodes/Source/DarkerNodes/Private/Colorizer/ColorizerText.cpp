/* Copyright (C) 2021 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the Unreal Engine Marketplace
*/

#include "Colorizer.h"
#include "Lib/Rob.h"
#include "Styling/StarshipCoreStyle.h"
#include "Styling/ToolBarStyle.h"

#define COMMA ,
ROB_DEFINE_VAR(FSlateStyleSet, FontInfoResources, TMap< FName COMMA FSlateFontInfo >);
ROB_DEFINE_VAR(FSlateStyleSet, WidgetStyleValues, TMap< FName COMMA TSharedRef< struct FSlateWidgetStyle > >);

void FColorizer::ColorText()
{
	FSlateStyleSet* CoreStyle = static_cast<FSlateStyleSet*>(const_cast<ISlateStyle*>(&FStarshipCoreStyle::GetCoreStyle()));
	TMap<FName, TSharedRef<struct FSlateWidgetStyle>> CoreStyleValues = CoreStyle->*RobAccess(FSlateStyleSet, WidgetStyleValues);
	TSet<FName> CoreStyleKeys;
	CoreStyleValues.GetKeys(CoreStyleKeys);

	TMap<FName, TSharedRef<struct FSlateWidgetStyle>> WidgetStyleValues = AppStyle->*RobAccess(FSlateStyleSet, WidgetStyleValues);
	TSet<FName> AppStyleKeys;
	WidgetStyleValues.GetKeys(AppStyleKeys);

	TSet<FName> WidgetStyleKeys = AppStyleKeys.Union(CoreStyleKeys);

	for (const auto WidgetKey : WidgetStyleKeys)
	{
		TSharedRef<FSlateWidgetStyle>* WidgetStyle = WidgetStyleValues.Find(WidgetKey);

		if (WidgetStyle == nullptr)
		{
			WidgetStyle = CoreStyleValues.Find(WidgetKey);
		}

		if (WidgetStyle == nullptr)
		{
			continue;
		}

		FName WidgetTypeName = WidgetStyle->Get().GetTypeName();

		if (WidgetTypeName == FTextBlockStyle::TypeName)
		{
			FTextBlockStyle* TextBlockStyle = const_cast<FTextBlockStyle*>(&AppStyle->GetWidgetStyle<FTextBlockStyle>(WidgetKey));
			TextBlockStyle->Font.Size = GetFontSize(TextBlockStyle->Font.Size);
		}
		else if (WidgetTypeName == FEditableTextBoxStyle::TypeName)
		{
			FEditableTextBoxStyle* EditableTextBoxStyle = const_cast<FEditableTextBoxStyle*>(&AppStyle->GetWidgetStyle<FEditableTextBoxStyle>(WidgetKey));

#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 1
			// Todo: rob access
			//EditableTextBoxStyle->Font.Size = GetFontSize(EditableTextBoxStyle->Font.Size);
#else
			EditableTextBoxStyle->Font.Size = GetFontSize(EditableTextBoxStyle->Font.Size);
#endif
		}
		else if (WidgetTypeName == FEditableTextStyle::TypeName)
		{
			FEditableTextStyle* EditableTextStyle = const_cast<FEditableTextStyle*>(&AppStyle->GetWidgetStyle<FEditableTextStyle>(WidgetKey));
			EditableTextStyle->Font.Size = GetFontSize(EditableTextStyle->Font.Size);
		}
		else if (WidgetTypeName == FHyperlinkStyle::TypeName)
		{
			FHyperlinkStyle* HyperlinkStyle = const_cast<FHyperlinkStyle*>(&AppStyle->GetWidgetStyle<FHyperlinkStyle>(WidgetKey));
			HyperlinkStyle->TextStyle.Font.Size = GetFontSize(HyperlinkStyle->TextStyle.Font.Size);
		}
	}

	FToolBarStyle* ToolBarStyle = const_cast<FToolBarStyle*>(&AppStyle->GetWidgetStyle<FToolBarStyle>("ToolBar"));
	ToolBarStyle->LabelStyle.Font.Size = GetFontSize(ToolBarStyle->LabelStyle.Font.Size);


	FStyleFonts* StyleFonts = const_cast<FStyleFonts*>(&FStyleFonts::Get());
	const_cast<FSlateFontInfo*>(&StyleFonts->Normal)->Size = GetFontSize(StyleFonts->Normal.Size);
	const_cast<FSlateFontInfo*>(&StyleFonts->NormalBold)->Size = GetFontSize(StyleFonts->NormalBold.Size);
	const_cast<FSlateFontInfo*>(&StyleFonts->Small)->Size = GetFontSize(StyleFonts->Small.Size);
	const_cast<FSlateFontInfo*>(&StyleFonts->SmallBold)->Size = GetFontSize(StyleFonts->SmallBold.Size);
	const_cast<FSlateFontInfo*>(&StyleFonts->Large)->Size = GetFontSize(StyleFonts->Large.Size);
	const_cast<FSlateFontInfo*>(&StyleFonts->LargeBold)->Size = GetFontSize(StyleFonts->LargeBold.Size);
	const_cast<FSlateFontInfo*>(&StyleFonts->HeadingMedium)->Size = GetFontSize(StyleFonts->HeadingMedium.Size);
	const_cast<FSlateFontInfo*>(&StyleFonts->HeadingSmall)->Size = GetFontSize(StyleFonts->HeadingSmall.Size);
	const_cast<FSlateFontInfo*>(&StyleFonts->HeadingExtraSmall)->Size = GetFontSize(StyleFonts->HeadingExtraSmall.Size);


	const TMap<FName, FSlateFontInfo> FontInfoResources = AppStyle->*RobAccess(FSlateStyleSet, FontInfoResources);

	TArray<FName> FontNames;
	FontInfoResources.GetKeys(FontNames);

	for (const auto FontName : FontNames)
	{
		FSlateFontInfo FontInfo = AppStyle->GetFontStyle(FontName);
		FontInfo.Size = GetFontSize(FontInfo.Size);
		AppStyle->Set(FontName, FontInfo);
	}
}

int32 FColorizer::GetFontSize(int32 BaseSize) const
{
	switch (DarkerNodesSettings->FontSize)
	{
	case EFontSize::Small:
		return BaseSize * 0.8f;
	case EFontSize::Normal:
		return BaseSize;
	case EFontSize::Big:
		return BaseSize * 1.2f;
	case EFontSize::Bigger:
		return BaseSize * 1.5f;
	default:
		return BaseSize;
	}
}
