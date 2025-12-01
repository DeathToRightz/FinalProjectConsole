// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalConsoleProjCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFinalConsoleProjCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
FINALCONSOLEPROJ_API UClass* Z_Construct_UClass_AFinalConsoleProjCameraManager();
FINALCONSOLEPROJ_API UClass* Z_Construct_UClass_AFinalConsoleProjCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalConsoleProj();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFinalConsoleProjCameraManager *******************************************
void AFinalConsoleProjCameraManager::StaticRegisterNativesAFinalConsoleProjCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFinalConsoleProjCameraManager;
UClass* AFinalConsoleProjCameraManager::GetPrivateStaticClass()
{
	using TClass = AFinalConsoleProjCameraManager;
	if (!Z_Registration_Info_UClass_AFinalConsoleProjCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FinalConsoleProjCameraManager"),
			Z_Registration_Info_UClass_AFinalConsoleProjCameraManager.InnerSingleton,
			StaticRegisterNativesAFinalConsoleProjCameraManager,
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
	return Z_Registration_Info_UClass_AFinalConsoleProjCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AFinalConsoleProjCameraManager_NoRegister()
{
	return AFinalConsoleProjCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFinalConsoleProjCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "FinalConsoleProjCameraManager.h" },
		{ "ModuleRelativePath", "FinalConsoleProjCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFinalConsoleProjCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFinalConsoleProjCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalConsoleProj,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFinalConsoleProjCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFinalConsoleProjCameraManager_Statics::ClassParams = {
	&AFinalConsoleProjCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFinalConsoleProjCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AFinalConsoleProjCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFinalConsoleProjCameraManager()
{
	if (!Z_Registration_Info_UClass_AFinalConsoleProjCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFinalConsoleProjCameraManager.OuterSingleton, Z_Construct_UClass_AFinalConsoleProjCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFinalConsoleProjCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFinalConsoleProjCameraManager);
AFinalConsoleProjCameraManager::~AFinalConsoleProjCameraManager() {}
// ********** End Class AFinalConsoleProjCameraManager *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalConsoleProj_Source_FinalConsoleProj_FinalConsoleProjCameraManager_h__Script_FinalConsoleProj_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFinalConsoleProjCameraManager, AFinalConsoleProjCameraManager::StaticClass, TEXT("AFinalConsoleProjCameraManager"), &Z_Registration_Info_UClass_AFinalConsoleProjCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFinalConsoleProjCameraManager), 103697173U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalConsoleProj_Source_FinalConsoleProj_FinalConsoleProjCameraManager_h__Script_FinalConsoleProj_1138653561(TEXT("/Script/FinalConsoleProj"),
	Z_CompiledInDeferFile_FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalConsoleProj_Source_FinalConsoleProj_FinalConsoleProjCameraManager_h__Script_FinalConsoleProj_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalConsoleProj_Source_FinalConsoleProj_FinalConsoleProjCameraManager_h__Script_FinalConsoleProj_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
