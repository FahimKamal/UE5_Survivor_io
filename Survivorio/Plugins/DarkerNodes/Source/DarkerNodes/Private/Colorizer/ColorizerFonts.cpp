/* Copyright (C) 2021 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the Unreal Engine Marketplace
*/

#include "Colorizer.h"

void FColorizer::ApplyFonts() const
{
	FTypeface* Typeface = const_cast<FTypeface*>(&FCoreStyle::GetDefaultFont().Get().DefaultTypeface);

	if (!DarkerNodesSettings->UseCustomRegularFont)
	{
		switch (DarkerNodesSettings->FontFamily)
		{
		case EFontFamily::BalsamiqSans:
			DarkerNodesSettings->RegularFont.FilePath = FontsDirectory + "/BalsamiqSans-Regular.ttf";
			break;
		case EFontFamily::Cannonade:
			DarkerNodesSettings->RegularFont.FilePath = FontsDirectory + "/Cannonade-Regular.ttf";
			break;
		case EFontFamily::CaskaydiaCove:
			DarkerNodesSettings->RegularFont.FilePath = FontsDirectory + "/CaskaydiaCove-Regular.ttf";
			break;
		case EFontFamily::EudoxusSans:
			DarkerNodesSettings->RegularFont.FilePath = FontsDirectory + "/EudoxusSans-Regular.ttf";
			break;
		case EFontFamily::GolosUI:
			DarkerNodesSettings->RegularFont.FilePath = FontsDirectory + "/GolosUI-Regular.ttf";
			break;
		case EFontFamily::Jua:
			DarkerNodesSettings->RegularFont.FilePath = FontsDirectory + "/Jua-Regular.ttf";
			break;
		case EFontFamily::Junction:
			DarkerNodesSettings->RegularFont.FilePath = FontsDirectory + "/Junction-Regular.ttf";
			break;
		case EFontFamily::NewTelegraph:
			DarkerNodesSettings->RegularFont.FilePath = FontsDirectory + "/NewTelegraph-Regular.ttf";
			break;
		case EFontFamily::XXIIAven:
			DarkerNodesSettings->RegularFont.FilePath = FontsDirectory + "/XXIIAven-Regular.ttf";
			break;
		default:
			DarkerNodesSettings->RegularFont.FilePath = Typeface->Fonts[0].Font.GetFontFilename();
		}
	}
	Typeface->Fonts[0] = FTypefaceEntry(TEXT("Regular"), DarkerNodesSettings->RegularFont.FilePath, EFontHinting::Default, EFontLoadingPolicy::LazyLoad);


	if (!DarkerNodesSettings->UseCustomItalicFont)
	{
		DarkerNodesSettings->ItalicFont.FilePath = Typeface->Fonts[1].Font.GetFontFilename();
	}
	Typeface->Fonts[1] = FTypefaceEntry(TEXT("Italic"), DarkerNodesSettings->ItalicFont.FilePath, EFontHinting::Default, EFontLoadingPolicy::LazyLoad);


	if (!DarkerNodesSettings->UseCustomBoldFont)
	{
		switch (DarkerNodesSettings->FontFamily)
		{
		case EFontFamily::BalsamiqSans:
			DarkerNodesSettings->RegularFont.FilePath = FontsDirectory + "/BalsamiqSans-Bold.ttf";
			break;
		case EFontFamily::Cannonade:
			DarkerNodesSettings->BoldFont.FilePath = FontsDirectory + "/Cannonade-Bold.ttf";
			break;
		case EFontFamily::CaskaydiaCove:
			DarkerNodesSettings->BoldFont.FilePath = FontsDirectory + "/CaskaydiaCove-Bold.ttf";
			break;
		case EFontFamily::EudoxusSans:
			DarkerNodesSettings->BoldFont.FilePath = FontsDirectory + "/EudoxusSans-Bold.ttf";
			break;
		case EFontFamily::GolosUI:
			DarkerNodesSettings->BoldFont.FilePath = FontsDirectory + "/GolosUI-Bold.ttf";
			break;
		case EFontFamily::Junction:
			DarkerNodesSettings->BoldFont.FilePath = FontsDirectory + "/Junction-Bold.ttf";
			break;
		case EFontFamily::NewTelegraph:
			DarkerNodesSettings->BoldFont.FilePath = FontsDirectory + "/NewTelegraph-Bold.ttf";
			break;
		case EFontFamily::XXIIAven:
			DarkerNodesSettings->BoldFont.FilePath = FontsDirectory + "/XXIIAven-Bold.ttf";
			break;
		default:
			DarkerNodesSettings->BoldFont.FilePath = Typeface->Fonts[0].Font.GetFontFilename();
		}
	}
	Typeface->Fonts[2] = FTypefaceEntry(TEXT("Bold"), DarkerNodesSettings->BoldFont.FilePath, EFontHinting::Default, EFontLoadingPolicy::LazyLoad);
}
