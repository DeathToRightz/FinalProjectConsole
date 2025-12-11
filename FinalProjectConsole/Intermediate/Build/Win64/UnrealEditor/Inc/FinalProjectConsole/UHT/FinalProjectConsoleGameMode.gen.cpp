// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FinalProjectConsoleGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFinalProjectConsoleGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FINALPROJECTCONSOLE_API UClass* Z_Construct_UClass_AFinalProjectConsoleGameMode();
FINALPROJECTCONSOLE_API UClass* Z_Construct_UClass_AFinalProjectConsoleGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalProjectConsole();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFinalProjectConsoleGameMode *********************************************
void AFinalProjectConsoleGameMode::StaticRegisterNativesAFinalProjectConsoleGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFinalProjectConsoleGameMode;
UClass* AFinalProjectConsoleGameMode::GetPrivateStaticClass()
{
	using TClass = AFinalProjectConsoleGameMode;
	if (!Z_Registration_Info_UClass_AFinalProjectConsoleGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FinalProjectConsoleGameMode"),
			Z_Registration_Info_UClass_AFinalProjectConsoleGameMode.InnerSingleton,
			StaticRegisterNativesAFinalProjectConsoleGameMode,
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
	return Z_Registration_Info_UClass_AFinalProjectConsoleGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AFinalProjectConsoleGameMode_NoRegister()
{
	return AFinalProjectConsoleGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFinalProjectConsoleGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FinalProjectConsoleGameMode.h" },
		{ "ModuleRelativePath", "FinalProjectConsoleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFinalProjectConsoleGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFinalProjectConsoleGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalProjectConsole,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFinalProjectConsoleGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFinalProjectConsoleGameMode_Statics::ClassParams = {
	&AFinalProjectConsoleGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFinalProjectConsoleGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFinalProjectConsoleGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFinalProjectConsoleGameMode()
{
	if (!Z_Registration_Info_UClass_AFinalProjectConsoleGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFinalProjectConsoleGameMode.OuterSingleton, Z_Construct_UClass_AFinalProjectConsoleGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFinalProjectConsoleGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFinalProjectConsoleGameMode);
AFinalProjectConsoleGameMode::~AFinalProjectConsoleGameMode() {}
// ********** End Class AFinalProjectConsoleGameMode ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsoleGameMode_h__Script_FinalProjectConsole_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFinalProjectConsoleGameMode, AFinalProjectConsoleGameMode::StaticClass, TEXT("AFinalProjectConsoleGameMode"), &Z_Registration_Info_UClass_AFinalProjectConsoleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFinalProjectConsoleGameMode), 2297942453U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsoleGameMode_h__Script_FinalProjectConsole_3448765457(TEXT("/Script/FinalProjectConsole"),
	Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsoleGameMode_h__Script_FinalProjectConsole_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsoleGameMode_h__Script_FinalProjectConsole_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
