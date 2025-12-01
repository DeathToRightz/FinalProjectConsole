// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalConsoleProjGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFinalConsoleProjGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FINALCONSOLEPROJ_API UClass* Z_Construct_UClass_AFinalConsoleProjGameMode();
FINALCONSOLEPROJ_API UClass* Z_Construct_UClass_AFinalConsoleProjGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalConsoleProj();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFinalConsoleProjGameMode ************************************************
void AFinalConsoleProjGameMode::StaticRegisterNativesAFinalConsoleProjGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFinalConsoleProjGameMode;
UClass* AFinalConsoleProjGameMode::GetPrivateStaticClass()
{
	using TClass = AFinalConsoleProjGameMode;
	if (!Z_Registration_Info_UClass_AFinalConsoleProjGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FinalConsoleProjGameMode"),
			Z_Registration_Info_UClass_AFinalConsoleProjGameMode.InnerSingleton,
			StaticRegisterNativesAFinalConsoleProjGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AFinalConsoleProjGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AFinalConsoleProjGameMode_NoRegister()
{
	return AFinalConsoleProjGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFinalConsoleProjGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FinalConsoleProjGameMode.h" },
		{ "ModuleRelativePath", "FinalConsoleProjGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFinalConsoleProjGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFinalConsoleProjGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalConsoleProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFinalConsoleProjGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFinalConsoleProjGameMode_Statics::ClassParams = {
	&AFinalConsoleProjGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFinalConsoleProjGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFinalConsoleProjGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFinalConsoleProjGameMode()
{
	if (!Z_Registration_Info_UClass_AFinalConsoleProjGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFinalConsoleProjGameMode.OuterSingleton, Z_Construct_UClass_AFinalConsoleProjGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFinalConsoleProjGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFinalConsoleProjGameMode);
AFinalConsoleProjGameMode::~AFinalConsoleProjGameMode() {}
// ********** End Class AFinalConsoleProjGameMode **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalConsoleProj_Source_FinalConsoleProj_FinalConsoleProjGameMode_h__Script_FinalConsoleProj_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFinalConsoleProjGameMode, AFinalConsoleProjGameMode::StaticClass, TEXT("AFinalConsoleProjGameMode"), &Z_Registration_Info_UClass_AFinalConsoleProjGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFinalConsoleProjGameMode), 3747837716U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalConsoleProj_Source_FinalConsoleProj_FinalConsoleProjGameMode_h__Script_FinalConsoleProj_3247115862(TEXT("/Script/FinalConsoleProj"),
	Z_CompiledInDeferFile_FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalConsoleProj_Source_FinalConsoleProj_FinalConsoleProjGameMode_h__Script_FinalConsoleProj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalConsoleProj_Source_FinalConsoleProj_FinalConsoleProjGameMode_h__Script_FinalConsoleProj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
