// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Newproject/Private/WorldGeneration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldGeneration() {}
// Cross Module References
	NEWPROJECT_API UClass* Z_Construct_UClass_AWorldGeneration_NoRegister();
	NEWPROJECT_API UClass* Z_Construct_UClass_AWorldGeneration();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Newproject();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void AWorldGeneration::StaticRegisterNativesAWorldGeneration()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWorldGeneration);
	UClass* Z_Construct_UClass_AWorldGeneration_NoRegister()
	{
		return AWorldGeneration::StaticClass();
	}
	struct Z_Construct_UClass_AWorldGeneration_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Walls_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Walls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_seed_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_RoomSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MapSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldGeneration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Newproject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldGeneration_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldGeneration.h" },
		{ "ModuleRelativePath", "Private/WorldGeneration.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldGeneration_Statics::NewProp_Walls_MetaData[] = {
		{ "Category", "WorldGeneration" },
		{ "Comment", "//Static mesh for solid walls\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/WorldGeneration.h" },
		{ "ToolTip", "Static mesh for solid walls" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldGeneration_Statics::NewProp_Walls = { "Walls", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldGeneration, Walls), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldGeneration_Statics::NewProp_Walls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGeneration_Statics::NewProp_Walls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldGeneration_Statics::NewProp_seed_MetaData[] = {
		{ "Category", "WorldGeneration" },
		{ "ModuleRelativePath", "Private/WorldGeneration.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorldGeneration_Statics::NewProp_seed = { "seed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldGeneration, seed), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorldGeneration_Statics::NewProp_seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGeneration_Statics::NewProp_seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldGeneration_Statics::NewProp_GridSize_MetaData[] = {
		{ "Category", "WorldGeneration" },
		{ "ClampMin", "0" },
		{ "Comment", "//Size of grid for meshes\n" },
		{ "ModuleRelativePath", "Private/WorldGeneration.h" },
		{ "ToolTip", "Size of grid for meshes" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorldGeneration_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldGeneration, GridSize), METADATA_PARAMS(Z_Construct_UClass_AWorldGeneration_Statics::NewProp_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGeneration_Statics::NewProp_GridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldGeneration_Statics::NewProp_RoomSize_MetaData[] = {
		{ "Category", "WorldGeneration" },
		{ "ClampMax", "25" },
		{ "ClampMin", "1" },
		{ "Comment", "//Size of grid for placing mesh\n" },
		{ "ModuleRelativePath", "Private/WorldGeneration.h" },
		{ "ToolTip", "Size of grid for placing mesh" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AWorldGeneration_Statics::NewProp_RoomSize = { "RoomSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldGeneration, RoomSize), METADATA_PARAMS(Z_Construct_UClass_AWorldGeneration_Statics::NewProp_RoomSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGeneration_Statics::NewProp_RoomSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldGeneration_Statics::NewProp_MapSize_MetaData[] = {
		{ "Category", "WorldGeneration" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Private/WorldGeneration.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AWorldGeneration_Statics::NewProp_MapSize = { "MapSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorldGeneration, MapSize), METADATA_PARAMS(Z_Construct_UClass_AWorldGeneration_Statics::NewProp_MapSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGeneration_Statics::NewProp_MapSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldGeneration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldGeneration_Statics::NewProp_Walls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldGeneration_Statics::NewProp_seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldGeneration_Statics::NewProp_GridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldGeneration_Statics::NewProp_RoomSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldGeneration_Statics::NewProp_MapSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldGeneration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldGeneration>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWorldGeneration_Statics::ClassParams = {
		&AWorldGeneration::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWorldGeneration_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGeneration_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWorldGeneration_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWorldGeneration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorldGeneration()
	{
		if (!Z_Registration_Info_UClass_AWorldGeneration.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWorldGeneration.OuterSingleton, Z_Construct_UClass_AWorldGeneration_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWorldGeneration.OuterSingleton;
	}
	template<> NEWPROJECT_API UClass* StaticClass<AWorldGeneration>()
	{
		return AWorldGeneration::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldGeneration);
	struct Z_CompiledInDeferFile_FID_Newproject2_Source_Newproject_Private_WorldGeneration_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Newproject2_Source_Newproject_Private_WorldGeneration_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWorldGeneration, AWorldGeneration::StaticClass, TEXT("AWorldGeneration"), &Z_Registration_Info_UClass_AWorldGeneration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWorldGeneration), 3920749253U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Newproject2_Source_Newproject_Private_WorldGeneration_h_2756787118(TEXT("/Script/Newproject"),
		Z_CompiledInDeferFile_FID_Newproject2_Source_Newproject_Private_WorldGeneration_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Newproject2_Source_Newproject_Private_WorldGeneration_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
