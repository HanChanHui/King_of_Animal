// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputInfo;
enum class EInputType : uint8;
#ifdef KING_OF_ANIMAL_CPP_Character_generated_h
#error "CPP_Character.generated.h already included, missing '#pragma once' in CPP_Character.h"
#endif
#define KING_OF_ANIMAL_CPP_Character_generated_h

#define King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputInfo_Statics; \
	KING_OF_ANIMAL_API static class UScriptStruct* StaticStruct();


template<> KING_OF_ANIMAL_API UScriptStruct* StaticStruct<struct FInputInfo>();

#define King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCommand_Statics; \
	KING_OF_ANIMAL_API static class UScriptStruct* StaticStruct();


template<> KING_OF_ANIMAL_API UScriptStruct* StaticStruct<struct FCommand>();

#define King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_SPARSE_DATA
#define King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWinRound); \
	DECLARE_FUNCTION(execStartCommand); \
	DECLARE_FUNCTION(execCheckInputBufferForCommandUsingType); \
	DECLARE_FUNCTION(execCheckInputBufferForCommand); \
	DECLARE_FUNCTION(execAddInputToInputBuffer); \
	DECLARE_FUNCTION(execAddToInputMap); \
	DECLARE_FUNCTION(execSkill_Ult_P2); \
	DECLARE_FUNCTION(execSkill_2_P2); \
	DECLARE_FUNCTION(execSkill_1_P2); \
	DECLARE_FUNCTION(execStartExceptionalAttack_P2); \
	DECLARE_FUNCTION(execStopJump_P2); \
	DECLARE_FUNCTION(execJump_P2); \
	DECLARE_FUNCTION(execR_Kick_P2); \
	DECLARE_FUNCTION(execL_Kick_P2); \
	DECLARE_FUNCTION(execR_Punch_P2); \
	DECLARE_FUNCTION(execL_Punch_P2); \
	DECLARE_FUNCTION(execMoveRight_P2); \
	DECLARE_FUNCTION(execLanded); \
	DECLARE_FUNCTION(execStopBlocking); \
	DECLARE_FUNCTION(execStartBlocking); \
	DECLARE_FUNCTION(execStopCrouching); \
	DECLARE_FUNCTION(execStartCrouching);


#define King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWinRound); \
	DECLARE_FUNCTION(execStartCommand); \
	DECLARE_FUNCTION(execCheckInputBufferForCommandUsingType); \
	DECLARE_FUNCTION(execCheckInputBufferForCommand); \
	DECLARE_FUNCTION(execAddInputToInputBuffer); \
	DECLARE_FUNCTION(execAddToInputMap); \
	DECLARE_FUNCTION(execSkill_Ult_P2); \
	DECLARE_FUNCTION(execSkill_2_P2); \
	DECLARE_FUNCTION(execSkill_1_P2); \
	DECLARE_FUNCTION(execStartExceptionalAttack_P2); \
	DECLARE_FUNCTION(execStopJump_P2); \
	DECLARE_FUNCTION(execJump_P2); \
	DECLARE_FUNCTION(execR_Kick_P2); \
	DECLARE_FUNCTION(execL_Kick_P2); \
	DECLARE_FUNCTION(execR_Punch_P2); \
	DECLARE_FUNCTION(execL_Punch_P2); \
	DECLARE_FUNCTION(execMoveRight_P2); \
	DECLARE_FUNCTION(execLanded); \
	DECLARE_FUNCTION(execStopBlocking); \
	DECLARE_FUNCTION(execStartBlocking); \
	DECLARE_FUNCTION(execStopCrouching); \
	DECLARE_FUNCTION(execStartCrouching);


#define King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_EVENT_PARMS \
	struct CPP_Character_eventAddInputIconToScreen_Parms \
	{ \
		int32 iconIndex; \
		bool addInput; \
	};


#define King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_CALLBACK_WRAPPERS
#define King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_Character(); \
	friend struct Z_Construct_UClass_ACPP_Character_Statics; \
public: \
	DECLARE_CLASS(ACPP_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/King_Of_Animal"), NO_API) \
	DECLARE_SERIALIZER(ACPP_Character) \
	virtual UObject* _getUObject() const override { return const_cast<ACPP_Character*>(this); }


#define King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_INCLASS \
private: \
	static void StaticRegisterNativesACPP_Character(); \
	friend struct Z_Construct_UClass_ACPP_Character_Statics; \
public: \
	DECLARE_CLASS(ACPP_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/King_Of_Animal"), NO_API) \
	DECLARE_SERIALIZER(ACPP_Character) \
	virtual UObject* _getUObject() const override { return const_cast<ACPP_Character*>(this); }


#define King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPP_Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPP_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPP_Character(ACPP_Character&&); \
	NO_API ACPP_Character(const ACPP_Character&); \
public:


#define King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPP_Character(ACPP_Character&&); \
	NO_API ACPP_Character(const ACPP_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPP_Character)


#define King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__inputToInputTypeMap() { return STRUCT_OFFSET(ACPP_Character, inputToInputTypeMap); } \
	FORCEINLINE static uint32 __PPO__inputBuffer() { return STRUCT_OFFSET(ACPP_Character, inputBuffer); } \
	FORCEINLINE static uint32 __PPO__characterCommands() { return STRUCT_OFFSET(ACPP_Character, characterCommands); } \
	FORCEINLINE static uint32 __PPO__isDeviceForMultiplePlayers() { return STRUCT_OFFSET(ACPP_Character, isDeviceForMultiplePlayers); } \
	FORCEINLINE static uint32 __PPO__command_Check() { return STRUCT_OFFSET(ACPP_Character, command_Check); }


#define King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_96_PROLOG \
	King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_EVENT_PARMS


#define King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_PRIVATE_PROPERTY_OFFSET \
	King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_SPARSE_DATA \
	King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_RPC_WRAPPERS \
	King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_CALLBACK_WRAPPERS \
	King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_INCLASS \
	King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_PRIVATE_PROPERTY_OFFSET \
	King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_SPARSE_DATA \
	King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_CALLBACK_WRAPPERS \
	King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_INCLASS_NO_PURE_DECLS \
	King_Of_Animal_Source_King_Of_Animal_CPP_Character_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KING_OF_ANIMAL_API UClass* StaticClass<class ACPP_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID King_Of_Animal_Source_King_Of_Animal_CPP_Character_h


#define FOREACH_ENUM_EINPUTTYPE(op) \
	op(EInputType::E_None) \
	op(EInputType::E_Forward) \
	op(EInputType::E_Backward) \
	op(EInputType::E_Jump) \
	op(EInputType::E_Crouch) \
	op(EInputType::E_LeftPunch) \
	op(EInputType::E_RightPunch) \
	op(EInputType::E_LeftKick) \
	op(EInputType::E_RightKick) 

enum class EInputType : uint8;
template<> KING_OF_ANIMAL_API UEnum* StaticEnum<EInputType>();

#define FOREACH_ENUM_ECHARACTERSTATE(op) \
	op(ECharacterState::VE_Default) \
	op(ECharacterState::VE_MovingRight) \
	op(ECharacterState::VE_MovingLeft) \
	op(ECharacterState::VE_Jumping) \
	op(ECharacterState::VE_Stunned) \
	op(ECharacterState::VE_Blocking) \
	op(ECharacterState::VE_Crouching) \
	op(ECharacterState::VE_Dead) \
	op(ECharacterState::VE_Launched) \
	op(ECharacterState::VE_KnockedDown) \
	op(ECharacterState::VE_Recovery) \
	op(ECharacterState::VE_WallBounce) \
	op(ECharacterState::VE_GroundBounce) 

enum class ECharacterState : uint8;
template<> KING_OF_ANIMAL_API UEnum* StaticEnum<ECharacterState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
