// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FinalProjectConsoleCharacter.h"

#ifdef FINALPROJECTCONSOLE_FinalProjectConsoleCharacter_generated_h
#error "FinalProjectConsoleCharacter.generated.h already included, missing '#pragma once' in FinalProjectConsoleCharacter.h"
#endif
#define FINALPROJECTCONSOLE_FinalProjectConsoleCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFinalProjectConsoleCharacter ********************************************
#define FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsoleCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


FINALPROJECTCONSOLE_API UClass* Z_Construct_UClass_AFinalProjectConsoleCharacter_NoRegister();

#define FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsoleCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFinalProjectConsoleCharacter(); \
	friend struct Z_Construct_UClass_AFinalProjectConsoleCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FINALPROJECTCONSOLE_API UClass* Z_Construct_UClass_AFinalProjectConsoleCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AFinalProjectConsoleCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProjectConsole"), Z_Construct_UClass_AFinalProjectConsoleCharacter_NoRegister) \
	DECLARE_SERIALIZER(AFinalProjectConsoleCharacter)


#define FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsoleCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFinalProjectConsoleCharacter(AFinalProjectConsoleCharacter&&) = delete; \
	AFinalProjectConsoleCharacter(const AFinalProjectConsoleCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinalProjectConsoleCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalProjectConsoleCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AFinalProjectConsoleCharacter) \
	NO_API virtual ~AFinalProjectConsoleCharacter();


#define FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsoleCharacter_h_21_PROLOG
#define FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsoleCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsoleCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsoleCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsoleCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFinalProjectConsoleCharacter;

// ********** End Class AFinalProjectConsoleCharacter **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lmcordova1_Documents_GitHub_FinalProjectConsole_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsoleCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
