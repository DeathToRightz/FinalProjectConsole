// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trap.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTrap() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
FINALPROJECTCONSOLE_API UClass* Z_Construct_UClass_ATrap();
FINALPROJECTCONSOLE_API UClass* Z_Construct_UClass_ATrap_NoRegister();
UPackage* Z_Construct_UPackage__Script_FinalProjectConsole();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATrap Function OnHit *****************************************************
struct Z_Construct_UFunction_ATrap_OnHit_Statics
{
	struct Trap_eventOnHit_Parms
	{
		AActor* SelfActor;
		AActor* OtherActor;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Trap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrap_OnHit_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Trap_eventOnHit_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrap_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Trap_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATrap_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Trap_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATrap_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Trap_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrap_OnHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrap_OnHit_Statics::NewProp_SelfActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrap_OnHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrap_OnHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrap_OnHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrap_OnHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrap_OnHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATrap, nullptr, "OnHit", Z_Construct_UFunction_ATrap_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrap_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATrap_OnHit_Statics::Trap_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrap_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrap_OnHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATrap_OnHit_Statics::Trap_eventOnHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATrap_OnHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrap_OnHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATrap::execOnHit)
{
	P_GET_OBJECT(AActor,Z_Param_SelfActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHit(Z_Param_SelfActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class ATrap Function OnHit *******************************************************

// ********** Begin Class ATrap ********************************************************************
void ATrap::StaticRegisterNativesATrap()
{
	UClass* Class = ATrap::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnHit", &ATrap::execOnHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Damage variables" },
		{ "ModuleRelativePath", "Trap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageRate_MetaData[] = {
		{ "Category", "Damage variables" },
		{ "ModuleRelativePath", "Trap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestroyOnImpact_MetaData[] = {
		{ "Category", "Toggles" },
		{ "ModuleRelativePath", "Trap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContinuesDamage_MetaData[] = {
		{ "Category", "Toggles" },
		{ "ModuleRelativePath", "Trap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_MetaData[] = {
		{ "Category", "Trap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Trap.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitBoxMesurements_MetaData[] = {
		{ "Category", "Hit box measurements" },
		{ "ModuleRelativePath", "Trap.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageRate;
	static void NewProp_DestroyOnImpact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroyOnImpact;
	static void NewProp_ContinuesDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ContinuesDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollider;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitBoxMesurements;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATrap_OnHit, "OnHit" }, // 1854966781
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrap>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrap_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrap, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrap_Statics::NewProp_DamageRate = { "DamageRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrap, DamageRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageRate_MetaData), NewProp_DamageRate_MetaData) };
void Z_Construct_UClass_ATrap_Statics::NewProp_DestroyOnImpact_SetBit(void* Obj)
{
	((ATrap*)Obj)->DestroyOnImpact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATrap_Statics::NewProp_DestroyOnImpact = { "DestroyOnImpact", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATrap), &Z_Construct_UClass_ATrap_Statics::NewProp_DestroyOnImpact_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestroyOnImpact_MetaData), NewProp_DestroyOnImpact_MetaData) };
void Z_Construct_UClass_ATrap_Statics::NewProp_ContinuesDamage_SetBit(void* Obj)
{
	((ATrap*)Obj)->ContinuesDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATrap_Statics::NewProp_ContinuesDamage = { "ContinuesDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATrap), &Z_Construct_UClass_ATrap_Statics::NewProp_ContinuesDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContinuesDamage_MetaData), NewProp_ContinuesDamage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrap_Statics::NewProp_BoxCollider = { "BoxCollider", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrap, BoxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollider_MetaData), NewProp_BoxCollider_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATrap_Statics::NewProp_HitBoxMesurements = { "HitBoxMesurements", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrap, HitBoxMesurements), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitBoxMesurements_MetaData), NewProp_HitBoxMesurements_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrap_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrap_Statics::NewProp_DamageRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrap_Statics::NewProp_DestroyOnImpact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrap_Statics::NewProp_ContinuesDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrap_Statics::NewProp_BoxCollider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrap_Statics::NewProp_HitBoxMesurements,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrap_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_ATrap_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATrap_Statics::PropPointers),
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
struct Z_CompiledInDeferFile_FID_FinalProjectConsole_Source_FinalProjectConsole_Trap_h__Script_FinalProjectConsole_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATrap, ATrap::StaticClass, TEXT("ATrap"), &Z_Registration_Info_UClass_ATrap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrap), 2101758278U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FinalProjectConsole_Source_FinalProjectConsole_Trap_h__Script_FinalProjectConsole_876535366(TEXT("/Script/FinalProjectConsole"),
	Z_CompiledInDeferFile_FID_FinalProjectConsole_Source_FinalProjectConsole_Trap_h__Script_FinalProjectConsole_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FinalProjectConsole_Source_FinalProjectConsole_Trap_h__Script_FinalProjectConsole_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
