/* Copyright (C) 2021 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the Unreal Engine Marketplace
*/

#pragma once

#include "CoreMinimal.h"

#include "SlateMaterialBrush.h"
#include "UObject/Object.h"
#include "BrushDatabase.generated.h"

UCLASS()
class DARKERNODES_API UBrushDatabase : public UObject
{
	GENERATED_BODY()

public:
	UBrushDatabase();
	void SetMaterial(FSlateBrush* Brush, FString Name);

	void UpdateAndSaveMaterials();
	UMaterialInstanceDynamic* GetDynamicMaterial(FString Name, FSlateBrush* Brush = nullptr);

	FSlateBrush* GetCenteredImageBrush(FString Name, FString Path, FVector2D Size, FColor Color = FColor::White);

	void CreateDynamicMaterial(FString Name, FString ParentName);

	void CreateSlateBrush(FString Name);
	void CreateSlateBrush(FString Name, FString MaterialName);
	FSlateBrush* GetSlateBrush(FString Name);
	void SetSlateBrushMaterial(FString Name, FString DynamicMaterialName);

	void CreateSlateColor(FString Name);
	void SetSlateColor(FString Name, FLinearColor Color);
	FSlateColor* GetSlateColor(FString Name);

	TSharedRef<FLinearColor> GetColor(FString Name);

private:
	FString ThemeDirectory;

	UPROPERTY()
	TMap<FString, UMaterial*> Materials;

	UPROPERTY()
	TMap<FString, UMaterialInstanceDynamic*> DynamicMaterials;

	TMap<FString, FSlateBrush*> SlateBrushes;
	TMap<FString, FSlateColor*> SlateColors;
	TMap<FString, const TSharedRef<FLinearColor>> Colors;

	//TArray<const FSlateBrush*> Resources;
};
