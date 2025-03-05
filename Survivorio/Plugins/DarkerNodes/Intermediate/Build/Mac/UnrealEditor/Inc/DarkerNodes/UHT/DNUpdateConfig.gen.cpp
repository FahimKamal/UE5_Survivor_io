// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DarkerNodes/Private/Popup/DNUpdateConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDNUpdateConfig() {}

// Begin Cross Module References
DARKERNODES_API UClass* Z_Construct_UClass_UDNUpdateConfig();
DARKERNODES_API UClass* Z_Construct_UClass_UDNUpdateConfig_NoRegister();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
UPackage* Z_Construct_UPackage__Script_DarkerNodes();
// End Cross Module References

// Begin Class UDNUpdateConfig
void UDNUpdateConfig::StaticRegisterNativesUDNUpdateConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDNUpdateConfig);
UClass* Z_Construct_UClass_UDNUpdateConfig_NoRegister()
{
	return UDNUpdateConfig::StaticClass();
}
struct Z_Construct_UClass_UDNUpdateConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Popup/DNUpdateConfig.h" },
		{ "ModuleRelativePath", "Private/Popup/DNUpdateConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PluginVersionUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Private/Popup/DNUpdateConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PluginVersionUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDNUpdateConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDNUpdateConfig_Statics::NewProp_PluginVersionUpdate = { "PluginVersionUpdate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDNUpdateConfig, PluginVersionUpdate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PluginVersionUpdate_MetaData), NewProp_PluginVersionUpdate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDNUpdateConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDNUpdateConfig_Statics::NewProp_PluginVersionUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDNUpdateConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDNUpdateConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_DarkerNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDNUpdateConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDNUpdateConfig_Statics::ClassParams = {
	&UDNUpdateConfig::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDNUpdateConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDNUpdateConfig_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDNUpdateConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UDNUpdateConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDNUpdateConfig()
{
	if (!Z_Registration_Info_UClass_UDNUpdateConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDNUpdateConfig.OuterSingleton, Z_Construct_UClass_UDNUpdateConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDNUpdateConfig.OuterSingleton;
}
template<> DARKERNODES_API UClass* StaticClass<UDNUpdateConfig>()
{
	return UDNUpdateConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDNUpdateConfig);
UDNUpdateConfig::~UDNUpdateConfig() {}
// End Class UDNUpdateConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Private_Popup_DNUpdateConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDNUpdateConfig, UDNUpdateConfig::StaticClass, TEXT("UDNUpdateConfig"), &Z_Registration_Info_UClass_UDNUpdateConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDNUpdateConfig), 3353918964U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Private_Popup_DNUpdateConfig_h_4254968438(TEXT("/Script/DarkerNodes"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Private_Popup_DNUpdateConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DarkerNodes_Source_DarkerNodes_Private_Popup_DNUpdateConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
