// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalProjectConsoleCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFinalProjectConsoleCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
FINALPROJECTCONSOLE_API UClass* Z_Construct_UClass_AFinalProjectConsoleCameraManager();
FINALPROJECTCONSOLE_API UClass* Z_Construct_UClass_AFinalProjectConsoleCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalProjectConsole();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFinalProjectConsoleCameraManager ****************************************
void AFinalProjectConsoleCameraManager::StaticRegisterNativesAFinalProjectConsoleCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFinalProjectConsoleCameraManager;
UClass* AFinalProjectConsoleCameraManager::GetPrivateStaticClass()
{
	using TClass = AFinalProjectConsoleCameraManager;
	if (!Z_Registration_Info_UClass_AFinalProjectConsoleCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FinalProjectConsoleCameraManager"),
			Z_Registration_Info_UClass_AFinalProjectConsoleCameraManager.InnerSingleton,
			StaticRegisterNativesAFinalProjectConsoleCameraManager,
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
	return Z_Registration_Info_UClass_AFinalProjectConsoleCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AFinalProjectConsoleCameraManager_NoRegister()
{
	return AFinalProjectConsoleCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFinalProjectConsoleCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "FinalProjectConsoleCameraManager.h" },
		{ "ModuleRelativePath", "FinalProjectConsoleCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFinalProjectConsoleCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFinalProjectConsoleCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalProjectConsole,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFinalProjectConsoleCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFinalProjectConsoleCameraManager_Statics::ClassParams = {
	&AFinalProjectConsoleCameraManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFinalProjectConsoleCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AFinalProjectConsoleCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFinalProjectConsoleCameraManager()
{
	if (!Z_Registration_Info_UClass_AFinalProjectConsoleCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFinalProjectConsoleCameraManager.OuterSingleton, Z_Construct_UClass_AFinalProjectConsoleCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFinalProjectConsoleCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFinalProjectConsoleCameraManager);
AFinalProjectConsoleCameraManager::~AFinalProjectConsoleCameraManager() {}
// ********** End Class AFinalProjectConsoleCameraManager ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsoleCameraManager_h__Script_FinalProjectConsole_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFinalProjectConsoleCameraManager, AFinalProjectConsoleCameraManager::StaticClass, TEXT("AFinalProjectConsoleCameraManager"), &Z_Registration_Info_UClass_AFinalProjectConsoleCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFinalProjectConsoleCameraManager), 1632533856U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsoleCameraManager_h__Script_FinalProjectConsole_2189959675(TEXT("/Script/FinalProjectConsole"),
	Z_CompiledInDeferFile_FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsoleCameraManager_h__Script_FinalProjectConsole_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsoleCameraManager_h__Script_FinalProjectConsole_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
