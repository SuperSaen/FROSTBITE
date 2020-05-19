// Copyright Sean Neville, 2020

#pragma once

#include "CoreMinimal.h"
#include "VTMPEdMode.h"
#include "Toolkits/BaseToolkit.h"
#include "Input/Reply.h"
#include "MeshAttributeArray.h"
#include "IDetailCustomization.h"
#include "MeshDescription.h"
#include "VTMPManager.h"

class FVTMPEdModeToolkit : public FModeToolkit
{
public:

	FVTMPEdModeToolkit();
	
	/** FModeToolkit interface */
	virtual void Init(const TSharedPtr<IToolkitHost>& InitToolkitHost) override;


	AVTMPManager* Genny;
	FReply Save();
	FReply Load();

	FReply ClickedOnConvertToStaticMesh();

	int NumGen;

	/** IToolkit interface */
	virtual FName GetToolkitFName() const override;
	virtual FText GetBaseToolkitName() const override;
	virtual class FEdMode* GetEditorMode() const override;
	virtual TSharedPtr<class SWidget> GetInlineContent() const override { return ToolkitWidget; }

private:
	TAttributesSet<FVertexID> VertexAttributesSet;
	TArray<TSharedPtr<FString>> ToolNames;

	FVTMPEdMode* EditMode;

	TOptional<float> GetRadius() const
	{
		return EditMode->BrushSize;
	}
	void SetRadius(float Value)
	{
		EditMode->BrushSize = Value;
	}

	TOptional<float> GetStrength() const
	{
		return EditMode->Strength;

	}
	void SetStrength(float Value)
	{
		EditMode->Strength = Value;
	}

	TOptional<float> GetFalloff() const
	{
		return EditMode->BrushFalloff;

	}
	void SetFalloff(float Value)
	{
		EditMode->BrushFalloff = Value;
	}

	void ComboBoxSelectionChanged(TSharedPtr<FString> NewValue, ESelectInfo::Type SelectInfo)
	{
		if (NewValue->Compare(TEXT("Sculpt")) == 0) EditMode->ToolType = EVoxelToolType::Sculpt;
		else if (NewValue->Compare(TEXT("Smooth")) == 0) EditMode->ToolType = EVoxelToolType::Smooth;
		else EditMode->ToolType = EVoxelToolType::Flatten;
	}

	TSharedPtr<SWidget> ToolkitWidget;
};



