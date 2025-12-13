// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnemyControllerCopy.h"

#ifdef FINALPROJECTCONSOLE_EnemyControllerCopy_generated_h
#error "EnemyControllerCopy.generated.h already included, missing '#pragma once' in EnemyControllerCopy.h"
#endif
#define FINALPROJECTCONSOLE_EnemyControllerCopy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AEnemyControllerCopy *****************************************************
FINALPROJECTCONSOLE_API UClass* Z_Construct_UClass_AEnemyControllerCopy_NoRegister();

#define FID_FinalProjectConsole_Source_FinalProjectConsole_Public_EnemyControllerCopy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyControllerCopy(); \
	friend struct Z_Construct_UClass_AEnemyControllerCopy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FINALPROJECTCONSOLE_API UClass* Z_Construct_UClass_AEnemyControllerCopy_NoRegister(); \
public: \
	DECLARE_CLASS2(AEnemyControllerCopy, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProjectConsole"), Z_Construct_UClass_AEnemyControllerCopy_NoRegister) \
	DECLARE_SERIALIZER(AEnemyControllerCopy)


#define FID_FinalProjectConsole_Source_FinalProjectConsole_Public_EnemyControllerCopy_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyControllerCopy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEnemyControllerCopy(AEnemyControllerCopy&&) = delete; \
	AEnemyControllerCopy(const AEnemyControllerCopy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyControllerCopy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyControllerCopy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyControllerCopy) \
	NO_API virtual ~AEnemyControllerCopy();


#define FID_FinalProjectConsole_Source_FinalProjectConsole_Public_EnemyControllerCopy_h_12_PROLOG
#define FID_FinalProjectConsole_Source_FinalProjectConsole_Public_EnemyControllerCopy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FinalProjectConsole_Source_FinalProjectConsole_Public_EnemyControllerCopy_h_15_INCLASS_NO_PURE_DECLS \
	FID_FinalProjectConsole_Source_FinalProjectConsole_Public_EnemyControllerCopy_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEnemyControllerCopy;

// ********** End Class AEnemyControllerCopy *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FinalProjectConsole_Source_FinalProjectConsole_Public_EnemyControllerCopy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
