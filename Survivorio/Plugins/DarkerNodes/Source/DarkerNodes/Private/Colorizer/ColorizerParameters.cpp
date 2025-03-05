/* Copyright (C) 2021 Hugo ATTAL - All Rights Reserved
* This plugin is downloadable from the Unreal Engine Marketplace
*/

#include "Colorizer.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Settings/EditorStyleSettings.h"

void FColorizer::ApplyParameters() const
{
	ApplyFonts();

	BrushDatabase->GetDynamicMaterial("GreyBase")->SetVectorParameterValue("Color", FLinearColor::FromSRGBColor(GreyBase));
	BrushDatabase->GetDynamicMaterial("GreyLight")->SetVectorParameterValue("Color", FLinearColor::FromSRGBColor(GreyLight));
	BrushDatabase->GetDynamicMaterial("GreyDark")->SetVectorParameterValue("Color", FLinearColor::FromSRGBColor(GreyDark));
	BrushDatabase->GetDynamicMaterial("Debug")->SetVectorParameterValue("Color", FLinearColor::FromSRGBColor(DebugRed));

	BrushDatabase->GetDynamicMaterial("HoverDark")->SetVectorParameterValue("Color", FLinearColor::FromSRGBColor(HoverDark));
	BrushDatabase->GetDynamicMaterial("HoverBase")->SetVectorParameterValue("Color", FLinearColor::FromSRGBColor(HoverBase));
	BrushDatabase->GetDynamicMaterial("HoverBaseBright")->SetVectorParameterValue("Color", FLinearColor::FromSRGBColor(HoverBaseBright));

	BrushDatabase->GetDynamicMaterial("Primary")->SetVectorParameterValue("Color", FLinearColor::FromSRGBColor(Primary));
	BrushDatabase->SetSlateColor("TextColor", FLinearColor::FromSRGBColor(TextColor));
	BrushDatabase->GetDynamicMaterial("ScrollbarColor")->SetVectorParameterValue("Color", FLinearColor::FromSRGBColor(ScrollbarColor));
	BrushDatabase->GetDynamicMaterial("MainWindowColor")->SetVectorParameterValue("Color", FLinearColor::FromSRGBColor(MainWindowColor));
	BrushDatabase->GetDynamicMaterial("ChildWindowColor")->SetVectorParameterValue("Color", FLinearColor::FromSRGBColor(ChildWindowColor));

	BrushDatabase->SetSlateColor("GridLine", FLinearColor::FromSRGBColor(GridLineColor));
	BrushDatabase->SetSlateColor("GridRule", FLinearColor::FromSRGBColor(GridRuleColor));
	BrushDatabase->SetSlateColor("GridCenter", FLinearColor::FromSRGBColor(GridCenterColor));


	GetMutableDefault<UEditorStyleSettings>()->RegularColor = BrushDatabase->GetColor("GridLine").Get();
	GetMutableDefault<UEditorStyleSettings>()->RuleColor = BrushDatabase->GetColor("GridRule").Get();
	GetMutableDefault<UEditorStyleSettings>()->CenterColor = BrushDatabase->GetColor("GridCenter").Get();
	GetMutableDefault<UEditorStyleSettings>()->SaveConfig();

	BrushDatabase->GetDynamicMaterial("RegularNode_body")->SetVectorParameterValue("Background", FLinearColor::FromSRGBColor(RegularNodeBackground));
	BrushDatabase->GetDynamicMaterial("RegularNode_body")->SetVectorParameterValue("Border", FLinearColor::FromSRGBColor(RegularNodeBorder));
	BrushDatabase->GetDynamicMaterial("RegularNode_body")->SetScalarParameterValue("Radius", DarkerNodesSettings->BlueprintRegularNodeRadius);

	BrushDatabase->GetDynamicMaterial("RegularNode_shadow_selected")->SetScalarParameterValue("Radius", DarkerNodesSettings->BlueprintRegularNodeRadius + 2);
	BrushDatabase->GetDynamicMaterial("RegularNode_shadow_selected")->SetVectorParameterValue("Border", Primary);
	BrushDatabase->GetDynamicMaterial("RegularNode_shadow_selected")->SetVectorParameterValue("Background", Primary.WithAlpha(0.0f));

	BrushDatabase->GetDynamicMaterial("RegularNode_color_spill")->SetScalarParameterValue("Radius", DarkerNodesSettings->BlueprintRegularNodeRadius);
	BrushDatabase->GetDynamicMaterial("RegularNode_color_spill")->SetVectorParameterValue("Border", FLinearColor::FromSRGBColor(MixColor(FColor::Black, FColor::White, DarkerNodesSettings->BlueprintNodeHeaderSaturation)));
	BrushDatabase->GetDynamicMaterial("RegularNode_color_spill")->SetVectorParameterValue("Background", FLinearColor::FromSRGBColor(MixColor(FColor::Black, FColor::White, DarkerNodesSettings->BlueprintNodeHeaderSaturation)));
	BrushDatabase->GetDynamicMaterial("RegularNode_color_spill")->SetScalarParameterValue("Alpha", DarkerNodesSettings->BlueprintNodeHeaderOpacity);

	BrushDatabase->GetDynamicMaterial("PanelDark")->SetVectorParameterValue("Background", FLinearColor::FromSRGBColor(GreyDark));
	BrushDatabase->GetDynamicMaterial("PanelDark")->SetVectorParameterValue("Border", FLinearColor::FromSRGBColor(GreyBase));

	BrushDatabase->GetDynamicMaterial("VarNode_body")->SetVectorParameterValue("Background", FLinearColor::FromSRGBColor(VarNodeBackground));
	BrushDatabase->GetDynamicMaterial("VarNode_body")->SetVectorParameterValue("Border", FLinearColor::FromSRGBColor(VarNodeBorder));
	BrushDatabase->GetDynamicMaterial("VarNode_body")->SetScalarParameterValue("Radius", DarkerNodesSettings->BlueprintVarNodeRadius);

	BrushDatabase->GetDynamicMaterial("VarNode_shadow_selected")->SetScalarParameterValue("Radius", DarkerNodesSettings->BlueprintVarNodeRadius + 2);
	BrushDatabase->GetDynamicMaterial("VarNode_shadow_selected")->SetVectorParameterValue("Border", Primary);
	BrushDatabase->GetDynamicMaterial("VarNode_shadow_selected")->SetVectorParameterValue("Background", Primary.WithAlpha(0.0f));

	if (DarkerNodesSettings->ExtendNodes)
	{
		BrushDatabase->GetDynamicMaterial("RegularNode_body")->SetVectorParameterValue("Padding", FLinearColor(0, 0, 0, 0));
		BrushDatabase->GetDynamicMaterial("VarNode_body")->SetVectorParameterValue("Padding", FLinearColor(0, 0, 0, 0));
		BrushDatabase->GetDynamicMaterial("RegularNode_shadow_selected")->SetVectorParameterValue("Padding", FLinearColor(10, 10, 10, 10));
		BrushDatabase->GetDynamicMaterial("VarNode_shadow_selected")->SetVectorParameterValue("Padding", FLinearColor(10, 10, 10, 10));
		BrushDatabase->GetDynamicMaterial("RegularNode_color_spill")->SetVectorParameterValue("Padding", FLinearColor(1, 1, 0, 0));
	}
	else
	{
		BrushDatabase->GetDynamicMaterial("RegularNode_body")->SetVectorParameterValue("Padding", FLinearColor(4, 2, 4, 2));
		BrushDatabase->GetDynamicMaterial("VarNode_body")->SetVectorParameterValue("Padding", FLinearColor(4, 2, 4, 2));
		BrushDatabase->GetDynamicMaterial("RegularNode_shadow_selected")->SetVectorParameterValue("Padding", FLinearColor(14, 12, 14, 12));
		BrushDatabase->GetDynamicMaterial("VarNode_shadow_selected")->SetVectorParameterValue("Padding", FLinearColor(14, 12, 14, 12));
		BrushDatabase->GetDynamicMaterial("RegularNode_color_spill")->SetVectorParameterValue("Padding", FLinearColor(5, 3, 0, 0));
	}
}
