// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnemyControllerCopy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnemyControllerCopy() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
FINALPROJECTCONSOLE_API UClass* Z_Construct_UClass_AEnemyControllerCopy();
FINALPROJECTCONSOLE_API UClass* Z_Construct_UClass_AEnemyControllerCopy_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalProjectConsole();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEnemyControllerCopy *****************************************************
void AEnemyControllerCopy::StaticRegisterNativesAEnemyControllerCopy()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AEnemyControllerCopy;
UClass* AEnemyControllerCopy::GetPrivateStaticClass()
{
	using TClass = AEnemyControllerCopy;
	if (!Z_Registration_Info_UClass_AEnemyControllerCopy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnemyControllerCopy"),
			Z_Registration_Info_UClass_AEnemyControllerCopy.InnerSingleton,
			StaticRegisterNativesAEnemyControllerCopy,
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
	return Z_Registration_Info_UClass_AEnemyControllerCopy.InnerSingleton;
}
UClass* Z_Construct_UClass_AEnemyControllerCopy_NoRegister()
{
	return AEnemyControllerCopy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEnemyControllerCopy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "EnemyControllerCopy.h" },
		{ "ModuleRelativePath", "Public/EnemyControllerCopy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyControllerCopy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemyControllerCopy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalProjectConsole,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyControllerCopy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyControllerCopy_Statics::ClassParams = {
	&AEnemyControllerCopy::StaticClass,
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
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyControllerCopy_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyControllerCopy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyControllerCopy()
{
	if (!Z_Registration_Info_UClass_AEnemyControllerCopy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyControllerCopy.OuterSingleton, Z_Construct_UClass_AEnemyControllerCopy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyControllerCopy.OuterSingleton;
}
AEnemyControllerCopy::AEnemyControllerCopy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyControllerCopy);
AEnemyControllerCopy::~AEnemyControllerCopy() {}
// ********** End Class AEnemyControllerCopy *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_FinalProjectConsole_Source_FinalProjectConsole_Public_EnemyControllerCopy_h__Script_FinalProjectConsole_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyControllerCopy, AEnemyControllerCopy::StaticClass, TEXT("AEnemyControllerCopy"), &Z_Registration_Info_UClass_AEnemyControllerCopy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyControllerCopy), 4108810361U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FinalProjectConsole_Source_FinalProjectConsole_Public_EnemyControllerCopy_h__Script_FinalProjectConsole_4015672564(TEXT("/Script/FinalProjectConsole"),
	Z_CompiledInDeferFile_FID_FinalProjectConsole_Source_FinalProjectConsole_Public_EnemyControllerCopy_h__Script_FinalProjectConsole_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FinalProjectConsole_Source_FinalProjectConsole_Public_EnemyControllerCopy_h__Script_FinalProjectConsole_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
