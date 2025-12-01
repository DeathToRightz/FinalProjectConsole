// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FinalConsoleProjCharacter.h"

#ifdef FINALCONSOLEPROJ_FinalConsoleProjCharacter_generated_h
#error "FinalConsoleProjCharacter.generated.h already included, missing '#pragma once' in FinalConsoleProjCharacter.h"
#endif
#define FINALCONSOLEPROJ_FinalConsoleProjCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFinalConsoleProjCharacter ***********************************************
#define FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalConsoleProj_Source_FinalConsoleProj_FinalConsoleProjCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


FINALCONSOLEPROJ_API UClass* Z_Construct_UClass_AFinalConsoleProjCharacter_NoRegister();

#define FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalConsoleProj_Source_FinalConsoleProj_FinalConsoleProjCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFinalConsoleProjCharacter(); \
	friend struct Z_Construct_UClass_AFinalConsoleProjCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FINALCONSOLEPROJ_API UClass* Z_Construct_UClass_AFinalConsoleProjCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AFinalConsoleProjCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalConsoleProj"), Z_Construct_UClass_AFinalConsoleProjCharacter_NoRegister) \
	DECLARE_SERIALIZER(AFinalConsoleProjCharacter)


#define FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalConsoleProj_Source_FinalConsoleProj_FinalConsoleProjCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFinalConsoleProjCharacter(AFinalConsoleProjCharacter&&) = delete; \
	AFinalConsoleProjCharacter(const AFinalConsoleProjCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinalConsoleProjCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalConsoleProjCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AFinalConsoleProjCharacter) \
	NO_API virtual ~AFinalConsoleProjCharacter();


#define FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalConsoleProj_Source_FinalConsoleProj_FinalConsoleProjCharacter_h_21_PROLOG
#define FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalConsoleProj_Source_FinalConsoleProj_FinalConsoleProjCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalConsoleProj_Source_FinalConsoleProj_FinalConsoleProjCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalConsoleProj_Source_FinalConsoleProj_FinalConsoleProjCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalConsoleProj_Source_FinalConsoleProj_FinalConsoleProjCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFinalConsoleProjCharacter;

// ********** End Class AFinalConsoleProjCharacter *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalConsoleProj_Source_FinalConsoleProj_FinalConsoleProjCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
