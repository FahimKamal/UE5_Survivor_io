/* Copyright (C) 2021 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the Unreal Engine Marketplace
*/

#include "Colorizer.h"
#include "Lib/ColorLib.h"

void FColorizer::ApplyImageBrush(FSlateStyleSet* StyleSet, FName Name, FString Location, FVector2D Size) const
{
	ApplyImageBrush(StyleSet, Name, Location, Size, ImageColor);
}

void FColorizer::ApplyImageBrush(FSlateStyleSet* StyleSet, FName Name, FString Location, FVector2D Size, FColor Color) const
{
	StyleSet->Set(
		Name,
		new FSlateImageBrush(
			ThemeDirectory + Location,
			Size,
			FLinearColor::FromSRGBColor(Color)
		)
	);
}

FSlateImageBrush FColorizer::ImageBrush(FString Location, FVector2D Size) const
{
	return ImageBrush(Location, Size, ImageColor);
}

FSlateImageBrush FColorizer::ImageBrush(FString Location, FVector2D Size, FColor Color) const
{
	return FSlateImageBrush(
		ThemeDirectory + Location,
		Size,
		FLinearColor::FromSRGBColor(Color)
	);
}

FSlateImageBrush FColorizer::ColorImageBrush(FColor Color, FVector2D Size) const
{
	return FSlateImageBrush(
		ThemeDirectory + FString("/Blank.png"),
		Size,
		FLinearColor::FromSRGBColor(Color)
	);
}

void FColorizer::ApplyBoxBrush(FSlateStyleSet* StyleSet, FName Name, FString Location, FMargin Margin, FColor Color) const
{
	StyleSet->Set(
		Name,
		new FSlateBoxBrush(
			ThemeDirectory + Location,
			Margin,
			FLinearColor::FromSRGBColor(Color)
		)
	);
}

void FColorizer::ApplyColorBoxBrush(FSlateStyleSet* StyleSet, FName Name, FColor Color) const
{
	StyleSet->Set(
		Name,
		new FSlateBoxBrush(
			ThemeDirectory + FString("/Blank.png"),
			FMargin(0.25),
			FLinearColor::FromSRGBColor(Color)
		)
	);
}

FSlateBoxBrush FColorizer::BoxBrush(FString Location, FVector2D Size, FMargin Margin, FColor Color) const
{
	return FSlateBoxBrush(
		ThemeDirectory + Location,
		Size,
		Margin,
		FLinearColor::FromSRGBColor(Color)
	);
}

void FColorizer::ApplyColorBorderBrush(FSlateStyleSet* StyleSet, FName Name, FColor Color) const
{
	StyleSet->Set(
		Name,
		new FSlateBorderBrush(
			ThemeDirectory + FString("/Blank.png"),
			FMargin(0.25),
			FLinearColor::FromSRGBColor(Color)
		)
	);
}

FSlateBorderBrush FColorizer::ColorBorderBrush(FColor Color, FMargin Margin) const
{
	return BorderBrush(
		FString("/Blank.png"),
		Margin,
		Color
	);
}

FSlateBrush* FColorizer::SlateBrush(FString Name) const
{
	return BrushDatabase->GetSlateBrush(Name);
}

FSlateBorderBrush FColorizer::BorderBrush(FString Location, FMargin Margin, FColor Color) const
{
	return FSlateBorderBrush(
		ThemeDirectory + Location,
		Margin,
		FLinearColor::FromSRGBColor(Color)
	);
}

void FColorizer::ApplyCenterIcon(FSlateStyleSet* StyleSet, FName Name, FString Location, FVector2D Size, FColor Color) const
{
	StyleSet->Set(
		Name,
		BrushDatabase->GetCenteredImageBrush(
			Name.ToString(),
			Location,
			Size,
			Color
		)
	);
}

FSlateBrush* FColorizer::CenterIcon(FName Name, FString Location, FVector2D Size, FColor Color) const
{
	return BrushDatabase->GetCenteredImageBrush(
		Name.ToString(),
		Location,
		Size,
		Color
	);
}

FColor FColorizer::InvertLight(FColor Color)
{
	FVector LAB = FColorLib::XYZtoLAB(FColorLib::RGBtoXYZ(Color));
	LAB.X = FMath::Clamp(100.0f - LAB.X, 0, 100);
	return FColorLib::XYZtoRGB(FColorLib::LABtoXYZ(LAB)).WithAlpha(Color.A);
}

FColor FColorizer::ShiftLight(FColor Color, float Shift)
{
	FVector LAB = FColorLib::XYZtoLAB(FColorLib::RGBtoXYZ(Color));
	if (Shift > 0)
	{
		LAB.X = FMath::Clamp(LAB.X + Shift * (100.0f-LAB.X), 0, 100);
	}
	else
	{
		LAB.X = FMath::Clamp(LAB.X + Shift * LAB.X, 0, 100);
	}
	
	return FColorLib::XYZtoRGB(FColorLib::LABtoXYZ(LAB)).WithAlpha(Color.A);
}

FColor FColorizer::ShiftSaturation(FColor Color, float Shift, float Hue)
{
	const float Lightness = FColorLib::XYZtoLAB(FColorLib::RGBtoXYZ(Color)).X;
	FVector HSL = FColorLib::RGBtoHSL(Color);
	HSL.X = Hue;
	if (Shift > 0)
	{
		HSL.Y = FMath::Clamp(HSL.Y + Shift * (1.0f-HSL.Y), 0, 1);
	}
	else
	{
		HSL.Y = FMath::Clamp(HSL.Y + Shift * HSL.Y, 0, 1);
	}
	
	Color = FColorLib::HSLtoRGB(HSL).WithAlpha(Color.A);

	FVector LAB = FColorLib::XYZtoLAB(FColorLib::RGBtoXYZ(Color));
	LAB.X = Lightness;

	return FColorLib::XYZtoRGB(FColorLib::LABtoXYZ(LAB)).WithAlpha(Color.A);
}
