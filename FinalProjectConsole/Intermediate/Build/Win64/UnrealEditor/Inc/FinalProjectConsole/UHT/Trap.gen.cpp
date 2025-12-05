// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trap.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTrap() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
FINALPROJECTCONSOLE_API UClass* Z_Construct_UClass_ATrap();
FINALPROJECTCONSOLE_API UClass* Z_Construct_UClass_ATrap_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalProjectConsole();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATrap ********************************************************************
void ATrap::StaticRegisterNativesATrap()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATrap;
UClass* ATrap::GetPrivateStaticClass()
{
	using TClass = ATrap;
	if (!Z_Registration_Info_UClass_ATrap.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Trap"),
			Z_Registration_Info_UClass_ATrap.InnerSingleton,
			StaticRegisterNativesATrap,
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
	return Z_Registration_Info_UClass_ATrap.InnerSingleton;
}
UClass* Z_Construct_UClass_ATrap_NoRegister()
{
	return ATrap::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATrap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Trap.h" },
		{ "ModuleRelativePath", "Trap.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATrap_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalProjectConsole,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrap_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrap_Statics::ClassParams = {
	&ATrap::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrap_Statics::Class_MetaDataParams), Z_Construct_UClass_ATrap_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATrap()
{
	if (!Z_Registration_Info_UClass_ATrap.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrap.OuterSingleton, Z_Construct_UClass_ATrap_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATrap.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATrap);
ATrap::~ATrap() {}
// ********** End Class ATrap **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_Trap_h__Script_FinalProjectConsole_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATrap, ATrap::StaticClass, TEXT("ATrap"), &Z_Registration_Info_UClass_ATrap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrap), 2339688307U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_Trap_h__Script_FinalProjectConsole_1949333673(TEXT("/Script/FinalProjectConsole"),
	Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_Trap_h__Script_FinalProjectConsole_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_Trap_h__Script_FinalProjectConsole_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
