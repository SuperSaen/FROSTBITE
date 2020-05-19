// Fill out your copyright notice in the Description page of Project Settings.
// Copyright Sean Neville, 2020

#include "VTMPManager.h"
#include "VTMP/Public/Noise.h"
#include "VTMPChunk.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "TimerManager.h"
#include "Async/Async.h"
#include "Components/MeshComponent.h"
#include "Components/InstancedStaticMeshComponent.h"


void AVTMPManager::GenerateTerrainAroundPawn()
{
	APawn* Pawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (!Pawn) return;

	FDateTime Before = FDateTime::Now();

	TArray<FVector> indexes = GetOverlappingVoxelComponentsIndexes(Pawn->GetActorLocation(), DistanceFromPawn, DistanceFromPawnZ);

	queuedActorsToSpawn.Empty();

	int i = 0;
	for (FVector index : indexes)
	{
		if (!CreatedActors.Contains(index))
		{
			queuedActorsToSpawn.Add(index);
			i++;
		}
	}

	//UE_LOG(LogTemp, Log, TEXT("creating comps: %d"), i);
}

TArray<AVTMPChunk*> AVTMPManager::SculptInRadius(EVoxelToolType Tool, FVector WorldLocation, float RadiusUnits, float toolPower, float Falloff, bool bRemoveFoliage)
{
	if (bRemoveFoliage)
	{
		RemoveFoliageInRadius(WorldLocation, RadiusUnits);
	}

	TArray<AVTMPChunk*> actors = GetOverlappingVoxelComponents(WorldLocation, RadiusUnits);

	//UE_LOG(LogTemp, Log, TEXT("num components: %d"), actors.Num());

	for (AVTMPChunk* TerrainActor : actors)
	{
		TerrainActor->SculptTerrain(Tool, WorldLocation, RadiusUnits, toolPower, Falloff);
	}

	return actors;
}

void AVTMPManager::LoadRemovedFoliage(TArray<FRemovedFoliage> InRemovedFoliage)
{
	RemovedFoliage = InRemovedFoliage;

	int i = 0;

	for (auto FoliageComponent : Foliage)
	{
		if (FoliageComponent) FoliageComponent->RemoveInstances(RemovedFoliage[i].instances);
		
		i++;
	}
}

TArray<FChangedVoxels> AVTMPManager::GetChangedVoxels()
{
	TArray<FChangedVoxels> Output;

	for (auto pair : CreatedActors)
	{
		Output.Add(pair.Value->ChangedVoxelsData);
	}

	return Output;
}

/**
UStaticMesh* AVTMPManager::GetStaticFromProceduralMesh(TMap<FVector, AVTMPTerrainActor*>CreatedActors)
{

	//UStaticMesh = UStaticMesh::create
	int Index;
	for (auto Elem : CreatedActors)
	{
		Index++;
		AVTMPTerrainActor* TerrainActor = Elem.Value;
		UProceduralMeshComponent* ProcMeshComp = TerrainActor->ProceduralMesh;
		// Find first selected ProcMeshComp
		if (ProcMeshComp != nullptr)

		{
			FString ActorName = ProcMeshComp->GetOwner()->GetName();
			FString LevelName = ProcMeshComp->GetWorld()->GetMapName();
			FString AssetName = FString(TEXT("SM_%d_"), Index) + LevelName + FString(TEXT("_") + ActorName);
			FString PathName = FString(TEXT("/Game/TestVoxelMeshes/"));
			FString PackageName = PathName + AssetName;

			// Raw mesh data we are filling in
			FRawMesh RawMesh;
			// Materials to apply to new mesh
			TArray<UMaterialInterface*> MeshMaterials;

			const int32 NumSections = ProcMeshComp->GetNumSections();
			int32 VertexBase = 0;
			for (int32 SectionIdx = 0; SectionIdx < NumSections; SectionIdx++)
			{
				FProcMeshSection* ProcSection = ProcMeshComp->GetProcMeshSection(SectionIdx);

				// Copy verts
				for (FProcMeshVertex& Vert : ProcSection->ProcVertexBuffer)
				{
					RawMesh.VertexPositions.Add(Vert.Position);
				}

				// Copy 'wedge' info
				int32 NumIndices = ProcSection->ProcIndexBuffer.Num();
				for (int32 IndexIdx = 0; IndexIdx < NumIndices; IndexIdx++)
				{
					int32 Index = ProcSection->ProcIndexBuffer[IndexIdx];

					RawMesh.WedgeIndices.Add(Index + VertexBase);

					FProcMeshVertex& ProcVertex = ProcSection->ProcVertexBuffer[Index];

					FVector TangentX = ProcVertex.Tangent.TangentX;
					FVector TangentZ = ProcVertex.Normal;
					FVector TangentY = (TangentX ^ TangentZ).GetSafeNormal() * (ProcVertex.Tangent.bFlipTangentY ? -1.f : 1.f);

					RawMesh.WedgeTangentX.Add(TangentX);
					RawMesh.WedgeTangentY.Add(TangentY);
					RawMesh.WedgeTangentZ.Add(TangentZ);

					RawMesh.WedgeTexCoords[0].Add(ProcVertex.UV0);
					RawMesh.WedgeColors.Add(ProcVertex.Color);
				}

				// copy face info
				int32 NumTris = NumIndices / 3;
				for (int32 TriIdx = 0; TriIdx < NumTris; TriIdx++)
				{
					RawMesh.FaceMaterialIndices.Add(SectionIdx);
					RawMesh.FaceSmoothingMasks.Add(0); // Assume this is ignored as bRecomputeNormals is false
				}

				// Remember material
				MeshMaterials.Add(ProcMeshComp->GetMaterial(SectionIdx));

				// Update offset for creating one big index/vertex buffer
				VertexBase += ProcSection->ProcVertexBuffer.Num();

				// If we got some valid data.
				if (RawMesh.VertexPositions.Num() > 3 && RawMesh.WedgeIndices.Num() > 3)
				{
					// Then find/create it.
					UPackage* Package = CreatePackage(NULL, *PackageName);
					check(Package);

					// Create StaticMesh object
					UStaticMesh* StaticMesh = NewObject<UStaticMesh>(Package, FName(*AssetName), RF_Public | RF_Standalone);
					StaticMesh->InitResources();

					StaticMesh->LightingGuid = FGuid::NewGuid();

					// Add source to new StaticMesh
					FStaticMeshSourceModel& SrcModel = StaticMesh->AddSourceModel();
					SrcModel.BuildSettings.bRecomputeNormals = false;
					SrcModel.BuildSettings.bRecomputeTangents = false;
					SrcModel.BuildSettings.bRemoveDegenerates = false;
					SrcModel.BuildSettings.bUseHighPrecisionTangentBasis = false;
					SrcModel.BuildSettings.bUseFullPrecisionUVs = false;
					SrcModel.BuildSettings.bGenerateLightmapUVs = true;
					SrcModel.BuildSettings.SrcLightmapIndex = 0;
					SrcModel.BuildSettings.DstLightmapIndex = 1;
					SrcModel.SaveRawMesh(RawMesh);

					// Copy materials to new mesh
					for (UMaterialInterface* Material : MeshMaterials)
					{
						StaticMesh->StaticMaterials.Add(FStaticMaterial(Material));
					}

					//Set the Imported version before calling the build
					StaticMesh->ImportVersion = EImportStaticMeshVersion::LastVersion;

					// Build mesh from source
					StaticMesh->Build(false);
					StaticMesh->PostEditChange();

					// Notify asset registry of new asset
					FAssetRegistryModule::AssetCreated(StaticMesh);

					return StaticMesh;
				}
			}
		}
		else
		{
			return nullptr;
		}
	}

}*/

void AVTMPManager::SaveTerrainMesh()
{
}

void AVTMPManager::LoadChangedVoxels(TArray<FChangedVoxels> InChangedVoxels)
{
	int i = 0;

	for (auto pair : CreatedActors)
	{
		pair.Value->ChangedVoxelsData = InChangedVoxels[i];

		pair.Value->LoadChangedVoxels();

		i++;
	}

	for (auto pair : CreatedActors)
	{
		pair.Value->CalculateAndCreateMesh(false);		
	}
}

void AVTMPManager::RemoveFoliageInRadius(FVector WorldLocation, float RadiusUnits)
{
	int i = 0;
	for (auto FoliageComponent : Foliage)
	{
		TArray<int32> instances = FoliageComponent->GetInstancesOverlappingSphere(WorldLocation, RadiusUnits);
		if (FoliageComponent) FoliageComponent->RemoveInstances(instances);

		if ((bReplicateTerrain  && GetLocalRole() == ROLE_Authority) || bStoreChanges)
		{
			for (int32 instance : instances)
			{
				if (RemovedFoliage.Num() >= 0) RemovedFoliage[i].instances.Add(instance);
			}			
		}

		i++;
	}
}

void AVTMPManager::Generate()
{
	if (bRandomSeed) Seed = FMath::Rand();

	UNoise::SetNoiseSeed(Seed);

	for (auto FoliageComponent : Foliage)
	{
		if (FoliageComponent) FoliageComponent->DestroyComponent();
	}
	
	Foliage.Empty();
	RemovedFoliage.Empty();

	for (auto Pair : CreatedActors)
	{
		auto Actor = Pair.Value;
		
		if (Actor)
		{
			Actor->Destroy();
		}		
	}

	CreatedActors.Empty();

	GEngine->DeferredCommands.Add(TEXT("obj gc")); //collect garbage

	for (int z = 0; z < ComponentsZ; z++)
	{
		for (int y = 0; y < ComponentsY; y++)
		{
			for (int x = 0; x < ComponentsX; x++)
			{				
				AddVoxelComponent(FVector(x, y, z));
			}
		}
	}

	if (bGenerate) GetWorld()->GetTimerManager().SetTimer(GenerationTimerHandle, this, &AVTMPManager::GenerateTerrainAroundPawn, TickSeconds, true);
}

void AVTMPManager::GetChunkNeighbors()
{
	for (auto Pair : CreatedActors)
	{
		UE_LOG(LogTemp, Log, TEXT("Getting Neighbors"));
		Pair.Value->GetNeighbors(Pair.Key);
	}
}

void AVTMPManager::Clear()
{
	for (auto FoliageComponent : Foliage)
	{
		if (FoliageComponent) FoliageComponent->DestroyComponent();
	}

	Foliage.Empty();
	RemovedFoliage.Empty();

	for (auto Pair : CreatedActors)
	{
		auto Actor = Pair.Value;

		if (Actor)
		{
			Actor->Destroy();
		}
	}

	CreatedActors.Empty();
}

bool AVTMPManager::HasUnfinishedTasks()
{
	for (auto TerrainActor : CreatedActors)
	{
		if (TerrainActor.Value->Task) return true;
	}

	return false;
}

void AVTMPManager::PlaceFoliage()
{
	ClearFoliage();

	for (auto FoliageType : FoliageToSpawn)
	{
		PlaceFoliageType(FoliageType.StaticMesh, FoliageType.Amount);
	}
}

void AVTMPManager::ClearFoliage()
{
	for (auto FoliageComponent : Foliage)
	{
		if (FoliageComponent) FoliageComponent->DestroyComponent();
	}

	Foliage.Empty();	
}

void AVTMPManager::Save(int SaveIndex)
{
	UE_LOG(LogTemp, Log, TEXT("Saving Genny"));
	//create savegame object for generator
	//save the savegame instance
	UE_LOG(LogTemp, Log, TEXT("Saved Genny %d"), SaveIndex);
}

void AVTMPManager::Load(int LoadIndex)
{
	UE_LOG(LogTemp, Log, TEXT("Loading Genny"));

	UE_LOG(LogTemp, Log, TEXT("Loaded Genny %d"), LoadIndex);
	//Need to set all variables then Generate Terrain
}

void AVTMPManager::PlaceFoliageType(UStaticMesh* Mesh, float Amount, AVTMPChunk* InTerrainActor)
{
	if (InTerrainActor && !(InTerrainActor->bHasPositive && InTerrainActor->bHasPositive)) return;

	UHierarchicalInstancedStaticMeshComponent* FoliageComponent = NULL;

	//for (auto FoliageComp : Foliage) //temporarily disabled because of a flickering bug in packaged game
	//{
	//	if (FoliageComp && FoliageComp->GetStaticMesh() == Mesh) FoliageComponent = FoliageComp;
	//}

	if (!FoliageComponent)
	{
		FoliageComponent = NewObject<UHierarchicalInstancedStaticMeshComponent>(this, NAME_None);

		FoliageComponent->RegisterComponent();

		Foliage.Add(FoliageComponent);

		FRemovedFoliage newRemovedFoliage;
		RemovedFoliage.Add(newRemovedFoliage);

		FoliageComponent->SetStaticMesh(Mesh);
	}	
		
	float half = ComponentSizeVoxels * voxelSize / 2;

	if (!InTerrainActor) Amount *= ComponentsX * ComponentsY;
	

	for (int32 i = 0; i <= Amount; i++ )
	{
		FVector Location;
		if (InTerrainActor)
		{
			Location = FVector(FMath::RandRange(InTerrainActor->GetActorLocation().X - half, InTerrainActor->GetActorLocation().X + half),
				FMath::RandRange(InTerrainActor->GetActorLocation().Y - half, InTerrainActor->GetActorLocation().Y + half),
			0);
		}
		else Location = FVector(FMath::RandRange(0.0f, (float)ComponentSizeVoxels * voxelSize * ComponentsX),
			FMath::RandRange(0.0f, (float)ComponentSizeVoxels * voxelSize * ComponentsY),
			0) - Offset;
				
		FVector Start = Location + FVector(0, 0, 10000);
		FVector End = Location + FVector(0, 0, -10000);

		FHitResult Hit;

		if (GetWorld()->LineTraceSingleByObjectType(Hit, Start, End, ECC_WorldStatic))	
		{
			AVTMPChunk* TerrainActor = Cast<AVTMPChunk>(Hit.GetActor());

			if (TerrainActor)
			{
				if (InTerrainActor && (InTerrainActor != TerrainActor)) continue; 
			

				if (Hit.Location.Z >= FoliageMinZ && Hit.Normal.Z > 0.9f) //check Z and maximum slope
				{						
					bool bFlat = true;
					
					float scale = FMath::RandRange(0.7f, 2.5f);

					//if (instanceRadius > 0)
					//{
					//	float extents = instanceRadius * scale;
					//	TArray<FVector> toCheck{ Start + FVector(-extents, extents, 0), Start + FVector(extents, extents, 0), Start + FVector(extents, -extents, 0), Start + FVector(-extents, -extents, 0) };


					//	for (FVector vector : toCheck)
					//	{
					//		FHitResult HitSlope;

					//		bool bHit = GetWorld()->LineTraceSingleByObjectType(HitSlope, vector, vector + FVector(0, 0, -10000), ECC_WorldStatic);

					//		if (!bHit)  // || FMath::Abs(HitSlope.Location.Z - Hit.Location.Z) > (15.0f * scale) || !(HitSlope.Normal.Z > 0.9)
					//		{
					//			//UE_LOG(LogTemp, Log, TEXT("vector: %s, hit: %d, z: %f, center z :%f"), *vector.ToString(), HitSlope.bBlockingHit, HitSlope.Location.Z, Hit.Location.Z);
					//			bFlat = false;
					//			break;
					//		}
					//	}
					//}				

					if (bFlat)
					{
						float yaw = FMath::RandRange(-180.0f, 180.0f);
						
						float pitch = 0; // FMath::RandRange(-2.0f, 2.0f);
						
						float scaleXY = scale;

						FTransform Transform = FTransform(FRotator(pitch, yaw, 0), Hit.Location + FVector(0, 0, -10), FVector(scaleXY, scaleXY, scale));
						FoliageComponent->AddInstanceWorldSpace(Transform);
						//UE_LOG(LogTemp, Log, TEXT("added instance"));
					}
					
				}
			}
		}
	}
}

AVTMPChunk* AVTMPManager::AddVoxelComponent(FVector index, bool bFoliage)
{	
		Offset = FVector(ComponentsX, ComponentsY, ComponentsZ) * ComponentSizeVoxels * voxelSize / 2;
		FVector Location = (index + FVector(0.5f)) * ComponentSizeVoxels * voxelSize - Offset;

		int tx, ty, tz;
		tx = Location.X;
		ty = Location.Y;
		tz = Location.Z;
		UE_LOG(LogTemp, Log, TEXT("Index: %d,%d,%d"), tx, ty, tz);
		
	
		FRotator Rotation(0.0f, 0.0f, 0.0f);

		FActorSpawnParameters SpawnInfo;
		SpawnInfo.Owner = this; //for world composition
		AVTMPChunk* NewTerrainActor = GetWorld()->SpawnActor<AVTMPChunk>(Location, Rotation, SpawnInfo);
		CreatedActors.Add(index, NewTerrainActor);

		NewTerrainActor->SetChunkLocation(index);
		
		NewTerrainActor->Initialize(this, ComponentSizeVoxels, ComponentsX, ComponentsY, ComponentsZ, index, initialFrequency, initialAmplitude, numOctaves, bSphere, sphereRadiusUnits, voxelSize);
		NewTerrainActor->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
		
		//for (int i = 0; i <= NewTerrainActor->ProceduralMesh->GetNumMaterials(); i++)
		//{
		//	UMaterialInterface* NewMaterial = Material[i];
		//	NewTerrainActor->ProceduralMesh->SetMaterial(i, NewMaterial);
		//}
		
		NewTerrainActor->GenerateDensityAndCreateMeshAsync(bFoliage);

		return NewTerrainActor;
}


TArray<AVTMPChunk*> AVTMPManager::GetOverlappingVoxelComponents(FVector WorldLocation, float RadiusUnits)
{
	TArray<AVTMPChunk*> Output;

	for (FVector vector : GetOverlappingVoxelComponentsIndexes(WorldLocation, RadiusUnits, RadiusUnits))
	{
		if (CreatedActors.Contains(vector))
		{
			if (CreatedActors[vector]) Output.Add(CreatedActors[vector]);
		}		
	}

	return Output;
}


TArray<FVector> AVTMPManager::GetOverlappingVoxelComponentsIndexes(FVector Bounds, float RadiusUnits, float RadiusUnitsZ)
{
	TArray<FVector> Output;

	float half = ComponentSizeVoxels * voxelSize / 2.0f;
	
	//FVector RelativeLocation = WorldLocation - GetActorLocation() + Offset;
	FVector OverlapBounds = Bounds;

	//UE_LOG(LogTemp, Log, TEXT("relative location: %s"), *RelativeLocation.ToString());

	FVector CellLocation = OverlapBounds / (ComponentSizeVoxels * voxelSize);

	float radiusCells = RadiusUnits / (ComponentSizeVoxels * voxelSize);
	float radiusCellsZ = RadiusUnitsZ / (ComponentSizeVoxels * voxelSize);
	
	int32 XcellMin = FMath::FloorToInt(CellLocation.X - radiusCells);
	int32 XcellMax = FMath::FloorToInt(CellLocation.X + radiusCells);	

	int32 YcellMin = FMath::FloorToInt(CellLocation.Y - radiusCells);
	int32 YcellMax = FMath::FloorToInt(CellLocation.Y + radiusCells);

	int32 ZcellMin = FMath::FloorToInt(CellLocation.Z - radiusCellsZ);
	int32 ZcellMax = FMath::FloorToInt(CellLocation.Z + radiusCellsZ);

	for (int z = ZcellMin; z <= ZcellMax; z++)
	{
		for (int y = YcellMin; y <= YcellMax; y++)
		{
			for (int x = XcellMin; x <= XcellMax; x++)
			{
				Output.Add(FVector(x, y, z));
				//UE_LOG(LogTemp, Log, TEXT("%s "), *FVector(x, y, z).ToString());
			}
		}
	}


	return Output;
}

//you were here, get the voxel veriecies at the edge
TArray<FVector> AVTMPManager::GetOverlappingVoxelVertices(FVector BoundsMin, FVector BoundsMax)
{
	TArray<FVector> Output;

	float half = ComponentSizeVoxels * voxelSize / 2.0f;

	//FVector RelativeLocation = WorldLocation - GetActorLocation() + Offset;
	FVector OverlapBoundsMin = BoundsMin;
	FVector OverlapBoundsMax = BoundsMax;

	//UE_LOG(LogTemp, Log, TEXT("relative location: %s"), *RelativeLocation.ToString());

	FVector CellLocationMin = BoundsMin / (ComponentSizeVoxels * voxelSize);
	FVector CellLocationMax = BoundsMax / (ComponentSizeVoxels * voxelSize);

	int32 XcellMin = FMath::FloorToInt(BoundsMin.X);
	int32 XcellMax = FMath::FloorToInt(BoundsMax.X);

	int32 YcellMin = FMath::FloorToInt(BoundsMin.Y);
	int32 YcellMax = FMath::FloorToInt(BoundsMax.Y);

	int32 ZcellMin = FMath::FloorToInt(BoundsMin.Z);
	int32 ZcellMax = FMath::FloorToInt(BoundsMax.Z);

	for (int z = ZcellMin; z <= ZcellMax; z++)
	{
		for (int y = YcellMin; y <= YcellMax; y++)
		{
			for (int x = XcellMin; x <= XcellMax; x++)
			{
				Output.Add(FVector(x, y, z));
				//UE_LOG(LogTemp, Log, TEXT("%s "), *FVector(x, y, z).ToString());
			}
		}
	}


	return Output;
}

AVTMPManager::AVTMPManager()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 0.02;

	USceneComponent* NewRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	NewRootComponent->Mobility = EComponentMobility::Movable;
	
	NewRootComponent->SetWorldTransform(GetActorTransform());

	SetRootComponent(NewRootComponent);
}

void AVTMPManager::BeginPlay()
{	
	Super::BeginPlay();

	UNoise::SetNoiseSeed(Seed);

	if (bGenerate) GetWorld()->GetTimerManager().SetTimer(GenerationTimerHandle, this, &AVTMPManager::GenerateTerrainAroundPawn, TickSeconds, true);

	for (auto foliagecomp : Foliage)
	{
		FRemovedFoliage newRemovedFoliage;
		RemovedFoliage.Add(newRemovedFoliage);
	}	
}

void AVTMPManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (queuedActorsToSpawn.Num() > 0)
	{
		AddVoxelComponent(queuedActorsToSpawn[0], bWithFoliage);
		queuedActorsToSpawn.RemoveAt(0);
	}
	
}



