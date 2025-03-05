// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DarkerNodes/Private/Lib/BrushDatabase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrushDatabase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DARKERNODES_API UClass* Z_Construct_UClass_UBrushDatabase();
DARKERNODES_API UClass* Z_Construct_UClass_UBrushDatabase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
UPackage* Z_Construct_UPackage__Script_DarkerNodes();
// End Cross Module References

// Begin Class UBrushDatabase
void UBrushDatabase::StaticRegisterNativesUBrushDatabase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBrushDatabase);
UClass* Z_Construct_UClass_UBrushDatabase_NoRegister()
{
	return UBrushDatabase::StaticClass();
}
struct Z_Construct_UClass_UBrushDatabase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Lib/BrushDatabase.h" },
		{ "ModuleRelativePath", "Private/Lib/BrushDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "ModuleRelativePath", "Private/Lib/BrushDatabase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Private/Lib/BrushDatabase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Materials_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMaterials_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DynamicMaterials_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DynamicMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrushDatabase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBrushDatabase_Statics::NewProp_Materials_ValueProp = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBrushDatabase_Statics::NewProp_Materials_Key_KeyProp = { "Materials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBrushDatabase_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushDatabase, Materials), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBrushDatabase_Statics::NewProp_DynamicMaterials_ValueProp = { "DynamicMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBrushDatabase_Statics::NewProp_DynamicMaterials_Key_KeyProp = { "DynamicMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBrushDatabase_Statics::NewProp_DynamicMaterials = { "DynamicMaterials", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrushDatabase, DynamicMaterials), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMaterials_MetaData), NewProp_DynamicMaterials_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBrushDatabase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushDatabase_Statics::NewProp_Materials_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushDatabase_Statics::NewProp_Materials_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushDatabase_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushDatabase_Statics::NewProp_DynamicMaterials_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushDatabase_Statics::NewProp_DynamicMaterials_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrushDatabase_Statics::NewProp_DynamicMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushDatabase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBrushDatabase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DarkerNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushDatabase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBrushDatabase_Statics::ClassParams = {
	&UBrushDatabase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBrushDatabase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBrushDatabase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBrushDatabase_Statics::Class_MetaDataParams), Z_Construct_UClass_UBrushDatabase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBrushDatabase()
{
	if (!Z_Registration_Info_UClass_UBrushDatabase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBrushDatabase.OuterSingleton, Z_Construct_UClass_UBrushDatabase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBrushDatabase.OuterSingleton;
}
template<> DARKERNODES_API UClass* StaticClass<UBrushDatabase>()
{
	return UBrushDatabase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushDatabase);
UBrushDatabase::~UBrushDatabase() {}
// End Class UBrushDatabase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Private_Lib_BrushDatabase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBrushDatabase, UBrushDatabase::StaticClass, TEXT("UBrushDatabase"), &Z_Registration_Info_UClass_UBrushDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBrushDatabase), 990364562U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Private_Lib_BrushDatabase_h_1917211894(TEXT("/Script/DarkerNodes"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Private_Lib_BrushDatabase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Private_Lib_BrushDatabase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
