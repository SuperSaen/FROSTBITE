

// Copyright Sean Neville, 2020
//#include "C:\Program Files\Epic Games\UE_4.24\Engine\Plugins\Runtime\ProceduralMeshComponent\Source\ProceduralMeshComponent\Public\ProceduralMeshConversion.h"
#include "VTMPEdModeToolkit.h"
#include "VTMPEdMode.h"
#include "VTMPManager.h"
#include "Kismet/GameplayStatics.h"
#include "Widgets/Input/SNumericEntryBox.h"
#include "Widgets/Input/STextComboBox.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Text/STextBlock.h"
#include "Engine/Selection.h"

#include "Dialogs/DlgPickAssetPath.h"
#include "AssetRegistryModule.h"
#include "EditorModeManager.h"

#include "AssetToolsModule.h"

#include "StaticMeshAttributes.h"
//#include "ProceduralMeshConversion.h"
#include "Engine/StaticMeshSocket.h"
#include "MeshDescription.h"

/**
#include "ProceduralMeshComponentDetails.h"
#include "Modules/ModuleManager.h"
#include "Misc/PackageName.h"
#include "Widgets/SNullWidget.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Application/SlateWindowHelper.h"
#include "Engine/StaticMesh.h"
#include "AssetToolsModule.h"
#include "DetailLayoutBuilder.h"
#include "DetailWidgetRow.h"
#include "DetailCategoryBuilder.h"
#include "IDetailsView.h"
#include "ProceduralMeshComponent.h"
#include "StaticMeshAttributes.h"
#include "MeshDescriptionOperations.h"
*/


#define LOCTEXT_NAMESPACE "FVTMPEditorModule"

FVTMPEdModeToolkit::FVTMPEdModeToolkit()
{
}


void FVTMPEdModeToolkit::Init(const TSharedPtr<IToolkitHost>& InitToolkitHost)
{
	ToolNames.Add(TSharedPtr<FString>(new FString(TEXT("Sculpt"))));
	ToolNames.Add(TSharedPtr<FString>(new FString(TEXT("Smooth"))));
	ToolNames.Add(TSharedPtr<FString>(new FString(TEXT("Flatten"))));
	

	EditMode = (FVTMPEdMode*)GLevelEditorModeTools().GetActiveMode(FVTMPEdMode::EM_VTMPEdModeId);

	SAssignNew(ToolkitWidget, SBorder)
		//.HAlign(HAlign_Center)
		.Padding(25)
		
		[
			SNew(SVerticalBox)
			
			// Tool Type
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SHorizontalBox)

			+ SHorizontalBox::Slot()
		.Padding(0, 5.0f, 0, 5.0f)
		.FillWidth(1.0f)
		.VAlign(VAlign_Center)
		[
			SNew(STextBlock)
			.Text(LOCTEXT("Tool", "Tool"))

		]
	+ SHorizontalBox::Slot()
		//.Padding(StandardRightPadding)
		.FillWidth(2.0f)
		.MaxWidth(300.f)
		.VAlign(VAlign_Center)
		[
			SNew(STextComboBox)
			.InitiallySelectedItem(ToolNames[0])
			.OptionsSource(&ToolNames)
			.OnSelectionChanged(this, &FVTMPEdModeToolkit::ComboBoxSelectionChanged)
			

		]
		]

	// Falloff
	+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SHorizontalBox)

			+ SHorizontalBox::Slot()
		.Padding(0, 5.0f, 0, 5.0f)
		.FillWidth(1.0f)
		.VAlign(VAlign_Center)
		[
			SNew(STextBlock)
			.Text(LOCTEXT("Falloff", "Falloff"))

		]
	+ SHorizontalBox::Slot()
		//.Padding(StandardRightPadding)
		.FillWidth(2.0f)
		.MaxWidth(300.f)
		.VAlign(VAlign_Center)
		[
			SNew(SNumericEntryBox<float>)
			//.Font(StandardFont)
		.AllowSpin(true)
		.MinValue(0.0f)
		.MaxValue(100.0f)
		.MaxSliderValue(100.0f)
		.MinDesiredValueWidth(50.0f)
		.SliderExponent(1.0f)
		
		.Value(this, &FVTMPEdModeToolkit::GetFalloff)
		.OnValueChanged(this, &FVTMPEdModeToolkit::SetFalloff)
		]

		]
			// Brush Size
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SHorizontalBox)	

		+ SHorizontalBox::Slot()
		.Padding(0, 5.0f, 0, 5.0f)
		.FillWidth(1.0f)
		.VAlign(VAlign_Center)
		[
			SNew(STextBlock)
			.Text(LOCTEXT("BrushSize", "Brush Size"))
		
		]
	+ SHorizontalBox::Slot()
		//.Padding(StandardRightPadding)
		.FillWidth(2.0f)
		.MaxWidth(300.f)
		.VAlign(VAlign_Center)
			[
				SNew(SNumericEntryBox<float>)
				//.Font(StandardFont)
			.AllowSpin(true)
			.MinValue(0.0f)
			.MaxValue(65536.0f)
			.MaxSliderValue(16384.0f)
			.MinDesiredValueWidth(50.0f)
			.SliderExponent(3.0f)
			.Value(this, &FVTMPEdModeToolkit::GetRadius)
			.OnValueChanged(this, &FVTMPEdModeToolkit::SetRadius)
		
			]
		]
		
	// Strength
	+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SHorizontalBox)

			+ SHorizontalBox::Slot()
		//.Padding(StandardLeftPadding)
		.FillWidth(1.0f)
		.VAlign(VAlign_Center)
		[
			SNew(STextBlock)
			.Text(LOCTEXT("Strength", "Strength"))

		]
	+ SHorizontalBox::Slot()
		//.Padding(StandardRightPadding)
		.FillWidth(2.0f)
		.MaxWidth(300.f)
		.VAlign(VAlign_Center)
		[
			SNew(SNumericEntryBox<float>)
			//.Font(StandardFont)
		.AllowSpin(true)
		.MinValue(-1000.0f)
		.MaxValue(1000.0f)
		.MaxSliderValue(8192.0f)
		.MinDesiredValueWidth(50.0f)
		.SliderExponent(3.0f)
		.Value(this, &FVTMPEdModeToolkit::GetStrength)
		.OnValueChanged(this, &FVTMPEdModeToolkit::SetStrength)

		]
		]
	// Save/Load Buttons
	+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SHorizontalBox)

			+ SHorizontalBox::Slot()
		//.Padding(StandardLeftPadding)
		.FillWidth(1.0f)
		.VAlign(VAlign_Center)
		[
			SNew(STextBlock)
			.Text(LOCTEXT("Save/Load", "Save/Load"))

		]
	+ SHorizontalBox::Slot()
		//.Padding(StandardRightPadding)
		.FillWidth(2.0f)
		.MaxWidth(300.f)
		.VAlign(VAlign_Center)
		[
			SNew(SButton)
			.Text(LOCTEXT("Save", "Save"))
			.OnClicked(this, &FVTMPEdModeToolkit::Save)
		//.Font(StandardFont)

		]
	+ SHorizontalBox::Slot()
		//.Padding(StandardRightPadding)
		.FillWidth(2.0f)
		.MaxWidth(300.f)
		.VAlign(VAlign_Center)
		[
			SNew(SButton)
			.Text(LOCTEXT("Load", "Load"))
			.OnClicked(this, &FVTMPEdModeToolkit::Load)
		//.Font(StandardFont)

		]
		]
	// Save/Load Buttons
	+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SHorizontalBox)

			+ SHorizontalBox::Slot()
		//.Padding(StandardLeftPadding)
		.FillWidth(1.0f)
		.VAlign(VAlign_Center)
		[
			SNew(STextBlock)
			.Text(LOCTEXT("Import/Export", "Import/Export"))

		]
	+ SHorizontalBox::Slot()
		//.Padding(StandardRightPadding)
		.FillWidth(2.0f)
		.MaxWidth(300.f)
		.VAlign(VAlign_Center)
		[
			SNew(SButton)
			.Text(LOCTEXT("Export To Static Mesh", "Export To Static Mesh"))
		.OnClicked(this, &FVTMPEdModeToolkit::ClickedOnConvertToStaticMesh)
		//.Font(StandardFont)

		]
		]

		];
		
	FModeToolkit::Init(InitToolkitHost);
}


TMap<UMaterialInterface*, FPolygonGroupID> BuildMaterialMap(UProceduralMeshComponent* ProcMeshComp, FMeshDescription& MeshDescription)
{
	TMap<UMaterialInterface*, FPolygonGroupID> UniqueMaterials;
	const int32 NumSections = ProcMeshComp->GetNumSections();
	UniqueMaterials.Reserve(NumSections);

	FStaticMeshAttributes AttributeGetter(MeshDescription);
	TPolygonGroupAttributesRef<FName> PolygonGroupNames = AttributeGetter.GetPolygonGroupMaterialSlotNames();
	for (int32 SectionIdx = 0; SectionIdx < NumSections; SectionIdx++)
	{
		FProcMeshSection *ProcSection =
			ProcMeshComp->GetProcMeshSection(SectionIdx);
		UMaterialInterface *Material = ProcMeshComp->GetMaterial(SectionIdx);
		if (!UniqueMaterials.Contains(Material))
		{
			FPolygonGroupID NewPolygonGroup = MeshDescription.CreatePolygonGroup();
			UniqueMaterials.Add(Material, NewPolygonGroup);
			PolygonGroupNames[NewPolygonGroup] = Material->GetFName();
		}
	}
	return UniqueMaterials;
}


FMeshDescription BuildMeshDescription(UProceduralMeshComponent* ProcMeshComp, FVector Offset)
{
	FMeshDescription MeshDescription;
	FStaticMeshAttributes AttributeGetter(MeshDescription);
	AttributeGetter.Register();

	TPolygonGroupAttributesRef<FName> PolygonGroupNames = AttributeGetter.GetPolygonGroupMaterialSlotNames();
	TVertexAttributesRef<FVector> VertexPositions = AttributeGetter.GetVertexPositions();
	TVertexInstanceAttributesRef<FVector> Tangents = AttributeGetter.GetVertexInstanceTangents();
	TVertexInstanceAttributesRef<float> BinormalSigns = AttributeGetter.GetVertexInstanceBinormalSigns();
	TVertexInstanceAttributesRef<FVector> Normals = AttributeGetter.GetVertexInstanceNormals();
	TVertexInstanceAttributesRef<FVector4> Colors = AttributeGetter.GetVertexInstanceColors();
	TVertexInstanceAttributesRef<FVector2D> UVs = AttributeGetter.GetVertexInstanceUVs();

	// Materials to apply to new mesh
	const int32 NumSections = ProcMeshComp->GetNumSections();
	int32 VertexCount = 0;
	int32 VertexInstanceCount = 0;
	int32 PolygonCount = 0;

	TMap<UMaterialInterface*, FPolygonGroupID> UniqueMaterials = BuildMaterialMap(ProcMeshComp, MeshDescription);
	TArray<FPolygonGroupID> PolygonGroupForSection;
	PolygonGroupForSection.Reserve(NumSections);

	// Calculate the totals for each ProcMesh element type
	for (int32 SectionIdx = 0; SectionIdx < NumSections; SectionIdx++)
	{
		FProcMeshSection *ProcSection =
			ProcMeshComp->GetProcMeshSection(SectionIdx);
		VertexCount += ProcSection->ProcVertexBuffer.Num();
		VertexInstanceCount += ProcSection->ProcIndexBuffer.Num();
		PolygonCount += ProcSection->ProcIndexBuffer.Num() / 3;
	}
	MeshDescription.ReserveNewVertices(VertexCount);
	MeshDescription.ReserveNewVertexInstances(VertexInstanceCount);
	MeshDescription.ReserveNewPolygons(PolygonCount);
	MeshDescription.ReserveNewEdges(PolygonCount * 2);
	UVs.SetNumIndices(4);

	// Create the Polygon Groups
	for (int32 SectionIdx = 0; SectionIdx < NumSections; SectionIdx++)
	{
		FProcMeshSection *ProcSection =
			ProcMeshComp->GetProcMeshSection(SectionIdx);
		UMaterialInterface *Material = ProcMeshComp->GetMaterial(SectionIdx);
		FPolygonGroupID *PolygonGroupID = UniqueMaterials.Find(Material);
		check(PolygonGroupID != nullptr);
		PolygonGroupForSection.Add(*PolygonGroupID);
	}


	// Add Vertex and VertexInstance and polygon for each section
	for (int32 SectionIdx = 0; SectionIdx < NumSections; SectionIdx++)
	{
		FProcMeshSection *ProcSection =
			ProcMeshComp->GetProcMeshSection(SectionIdx);
		FPolygonGroupID PolygonGroupID = PolygonGroupForSection[SectionIdx];
		// Create the vertex
		int32 NumVertex = ProcSection->ProcVertexBuffer.Num();
		TMap<int32, FVertexID> VertexIndexToVertexID;
		VertexIndexToVertexID.Reserve(NumVertex);
		for (int32 VertexIndex = 0; VertexIndex < NumVertex; ++VertexIndex)
		{
			FProcMeshVertex &Vert = ProcSection->ProcVertexBuffer[VertexIndex];
			const FVertexID VertexID = MeshDescription.CreateVertex();

			//VertexPositions[VertexID] = Vert.Position;
			VertexPositions[VertexID] = Vert.Position + Offset;
			//UE_LOG(LogTemp, Log, TEXT("add offset: (%d,%d,%d)"), Offset.X, Offset.Y, Offset.Z);
			VertexIndexToVertexID.Add(VertexIndex, VertexID);
		}
		// Create the VertexInstance
		int32 NumIndices = ProcSection->ProcIndexBuffer.Num();
		int32 NumTri = NumIndices / 3;
		TMap<int32, FVertexInstanceID> IndiceIndexToVertexInstanceID;
		IndiceIndexToVertexInstanceID.Reserve(NumVertex);
		for (int32 IndiceIndex = 0; IndiceIndex < NumIndices; IndiceIndex++)
		{
			const int32 VertexIndex = ProcSection->ProcIndexBuffer[IndiceIndex];
			const FVertexID VertexID = VertexIndexToVertexID[VertexIndex];
			const FVertexInstanceID VertexInstanceID =
				MeshDescription.CreateVertexInstance(VertexID);
			IndiceIndexToVertexInstanceID.Add(IndiceIndex, VertexInstanceID);

			FProcMeshVertex &ProcVertex = ProcSection->ProcVertexBuffer[VertexIndex];

			Tangents[VertexInstanceID] = ProcVertex.Tangent.TangentX;
			Normals[VertexInstanceID] = ProcVertex.Normal;
			BinormalSigns[VertexInstanceID] =
				ProcVertex.Tangent.bFlipTangentY ? -1.f : 1.f;

			Colors[VertexInstanceID] = FLinearColor(ProcVertex.Color);

			UVs.Set(VertexInstanceID, 0, ProcVertex.UV0);
			UVs.Set(VertexInstanceID, 1, ProcVertex.UV1);
			UVs.Set(VertexInstanceID, 2, ProcVertex.UV2);
			UVs.Set(VertexInstanceID, 3, ProcVertex.UV3);
		}

		// Create the polygons for this section
		for (int32 TriIdx = 0; TriIdx < NumTri; TriIdx++)
		{
			FVertexID VertexIndexes[3];
			TArray<FVertexInstanceID> VertexInstanceIDs;
			VertexInstanceIDs.SetNum(3);

			for (int32 CornerIndex = 0; CornerIndex < 3; ++CornerIndex)
			{
				const int32 IndiceIndex = (TriIdx * 3) + CornerIndex;
				const int32 VertexIndex = ProcSection->ProcIndexBuffer[IndiceIndex];
				VertexIndexes[CornerIndex] = VertexIndexToVertexID[VertexIndex];
				VertexInstanceIDs[CornerIndex] =
					IndiceIndexToVertexInstanceID[IndiceIndex];
			}

			// Insert a polygon into the mesh
			MeshDescription.CreatePolygon(PolygonGroupID, VertexInstanceIDs);
		}
	}
	return MeshDescription;
}

FReply FVTMPEdModeToolkit::ClickedOnConvertToStaticMesh()
{
	// Find first Generator
	TMap<FVector, AVTMPChunk*> FoundTVMPActors;
	TArray<AActor*> FoundActors;
	UWorld* World = GEngine->GetWorldContexts()[0].World();
	UGameplayStatics::GetAllActorsOfClass(World, AVTMPManager::StaticClass(), FoundActors);
	NumGen = 0;
	for (AActor* TActor : FoundActors)
	{
		Genny = Cast<AVTMPManager>(TActor);

		if (Genny != nullptr)
		{
			NumGen++;
			UE_LOG(LogTemp, Log, TEXT("Found %d"), NumGen);
			FoundTVMPActors = Genny->CreatedActors;
			UE_LOG(LogTemp, Log, TEXT("Attempt Convert Manager %d"), NumGen);
			break;
		}
	}

	FString NewNameSuggestion = FString(TEXT("ProcMesh"));
	FString PackageName = FString(TEXT("/Game/Meshes/")) + NewNameSuggestion;
	FString Name;
	FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");
	AssetToolsModule.Get().CreateUniqueAssetName(PackageName, TEXT(""), PackageName, Name);

	TSharedPtr<SDlgPickAssetPath> PickAssetPathWidget =
		SNew(SDlgPickAssetPath)
		.Title(LOCTEXT("ConvertToStaticMeshPickName", "Choose New StaticMesh Location"))
		.DefaultAssetPath(FText::FromString(PackageName));
	
	if (PickAssetPathWidget->ShowModal() == EAppReturnType::Ok)
	{
		int index = 0;
		FString indText;
		for (auto Elem : FoundTVMPActors)
		{
			index++;

			indText = FString::FromInt(index);
			// Get the full name of where we want to create the physics asset.
			FString UserPackageName = PickAssetPathWidget->GetFullAssetPath().ToString();
			FName MeshName(*FPackageName::GetLongPackageAssetName(UserPackageName).Append(indText));
			UE_LOG(LogTemp, Log, TEXT("terrain actor: %d"), index);
			UProceduralMeshComponent* ProcMeshComp = Elem.Value->ProceduralMesh;
			if (ProcMeshComp != nullptr)
			{
				UserPackageName = PackageName;

				// If we got some valid data.
				if (BuildMeshDescription(ProcMeshComp, FVector(0,0,0)).Polygons().Num() > 0)
				{
					UPackage* Package = CreatePackage(NULL, *UserPackageName);
					check(Package);
					// Create StaticMesh object
					UStaticMesh* NewStaticMesh = NewObject<UStaticMesh>(Package, MeshName, RF_Public | RF_Standalone);
					NewStaticMesh->InitResources();
					
					NewStaticMesh->LightingGuid = FGuid::NewGuid();
					// Add source to new StaticMesh
					FStaticMeshSourceModel& SrcModel = NewStaticMesh->AddSourceModel();
					SrcModel.BuildSettings.bRecomputeNormals = false;
					SrcModel.BuildSettings.bRecomputeTangents = false;
					SrcModel.BuildSettings.bRemoveDegenerates = false;
					SrcModel.BuildSettings.bUseHighPrecisionTangentBasis = false;
					SrcModel.BuildSettings.bUseFullPrecisionUVs = false;
					SrcModel.BuildSettings.bGenerateLightmapUVs = true;
					SrcModel.BuildSettings.SrcLightmapIndex = 0;
					SrcModel.BuildSettings.DstLightmapIndex = 1;


					if (Genny != nullptr)
					{
						int OffsetScale = Elem.Value->ComponentSizeVoxels * Elem.Value->voxelSize / 2;
						FVector MeshOffset = FVector(Genny->ComponentsX, Genny->ComponentsY, Genny->ComponentsZ) * OffsetScale;
						FVector MeshLocation = (Elem.Key + FVector(0.5f)) * Elem.Value->ComponentSizeVoxels * Elem.Value->voxelSize - MeshOffset;
						UE_LOG(LogTemp, Log, TEXT("mesh description with offset: (%d,%d,%d)"), MeshLocation.X, MeshLocation.Y, MeshLocation.Z);
						NewStaticMesh->CreateMeshDescription(0, (BuildMeshDescription(ProcMeshComp, MeshLocation)));
						NewStaticMesh->CommitMeshDescription(0);

						TSet<UMaterialInterface*> UniqueMaterials;
						const int32 NumSections = ProcMeshComp->GetNumSections();
						for (int32 SectionIdx = 0; SectionIdx < NumSections; SectionIdx++)
						{
							FProcMeshSection *ProcSection =
								ProcMeshComp->GetProcMeshSection(SectionIdx);
							UMaterialInterface *Material = ProcMeshComp->GetMaterial(SectionIdx);
							UniqueMaterials.Add(Material);
						}
						// Copy materials to new mesh
						for (auto* Material : UniqueMaterials)
						{
							NewStaticMesh->StaticMaterials.Add(FStaticMaterial(Material, Material->GetFName(), Material->GetFName()));
						}

						//Set the Imported version before calling the build
						NewStaticMesh->ImportVersion = EImportStaticMeshVersion::LastVersion;

						// Build mesh from source
						NewStaticMesh->Build(false);
						NewStaticMesh->PostEditChange();
						//MergeStaticMesh(MasterMesh, NewStaticMesh, FMergeStaticMeshParams());

						// Notify asset registry of new asset
						FAssetRegistryModule::AssetCreated(NewStaticMesh);
					}
				}
			}
		}

	}


	return FReply::Handled();
}

FReply FVTMPEdModeToolkit::Save() 
{
	TArray<AActor*> FoundActors;
	UWorld* World = GEngine->GetWorldContexts()[0].World();
	UGameplayStatics::GetAllActorsOfClass(World, AVTMPManager::StaticClass(), FoundActors);
	NumGen = 0;
	for (AActor* TActor : FoundActors)
	{
		AVTMPManager* Genny = Cast<AVTMPManager>(TActor);

		if (Genny != nullptr)
		{
			NumGen++;
			UE_LOG(LogTemp, Log, TEXT("%d"), NumGen);
			Genny->Save(NumGen);
			UE_LOG(LogTemp, Log, TEXT("Attempt Save %d"), NumGen);
		}
	}
	return FReply::Handled();
}

FReply FVTMPEdModeToolkit::Load()
{
	return FReply::Handled();
	TArray<AActor*> FoundActors;
	UWorld* World = GEngine->GetWorldContexts()[0].World();
	UGameplayStatics::GetAllActorsOfClass(World, AVTMPManager::StaticClass(), FoundActors);
	NumGen = 0;
	for (AActor* TActor : FoundActors)
	{
		AVTMPManager* Genny = Cast<AVTMPManager>(TActor);

		if (Genny != nullptr)
		{
			NumGen++;
			UE_LOG(LogTemp, Log, TEXT("%d"), NumGen);
			Genny->Load(NumGen);
			UE_LOG(LogTemp, Log, TEXT("Attempt Load %d"), NumGen);
		}
	}
}



FName FVTMPEdModeToolkit::GetToolkitFName() const
{
	return FName("VTMPTestEdMode");
}

FText FVTMPEdModeToolkit::GetBaseToolkitName() const
{
	return NSLOCTEXT("VTMPEdModeToolkit", "DisplayName", "VTMPEdMode Tool");
}

class FEdMode* FVTMPEdModeToolkit::GetEditorMode() const
{
	return GLevelEditorModeTools().GetActiveMode(FVTMPEdMode::EM_VTMPEdModeId);
}

#undef LOCTEXT_NAMESPACE
