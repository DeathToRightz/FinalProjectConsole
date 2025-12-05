// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Health_Component.h"

#ifdef FINALPROJECTCONSOLE_Health_Component_generated_h
#error "Health_Component.generated.h already included, missing '#pragma once' in Health_Component.h"
#endif
#define FINALPROJECTCONSOLE_Health_Component_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AController;
class UDamageType;

// ********** Begin Class UHealth_Component ********************************************************
#define FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_Health_Component_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTakeDamage);


FINALPROJECTCONSOLE_API UClass* Z_Construct_UClass_UHealth_Component_NoRegister();

#define FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_Health_Component_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealth_Component(); \
	friend struct Z_Construct_UClass_UHealth_Component_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FINALPROJECTCONSOLE_API UClass* Z_Construct_UClass_UHealth_Component_NoRegister(); \
public: \
	DECLARE_CLASS2(UHealth_Component, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProjectConsole"), Z_Construct_UClass_UHealth_Component_NoRegister) \
	DECLARE_SERIALIZER(UHealth_Component)


#define FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_Health_Component_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHealth_Component(UHealth_Component&&) = delete; \
	UHealth_Component(const UHealth_Component&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealth_Component); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealth_Component); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealth_Component) \
	NO_API virtual ~UHealth_Component();


#define FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_Health_Component_h_10_PROLOG
#define FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_Health_Component_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_Health_Component_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_Health_Component_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_Health_Component_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHealth_Component;

// ********** End Class UHealth_Component **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_logan_OneDrive_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_Health_Component_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
