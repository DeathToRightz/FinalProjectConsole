// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Health_Component.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHealth_Component() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
FINALPROJECTCONSOLE_API UClass* Z_Construct_UClass_UHealth_Component();
FINALPROJECTCONSOLE_API UClass* Z_Construct_UClass_UHealth_Component_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalProjectConsole();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHealth_Component Function TakeDamage ************************************
struct Z_Construct_UFunction_UHealth_Component_TakeDamage_Statics
{
	struct Health_Component_eventTakeDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigateBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Health_Component.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigateBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealth_Component_TakeDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Health_Component_eventTakeDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealth_Component_TakeDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Health_Component_eventTakeDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealth_Component_TakeDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Health_Component_eventTakeDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealth_Component_TakeDamage_Statics::NewProp_InstigateBy = { "InstigateBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Health_Component_eventTakeDamage_Parms, InstigateBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealth_Component_TakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Health_Component_eventTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealth_Component_TakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealth_Component_TakeDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealth_Component_TakeDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealth_Component_TakeDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealth_Component_TakeDamage_Statics::NewProp_InstigateBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealth_Component_TakeDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_Component_TakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealth_Component_TakeDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UHealth_Component, nullptr, "TakeDamage", Z_Construct_UFunction_UHealth_Component_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_Component_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealth_Component_TakeDamage_Statics::Health_Component_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealth_Component_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealth_Component_TakeDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UHealth_Component_TakeDamage_Statics::Health_Component_eventTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealth_Component_TakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealth_Component_TakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealth_Component::execTakeDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_InstigateBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigateBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// ********** End Class UHealth_Component Function TakeDamage **************************************

// ********** Begin Class UHealth_Component ********************************************************
void UHealth_Component::StaticRegisterNativesUHealth_Component()
{
	UClass* Class = UHealth_Component::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TakeDamage", &UHealth_Component::execTakeDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHealth_Component;
UClass* UHealth_Component::GetPrivateStaticClass()
{
	using TClass = UHealth_Component;
	if (!Z_Registration_Info_UClass_UHealth_Component.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Health_Component"),
			Z_Registration_Info_UClass_UHealth_Component.InnerSingleton,
			StaticRegisterNativesUHealth_Component,
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
	return Z_Registration_Info_UClass_UHealth_Component.InnerSingleton;
}
UClass* Z_Construct_UClass_UHealth_Component_NoRegister()
{
	return UHealth_Component::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHealth_Component_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Health_Component.h" },
		{ "ModuleRelativePath", "Health_Component.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health Variables" },
		{ "ModuleRelativePath", "Health_Component.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Health_Component.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "ModuleRelativePath", "Health_Component.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealth_Component_TakeDamage, "TakeDamage" }, // 2933287130
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealth_Component>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealth_Component_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealth_Component, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHealth_Component_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealth_Component, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealth_Component_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealth_Component, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealth_Component_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealth_Component_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealth_Component_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealth_Component_Statics::NewProp_Health,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Component_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHealth_Component_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_FinalProjectConsole,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Component_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealth_Component_Statics::ClassParams = {
	&UHealth_Component::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHealth_Component_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Component_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealth_Component_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealth_Component_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHealth_Component()
{
	if (!Z_Registration_Info_UClass_UHealth_Component.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealth_Component.OuterSingleton, Z_Construct_UClass_UHealth_Component_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealth_Component.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHealth_Component);
UHealth_Component::~UHealth_Component() {}
// ********** End Class UHealth_Component **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_Health_Component_h__Script_FinalProjectConsole_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealth_Component, UHealth_Component::StaticClass, TEXT("UHealth_Component"), &Z_Registration_Info_UClass_UHealth_Component, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealth_Component), 1490403343U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_Health_Component_h__Script_FinalProjectConsole_431015783(TEXT("/Script/FinalProjectConsole"),
	Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_Health_Component_h__Script_FinalProjectConsole_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_Health_Component_h__Script_FinalProjectConsole_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
