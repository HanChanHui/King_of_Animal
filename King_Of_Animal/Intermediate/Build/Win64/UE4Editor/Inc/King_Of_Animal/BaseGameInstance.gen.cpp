// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "King_Of_Animal/BaseGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGameInstance() {}
// Cross Module References
	KING_OF_ANIMAL_API UEnum* Z_Construct_UEnum_King_Of_Animal_ECharacterClass();
	UPackage* Z_Construct_UPackage__Script_King_Of_Animal();
	KING_OF_ANIMAL_API UClass* Z_Construct_UClass_UBaseGameInstance_NoRegister();
	KING_OF_ANIMAL_API UClass* Z_Construct_UClass_UBaseGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
// End Cross Module References
	static UEnum* ECharacterClass_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_King_Of_Animal_ECharacterClass, Z_Construct_UPackage__Script_King_Of_Animal(), TEXT("ECharacterClass"));
		}
		return Singleton;
	}
	template<> KING_OF_ANIMAL_API UEnum* StaticEnum<ECharacterClass>()
	{
		return ECharacterClass_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECharacterClass(ECharacterClass_StaticEnum, TEXT("/Script/King_Of_Animal"), TEXT("ECharacterClass"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_King_Of_Animal_ECharacterClass_Hash() { return 3218768745U; }
	UEnum* Z_Construct_UEnum_King_Of_Animal_ECharacterClass()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_King_Of_Animal();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECharacterClass"), 0, Get_Z_Construct_UEnum_King_Of_Animal_ECharacterClass_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECharacterClass::VE_Default", (int64)ECharacterClass::VE_Default },
				{ "ECharacterClass::VE_Elephant", (int64)ECharacterClass::VE_Elephant },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "BaseGameInstance.h" },
				{ "VE_Default.DisplayName", "Mannequin" },
				{ "VE_Default.Name", "ECharacterClass::VE_Default" },
				{ "VE_Elephant.DisplayName", "Elephant" },
				{ "VE_Elephant.Name", "ECharacterClass::VE_Elephant" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_King_Of_Animal,
				nullptr,
				"ECharacterClass",
				"ECharacterClass",
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
	void UBaseGameInstance::StaticRegisterNativesUBaseGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UBaseGameInstance_NoRegister()
	{
		return UBaseGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBaseGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_P1characterClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P1characterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_P1characterClass;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_P2characterClass_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P2characterClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_P2characterClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_countTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_countTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numRound_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDeviceForMultiplePlayers_MetaData[];
#endif
		static void NewProp_isDeviceForMultiplePlayers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDeviceForMultiplePlayers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_King_Of_Animal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGameInstance.h" },
		{ "ModuleRelativePath", "BaseGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P1characterClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P1characterClass_MetaData[] = {
		{ "Category", "Player References" },
		{ "ModuleRelativePath", "BaseGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P1characterClass = { "P1characterClass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseGameInstance, P1characterClass), Z_Construct_UEnum_King_Of_Animal_ECharacterClass, METADATA_PARAMS(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P1characterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P1characterClass_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P2characterClass_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P2characterClass_MetaData[] = {
		{ "Category", "Player References" },
		{ "ModuleRelativePath", "BaseGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P2characterClass = { "P2characterClass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseGameInstance, P2characterClass), Z_Construct_UEnum_King_Of_Animal_ECharacterClass, METADATA_PARAMS(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P2characterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P2characterClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_countTime_MetaData[] = {
		{ "Category", "GameInstance References" },
		{ "ModuleRelativePath", "BaseGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_countTime = { "countTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseGameInstance, countTime), METADATA_PARAMS(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_countTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_countTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_numRound_MetaData[] = {
		{ "Category", "GameInstance References" },
		{ "ModuleRelativePath", "BaseGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_numRound = { "numRound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseGameInstance, numRound), METADATA_PARAMS(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_numRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_numRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_isDeviceForMultiplePlayers_MetaData[] = {
		{ "Category", "Controller" },
		{ "Comment", "// Is the device intended to be used for multiple players\n" },
		{ "ModuleRelativePath", "BaseGameInstance.h" },
		{ "ToolTip", "Is the device intended to be used for multiple players" },
	};
#endif
	void Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_isDeviceForMultiplePlayers_SetBit(void* Obj)
	{
		((UBaseGameInstance*)Obj)->isDeviceForMultiplePlayers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_isDeviceForMultiplePlayers = { "isDeviceForMultiplePlayers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBaseGameInstance), &Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_isDeviceForMultiplePlayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_isDeviceForMultiplePlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_isDeviceForMultiplePlayers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P1characterClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P1characterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P2characterClass_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_P2characterClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_countTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_numRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGameInstance_Statics::NewProp_isDeviceForMultiplePlayers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseGameInstance_Statics::ClassParams = {
		&UBaseGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseGameInstance, 3301486684);
	template<> KING_OF_ANIMAL_API UClass* StaticClass<UBaseGameInstance>()
	{
		return UBaseGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseGameInstance(Z_Construct_UClass_UBaseGameInstance, &UBaseGameInstance::StaticClass, TEXT("/Script/King_Of_Animal"), TEXT("UBaseGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
