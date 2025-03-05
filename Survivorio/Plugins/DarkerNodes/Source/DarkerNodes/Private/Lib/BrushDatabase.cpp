/* Copyright (C) 2021 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the Unreal Engine Marketplace
*/

#include "BrushDatabase.h"


#include "FileHelpers.h"
#include "ImageUtils.h"
#include "Interfaces/IPluginManager.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Styling/SlateStyle.h"

UBrushDatabase::UBrushDatabase()
{
	AddToRoot();
	ThemeDirectory = IPluginManager::Get().FindPlugin(TEXT("DarkerNodes"))->GetBaseDir() + FString("/Resources/Theme");
}

void UBrushDatabase::SetMaterial(FSlateBrush* Brush, FString Name)
{
	if (!Materials.Contains(Name))
	{
		const FString MaterialPath = "/DarkerNodes/Materials/" + Name;
		UMaterial* Material = LoadObject<UMaterial>(nullptr, *MaterialPath);
		Materials.Add(Name, Material);
	}

	if (IsValid(Materials[Name]))
	{
		Brush->SetResourceObject(Materials[Name]);
	}
}

void UBrushDatabase::UpdateAndSaveMaterials()
{
	FlushShaderFileCache();
	
	TArray<UPackage*> PackagesToSave;

	for (auto& Material : Materials)
	{
		Material.Value->PreEditChange(nullptr);
		Material.Value->PostEditChange();

#if ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION <= 25
		PackagesToSave.Add(Material.Value->GetOutermost());
#else
		PackagesToSave.Add(Material.Value->GetPackage());
#endif
	}

	FEditorFileUtils::PromptForCheckoutAndSave(PackagesToSave, false, false);
}

UMaterialInstanceDynamic* UBrushDatabase::GetDynamicMaterial(FString Name, FSlateBrush* Brush)
{
	if (DynamicMaterials.Contains(Name))
	{
		return DynamicMaterials[Name];
	}

	if (Brush == nullptr)
	{
		return nullptr;
	}

	UObject* Resource = Brush->GetResourceObject();
	UMaterialInterface* Material = Cast<UMaterialInterface>(Resource);

	if (Material)
	{
		UMaterialInstanceDynamic* DynamicMaterial = Cast<UMaterialInstanceDynamic>(Material);

		if (!DynamicMaterial)
		{
			DynamicMaterial = UMaterialInstanceDynamic::Create(Material, this);
			DynamicMaterials.Add(Name, DynamicMaterial);
			Brush->SetResourceObject(DynamicMaterial);
		}

		return DynamicMaterial;
	}

	return nullptr;
}

FSlateBrush* UBrushDatabase::GetCenteredImageBrush(FString Name, FString Path, FVector2D Size, FColor Color)
{
	FSlateBrush* Brush = new FSlateBrush();
	Brush->SetImageSize(Size);
	Brush->TintColor = FLinearColor::FromSRGBColor(Color);
	SetMaterial(Brush, "CenterUVs.CenterUVs");

	const FString ImagePath = ThemeDirectory + Path;
	UTexture2D* Image = FImageUtils::ImportFileAsTexture2D(FPaths::ConvertRelativePathToFull(ImagePath));

	UMaterialInstanceDynamic* MaterialInstance = GetDynamicMaterial(Name, Brush);
	MaterialInstance->SetVectorParameterValue("Size", FVector(Size.X, Size.Y, 0));
	MaterialInstance->SetTextureParameterValue("Image", Image);

	return Brush;
}

void UBrushDatabase::CreateDynamicMaterial(FString Name, FString ParentName)
{
	if (!Materials.Contains(ParentName))
	{
		const FString MaterialPath = "/DarkerNodes/Materials/" + ParentName;
		UMaterial* Material = LoadObject<UMaterial>(nullptr, *MaterialPath);
		Materials.Add(ParentName, Material);
	}

	UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(Materials[ParentName], this);
	DynamicMaterials.Add(Name, DynamicMaterial);
}

void UBrushDatabase::CreateSlateBrush(FString Name)
{
	SlateBrushes.Add(Name, new FSlateBrush());
}

void UBrushDatabase::CreateSlateBrush(FString Name, FString MaterialName)
{
	CreateDynamicMaterial(Name, MaterialName);
	CreateSlateBrush(Name);
	SetSlateBrushMaterial(Name, Name);
}

FSlateBrush* UBrushDatabase::GetSlateBrush(FString Name)
{
	return SlateBrushes[Name];
}

void UBrushDatabase::SetSlateBrushMaterial(FString Name, FString DynamicMaterialName)
{
	SlateBrushes[Name]->SetResourceObject(DynamicMaterials[DynamicMaterialName]);
}

void UBrushDatabase::CreateSlateColor(FString Name)
{
	Colors.Add(Name, MakeShared<FLinearColor>());
	SlateColors.Add(Name, new FSlateColor(Colors[Name]));
}

void UBrushDatabase::SetSlateColor(FString Name, FLinearColor Color)
{
	Colors[Name].Get().R = Color.R;
	Colors[Name].Get().G = Color.G;
	Colors[Name].Get().B = Color.B;
	Colors[Name].Get().A = Color.A;
}

FSlateColor* UBrushDatabase::GetSlateColor(FString Name)
{
	return SlateColors[Name];
}

TSharedRef<FLinearColor> UBrushDatabase::GetColor(FString Name)
{
	return Colors[Name];
}
