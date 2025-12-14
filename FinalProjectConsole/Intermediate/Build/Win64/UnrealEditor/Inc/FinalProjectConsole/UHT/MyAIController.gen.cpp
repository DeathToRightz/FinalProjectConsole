// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyAIController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyAIController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
FINALPROJECTCONSOLE_API UClass* Z_Construct_UClass_AMyAIController();
FINALPROJECTCONSOLE_API UClass* Z_Construct_UClass_AMyAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalProjectConsole();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyAIController **********************************************************
void AMyAIController::StaticRegisterNativesAMyAIController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMyAIController;
UClass* AMyAIController::GetPrivateStaticClass()
{
	using TClass = AMyAIController;
	if (!Z_Registration_Info_UClass_AMyAIController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyAIController"),
			Z_Registration_Info_UClass_AMyAIController.InnerSingleton,
			StaticRegisterNativesAMyAIController,
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
	return Z_Registration_Info_UClass_AMyAIController.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyAIController_NoRegister()
{
	return AMyAIController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MyAIController.h" },
		{ "ModuleRelativePath", "Public/MyAIController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalProjectConsole,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyAIController_Statics::ClassParams = {
	&AMyAIController::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyAIController()
{
	if (!Z_Registration_Info_UClass_AMyAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyAIController.OuterSingleton, Z_Construct_UClass_AMyAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyAIController.OuterSingleton;
}
AMyAIController::AMyAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyAIController);
AMyAIController::~AMyAIController() {}
// ********** End Class AMyAIController ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_Public_MyAIController_h__Script_FinalProjectConsole_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyAIController, AMyAIController::StaticClass, TEXT("AMyAIController"), &Z_Registration_Info_UClass_AMyAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyAIController), 3065834746U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_Public_MyAIController_h__Script_FinalProjectConsole_238843482(TEXT("/Script/FinalProjectConsole"),
	Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_Public_MyAIController_h__Script_FinalProjectConsole_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_Public_MyAIController_h__Script_FinalProjectConsole_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
