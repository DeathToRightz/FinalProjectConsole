// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FinalProjectConsolePlayerController.h"

#ifdef FINALPROJECTCONSOLE_FinalProjectConsolePlayerController_generated_h
#error "FinalProjectConsolePlayerController.generated.h already included, missing '#pragma once' in FinalProjectConsolePlayerController.h"
#endif
#define FINALPROJECTCONSOLE_FinalProjectConsolePlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFinalProjectConsolePlayerController *************************************
FINALPROJECTCONSOLE_API UClass* Z_Construct_UClass_AFinalProjectConsolePlayerController_NoRegister();

#define FID_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsolePlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFinalProjectConsolePlayerController(); \
	friend struct Z_Construct_UClass_AFinalProjectConsolePlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FINALPROJECTCONSOLE_API UClass* Z_Construct_UClass_AFinalProjectConsolePlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AFinalProjectConsolePlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FinalProjectConsole"), Z_Construct_UClass_AFinalProjectConsolePlayerController_NoRegister) \
	DECLARE_SERIALIZER(AFinalProjectConsolePlayerController)


#define FID_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsolePlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFinalProjectConsolePlayerController(AFinalProjectConsolePlayerController&&) = delete; \
	AFinalProjectConsolePlayerController(const AFinalProjectConsolePlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFinalProjectConsolePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFinalProjectConsolePlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AFinalProjectConsolePlayerController) \
	NO_API virtual ~AFinalProjectConsolePlayerController();


#define FID_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsolePlayerController_h_17_PROLOG
#define FID_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsolePlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsolePlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsolePlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFinalProjectConsolePlayerController;

// ********** End Class AFinalProjectConsolePlayerController ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FinalProjectConsole_Source_FinalProjectConsole_FinalProjectConsolePlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
