// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldGeneration.h"
#include "Newproject/Newproject.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SceneComponent.h"

// Sets default values
AWorldGeneration::AWorldGeneration()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GridSize = 1000.f;
	RoomSize = 3;

	USceneComponent* SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	SetRootComponent(SceneComponent);

	Walls = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Walls"));
	Walls->SetupAttachment(SceneComponent);


}

//To keep calls in OnConstruction consise
static FORCEINLINE void AddInstance(UInstancedStaticMeshComponent* Component,
	const FRotator& Rotation, const FVector& Translation)
{
	Component->AddInstance(FTransform(Rotation, Rotation.RotateVector(Translation)));
}

/**
Rotations used while adding mesh instances. these assume the mesh
has been created with a base orientation of positive X

FROTATOR(Y,X,Z)
**/
	//Basic rotations
	static const FRotator PositiveX(0.f, 0.f, 0.f);
	static const FRotator NegativeX(0.f, 180.f, 0.f);
	static const FRotator PositiveY(0.f, 90.f, 0.f);
	static const FRotator NegativeY(0.f, 270.f, 0.f);
	static const FRotator PositiveZ(90.f, 0.f, 0.f);
	static const FRotator NegativeZ(-90.f, 0.f, 0.f);

	//Complex rotations
	static const FRotator PositiveX90(0.f, 0.f, 90.f);
	static const FRotator PositiveX180(0.f, 0.f, 180.f);
	static const FRotator PositiveX270(0.f, 0.f, 270.f);
	static const FRotator NegativeX90(0.f, 180.f, 90.f);
	static const FRotator NegativeX180(0.f, 180.f, 180.f);
	static const FRotator NegativeX270(0.f, 180.f, 270.f);
	static const FRotator PositiveY180(0.f, 90.f, 180.f);
	static const FRotator NegativeY180(0.f, 270.f, 180.f);

/**
* 
* WORLD GENERATION SCRIPT:
* 
*/



void AWorldGeneration::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	//Only Rebuild if needed
	if (BuiltGridSize == GridSize && BuiltRoomSize == RoomSize)
		return;

	UE_LOG(LogTemp, Log, TEXT("AWorldGeneration::OnConstruction Building Room Size %d (Built=%d this=%x)"), RoomSize, BuiltRoomSize, this);

	BuiltGridSize = GridSize;
	BuiltRoomSize = RoomSize;

	Walls->ClearInstances();

	//Implicit Floor with integer division which makes all room sizes end up being odd
	int32 Size = RoomSize;
	int32 WallOffset = 0;
	//(HalfSize + 1) * GridSize;
	FVector Translation(WallOffset, 0.f, 0.f);

	
	//REMINDER:
	//WALLS AND OBJECT PLACED AS INSTANCE MUST BE CENTRIFIED AND HAVE Y 90 DEGREES
	

	for (int32 a = -Size; a <= Size; a++)
	{
		Translation.Y = GridSize * a;

		for (int32 b = -Size; b <= Size; b++)
		{
			Translation.Z = GridSize * b;

			//Walls:
			AddInstance(Walls, PositiveZ, Translation);
		}
	}

}

