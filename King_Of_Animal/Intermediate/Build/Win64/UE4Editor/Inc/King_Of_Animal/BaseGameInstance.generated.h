// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KING_OF_ANIMAL_BaseGameInstance_generated_h
#error "BaseGameInstance.generated.h already included, missing '#pragma once' in BaseGameInstance.h"
#endif
#define KING_OF_ANIMAL_BaseGameInstance_generated_h

#define King_Of_Animal_Source_King_Of_Animal_BaseGameInstance_h_19_SPARSE_DATA
#define King_Of_Animal_Source_King_Of_Animal_BaseGameInstance_h_19_RPC_WRAPPERS
#define King_Of_Animal_Source_King_Of_Animal_BaseGameInstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define King_Of_Animal_Source_King_Of_Animal_BaseGameInstance_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseGameInstance(); \
	friend struct Z_Construct_UClass_UBaseGameInstance_Statics; \
public: \
	DECLARE_CLASS(UBaseGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/King_Of_Animal"), NO_API) \
	DECLARE_SERIALIZER(UBaseGameInstance)


#define King_Of_Animal_Source_King_Of_Animal_BaseGameInstance_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUBaseGameInstance(); \
	friend struct Z_Construct_UClass_UBaseGameInstance_Statics; \
public: \
	DECLARE_CLASS(UBaseGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/King_Of_Animal"), NO_API) \
	DECLARE_SERIALIZER(UBaseGameInstance)


#define King_Of_Animal_Source_King_Of_Animal_BaseGameInstance_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseGameInstance(UBaseGameInstance&&); \
	NO_API UBaseGameInstance(const UBaseGameInstance&); \
public:


#define King_Of_Animal_Source_King_Of_Animal_BaseGameInstance_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseGameInstance(UBaseGameInstance&&); \
	NO_API UBaseGameInstance(const UBaseGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseGameInstance)


#define King_Of_Animal_Source_King_Of_Animal_BaseGameInstance_h_19_PRIVATE_PROPERTY_OFFSET
#define King_Of_Animal_Source_King_Of_Animal_BaseGameInstance_h_16_PROLOG
#define King_Of_Animal_Source_King_Of_Animal_BaseGameInstance_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	King_Of_Animal_Source_King_Of_Animal_BaseGameInstance_h_19_PRIVATE_PROPERTY_OFFSET \
	King_Of_Animal_Source_King_Of_Animal_BaseGameInstance_h_19_SPARSE_DATA \
	King_Of_Animal_Source_King_Of_Animal_BaseGameInstance_h_19_RPC_WRAPPERS \
	King_Of_Animal_Source_King_Of_Animal_BaseGameInstance_h_19_INCLASS \
	King_Of_Animal_Source_King_Of_Animal_BaseGameInstance_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define King_Of_Animal_Source_King_Of_Animal_BaseGameInstance_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	King_Of_Animal_Source_King_Of_Animal_BaseGameInstance_h_19_PRIVATE_PROPERTY_OFFSET \
	King_Of_Animal_Source_King_Of_Animal_BaseGameInstance_h_19_SPARSE_DATA \
	King_Of_Animal_Source_King_Of_Animal_BaseGameInstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	King_Of_Animal_Source_King_Of_Animal_BaseGameInstance_h_19_INCLASS_NO_PURE_DECLS \
	King_Of_Animal_Source_King_Of_Animal_BaseGameInstance_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KING_OF_ANIMAL_API UClass* StaticClass<class UBaseGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID King_Of_Animal_Source_King_Of_Animal_BaseGameInstance_h


#define FOREACH_ENUM_ECHARACTERCLASS(op) \
	op(ECharacterClass::VE_Default) \
	op(ECharacterClass::VE_Elephant) 

enum class ECharacterClass : uint8;
template<> KING_OF_ANIMAL_API UEnum* StaticEnum<ECharacterClass>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
