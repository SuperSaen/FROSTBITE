// Copyright Sean Neville, 2020

#include "VTMPChunk.h"
#include "VTMP/Public/Noise.h"
#include "Async/Async.h"
#include "Net/UnrealNetwork.h"
#include "AI/NavigationSystemBase.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
//#include "AI/Navigation/NavigationSystem.h"
#include "VTMPManager.h"

// Sets default values
AVTMPChunk::AVTMPChunk()
{
	USceneComponent* NewRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	NewRootComponent->Mobility = EComponentMobility::Movable;
	NewRootComponent->SetWorldTransform(GetActorTransform());
	SetRootComponent(NewRootComponent);
	ProceduralMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("ProceduralMesh"));
	
	

	ProceduralMesh->AttachToComponent(NewRootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	PrimaryActorTick.bCanEverTick = false;
	bReplicates = false;
	NetCullDistanceSquared = 6062 * 6062;	
}

// Called when the game starts or when spawned
void AVTMPChunk::BeginPlay()
{
	Super::BeginPlay();

	//UE_LOG(LogTemp, Log, TEXT("%d"), Voxels.Num());
}

void AVTMPChunk::BeginDestroy()
{
	//UE_LOG(LogTemp, Log, TEXT("begin destroy"));

	Super::BeginDestroy();
		
	if (Task)
	{
		Task->Cancel();		
	}
}
void AVTMPChunk::SetChunkLocation(FVector Loc)
{
	ChunkLocation = Loc;
}

FVector AVTMPChunk::GetChunkLocation()
{
	return ChunkLocation;
}

void AVTMPChunk::GetNeighbors(FVector index)
{
	TArray<AActor*>FoundActors;
	AVTMPChunk* Neighbor0;
	AVTMPChunk* Neighbor1;
	AVTMPChunk* Neighbor2;
	AVTMPChunk* Neighbor3;
	AVTMPChunk* Neighbor4;
	AVTMPChunk* Neighbor5;
	AVTMPChunk* Neighbor6;
	AVTMPChunk* Neighbor7;
	AVTMPChunk* Neighbor8;
	AVTMPChunk* Neighbor9;
	AVTMPChunk* Neighbor10;
	AVTMPChunk* Neighbor11;
	AVTMPChunk* Neighbor12;
	AVTMPChunk* Neighbor13;
	AVTMPChunk* Neighbor14;
	AVTMPChunk* Neighbor15;
	AVTMPChunk* Neighbor16;
	AVTMPChunk* Neighbor17;
	AVTMPChunk* Neighbor18;
	AVTMPChunk* Neighbor19;
	AVTMPChunk* Neighbor20;
	AVTMPChunk* Neighbor21;
	AVTMPChunk* Neighbor22;
	AVTMPChunk* Neighbor23;
	AVTMPChunk* Neighbor24;
	AVTMPChunk* Neighbor25;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AVTMPChunk::StaticClass(), FoundActors);
	for (AActor* TActor : FoundActors)
	{
		AVTMPChunk* FoundChunk = Cast<AVTMPChunk>(TActor);
		int NumCnk = 0;
		if (FoundChunk != nullptr)
		{
			//FVector ChunkIndex = FoundChunk->compIndex;
			NumCnk++;
			//FoundChunk = Genny->CreatedActors;
			if (FoundChunk != nullptr)
			{
				FVector ChunkIndex = FoundChunk->GetChunkLocation()-index;
				NumCnk++;
				TArray<AVTMPChunk*> Neighbors;
				UE_LOG(LogTemp, Log, TEXT("Found Chunk %d"), *FoundChunk->GetName());
				//FoundChunk = Genny->CreatedActors;
				int neighbor = CheckForNeighbor(ChunkIndex, index);
				int x, y, z,tx,ty,tz;
				x = ChunkIndex.X;
				y = ChunkIndex.Y;
				z = ChunkIndex.Z;
				tx = index.X;
				ty = index.Y;
				tz = index.Z;
				UE_LOG(LogTemp, Log, TEXT("Checking Chunk %d with index: (X:%d,Y:%d,Z:%d) at delta index: (X:%d,Y:%d,Z:%d)"), *FoundChunk->GetName(), tx, ty, tz, x, y, z);
				switch (neighbor)
				{
				case 0:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor0 = FoundChunk;
					break;
				case 1:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor1 = FoundChunk;
					break;
				case 2:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor2 = FoundChunk;
					break;
				case 3:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor3 = FoundChunk;
					break;
				case 4:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor4 = FoundChunk;
					break;
				case 5:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor5 = FoundChunk;
					break;
				case 6:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor6 = FoundChunk;
					break;
				case 7:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor7 = FoundChunk;
					break;
				case 8:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor8 = FoundChunk;
					break;
				case 9:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor9 = FoundChunk;
					break;
				case 10:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor10 = FoundChunk;
					break;
				case 11:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor11 = FoundChunk;
					break;
				case 12:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor12 = FoundChunk;
					break;
				case 13:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor13 = FoundChunk;
					break;
				case 14:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor14 = FoundChunk;
					break;
				case 15:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor15 = FoundChunk;
					break;
				case 16:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor16 = FoundChunk;
					break;
				case 17:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor17 = FoundChunk;
					break;
				case 18:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor18 = FoundChunk;
					break;
				case 19:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor19 = FoundChunk;
					break;
				case 20:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor20 = FoundChunk;
					break;
				case 21:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor21 = FoundChunk;
					break;
				case 22:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor22 = FoundChunk;
					break;
				case 23:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor23 = FoundChunk;
					break;
				case 24:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor24 = FoundChunk;
					break;
				case 25:
					UE_LOG(LogTemp, Log, TEXT("Set Chunk %d to neighbor %d"), *FoundChunk->GetName(), neighbor);
					Neighbor25 = FoundChunk;
					break;
				default:
					UE_LOG(LogTemp, Log, TEXT("Not a neighbor: %d"), neighbor);
					break;
				}
			}
		}
	}
}

			
int AVTMPChunk::CheckForNeighbor(FVector InputIndex, FVector CurrentIndex)
{
	TArray<FVector> Vectors;
	Vectors.Add(FVector(-1, -1, -1));
	Vectors.Add(FVector(-1, -1, -1));
	Vectors.Add(FVector(-1, -1, 0));
	Vectors.Add(FVector(-1, -1, 1));
	Vectors.Add(FVector(-1, 0, -1));
	Vectors.Add(FVector(-1, 0, 0));
	Vectors.Add(FVector(-1, 0, 1));
	Vectors.Add(FVector(-1, 1, -1));
	Vectors.Add(FVector(-1, 1, 0));
	Vectors.Add(FVector(-1, 1, 1));
	Vectors.Add(FVector(0, -1, -1));
	Vectors.Add(FVector(0, -1, 0));
	Vectors.Add(FVector(0, -1, 1));
	Vectors.Add(FVector(0, 0, -1));
	Vectors.Add(FVector(0, 0, 0));
	Vectors.Add(FVector(0, 0, 1));
	Vectors.Add(FVector(0, 1, -1));
	Vectors.Add(FVector(0, 1, 0));
	Vectors.Add(FVector(0, 1, 1));
	Vectors.Add(FVector(1, -1, -1));
	Vectors.Add(FVector(1, -1, 0));
	Vectors.Add(FVector(1, -1, 1));
	Vectors.Add(FVector(1, 0, -1));
	Vectors.Add(FVector(1, 0, 0));
	Vectors.Add(FVector(1, 0, 1));
	Vectors.Add(FVector(1, 1, -1));
	Vectors.Add(FVector(1, 1, 0));
	Vectors.Add(FVector(1, 1, 1));

	UE_LOG(LogTemp, Log, TEXT("Vectors: %d Return: %d"), Vectors.Num(), Vectors.Find(InputIndex));
	return Vectors.Find(InputIndex);
}


// Called every frame
void AVTMPChunk::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AVTMPChunk::Initialize(class AVTMPManager* InGenerator, int32 InComponentSizeVoxels, int32 InComponentsX, int32 InComponentsY, int32 InComponentsZ,
	FVector InCompIndex, float InInitialFrequency, float InInitialAmplitude, int32 InNumOctaves, bool InBSphere, int32 InSphereRadiusUnits, int32 InVoxelSize)
{	
		Generator = InGenerator;	

		compIndex = InCompIndex;

		ComponentSizeVoxels = InComponentSizeVoxels;
		ArraySize = ComponentSizeVoxels + 1;
		//UE_LOG(LogTemp, Log, TEXT("array size: %d"), this->ArraySize);

		ComponentsX = InComponentsX;
		ComponentsY = InComponentsY;
		ComponentsZ = InComponentsZ;

		sectionX = compIndex.X;
		sectionY = compIndex.Y;
		sectionZ = compIndex.Z;

		Curve = Generator->Curve;
		NoiseType = Generator->NoiseType;
		ValueNoiseType = Generator->ValueNoiseType;
		AbsType = Generator->AbsType;
		initialFrequency = InInitialFrequency;
		initialAmplitude = InInitialAmplitude;
		numOctaves = InNumOctaves;
		gain = Generator->gain;		

		bFlatShading = Generator->bFlatShading;

		bSphere = InBSphere;
		sphereRadiusUnits = InSphereRadiusUnits;
		voxelSize = InVoxelSize;	
}

void AVTMPChunk::SculptTerrain(EVoxelToolType Tool, FVector WorldLocation, float RadiusUnits, float toolPower, float Falloff)
{
	//UE_LOG(LogTemp, Log, TEXT("SculptTerrain"));

	
	if (VoxelData.Voxels.Num() == 0)
	{	
		//UE_LOG(LogTemp, Log, TEXT("= 0"));
		GenerateDensityMap();
	}

	
	//UE_LOG(LogTemp, Log, TEXT("hasnegative: %d, haspositive: %d"), bHasNegative, bHasPositive);

	float half = ComponentSizeVoxels * voxelSize / 2;
	FVector RelativeLocation = WorldLocation - (GetActorLocation() - FVector(half));

	float centerX = RelativeLocation.X / voxelSize;
	float centerY = RelativeLocation.Y / voxelSize;
	float centerZ = RelativeLocation.Z / voxelSize;
	
	float rad = RadiusUnits / voxelSize;
	FVector center(centerX, centerY, centerZ);
	
	//UE_LOG(LogTemp, Log, TEXT("center: %s, compsizevoxels: %d"), *center.ToString(), ComponentSizeVoxels);

	for (int x = 0; x <= ComponentSizeVoxels; x++)
	{
		for (int y = 0; y <= ComponentSizeVoxels; y++)
		{
			for (int z = 0; z <= ComponentSizeVoxels; z++)
			{
				float dist = FVector::Dist(FVector(x, y, z), center);
				if (dist <= rad)
				{
					//UE_LOG(LogTemp, Log, TEXT("in range"));

					float targetValue = 0;

					if (Tool == EVoxelToolType::Flatten)
					{
						UE_LOG(LogTemp, Log, TEXT("Flatten"));
						targetValue = (z > centerZ) ? -1 : 1;
					}
					else if (Tool == EVoxelToolType::Smooth)
					{
						UE_LOG(LogTemp, Log, TEXT("smooth"));
						targetValue = 0;//(GetVoxel(x, y, z) + GetVoxel(x + 1, y, z) + GetVoxel(x - 1, y, z) + GetVoxel(x, y + 1, z) + GetVoxel(x, y - 1, z)) / 5.0f;
					}
					else
					{
						UE_LOG(LogTemp, Log, TEXT("yort VTMP actors: %i"), VoxelData.Voxels.Num());
						targetValue = GetVoxel(x, y, z) + toolPower;
					}
					float newValue;

					if (dist <= rad * (1 - Falloff))
					{
						newValue = targetValue;
					}

					else //apply falloff:
					{
						float alpha = FMath::Lerp(1.0f, 0.0f, (dist - rad * (1 - Falloff)) / (rad * Falloff));

						newValue = FMath::Lerp(GetVoxel(x, y, z), targetValue, alpha);
					}
					UE_LOG(LogTemp, Log, TEXT("Edit Mode: %f,  VTMP actors"), VoxelData.Voxels.Num());
					//UE_LOG(LogTemp, Log, TEXT("old value: %f, new value: %f"), GetVoxel(x, y, z), newValue);
					SetVoxel(x, y, z, newValue);

					if ((Generator->bReplicateTerrain  && Role == ROLE_Authority) || Generator->bStoreChanges) //for replication
					{
						int32 index = GetVoxelIndex(x, y, z);

						if (ChangedVoxelsData.ChangedVoxelIndexes.Contains(index))
						{
							ChangedVoxelsData.ChangedVoxels[ChangedVoxelsData.ChangedVoxelIndexes.IndexOfByKey(index)] = FMath::Clamp(newValue, -2.0f, 2.0f) * 63.0f + 128;
						}
						else
						{
							ChangedVoxelsData.ChangedVoxelIndexes.Add(index);
							ChangedVoxelsData.ChangedVoxels.Add(FMath::Clamp(newValue, -2.0f, 2.0f) * 63.0f + 128);
						}
					}

				}


			}
		}
	}

	CalculateAndCreateMesh();

	if (Generator->bReplicateTerrain)
	{		
		//UE_LOG(LogTemp, Log, TEXT("set replicates"));
		if (Role == ROLE_Authority) SetReplicates(true);
	}
}

void AVTMPChunk::GenerateDensityAndCreateMeshAsync(bool bFoliage)
{	
	Task = new FAsyncTask<TerrainGenerationAsyncTask>(this, bFoliage);

	Task->StartBackgroundTask();	
}

void AVTMPChunk::GenerateDensityMap()
{
	bHasNegative = bHasPositive = false;
	//Voxels.Empty();
	VoxelData.Voxels.Empty();
	//Voxels.AddZeroed(FMath::Pow(ArraySize, 3));
	VoxelData.Voxels.AddZeroed(FMath::Pow(ArraySize, 3));

	//UE_LOG(LogTemp, Log, TEXT("voxels array size: %d"), Voxels.Num());	
	
	//FMatrix2x2 m = FMatrix2x2(0.8f, -0.6f, 0.6f, 0.8f);

	float half = ComponentSizeVoxels * voxelSize / 2;

	for (int x = 0; x <= ComponentSizeVoxels; x++)
	{
		for (int y = 0; y <= ComponentSizeVoxels; y++)
		{
			for (int z = 0; z <= ComponentSizeVoxels; z++)
			{									
				float worldX = GetActorLocation().X - half + x * voxelSize;
				float worldY = GetActorLocation().Y - half + y * voxelSize;
				float worldZ = GetActorLocation().Z - half + z * voxelSize;

				float density = 0;
				if (bSphere)
				{
					density = sphereRadiusUnits - FVector::Dist(FVector(worldX, worldY, worldZ), Generator->GetActorLocation()); //start with a sphere
				}
				else density = -worldZ;  // start with a plane

				density /= 100.0f;

				float frequency = initialFrequency/10000;
				float amplitude = initialAmplitude;

				for (int32 o = 0; o < numOctaves; o++)
				{
					FVector v = FVector(worldX, worldY, worldZ) * frequency;
					float noise = 0.0f;
					
					if (NoiseType == ENoiseType::Simplex) noise = UNoise::SimplexNoise3D(v.X, v.Y, v.Z);
						else noise = UNoise::ValueNoise(ValueNoiseType, v);											

					float value;
						
					if (AbsType == EAbsType::Ridged) value = (1.0f - FMath::Abs(noise));
						else if (AbsType == EAbsType::Billow)  value = FMath::Abs(noise);
						else value = noise;

					if (Curve)
						{
							value = Curve->GetFloatValue(value);
							//value = FMath::Lerp(-2, 2, Curve->GetFloatValue(value /4 + 0.5f));
						}

					density += value *amplitude;

						
					frequency *= lacunarity;
					amplitude *= gain ;
				}					
			
				//density = FMath::RoundToFloat(density * 100.0f) / 100.0f;
										
								
				SetVoxel(x, y, z, density);				
			}
		}
	}

	if (Generator->bReplicateTerrain) //in case we have already received the changed voxels from the server, update the density map:
	{
		for (int i = 0; i < ChangedVoxelsData.ChangedVoxelIndexes.Num(); i++)
		{
			//Voxels[ChangedVoxelsData.ChangedVoxelIndexes[i]] = ChangedVoxelsData.ChangedVoxels[i];
			VoxelData.Voxels[ChangedVoxelsData.ChangedVoxelIndexes[i]] = ChangedVoxelsData.ChangedVoxels[i];
		}
	}
}

void AVTMPChunk::CalculateAndCreateMesh(bool bFoliage)
{
	//UE_LOG(LogTemp, Log, TEXT("CalculateAndCreateMesh"));

	if (!(bHasPositive && bHasNegative))
	{				
		return;
	}

	MeshData.Vertices.Empty();
	MeshData.Triangles.Empty();
	MeshData.UV.Empty();
	MeshData.VertexNormals.Empty();

	int32 verticeIndex = 0;
	
	FVector half = FVector(ComponentSizeVoxels * voxelSize / 2);

	//UE_LOG(LogTemp, Log, TEXT("ComponentSizeVoxels: %d"), ComponentSizeVoxels);
	
	for (int x = 0; x < ComponentSizeVoxels; x++)
	{
		for (int y = 0; y < ComponentSizeVoxels; y++)
		{
			for (int z = 0; z < ComponentSizeVoxels; z++)
			{
				FVector cellVertices[8] = {

					FVector(x, y , z)*voxelSize - half,
					FVector((x + 1), y, z)*voxelSize - half,
					FVector((x + 1), (y + 1), z)*voxelSize - half,
					FVector(x, (y + 1), z)*voxelSize - half,

					FVector(x, y, (z + 1)) *voxelSize - half,
					FVector((x + 1), y, (z + 1))*voxelSize - half,
					FVector((x + 1), (y + 1), (z + 1))*voxelSize - half,
					FVector(x, (y + 1), (z + 1))*voxelSize - half,
				};

				
				float gridCell[8] = { GetVoxel(x, y, z),   GetVoxel(x + 1, y, z),    GetVoxel(x + 1, y + 1, z),   GetVoxel(x, y + 1 , z),
					GetVoxel(x, y, z + 1),   GetVoxel(x + 1, y, z + 1),    GetVoxel(x + 1, y + 1, z + 1),   GetVoxel(x, y + 1, z + 1) };

				//if (x == 32 && y == 32 ) UE_LOG(LogTemp, Log, TEXT("gridCell: %d, %d, %d, %d, %d, %d, %d, %d"), gridCell[0], gridCell[1], gridCell[2], gridCell[3], gridCell[4], gridCell[5], gridCell[6], gridCell[7]);

				int cubeindex = 0;
				FVector vertlist[12];

				if (gridCell[0] < isolevel) cubeindex |= 1;
				if (gridCell[1] < isolevel) cubeindex |= 2;
				if (gridCell[2] < isolevel) cubeindex |= 4;
				if (gridCell[3] < isolevel) cubeindex |= 8;
				if (gridCell[4] < isolevel) cubeindex |= 16;
				if (gridCell[5] < isolevel) cubeindex |= 32;
				if (gridCell[6] < isolevel) cubeindex |= 64;
				if (gridCell[7] < isolevel) cubeindex |= 128;

				//UE_LOG(LogTemp, Log, TEXT("cubeindex: %d"), cubeindex);

				/* Cube is entirely in/out of the surface */
				if (edgeTable[cubeindex] == 0)
					continue;

			
				//now we know which edges are cut, let's find the exact vertices:
				/* Find the vertices where the surface intersects the cube */
				if (edgeTable[cubeindex] & 1)
					vertlist[0] =
					VertexInterp(cellVertices[0], cellVertices[1], gridCell[0], gridCell[1]);
				if (edgeTable[cubeindex] & 2)
					vertlist[1] =
					VertexInterp(cellVertices[1], cellVertices[2], gridCell[1], gridCell[2]);
				if (edgeTable[cubeindex] & 4)
					vertlist[2] =
					VertexInterp(cellVertices[2], cellVertices[3], gridCell[2], gridCell[3]);
				if (edgeTable[cubeindex] & 8)
					vertlist[3] =
					VertexInterp(cellVertices[3], cellVertices[0], gridCell[3], gridCell[0]);
				if (edgeTable[cubeindex] & 16)
					vertlist[4] =
					VertexInterp(cellVertices[4], cellVertices[5], gridCell[4], gridCell[5]);
				if (edgeTable[cubeindex] & 32)
					vertlist[5] =
					VertexInterp(cellVertices[5], cellVertices[6], gridCell[5], gridCell[6]);
				if (edgeTable[cubeindex] & 64)
					vertlist[6] =
					VertexInterp(cellVertices[6], cellVertices[7], gridCell[6], gridCell[7]);
				if (edgeTable[cubeindex] & 128)
					vertlist[7] =
					VertexInterp(cellVertices[7], cellVertices[4], gridCell[7], gridCell[4]);
				if (edgeTable[cubeindex] & 256)
					vertlist[8] =
					VertexInterp(cellVertices[0], cellVertices[4], gridCell[0], gridCell[4]);
				if (edgeTable[cubeindex] & 512)
					vertlist[9] =
					VertexInterp(cellVertices[1], cellVertices[5], gridCell[1], gridCell[5]);
				if (edgeTable[cubeindex] & 1024)
					vertlist[10] =
					VertexInterp(cellVertices[2], cellVertices[6], gridCell[2], gridCell[6]);
				if (edgeTable[cubeindex] & 2048)
					vertlist[11] =
					VertexInterp(cellVertices[3], cellVertices[7], gridCell[3], gridCell[7]);


				TMap<int8, int32> originalPointMap;

				for (int i = 0; i < 12; i++)
				{
					if (edgeTable[cubeindex] & (int32)FMath::Pow(2, i))
					{
						UE_LOG(LogTemp, Log, TEXT("Vertice Index: %d I: %d"), verticeIndex, i);
						if (bFlatShading)
						{
							MeshData.Vertices.Add(vertlist[i]);
							MeshData.VertexNormals.Add(FVector::ZeroVector);
							MeshData.UV.Add(FVector2D(444.0f, 444.0f));
							originalPointMap.Add(i, verticeIndex);
							verticeIndex++;
						}
							
						else // merge vertices:
						{
							int32 existingIndex = MeshData.Vertices.Find(vertlist[i]);

							UE_LOG(LogTemp, Log, TEXT("Vertice Index: %d I: %d"), existingIndex, i);
							if (existingIndex == -1)
							{
								MeshData.Vertices.Add(vertlist[i]);
								MeshData.VertexNormals.Add(FVector::ZeroVector);
								MeshData.UV.Add(FVector2D(444.0f, 444.0f));
								originalPointMap.Add(i, verticeIndex);
								verticeIndex++;
							}
							else
							{
								originalPointMap.Add(i, existingIndex);
								UE_LOG(LogTemp, Log, TEXT("Vertice Index: %d I: %d"), existingIndex, i);
							}
						}							
					}
				}

				// Create the triangle(s): 

				for (int32 i = 0; i < 14; i += 3) {
					int32 first = triTable[cubeindex][i + 2];
					if (first != -1)
					{
						int32 second = triTable[cubeindex][i + 1];
						int32 third = triTable[cubeindex][i];

						int32 index1 = originalPointMap[first];
						int32 index2 = originalPointMap[second];
						int32 index3 = originalPointMap[third];

						MeshData.Triangles.Add(index1);
						MeshData.Triangles.Add(index2);
						MeshData.Triangles.Add(index3);												

						FVector v1 = MeshData.Vertices[index1];
						FVector v2 = MeshData.Vertices[index2];
						FVector v3 = MeshData.Vertices[index3];

						FVector triangleNormal = FVector::CrossProduct(v2 - v3, v1 - v3);
						triangleNormal.Normalize();

						//UE_LOG(LogTemp, Log, TEXT("triangle normal: %s"), *triangleNormal.ToString());

						if (bFlatShading)
						{
							MeshData.VertexNormals[index1] = triangleNormal;
							MeshData.VertexNormals[index2] = triangleNormal;
							MeshData.VertexNormals[index3] = triangleNormal;
						}
						else
						{
							MeshData.VertexNormals[index1] += triangleNormal;
							MeshData.VertexNormals[index2] += triangleNormal;
							MeshData.VertexNormals[index3] += triangleNormal;
						}

						MeshData.UV[index1] = FVector2D(v1.X, v1.Y) / voxelSize;
						MeshData.UV[index2] = FVector2D(v2.X, v2.Y) / voxelSize;
						MeshData.UV[index3] = FVector2D(v3.X, v3.Y) / voxelSize;

						//else if (FMath::Abs(triangleNormal.Y) > FMath::Abs(triangleNormal.X))
						//{							
						//	UV[index1] = FVector2D(v1.X, v1.Z) / voxelSize;
						//UV[index2] = FVector2D(v2.X, v2.Z) / voxelSize;
						//UV[index3] = FVector2D(v3.X, v3.Z) / voxelSize;						
						//}

						//	else if (FMath::Abs(triangleNormal.X) > 0)
						//{
						//	UV[index1] = FVector2D(v1.Y, v1.Z) / voxelSize;
						//	UV[index2] = FVector2D(v2.Y, v2.Z) / voxelSize;
						//	UV[index3] = FVector2D(v3.Y, v3.Z) / voxelSize;
						//}	
					}
					else break;
				}
			}
		}
	}

	for (auto &vertexNormal : MeshData.VertexNormals)
	{
		vertexNormal.Normalize();
	}

	AsyncTask(
		ENamedThreads::GameThread,
		[this, bFoliage]()
	{
		CreateMesh(bFoliage);
	}
	);

	//UE_LOG(LogTemp, Log, TEXT("num vertices: %d"), Vertices.Num());	
}

void AVTMPChunk::CreateMesh(bool bFoliage)
{
	//UE_LOG(LogTemp, Log, TEXT("create mesh"));

	if (IsPendingKillPending()) return;
	
	TArray<FColor> VertexColors;
	TArray<FProcMeshTangent> Tangents;

	//UE_LOG(LogTemp, Log, TEXT("verts: %d, tris: %d"), MeshData.Vertices.Num(), MeshData.Triangles.Num());
	//test = MeshData.Triangles.Num();

	ProceduralMesh->CreateMeshSection(0, MeshData.Vertices, MeshData.Triangles, MeshData.VertexNormals, MeshData.UV, VertexColors, Tangents, true);
	
	if (bFoliage)
	{
		for (auto FoliageToSpawn : Generator->FoliageToSpawn)
		{
			Generator->PlaceFoliageType(FoliageToSpawn.StaticMesh, FoliageToSpawn.Amount, this);
		}
	}
	
	ProceduralMesh->bNavigationRelevant = ProceduralMesh->IsNavigationRelevant();
	FNavigationSystem::UpdateComponentData(*ProceduralMesh);

}

void AVTMPChunk::LoadChangedVoxels()
{
	int i = 0;
	for (int32 index : ChangedVoxelsData.ChangedVoxelIndexes)
	{
		//Voxels[index] = ChangedVoxelsData.ChangedVoxels[i];
		VoxelData.Voxels[index] = ChangedVoxelsData.ChangedVoxels[i];
		i++;
	}
}

void AVTMPChunk::OnRepChangedVoxels()
{
	FDateTime before = FDateTime::Now();
	//UE_LOG(LogTemp, Log, TEXT("on rep, num changed voxels: %d   indexes: %d"), ChangedVoxelsData.ChangedVoxels.Num(), ChangedVoxelsData.ChangedVoxelIndexes.Num());
	
	//UE_LOG(LogTemp, Log, TEXT("has voxels"));

	LoadChangedVoxels();

	CalculateAndCreateMesh(false);

	//UE_LOG(LogTemp, Log, TEXT("on rep end, time seconds: %f"), (FDateTime::Now()- before).GetTotalSeconds());		
}

FVector AVTMPChunk::VertexInterp(FVector p1, FVector p2, float valp1, float valp2)
{
	float mu;
	FVector p;

	if (FMath::Abs(isolevel - valp1) < 0.00001)
		return(p1);
	if (FMath::Abs(isolevel - valp2) < 0.00001)
		return(p2);
	if (FMath::Abs(valp2 - valp1) < 0.00001)
		return(p1);
	if (valp2 == valp1) return p1;

	mu = (isolevel - valp1) / (valp2 - valp1);

	p.X = p1.X + mu * (p2.X - p1.X);
	p.Y = p1.Y + mu * (p2.Y - p1.Y);
	p.Z = p1.Z + mu * (p2.Z - p1.Z);

	return(p);
}

float AVTMPChunk::GetVoxelIndex(int32 x, int32 y, int32 z)
{
	return z * ArraySize * ArraySize + y * ArraySize + x;
}

float AVTMPChunk::GetVoxel(int32 x, int32 y, int32 z)
{
	if (VoxelData.Voxels.Num() != 0)
		return (float)(VoxelData.Voxels[GetVoxelIndex(x, y, z)] - 128) / 63.0f;
	else
		return 0.0f;
}

void AVTMPChunk::SetVoxel(int32 x, int32 y, int32 z, float value)
{	
	int32 voxIndex = GetVoxelIndex(x, y, z);
	//if (!Voxels.Contains(GetVoxelIndex(x, y, z)))
	if (!VoxelData.Voxels.Contains(GetVoxelIndex(x, y, z)))
		return;

	//Voxels[GetVoxelIndex(x, y, z)] = FMath::Clamp(value, -2.0f, 2.0f) * 63.0f + 128;
	VoxelData.Voxels[GetVoxelIndex(x, y, z)] = FMath::Clamp(value, -2.0f, 2.0f) * 63.0f + 128;

	//UE_LOG(LogTemp, Log, TEXT("value: %f"), FMath::Clamp(value, -2.0f, 2.0f) * 63.0f);

	if (value < isolevel) bHasNegative = true;
		else bHasPositive = true;
}


void AVTMPChunk::PostLoad()
{
	Super::PostLoad();
	//for (int i = 0; i <= ProceduralMesh->GetNumMaterials(); i++)
	//{
	//UMaterialInterface* NewMaterial = Generator->Material[0];
	//ProceduralMesh->SetMaterial(0, NewMaterial);
	//}

	CalculateAndCreateMesh();
}

void AVTMPChunk::Serialize(FArchive& Ar)
{
	//UE_LOG(LogTemp, Log, TEXT("Serialize"));

	if (!(bHasPositive && bHasNegative))
	{
		//Voxels.Empty();
		VoxelData.Voxels.Empty();
	}
	
	Super::Serialize(Ar);
}

void AVTMPChunk::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AVTMPChunk, ChangedVoxelsData);		
}
