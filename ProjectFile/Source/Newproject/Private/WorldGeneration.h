// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WorldGeneration.generated.h"

UCLASS()
class AWorldGeneration : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWorldGeneration();
	
	//Rebuilds world
	virtual void OnConstruction(const FTransform& Transform) override;

	//Static mesh for solid walls
	UPROPERTY(EditAnywhere)
		class UInstancedStaticMeshComponent* Walls;

	UPROPERTY(EditAnywhere)
		class UMaterialInterface* seed;

	//Size of grid for meshes
	UPROPERTY(EditAnywhere, meta = (ClampMin = 0))
	float GridSize;

	//Size of grid for placing mesh
	UPROPERTY(EditAnywhere, meta = (ClampMin = 1, ClampMax = 25))
	uint32 RoomSize;

	UPROPERTY(EditAnywhere, meta = (ClampMin = 1))
	uint32 MapSize;


private:
	//Variables saved when building to know if we need to rebuild when OnConstruction is called
	uint32 BuiltGridSize;
	uint32 BuiltRoomSize;
	uint32 BuiltMapSize;

	//Variables for forming perlin noise

};