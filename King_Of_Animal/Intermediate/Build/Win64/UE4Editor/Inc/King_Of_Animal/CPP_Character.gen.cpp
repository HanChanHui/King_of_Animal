// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "King_Of_Animal/CPP_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Character() {}
// Cross Module References
	KING_OF_ANIMAL_API UEnum* Z_Construct_UEnum_King_Of_Animal_EInputType();
	UPackage* Z_Construct_UPackage__Script_King_Of_Animal();
	KING_OF_ANIMAL_API UEnum* Z_Construct_UEnum_King_Of_Animal_ECharacterState();
	KING_OF_ANIMAL_API UScriptStruct* Z_Construct_UScriptStruct_FInputInfo();
	KING_OF_ANIMAL_API UScriptStruct* Z_Construct_UScriptStruct_FCommand();
	KING_OF_ANIMAL_API UClass* Z_Construct_UClass_ACPP_Character_NoRegister();
	KING_OF_ANIMAL_API UClass* Z_Construct_UClass_ACPP_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	KING_OF_ANIMAL_API UClass* Z_Construct_UClass_UFightInterface_NoRegister();
// End Cross Module References
	static UEnum* EInputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_King_Of_Animal_EInputType, Z_Construct_UPackage__Script_King_Of_Animal(), TEXT("EInputType"));
		}
		return Singleton;
	}
	template<> KING_OF_ANIMAL_API UEnum* StaticEnum<EInputType>()
	{
		return EInputType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInputType(EInputType_StaticEnum, TEXT("/Script/King_Of_Animal"), TEXT("EInputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_King_Of_Animal_EInputType_Hash() { return 1799181944U; }
	UEnum* Z_Construct_UEnum_King_Of_Animal_EInputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_King_Of_Animal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInputType"), 0, Get_Z_Construct_UEnum_King_Of_Animal_EInputType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInputType::E_None", (int64)EInputType::E_None },
				{ "EInputType::E_Forward", (int64)EInputType::E_Forward },
				{ "EInputType::E_Backward", (int64)EInputType::E_Backward },
				{ "EInputType::E_Jump", (int64)EInputType::E_Jump },
				{ "EInputType::E_Crouch", (int64)EInputType::E_Crouch },
				{ "EInputType::E_LeftPunch", (int64)EInputType::E_LeftPunch },
				{ "EInputType::E_RightPunch", (int64)EInputType::E_RightPunch },
				{ "EInputType::E_LeftKick", (int64)EInputType::E_LeftKick },
				{ "EInputType::E_RightKick", (int64)EInputType::E_RightKick },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/*\n\x09?\xdb\xbc??? : 20181275 ??????\n*/" },
				{ "E_Backward.DisplayName", "BACKWARD" },
				{ "E_Backward.Name", "EInputType::E_Backward" },
				{ "E_Crouch.DisplayName", "CROUCH" },
				{ "E_Crouch.Name", "EInputType::E_Crouch" },
				{ "E_Forward.DisplayName", "FORWARD" },
				{ "E_Forward.Name", "EInputType::E_Forward" },
				{ "E_Jump.DisplayName", "JUMP" },
				{ "E_Jump.Name", "EInputType::E_Jump" },
				{ "E_LeftKick.DisplayName", "LEFTKICK" },
				{ "E_LeftKick.Name", "EInputType::E_LeftKick" },
				{ "E_LeftPunch.DisplayName", "LEFTPUNCH" },
				{ "E_LeftPunch.Name", "EInputType::E_LeftPunch" },
				{ "E_None.DisplayName", "NONE" },
				{ "E_None.Name", "EInputType::E_None" },
				{ "E_RightKick.DisplayName", "RIGHTKICK" },
				{ "E_RightKick.Name", "EInputType::E_RightKick" },
				{ "E_RightPunch.DisplayName", "RIGHTPUNCH" },
				{ "E_RightPunch.Name", "EInputType::E_RightPunch" },
				{ "ModuleRelativePath", "CPP_Character.h" },
				{ "ToolTip", "?\xdb\xbc??? : 20181275 ??????" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_King_Of_Animal,
				nullptr,
				"EInputType",
				"EInputType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECharacterState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_King_Of_Animal_ECharacterState, Z_Construct_UPackage__Script_King_Of_Animal(), TEXT("ECharacterState"));
		}
		return Singleton;
	}
	template<> KING_OF_ANIMAL_API UEnum* StaticEnum<ECharacterState>()
	{
		return ECharacterState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECharacterState(ECharacterState_StaticEnum, TEXT("/Script/King_Of_Animal"), TEXT("ECharacterState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_King_Of_Animal_ECharacterState_Hash() { return 3516379526U; }
	UEnum* Z_Construct_UEnum_King_Of_Animal_ECharacterState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_King_Of_Animal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECharacterState"), 0, Get_Z_Construct_UEnum_King_Of_Animal_ECharacterState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECharacterState::VE_Default", (int64)ECharacterState::VE_Default },
				{ "ECharacterState::VE_MovingRight", (int64)ECharacterState::VE_MovingRight },
				{ "ECharacterState::VE_MovingLeft", (int64)ECharacterState::VE_MovingLeft },
				{ "ECharacterState::VE_Jumping", (int64)ECharacterState::VE_Jumping },
				{ "ECharacterState::VE_Stunned", (int64)ECharacterState::VE_Stunned },
				{ "ECharacterState::VE_Blocking", (int64)ECharacterState::VE_Blocking },
				{ "ECharacterState::VE_Crouching", (int64)ECharacterState::VE_Crouching },
				{ "ECharacterState::VE_Dead", (int64)ECharacterState::VE_Dead },
				{ "ECharacterState::VE_Launched", (int64)ECharacterState::VE_Launched },
				{ "ECharacterState::VE_KnockedDown", (int64)ECharacterState::VE_KnockedDown },
				{ "ECharacterState::VE_Recovery", (int64)ECharacterState::VE_Recovery },
				{ "ECharacterState::VE_WallBounce", (int64)ECharacterState::VE_WallBounce },
				{ "ECharacterState::VE_GroundBounce", (int64)ECharacterState::VE_GroundBounce },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "CPP_Character.h" },
				{ "VE_Blocking.DisplayName", "BLOCKING" },
				{ "VE_Blocking.Name", "ECharacterState::VE_Blocking" },
				{ "VE_Crouching.DisplayName", "CROUCHING" },
				{ "VE_Crouching.Name", "ECharacterState::VE_Crouching" },
				{ "VE_Dead.DisplayName", "DEAD" },
				{ "VE_Dead.Name", "ECharacterState::VE_Dead" },
				{ "VE_Default.DisplayName", "NOT_MOVING" },
				{ "VE_Default.Name", "ECharacterState::VE_Default" },
				{ "VE_GroundBounce.DisplayName", "GROUND BOUNCED" },
				{ "VE_GroundBounce.Name", "ECharacterState::VE_GroundBounce" },
				{ "VE_Jumping.DisplayName", "JUMPING" },
				{ "VE_Jumping.Name", "ECharacterState::VE_Jumping" },
				{ "VE_KnockedDown.DisplayName", "KNOCKED DOWN" },
				{ "VE_KnockedDown.Name", "ECharacterState::VE_KnockedDown" },
				{ "VE_Launched.DisplayName", "LAUNCHED" },
				{ "VE_Launched.Name", "ECharacterState::VE_Launched" },
				{ "VE_MovingLeft.DisplayName", "MOVINGLEFT" },
				{ "VE_MovingLeft.Name", "ECharacterState::VE_MovingLeft" },
				{ "VE_MovingRight.DisplayName", "MOVINGRIGHT" },
				{ "VE_MovingRight.Name", "ECharacterState::VE_MovingRight" },
				{ "VE_Recovery.DisplayName", "RECOVERY" },
				{ "VE_Recovery.Name", "ECharacterState::VE_Recovery" },
				{ "VE_Stunned.DisplayName", "STUNNED" },
				{ "VE_Stunned.Name", "ECharacterState::VE_Stunned" },
				{ "VE_WallBounce.DisplayName", "WALL BOUNCED" },
				{ "VE_WallBounce.Name", "ECharacterState::VE_WallBounce" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_King_Of_Animal,
				nullptr,
				"ECharacterState",
				"ECharacterState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FInputInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KING_OF_ANIMAL_API uint32 Get_Z_Construct_UScriptStruct_FInputInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputInfo, Z_Construct_UPackage__Script_King_Of_Animal(), TEXT("InputInfo"), sizeof(FInputInfo), Get_Z_Construct_UScriptStruct_FInputInfo_Hash());
	}
	return Singleton;
}
template<> KING_OF_ANIMAL_API UScriptStruct* StaticStruct<FInputInfo>()
{
	return FInputInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputInfo(FInputInfo::StaticStruct, TEXT("/Script/King_Of_Animal"), TEXT("InputInfo"), false, nullptr, nullptr);
static struct FScriptStruct_King_Of_Animal_StaticRegisterNativesFInputInfo
{
	FScriptStruct_King_Of_Animal_StaticRegisterNativesFInputInfo()
	{
		UScriptStruct::DeferCppStructOps<FInputInfo>(FName(TEXT("InputInfo")));
	}
} ScriptStruct_King_Of_Animal_StaticRegisterNativesFInputInfo;
	struct Z_Construct_UScriptStruct_FInputInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inputType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inputType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inputName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeStamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wasUsed_MetaData[];
#endif
		static void NewProp_wasUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasUsed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_inputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_inputType_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_inputType = { "inputType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputInfo, inputType), Z_Construct_UEnum_King_Of_Animal_EInputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_inputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_inputType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_inputName_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_inputName = { "inputName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputInfo, inputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_inputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_inputName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_timeStamp_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_timeStamp = { "timeStamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputInfo, timeStamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_timeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_timeStamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_wasUsed_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_wasUsed_SetBit(void* Obj)
	{
		((FInputInfo*)Obj)->wasUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_wasUsed = { "wasUsed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInputInfo), &Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_wasUsed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_wasUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_wasUsed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_inputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_inputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_inputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_timeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_wasUsed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_King_Of_Animal,
		nullptr,
		&NewStructOps,
		"InputInfo",
		sizeof(FInputInfo),
		alignof(FInputInfo),
		Z_Construct_UScriptStruct_FInputInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_King_Of_Animal();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputInfo"), sizeof(FInputInfo), Get_Z_Construct_UScriptStruct_FInputInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputInfo_Hash() { return 2168364958U; }
class UScriptStruct* FCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KING_OF_ANIMAL_API uint32 Get_Z_Construct_UScriptStruct_FCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommand, Z_Construct_UPackage__Script_King_Of_Animal(), TEXT("Command"), sizeof(FCommand), Get_Z_Construct_UScriptStruct_FCommand_Hash());
	}
	return Singleton;
}
template<> KING_OF_ANIMAL_API UScriptStruct* StaticStruct<FCommand>()
{
	return FCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCommand(FCommand::StaticStruct, TEXT("/Script/King_Of_Animal"), TEXT("Command"), false, nullptr, nullptr);
static struct FScriptStruct_King_Of_Animal_StaticRegisterNativesFCommand
{
	FScriptStruct_King_Of_Animal_StaticRegisterNativesFCommand()
	{
		UScriptStruct::DeferCppStructOps<FCommand>(FName(TEXT("Command")));
	}
} ScriptStruct_King_Of_Animal_StaticRegisterNativesFCommand;
	struct Z_Construct_UScriptStruct_FCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inputTypes_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inputTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inputTypes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inputs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasUsedCommand_MetaData[];
#endif
		static void NewProp_hasUsedCommand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasUsedCommand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommand_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommand_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCommand_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommand, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommand_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommand_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCommand_Statics::NewProp_inputTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCommand_Statics::NewProp_inputTypes_Inner = { "inputTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_King_Of_Animal_EInputType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommand_Statics::NewProp_inputTypes_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCommand_Statics::NewProp_inputTypes = { "inputTypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommand, inputTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommand_Statics::NewProp_inputTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommand_Statics::NewProp_inputTypes_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCommand_Statics::NewProp_inputs_Inner = { "inputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommand_Statics::NewProp_inputs_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// new\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "new" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCommand_Statics::NewProp_inputs = { "inputs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommand, inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommand_Statics::NewProp_inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommand_Statics::NewProp_inputs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommand_Statics::NewProp_hasUsedCommand_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCommand_Statics::NewProp_hasUsedCommand_SetBit(void* Obj)
	{
		((FCommand*)Obj)->hasUsedCommand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCommand_Statics::NewProp_hasUsedCommand = { "hasUsedCommand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCommand), &Z_Construct_UScriptStruct_FCommand_Statics::NewProp_hasUsedCommand_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommand_Statics::NewProp_hasUsedCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommand_Statics::NewProp_hasUsedCommand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommand_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommand_Statics::NewProp_inputTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommand_Statics::NewProp_inputTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommand_Statics::NewProp_inputTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommand_Statics::NewProp_inputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommand_Statics::NewProp_inputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommand_Statics::NewProp_hasUsedCommand,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_King_Of_Animal,
		nullptr,
		&NewStructOps,
		"Command",
		sizeof(FCommand),
		alignof(FCommand),
		Z_Construct_UScriptStruct_FCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_King_Of_Animal();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Command"), sizeof(FCommand), Get_Z_Construct_UScriptStruct_FCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCommand_Hash() { return 3669135234U; }
	DEFINE_FUNCTION(ACPP_Character::execWinRound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WinRound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Character::execStartCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__commandName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCommand(Z_Param__commandName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Character::execCheckInputBufferForCommandUsingType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckInputBufferForCommandUsingType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Character::execCheckInputBufferForCommand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckInputBufferForCommand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Character::execAddInputToInputBuffer)
	{
		P_GET_STRUCT(FInputInfo,Z_Param__inputInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddInputToInputBuffer(Z_Param__inputInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Character::execAddToInputMap)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__input);
		P_GET_ENUM(EInputType,Z_Param__type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToInputMap(Z_Param__input,EInputType(Z_Param__type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Character::execSkill_Ult_P2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Skill_Ult_P2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Character::execSkill_2_P2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Skill_2_P2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Character::execSkill_1_P2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Skill_1_P2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Character::execStartExceptionalAttack_P2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartExceptionalAttack_P2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Character::execStopJump_P2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopJump_P2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Character::execJump_P2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Jump_P2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Character::execR_Kick_P2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->R_Kick_P2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Character::execL_Kick_P2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->L_Kick_P2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Character::execR_Punch_P2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->R_Punch_P2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Character::execL_Punch_P2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->L_Punch_P2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Character::execMoveRight_P2)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight_P2(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Character::execLanded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Landed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Character::execStopBlocking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopBlocking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Character::execStartBlocking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartBlocking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Character::execStopCrouching)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopCrouching();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Character::execStartCrouching)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCrouching();
		P_NATIVE_END;
	}
	static FName NAME_ACPP_Character_AddInputIconToScreen = FName(TEXT("AddInputIconToScreen"));
	void ACPP_Character::AddInputIconToScreen(int32 iconIndex, bool addInput)
	{
		CPP_Character_eventAddInputIconToScreen_Parms Parms;
		Parms.iconIndex=iconIndex;
		Parms.addInput=addInput ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ACPP_Character_AddInputIconToScreen),&Parms);
	}
	static FName NAME_ACPP_Character_NotifyPlayerLockedIn = FName(TEXT("NotifyPlayerLockedIn"));
	void ACPP_Character::NotifyPlayerLockedIn()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACPP_Character_NotifyPlayerLockedIn),NULL);
	}
	static FName NAME_ACPP_Character_NotifyRoundEnd = FName(TEXT("NotifyRoundEnd"));
	void ACPP_Character::NotifyRoundEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACPP_Character_NotifyRoundEnd),NULL);
	}
	static FName NAME_ACPP_Character_NotifyRoundStart = FName(TEXT("NotifyRoundStart"));
	void ACPP_Character::NotifyRoundStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACPP_Character_NotifyRoundStart),NULL);
	}
	static FName NAME_ACPP_Character_UpdatePointIcon = FName(TEXT("UpdatePointIcon"));
	void ACPP_Character::UpdatePointIcon()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACPP_Character_UpdatePointIcon),NULL);
	}
	void ACPP_Character::StaticRegisterNativesACPP_Character()
	{
		UClass* Class = ACPP_Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInputToInputBuffer", &ACPP_Character::execAddInputToInputBuffer },
			{ "AddToInputMap", &ACPP_Character::execAddToInputMap },
			{ "CheckInputBufferForCommand", &ACPP_Character::execCheckInputBufferForCommand },
			{ "CheckInputBufferForCommandUsingType", &ACPP_Character::execCheckInputBufferForCommandUsingType },
			{ "Jump_P2", &ACPP_Character::execJump_P2 },
			{ "L_Kick_P2", &ACPP_Character::execL_Kick_P2 },
			{ "L_Punch_P2", &ACPP_Character::execL_Punch_P2 },
			{ "Landed", &ACPP_Character::execLanded },
			{ "MoveRight_P2", &ACPP_Character::execMoveRight_P2 },
			{ "R_Kick_P2", &ACPP_Character::execR_Kick_P2 },
			{ "R_Punch_P2", &ACPP_Character::execR_Punch_P2 },
			{ "Skill_1_P2", &ACPP_Character::execSkill_1_P2 },
			{ "Skill_2_P2", &ACPP_Character::execSkill_2_P2 },
			{ "Skill_Ult_P2", &ACPP_Character::execSkill_Ult_P2 },
			{ "StartBlocking", &ACPP_Character::execStartBlocking },
			{ "StartCommand", &ACPP_Character::execStartCommand },
			{ "StartCrouching", &ACPP_Character::execStartCrouching },
			{ "StartExceptionalAttack_P2", &ACPP_Character::execStartExceptionalAttack_P2 },
			{ "StopBlocking", &ACPP_Character::execStopBlocking },
			{ "StopCrouching", &ACPP_Character::execStopCrouching },
			{ "StopJump_P2", &ACPP_Character::execStopJump_P2 },
			{ "WinRound", &ACPP_Character::execWinRound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPP_Character_AddInputIconToScreen_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iconIndex;
		static void NewProp_addInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_addInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ACPP_Character_AddInputIconToScreen_Statics::NewProp_iconIndex = { "iconIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_Character_eventAddInputIconToScreen_Parms, iconIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACPP_Character_AddInputIconToScreen_Statics::NewProp_addInput_SetBit(void* Obj)
	{
		((CPP_Character_eventAddInputIconToScreen_Parms*)Obj)->addInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACPP_Character_AddInputIconToScreen_Statics::NewProp_addInput = { "addInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CPP_Character_eventAddInputIconToScreen_Parms), &Z_Construct_UFunction_ACPP_Character_AddInputIconToScreen_Statics::NewProp_addInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Character_AddInputIconToScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Character_AddInputIconToScreen_Statics::NewProp_iconIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Character_AddInputIconToScreen_Statics::NewProp_addInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_AddInputIconToScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_AddInputIconToScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "AddInputIconToScreen", nullptr, nullptr, sizeof(CPP_Character_eventAddInputIconToScreen_Parms), Z_Construct_UFunction_ACPP_Character_AddInputIconToScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_AddInputIconToScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_AddInputIconToScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_AddInputIconToScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_AddInputIconToScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_AddInputIconToScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_AddInputToInputBuffer_Statics
	{
		struct CPP_Character_eventAddInputToInputBuffer_Parms
		{
			FInputInfo _inputInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__inputInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPP_Character_AddInputToInputBuffer_Statics::NewProp__inputInfo = { "_inputInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_Character_eventAddInputToInputBuffer_Parms, _inputInfo), Z_Construct_UScriptStruct_FInputInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Character_AddInputToInputBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Character_AddInputToInputBuffer_Statics::NewProp__inputInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_AddInputToInputBuffer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Adds inputs to the input buffer.\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "Adds inputs to the input buffer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_AddInputToInputBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "AddInputToInputBuffer", nullptr, nullptr, sizeof(CPP_Character_eventAddInputToInputBuffer_Parms), Z_Construct_UFunction_ACPP_Character_AddInputToInputBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_AddInputToInputBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_AddInputToInputBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_AddInputToInputBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_AddInputToInputBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_AddInputToInputBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_AddToInputMap_Statics
	{
		struct CPP_Character_eventAddToInputMap_Parms
		{
			FString _input;
			EInputType _type;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__input;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACPP_Character_AddToInputMap_Statics::NewProp__input = { "_input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_Character_eventAddToInputMap_Parms, _input), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACPP_Character_AddToInputMap_Statics::NewProp__type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACPP_Character_AddToInputMap_Statics::NewProp__type = { "_type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_Character_eventAddToInputMap_Parms, _type), Z_Construct_UEnum_King_Of_Animal_EInputType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Character_AddToInputMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Character_AddToInputMap_Statics::NewProp__input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Character_AddToInputMap_Statics::NewProp__type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Character_AddToInputMap_Statics::NewProp__type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_AddToInputMap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09\x09?\xdb\xbc??? : 20181275 ??????\n\x09*/" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "?\xdb\xbc??? : 20181275 ??????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_AddToInputMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "AddToInputMap", nullptr, nullptr, sizeof(CPP_Character_eventAddToInputMap_Parms), Z_Construct_UFunction_ACPP_Character_AddToInputMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_AddToInputMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_AddToInputMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_AddToInputMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_AddToInputMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_AddToInputMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_CheckInputBufferForCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_CheckInputBufferForCommand_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Check if the input buffer contains any sequences from the character's list of commands.\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "Check if the input buffer contains any sequences from the character's list of commands." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_CheckInputBufferForCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "CheckInputBufferForCommand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_CheckInputBufferForCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_CheckInputBufferForCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_CheckInputBufferForCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_CheckInputBufferForCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_CheckInputBufferForCommandUsingType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_CheckInputBufferForCommandUsingType_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Check if the input buffer contains any sequences from the character's list of commands using input types.\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "Check if the input buffer contains any sequences from the character's list of commands using input types." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_CheckInputBufferForCommandUsingType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "CheckInputBufferForCommandUsingType", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_CheckInputBufferForCommandUsingType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_CheckInputBufferForCommandUsingType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_CheckInputBufferForCommandUsingType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_CheckInputBufferForCommandUsingType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_Jump_P2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_Jump_P2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_Jump_P2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "Jump_P2", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_Jump_P2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_Jump_P2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_Jump_P2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_Jump_P2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_L_Kick_P2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_L_Kick_P2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_L_Kick_P2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "L_Kick_P2", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_L_Kick_P2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_L_Kick_P2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_L_Kick_P2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_L_Kick_P2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_L_Punch_P2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_L_Punch_P2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_L_Punch_P2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "L_Punch_P2", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_L_Punch_P2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_L_Punch_P2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_L_Punch_P2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_L_Punch_P2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_Landed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_Landed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_Landed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "Landed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_Landed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_Landed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_Landed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_Landed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_MoveRight_P2_Statics
	{
		struct CPP_Character_eventMoveRight_P2_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPP_Character_MoveRight_P2_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_Character_eventMoveRight_P2_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Character_MoveRight_P2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Character_MoveRight_P2_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_MoveRight_P2_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Player 2\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "Player 2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_MoveRight_P2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "MoveRight_P2", nullptr, nullptr, sizeof(CPP_Character_eventMoveRight_P2_Parms), Z_Construct_UFunction_ACPP_Character_MoveRight_P2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_MoveRight_P2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_MoveRight_P2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_MoveRight_P2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_MoveRight_P2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_MoveRight_P2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_NotifyPlayerLockedIn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_NotifyPlayerLockedIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_NotifyPlayerLockedIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "NotifyPlayerLockedIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_NotifyPlayerLockedIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_NotifyPlayerLockedIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_NotifyPlayerLockedIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_NotifyPlayerLockedIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_NotifyRoundEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_NotifyRoundEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_NotifyRoundEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "NotifyRoundEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_NotifyRoundEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_NotifyRoundEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_NotifyRoundEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_NotifyRoundEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_NotifyRoundStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_NotifyRoundStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_NotifyRoundStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "NotifyRoundStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_NotifyRoundStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_NotifyRoundStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_NotifyRoundStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_NotifyRoundStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_R_Kick_P2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_R_Kick_P2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_R_Kick_P2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "R_Kick_P2", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_R_Kick_P2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_R_Kick_P2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_R_Kick_P2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_R_Kick_P2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_R_Punch_P2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_R_Punch_P2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_R_Punch_P2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "R_Punch_P2", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_R_Punch_P2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_R_Punch_P2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_R_Punch_P2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_R_Punch_P2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_Skill_1_P2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_Skill_1_P2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_Skill_1_P2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "Skill_1_P2", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_Skill_1_P2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_Skill_1_P2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_Skill_1_P2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_Skill_1_P2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_Skill_2_P2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_Skill_2_P2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_Skill_2_P2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "Skill_2_P2", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_Skill_2_P2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_Skill_2_P2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_Skill_2_P2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_Skill_2_P2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_Skill_Ult_P2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_Skill_Ult_P2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_Skill_Ult_P2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "Skill_Ult_P2", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_Skill_Ult_P2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_Skill_Ult_P2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_Skill_Ult_P2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_Skill_Ult_P2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_StartBlocking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_StartBlocking_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Character blocking\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "Character blocking" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_StartBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "StartBlocking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_StartBlocking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_StartBlocking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_StartBlocking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_StartBlocking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_StartCommand_Statics
	{
		struct CPP_Character_eventStartCommand_Parms
		{
			FString _commandName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__commandName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACPP_Character_StartCommand_Statics::NewProp__commandName = { "_commandName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_Character_eventStartCommand_Parms, _commandName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Character_StartCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Character_StartCommand_Statics::NewProp__commandName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_StartCommand_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Make the character begin using a command based off of the command's name.\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "Make the character begin using a command based off of the command's name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_StartCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "StartCommand", nullptr, nullptr, sizeof(CPP_Character_eventStartCommand_Parms), Z_Construct_UFunction_ACPP_Character_StartCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_StartCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_StartCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_StartCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_StartCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_StartCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_StartCrouching_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_StartCrouching_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Character crouching\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "Character crouching" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_StartCrouching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "StartCrouching", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_StartCrouching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_StartCrouching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_StartCrouching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_StartCrouching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_StartExceptionalAttack_P2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_StartExceptionalAttack_P2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_StartExceptionalAttack_P2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "StartExceptionalAttack_P2", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_StartExceptionalAttack_P2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_StartExceptionalAttack_P2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_StartExceptionalAttack_P2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_StartExceptionalAttack_P2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_StopBlocking_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_StopBlocking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_StopBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "StopBlocking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_StopBlocking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_StopBlocking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_StopBlocking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_StopBlocking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_StopCrouching_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_StopCrouching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_StopCrouching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "StopCrouching", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_StopCrouching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_StopCrouching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_StopCrouching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_StopCrouching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_StopJump_P2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_StopJump_P2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_StopJump_P2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "StopJump_P2", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_StopJump_P2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_StopJump_P2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_StopJump_P2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_StopJump_P2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_UpdatePointIcon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_UpdatePointIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_UpdatePointIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "UpdatePointIcon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_UpdatePointIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_UpdatePointIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_UpdatePointIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_UpdatePointIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Character_WinRound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Character_WinRound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Character_WinRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Character, nullptr, "WinRound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Character_WinRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Character_WinRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Character_WinRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_Character_WinRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACPP_Character_NoRegister()
	{
		return ACPP_Character::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_inputToInputTypeMap_ValueProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_inputToInputTypeMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inputToInputTypeMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputToInputTypeMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_inputToInputTypeMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inputBuffer_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inputBuffer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_characterCommands_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterCommands_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_characterCommands;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDeviceForMultiplePlayers_MetaData[];
#endif
		static void NewProp_isDeviceForMultiplePlayers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDeviceForMultiplePlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_command_Check_MetaData[];
#endif
		static void NewProp_command_Check_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_command_Check;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_l_punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_l_punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_r_punch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_r_punch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_l_kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_l_kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_r_kick_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_r_kick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_l_punchReact_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_l_punchReact;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_blocking_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_blocking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skill_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skill_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skill_2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skill_2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skill_Ult_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skill_Ult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_opponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_opponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_scale;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_characterState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_characterState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PK_Check_MetaData[];
#endif
		static void NewProp_PK_Check_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PK_Check;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canMove_MetaData[];
#endif
		static void NewProp_canMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDie_MetaData[];
#endif
		static void NewProp_IsDie_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDie;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isFlipped_MetaData[];
#endif
		static void NewProp_isFlipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isFlipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isCrouching_MetaData[];
#endif
		static void NewProp_isCrouching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isCrouching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isuppercut_MetaData[];
#endif
		static void NewProp_isuppercut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isuppercut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wasLightAttackUsed_MetaData[];
#endif
		static void NewProp_wasLightAttackUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasLightAttackUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wasMediumAttackUsed_MetaData[];
#endif
		static void NewProp_wasMediumAttackUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasMediumAttackUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wasHeavyAttackUsed_MetaData[];
#endif
		static void NewProp_wasHeavyAttackUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasHeavyAttackUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wasSuperUsed_MetaData[];
#endif
		static void NewProp_wasSuperUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasSuperUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wasLightExAttackUsed_MetaData[];
#endif
		static void NewProp_wasLightExAttackUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasLightExAttackUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wasMediumExAttackUsed_MetaData[];
#endif
		static void NewProp_wasMediumExAttackUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasMediumExAttackUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wasHeavyExAttackUsed_MetaData[];
#endif
		static void NewProp_wasHeavyExAttackUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_wasHeavyExAttackUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_canUseExAttack_MetaData[];
#endif
		static void NewProp_canUseExAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_canUseExAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isPlayerOne_MetaData[];
#endif
		static void NewProp_isPlayerOne_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPlayerOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shouldGroundBounce_MetaData[];
#endif
		static void NewProp_shouldGroundBounce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldGroundBounce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shouldWallBounce_MetaData[];
#endif
		static void NewProp_shouldWallBounce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldWallBounce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxDistanceApart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxDistanceApart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stunTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_stunTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_basicsDamageAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_basicsDamageAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillDamageAmount_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SkillDamageAmount_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pushbackDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pushbackDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_launchDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_launchDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gravityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gravityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_superMeterAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_superMeterAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentsuperMeterAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentsuperMeterAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gravityScaleModifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gravityScaleModifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roundWon_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_roundWon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasLostRound_MetaData[];
#endif
		static void NewProp_hasLostRound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasLostRound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_King_Of_Animal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_Character_AddInputIconToScreen, "AddInputIconToScreen" }, // 3162978685
		{ &Z_Construct_UFunction_ACPP_Character_AddInputToInputBuffer, "AddInputToInputBuffer" }, // 956030268
		{ &Z_Construct_UFunction_ACPP_Character_AddToInputMap, "AddToInputMap" }, // 2921608466
		{ &Z_Construct_UFunction_ACPP_Character_CheckInputBufferForCommand, "CheckInputBufferForCommand" }, // 3513856903
		{ &Z_Construct_UFunction_ACPP_Character_CheckInputBufferForCommandUsingType, "CheckInputBufferForCommandUsingType" }, // 3546741922
		{ &Z_Construct_UFunction_ACPP_Character_Jump_P2, "Jump_P2" }, // 588206358
		{ &Z_Construct_UFunction_ACPP_Character_L_Kick_P2, "L_Kick_P2" }, // 3400160605
		{ &Z_Construct_UFunction_ACPP_Character_L_Punch_P2, "L_Punch_P2" }, // 3087594279
		{ &Z_Construct_UFunction_ACPP_Character_Landed, "Landed" }, // 1717447922
		{ &Z_Construct_UFunction_ACPP_Character_MoveRight_P2, "MoveRight_P2" }, // 2587419437
		{ &Z_Construct_UFunction_ACPP_Character_NotifyPlayerLockedIn, "NotifyPlayerLockedIn" }, // 3838939089
		{ &Z_Construct_UFunction_ACPP_Character_NotifyRoundEnd, "NotifyRoundEnd" }, // 2138196791
		{ &Z_Construct_UFunction_ACPP_Character_NotifyRoundStart, "NotifyRoundStart" }, // 377664868
		{ &Z_Construct_UFunction_ACPP_Character_R_Kick_P2, "R_Kick_P2" }, // 3500934895
		{ &Z_Construct_UFunction_ACPP_Character_R_Punch_P2, "R_Punch_P2" }, // 384031174
		{ &Z_Construct_UFunction_ACPP_Character_Skill_1_P2, "Skill_1_P2" }, // 1159763319
		{ &Z_Construct_UFunction_ACPP_Character_Skill_2_P2, "Skill_2_P2" }, // 3454044981
		{ &Z_Construct_UFunction_ACPP_Character_Skill_Ult_P2, "Skill_Ult_P2" }, // 1997985616
		{ &Z_Construct_UFunction_ACPP_Character_StartBlocking, "StartBlocking" }, // 738260534
		{ &Z_Construct_UFunction_ACPP_Character_StartCommand, "StartCommand" }, // 1192937594
		{ &Z_Construct_UFunction_ACPP_Character_StartCrouching, "StartCrouching" }, // 892488333
		{ &Z_Construct_UFunction_ACPP_Character_StartExceptionalAttack_P2, "StartExceptionalAttack_P2" }, // 4190237114
		{ &Z_Construct_UFunction_ACPP_Character_StopBlocking, "StopBlocking" }, // 2576146604
		{ &Z_Construct_UFunction_ACPP_Character_StopCrouching, "StopCrouching" }, // 3401034553
		{ &Z_Construct_UFunction_ACPP_Character_StopJump_P2, "StopJump_P2" }, // 2129420561
		{ &Z_Construct_UFunction_ACPP_Character_UpdatePointIcon, "UpdatePointIcon" }, // 1869074307
		{ &Z_Construct_UFunction_ACPP_Character_WinRound, "WinRound" }, // 3803476994
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n\x09?\xdb\xbc? ????\n*/" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CPP_Character.h" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "?\xdb\xbc? ????" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_inputToInputTypeMap_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_inputToInputTypeMap_ValueProp = { "inputToInputTypeMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_King_Of_Animal_EInputType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_inputToInputTypeMap_Key_KeyProp = { "inputToInputTypeMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_inputToInputTypeMap_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// The map of inputs-to-InputTypes for access when determining if the player controlling this character has used a recognized input.\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "The map of inputs-to-InputTypes for access when determining if the player controlling this character has used a recognized input." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_inputToInputTypeMap = { "inputToInputTypeMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, inputToInputTypeMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_inputToInputTypeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_inputToInputTypeMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_inputBuffer_Inner = { "inputBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_inputBuffer_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// The array of inputs the player controlling this character has performed.\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "The array of inputs the player controlling this character has performed." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_inputBuffer = { "inputBuffer", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, inputBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_inputBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_inputBuffer_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_characterCommands_Inner = { "characterCommands", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCommand, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_characterCommands_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Commands to be used when a correct series of inputs has been pressed.\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "Commands to be used when a correct series of inputs has been pressed." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_characterCommands = { "characterCommands", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, characterCommands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_characterCommands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_characterCommands_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_isDeviceForMultiplePlayers_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_Character_Statics::NewProp_isDeviceForMultiplePlayers_SetBit(void* Obj)
	{
		((ACPP_Character*)Obj)->isDeviceForMultiplePlayers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_isDeviceForMultiplePlayers = { "isDeviceForMultiplePlayers", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_Character), &Z_Construct_UClass_ACPP_Character_Statics::NewProp_isDeviceForMultiplePlayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_isDeviceForMultiplePlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_isDeviceForMultiplePlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_command_Check_MetaData[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_Character_Statics::NewProp_command_Check_SetBit(void* Obj)
	{
		((ACPP_Character*)Obj)->command_Check = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_command_Check = { "command_Check", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_Character), &Z_Construct_UClass_ACPP_Character_Statics::NewProp_command_Check_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_command_Check_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_command_Check_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_l_punch_MetaData[] = {
		{ "Category", "Animations" },
		{ "Comment", "// player AnimMontage\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "player AnimMontage" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_l_punch = { "l_punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, l_punch), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_l_punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_l_punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_r_punch_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_r_punch = { "r_punch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, r_punch), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_r_punch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_r_punch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_l_kick_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_l_kick = { "l_kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, l_kick), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_l_kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_l_kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_r_kick_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_r_kick = { "r_kick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, r_kick), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_r_kick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_r_kick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_l_punchReact_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_l_punchReact = { "l_punchReact", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, l_punchReact), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_l_punchReact_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_l_punchReact_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_blocking_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_blocking = { "blocking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, blocking), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_blocking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_blocking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_skill_1_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_skill_1 = { "skill_1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, skill_1), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_skill_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_skill_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_skill_2_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_skill_2 = { "skill_2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, skill_2), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_skill_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_skill_2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_skill_Ult_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_skill_Ult = { "skill_Ult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, skill_Ult), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_skill_Ult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_skill_Ult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_opponent_MetaData[] = {
		{ "Category", "Player References" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_opponent = { "opponent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, opponent), Z_Construct_UClass_ACPP_Character_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_opponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_opponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_transform_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "// the character's transform.\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "the character's transform." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_transform = { "transform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_scale_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "// The character's scale\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "The character's scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_scale_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_characterState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_characterState_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// The current state of the character (jumping, stun, and more)\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "The current state of the character (jumping, stun, and more)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_characterState = { "characterState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, characterState), Z_Construct_UEnum_King_Of_Animal_ECharacterState, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_characterState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_characterState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_PK_Check_MetaData[] = {
		{ "Category", "Check" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_Character_Statics::NewProp_PK_Check_SetBit(void* Obj)
	{
		((ACPP_Character*)Obj)->PK_Check = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_PK_Check = { "PK_Check", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_Character), &Z_Construct_UClass_ACPP_Character_Statics::NewProp_PK_Check_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_PK_Check_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_PK_Check_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_canMove_MetaData[] = {
		{ "Category", "Check" },
		{ "Comment", "// player Move State Check\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "player Move State Check" },
	};
#endif
	void Z_Construct_UClass_ACPP_Character_Statics::NewProp_canMove_SetBit(void* Obj)
	{
		((ACPP_Character*)Obj)->canMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_canMove = { "canMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_Character), &Z_Construct_UClass_ACPP_Character_Statics::NewProp_canMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_canMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_canMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_IsDie_MetaData[] = {
		{ "Category", "Check" },
		{ "Comment", "// player Die Check\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "player Die Check" },
	};
#endif
	void Z_Construct_UClass_ACPP_Character_Statics::NewProp_IsDie_SetBit(void* Obj)
	{
		((ACPP_Character*)Obj)->IsDie = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_IsDie = { "IsDie", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_Character), &Z_Construct_UClass_ACPP_Character_Statics::NewProp_IsDie_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_IsDie_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_IsDie_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_isFlipped_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "// Player Flip check and change\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "Player Flip check and change" },
	};
#endif
	void Z_Construct_UClass_ACPP_Character_Statics::NewProp_isFlipped_SetBit(void* Obj)
	{
		((ACPP_Character*)Obj)->isFlipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_isFlipped = { "isFlipped", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_Character), &Z_Construct_UClass_ACPP_Character_Statics::NewProp_isFlipped_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_isFlipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_isFlipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_isCrouching_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// Player crouch check.\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "Player crouch check." },
	};
#endif
	void Z_Construct_UClass_ACPP_Character_Statics::NewProp_isCrouching_SetBit(void* Obj)
	{
		((ACPP_Character*)Obj)->isCrouching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_isCrouching = { "isCrouching", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_Character), &Z_Construct_UClass_ACPP_Character_Statics::NewProp_isCrouching_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_isCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_isCrouching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_isuppercut_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// Enemy uppercut check.\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "Enemy uppercut check." },
	};
#endif
	void Z_Construct_UClass_ACPP_Character_Statics::NewProp_isuppercut_SetBit(void* Obj)
	{
		((ACPP_Character*)Obj)->isuppercut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_isuppercut = { "isuppercut", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_Character), &Z_Construct_UClass_ACPP_Character_Statics::NewProp_isuppercut_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_isuppercut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_isuppercut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasLightAttackUsed_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "// Has the player used the light attack?\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "Has the player used the light attack?" },
	};
#endif
	void Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasLightAttackUsed_SetBit(void* Obj)
	{
		((ACPP_Character*)Obj)->wasLightAttackUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasLightAttackUsed = { "wasLightAttackUsed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_Character), &Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasLightAttackUsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasLightAttackUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasLightAttackUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasMediumAttackUsed_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "// Has the player used the medium attack?\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "Has the player used the medium attack?" },
	};
#endif
	void Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasMediumAttackUsed_SetBit(void* Obj)
	{
		((ACPP_Character*)Obj)->wasMediumAttackUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasMediumAttackUsed = { "wasMediumAttackUsed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_Character), &Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasMediumAttackUsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasMediumAttackUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasMediumAttackUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasHeavyAttackUsed_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "// Has the player used the heavy attack?\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "Has the player used the heavy attack?" },
	};
#endif
	void Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasHeavyAttackUsed_SetBit(void* Obj)
	{
		((ACPP_Character*)Obj)->wasHeavyAttackUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasHeavyAttackUsed = { "wasHeavyAttackUsed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_Character), &Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasHeavyAttackUsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasHeavyAttackUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasHeavyAttackUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasSuperUsed_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "// Has the player used the super attack?\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "Has the player used the super attack?" },
	};
#endif
	void Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasSuperUsed_SetBit(void* Obj)
	{
		((ACPP_Character*)Obj)->wasSuperUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasSuperUsed = { "wasSuperUsed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_Character), &Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasSuperUsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasSuperUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasSuperUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasLightExAttackUsed_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "// Has the player used the medium exceptional attack?\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "Has the player used the medium exceptional attack?" },
	};
#endif
	void Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasLightExAttackUsed_SetBit(void* Obj)
	{
		((ACPP_Character*)Obj)->wasLightExAttackUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasLightExAttackUsed = { "wasLightExAttackUsed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_Character), &Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasLightExAttackUsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasLightExAttackUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasLightExAttackUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasMediumExAttackUsed_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "// Has the player used the heavy exceptional attack?\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "Has the player used the heavy exceptional attack?" },
	};
#endif
	void Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasMediumExAttackUsed_SetBit(void* Obj)
	{
		((ACPP_Character*)Obj)->wasMediumExAttackUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasMediumExAttackUsed = { "wasMediumExAttackUsed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_Character), &Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasMediumExAttackUsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasMediumExAttackUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasMediumExAttackUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasHeavyExAttackUsed_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "// Has the player used the super exceptional attack?\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "Has the player used the super exceptional attack?" },
	};
#endif
	void Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasHeavyExAttackUsed_SetBit(void* Obj)
	{
		((ACPP_Character*)Obj)->wasHeavyExAttackUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasHeavyExAttackUsed = { "wasHeavyExAttackUsed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_Character), &Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasHeavyExAttackUsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasHeavyExAttackUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasHeavyExAttackUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_canUseExAttack_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "// Has the player used the super exceptional attack?\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "Has the player used the super exceptional attack?" },
	};
#endif
	void Z_Construct_UClass_ACPP_Character_Statics::NewProp_canUseExAttack_SetBit(void* Obj)
	{
		((ACPP_Character*)Obj)->canUseExAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_canUseExAttack = { "canUseExAttack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_Character), &Z_Construct_UClass_ACPP_Character_Statics::NewProp_canUseExAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_canUseExAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_canUseExAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_isPlayerOne_MetaData[] = {
		{ "Category", "Input Stack" },
		{ "Comment", "// Has the aharacter been thrown?\n//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Attacks\")\n//bool wasThrown;\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "Has the aharacter been thrown?\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Attacks\")\nbool wasThrown;" },
	};
#endif
	void Z_Construct_UClass_ACPP_Character_Statics::NewProp_isPlayerOne_SetBit(void* Obj)
	{
		((ACPP_Character*)Obj)->isPlayerOne = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_isPlayerOne = { "isPlayerOne", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_Character), &Z_Construct_UClass_ACPP_Character_Statics::NewProp_isPlayerOne_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_isPlayerOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_isPlayerOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_shouldGroundBounce_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_Character_Statics::NewProp_shouldGroundBounce_SetBit(void* Obj)
	{
		((ACPP_Character*)Obj)->shouldGroundBounce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_shouldGroundBounce = { "shouldGroundBounce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_Character), &Z_Construct_UClass_ACPP_Character_Statics::NewProp_shouldGroundBounce_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_shouldGroundBounce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_shouldGroundBounce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_shouldWallBounce_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_Character_Statics::NewProp_shouldWallBounce_SetBit(void* Obj)
	{
		((ACPP_Character*)Obj)->shouldWallBounce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_shouldWallBounce = { "shouldWallBounce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_Character), &Z_Construct_UClass_ACPP_Character_Statics::NewProp_shouldWallBounce_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_shouldWallBounce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_shouldWallBounce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "Comment", "// The amount of health the character currently has.\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "The amount of health the character currently has." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, CurrentHealth), METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_CurrentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_maxDistanceApart_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// The maximum amount of distance that the characters can be apart.\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "The maximum amount of distance that the characters can be apart." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_maxDistanceApart = { "maxDistanceApart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, maxDistanceApart), METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_maxDistanceApart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_maxDistanceApart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_stunTime_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// The amount of thim the character will be stunned.\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "The amount of thim the character will be stunned." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_stunTime = { "stunTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, stunTime), METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_stunTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_stunTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_DamageAmount_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "// Player Attack Damage\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "Player Attack Damage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, DamageAmount), METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_DamageAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_DamageAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_basicsDamageAmount_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "// Player basics Attack Damage\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "Player basics Attack Damage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_basicsDamageAmount = { "basicsDamageAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, basicsDamageAmount), METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_basicsDamageAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_basicsDamageAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_SkillDamageAmount_1_MetaData[] = {
		{ "Category", "Attacks" },
		{ "Comment", "// Player skill_1 Attack Damage\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "Player skill_1 Attack Damage" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_SkillDamageAmount_1 = { "SkillDamageAmount_1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, SkillDamageAmount_1), METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_SkillDamageAmount_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_SkillDamageAmount_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_pushbackDistance_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// The amount of thim the character will be stunned.\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "The amount of thim the character will be stunned." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_pushbackDistance = { "pushbackDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, pushbackDistance), METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_pushbackDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_pushbackDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_launchDistance_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// The amount of distance to launch the player.\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "The amount of distance to launch the player." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_launchDistance = { "launchDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, launchDistance), METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_launchDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_launchDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_gravityScale_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// The scaled value of gravity.\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "The scaled value of gravity." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_gravityScale = { "gravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, gravityScale), METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_gravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_gravityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_superMeterAmount_MetaData[] = {
		{ "Category", "Super Meter" },
		{ "Comment", "// The amount of super meter thr player has.\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "The amount of super meter thr player has." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_superMeterAmount = { "superMeterAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, superMeterAmount), METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_superMeterAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_superMeterAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_currentsuperMeterAmount_MetaData[] = {
		{ "Category", "Super Meter" },
		{ "Comment", "// The amount of super meter thr player has.\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "The amount of super meter thr player has." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_currentsuperMeterAmount = { "currentsuperMeterAmount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, currentsuperMeterAmount), METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_currentsuperMeterAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_currentsuperMeterAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_gravityScaleModifier_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "// The amount of super meter thr player has.\n" },
		{ "ModuleRelativePath", "CPP_Character.h" },
		{ "ToolTip", "The amount of super meter thr player has." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_gravityScaleModifier = { "gravityScaleModifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, gravityScaleModifier), METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_gravityScaleModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_gravityScaleModifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_roundWon_MetaData[] = {
		{ "Category", "CPP_Character" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_roundWon = { "roundWon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_Character, roundWon), METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_roundWon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_roundWon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Character_Statics::NewProp_hasLostRound_MetaData[] = {
		{ "Category", "CPP_Character" },
		{ "ModuleRelativePath", "CPP_Character.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_Character_Statics::NewProp_hasLostRound_SetBit(void* Obj)
	{
		((ACPP_Character*)Obj)->hasLostRound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Character_Statics::NewProp_hasLostRound = { "hasLostRound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_Character), &Z_Construct_UClass_ACPP_Character_Statics::NewProp_hasLostRound_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::NewProp_hasLostRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::NewProp_hasLostRound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_inputToInputTypeMap_ValueProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_inputToInputTypeMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_inputToInputTypeMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_inputToInputTypeMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_inputBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_inputBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_characterCommands_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_characterCommands,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_isDeviceForMultiplePlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_command_Check,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_l_punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_r_punch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_l_kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_r_kick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_l_punchReact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_blocking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_skill_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_skill_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_skill_Ult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_opponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_characterState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_characterState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_PK_Check,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_canMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_IsDie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_isFlipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_isCrouching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_isuppercut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasLightAttackUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasMediumAttackUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasHeavyAttackUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasSuperUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasLightExAttackUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasMediumExAttackUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_wasHeavyExAttackUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_canUseExAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_isPlayerOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_shouldGroundBounce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_shouldWallBounce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_CurrentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_maxDistanceApart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_stunTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_DamageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_basicsDamageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_SkillDamageAmount_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_pushbackDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_launchDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_gravityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_superMeterAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_currentsuperMeterAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_gravityScaleModifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_roundWon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Character_Statics::NewProp_hasLostRound,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACPP_Character_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFightInterface_NoRegister, (int32)VTABLE_OFFSET(ACPP_Character, IFightInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Character_Statics::ClassParams = {
		&ACPP_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACPP_Character_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPP_Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPP_Character, 1865623799);
	template<> KING_OF_ANIMAL_API UClass* StaticClass<ACPP_Character>()
	{
		return ACPP_Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPP_Character(Z_Construct_UClass_ACPP_Character, &ACPP_Character::StaticClass, TEXT("/Script/King_Of_Animal"), TEXT("ACPP_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
