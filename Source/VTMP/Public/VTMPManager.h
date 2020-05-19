// Copyright Sean Neville, 2020

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VTMPChunk.h"
#include "VTMP/Public/Noise.h"
#include "Runtime/Engine/Classes/Components/HierarchicalInstancedStaticMeshComponent.h"
#include "VTMPManager.generated.h"


USTRUCT(BlueprintType)
struct FVoxelFoliage
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Voxel Foliage")
	UStaticMesh* StaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Voxel Foliage")
	float Amount = 0.0f;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly)
	//float InstanceRadius = 0.0f;
};

USTRUCT(BlueprintType)
struct FRemovedFoliage
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<int32> instances;
};

UCLASS()
class VTMP_API AVTMPManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVTMPManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	UPROPERTY(Transient, BlueprintReadOnly, Category = "Foliage")
	TArray<FRemovedFoliage> RemovedFoliage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings")
	TArray<FVoxelFoliage> FoliageToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Settings")
	float FoliageMinZ = -10000.0f;

	UPROPERTY()
	FVector Offset;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Actions")
	void LoadRemovedFoliage(TArray<FRemovedFoliage> InRemovedFoliage);

	UFUNCTION(BlueprintCallable, Category = "Actions")
	void LoadChangedVoxels(TArray<FChangedVoxels> InChangedVoxels);

	UFUNCTION(BlueprintCallable, Category = "Actions")
	TArray<FChangedVoxels> GetChangedVoxels();

	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Actions")
	void SaveTerrainMesh();

	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Actions")
	void Generate();

	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Actions")
	void GetChunkNeighbors();

	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Actions")
	void Clear();
	
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Actions")
	void PlaceFoliage();

	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Actions")
	void ClearFoliage();

	void Save(int SaveIndex);
	void Load(int LoadIndex);

	UFUNCTION(BlueprintCallable, Category = "Voxels")
	void PlaceFoliageType(UStaticMesh* Mesh, float Amount, AVTMPChunk* InTerrainActor = NULL);

	UFUNCTION(BlueprintCallable, Category = "Voxels")
	AVTMPChunk* AddVoxelComponent(FVector index, bool bFoliage = false);
	
	UFUNCTION(BlueprintCallable, Category = "Voxels")
	void GenerateTerrainAroundPawn();

	UFUNCTION(BlueprintCallable, Category = "Voxels")
	TArray<AVTMPChunk*> SculptInRadius(EVoxelToolType Tool, FVector WorldLocation, float RadiusUnits, float toolPower = -0.5f, float Falloff = 0.7f, bool bRemoveFoliage = false);

	UFUNCTION(BlueprintCallable, Category = "Voxels")
	void RemoveFoliageInRadius(FVector WorldLocation, float RadiusUnits);

	UFUNCTION(BlueprintCallable, Category = "Voxels")
	TArray<AVTMPChunk*>  GetOverlappingVoxelComponents(FVector WorldLocation, float RadiusUnits);

	UFUNCTION(BlueprintCallable, Category = "Voxels")
	TArray<FVector> GetOverlappingVoxelComponentsIndexes(FVector WorldLocation, float RadiusUnits, float RadiusUnitsZ);

	TArray<FVector> GetOverlappingVoxelVertices(FVector BoundsMin, FVector BoundsMax);

	UPROPERTY(BlueprintReadWrite, Category = "Voxel Generator")
	UProceduralMeshComponent* ProceduralMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Size")
	uint8 ComponentsX = 1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Size")
	uint8 ComponentsY = 1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Size")
	uint8 ComponentsZ = 2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Size")
	int32 voxelSize = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "World Size")
	uint8 ComponentSizeVoxels = 32;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Generation")
	bool bGenerate = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Generation", meta = (EditCondition = "bGenerate"))
	float DistanceFromPawn = 10000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Generation", meta = (EditCondition = "bGenerate"))
	float DistanceFromPawnZ = 2000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Generation", meta = (EditCondition = "bGenerate"))
	float TickSeconds = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Runtime Generation", meta = (EditCondition = "bGenerate"))
	bool bWithFoliage = true;

	UFUNCTION(BlueprintPure, Category = "Voxel Generator")
	bool HasUnfinishedTasks();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	TArray<UMaterialInterface*> Material;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	bool bReplicateTerrain = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	bool bStoreChanges = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Voxel Generator")
	TMap<FVector, AVTMPChunk*> CreatedActors;

	UPROPERTY(BlueprintReadWrite, Category = "Voxel Generator")
	TArray<UHierarchicalInstancedStaticMeshComponent*> Foliage;

	
	ENoiseType NoiseType = ENoiseType::Simplex;

	
	EValueNoiseType ValueNoiseType = EValueNoiseType::Quintic;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Noise Settings")
	EAbsType AbsType = EAbsType::Regular;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Noise Settings")
	float initialFrequency = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Noise Settings")
	float initialAmplitude = 7;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Noise Settings")
	int32 numOctaves = 7;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Noise Settings")
	float gain = 0.5f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Noise Settings")
	UCurveFloat* Curve;

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Noise Settings")
	int32 Seed = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Noise Settings")
	bool bRandomSeed = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	bool bFlatShading = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	bool bSphere;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", meta = (EditCondition = "bSphere"))
	float sphereRadiusUnits = 3000.0f;

		
	
	private:

	FTimerHandle GenerationTimerHandle;
	TArray<FVector> queuedActorsToSpawn;
};

