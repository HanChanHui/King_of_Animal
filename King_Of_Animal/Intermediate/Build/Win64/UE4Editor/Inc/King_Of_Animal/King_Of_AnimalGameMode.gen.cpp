// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "King_Of_Animal/King_Of_AnimalGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKing_Of_AnimalGameMode() {}
// Cross Module References
	KING_OF_ANIMAL_API UClass* Z_Construct_UClass_AKing_Of_AnimalGameMode_NoRegister();
	KING_OF_ANIMAL_API UClass* Z_Construct_UClass_AKing_Of_AnimalGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_King_Of_Animal();
	KING_OF_ANIMAL_API UClass* Z_Construct_UClass_ACPP_Character_NoRegister();
// End Cross Module References
	static FName NAME_AKing_Of_AnimalGameMode_CountFinished = FName(TEXT("CountFinished"));
	void AKing_Of_AnimalGameMode::CountFinished()
	{
		ProcessEvent(FindFunctionChecked(NAME_AKing_Of_AnimalGameMode_CountFinished),NULL);
	}
	void AKing_Of_AnimalGameMode::StaticRegisterNativesAKing_Of_AnimalGameMode()
	{
	}
	struct Z_Construct_UFunction_AKing_Of_AnimalGameMode_CountFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKing_Of_AnimalGameMode_CountFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameMode Settings" },
		{ "ModuleRelativePath", "King_Of_AnimalGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKing_Of_AnimalGameMode_CountFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKing_Of_AnimalGameMode, nullptr, "CountFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKing_Of_AnimalGameMode_CountFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKing_Of_AnimalGameMode_CountFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKing_Of_AnimalGameMode_CountFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKing_Of_AnimalGameMode_CountFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AKing_Of_AnimalGameMode_NoRegister()
	{
		return AKing_Of_AnimalGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_countTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_countTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numRound_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_numRound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_King_Of_Animal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AKing_Of_AnimalGameMode_CountFinished, "CountFinished" }, // 2456535250
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "King_Of_AnimalGameMode.h" },
		{ "ModuleRelativePath", "King_Of_AnimalGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_player1_MetaData[] = {
		{ "Category", "Player References" },
		{ "ModuleRelativePath", "King_Of_AnimalGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_player1 = { "player1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKing_Of_AnimalGameMode, player1), Z_Construct_UClass_ACPP_Character_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_player1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_player1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_player2_MetaData[] = {
		{ "Category", "Player References" },
		{ "ModuleRelativePath", "King_Of_AnimalGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_player2 = { "player2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKing_Of_AnimalGameMode, player2), Z_Construct_UClass_ACPP_Character_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_player2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_player2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_countTime_MetaData[] = {
		{ "Category", "GameMode Settings" },
		{ "ModuleRelativePath", "King_Of_AnimalGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_countTime = { "countTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKing_Of_AnimalGameMode, countTime), METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_countTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_countTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_numRound_MetaData[] = {
		{ "Category", "GameMode Settings" },
		{ "ModuleRelativePath", "King_Of_AnimalGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_numRound = { "numRound", nullptr, (EPropertyFlags)0x0010000000000815, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKing_Of_AnimalGameMode, numRound), METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_numRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_numRound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_player1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_player2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_countTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::NewProp_numRound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKing_Of_AnimalGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::ClassParams = {
		&AKing_Of_AnimalGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKing_Of_AnimalGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKing_Of_AnimalGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKing_Of_AnimalGameMode, 2381708326);
	template<> KING_OF_ANIMAL_API UClass* StaticClass<AKing_Of_AnimalGameMode>()
	{
		return AKing_Of_AnimalGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKing_Of_AnimalGameMode(Z_Construct_UClass_AKing_Of_AnimalGameMode, &AKing_Of_AnimalGameMode::StaticClass, TEXT("/Script/King_Of_Animal"), TEXT("AKing_Of_AnimalGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKing_Of_AnimalGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
