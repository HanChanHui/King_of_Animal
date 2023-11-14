// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KING_OF_ANIMAL_FightInterface_generated_h
#error "FightInterface.generated.h already included, missing '#pragma once' in FightInterface.h"
#endif
#define KING_OF_ANIMAL_FightInterface_generated_h

#define King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_SPARSE_DATA
#define King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_RPC_WRAPPERS \
	virtual void CheckAttack_Implementation() {}; \
	virtual void CheckKick_Implementation(bool is_leftLeg) {}; \
	virtual void CheckPunch_Implementation(bool is_leftHand) {}; \
 \
	DECLARE_FUNCTION(execCheckAttack); \
	DECLARE_FUNCTION(execCheckKick); \
	DECLARE_FUNCTION(execCheckPunch);


#define King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CheckAttack_Implementation() {}; \
	virtual void CheckKick_Implementation(bool is_leftLeg) {}; \
	virtual void CheckPunch_Implementation(bool is_leftHand) {}; \
 \
	DECLARE_FUNCTION(execCheckAttack); \
	DECLARE_FUNCTION(execCheckKick); \
	DECLARE_FUNCTION(execCheckPunch);


#define King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_EVENT_PARMS \
	struct FightInterface_eventCheckKick_Parms \
	{ \
		bool is_leftLeg; \
	}; \
	struct FightInterface_eventCheckPunch_Parms \
	{ \
		bool is_leftHand; \
	};


#define King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_CALLBACK_WRAPPERS
#define King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	KING_OF_ANIMAL_API UFightInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFightInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(KING_OF_ANIMAL_API, UFightInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFightInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	KING_OF_ANIMAL_API UFightInterface(UFightInterface&&); \
	KING_OF_ANIMAL_API UFightInterface(const UFightInterface&); \
public:


#define King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	KING_OF_ANIMAL_API UFightInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	KING_OF_ANIMAL_API UFightInterface(UFightInterface&&); \
	KING_OF_ANIMAL_API UFightInterface(const UFightInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(KING_OF_ANIMAL_API, UFightInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFightInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFightInterface)


#define King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFightInterface(); \
	friend struct Z_Construct_UClass_UFightInterface_Statics; \
public: \
	DECLARE_CLASS(UFightInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/King_Of_Animal"), KING_OF_ANIMAL_API) \
	DECLARE_SERIALIZER(UFightInterface)


#define King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_GENERATED_UINTERFACE_BODY() \
	King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_GENERATED_UINTERFACE_BODY() \
	King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFightInterface() {} \
public: \
	typedef UFightInterface UClassType; \
	typedef IFightInterface ThisClass; \
	static void Execute_CheckAttack(UObject* O); \
	static void Execute_CheckKick(UObject* O, bool is_leftLeg); \
	static void Execute_CheckPunch(UObject* O, bool is_leftHand); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IFightInterface() {} \
public: \
	typedef UFightInterface UClassType; \
	typedef IFightInterface ThisClass; \
	static void Execute_CheckAttack(UObject* O); \
	static void Execute_CheckKick(UObject* O, bool is_leftLeg); \
	static void Execute_CheckPunch(UObject* O, bool is_leftHand); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define King_Of_Animal_Source_King_Of_Animal_FightInterface_h_5_PROLOG \
	King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_EVENT_PARMS


#define King_Of_Animal_Source_King_Of_Animal_FightInterface_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_SPARSE_DATA \
	King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_RPC_WRAPPERS \
	King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_CALLBACK_WRAPPERS \
	King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define King_Of_Animal_Source_King_Of_Animal_FightInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_SPARSE_DATA \
	King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_CALLBACK_WRAPPERS \
	King_Of_Animal_Source_King_Of_Animal_FightInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KING_OF_ANIMAL_API UClass* StaticClass<class UFightInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID King_Of_Animal_Source_King_Of_Animal_FightInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
