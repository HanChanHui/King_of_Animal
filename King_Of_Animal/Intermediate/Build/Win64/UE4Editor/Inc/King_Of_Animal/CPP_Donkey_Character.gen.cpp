// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "King_Of_Animal/CPP_Donkey_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Donkey_Character() {}
// Cross Module References
	KING_OF_ANIMAL_API UClass* Z_Construct_UClass_ACPP_Donkey_Character_NoRegister();
	KING_OF_ANIMAL_API UClass* Z_Construct_UClass_ACPP_Donkey_Character();
	KING_OF_ANIMAL_API UClass* Z_Construct_UClass_ACPP_Character();
	UPackage* Z_Construct_UPackage__Script_King_Of_Animal();
// End Cross Module References
	void ACPP_Donkey_Character::StaticRegisterNativesACPP_Donkey_Character()
	{
	}
	UClass* Z_Construct_UClass_ACPP_Donkey_Character_NoRegister()
	{
		return ACPP_Donkey_Character::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_Donkey_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_Donkey_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACPP_Character,
		(UObject* (*)())Z_Construct_UPackage__Script_King_Of_Animal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Donkey_Character_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CPP_Donkey_Character.h" },
		{ "ModuleRelativePath", "CPP_Donkey_Character.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_Donkey_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Donkey_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Donkey_Character_Statics::ClassParams = {
		&ACPP_Donkey_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_Donkey_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Donkey_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_Donkey_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPP_Donkey_Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPP_Donkey_Character, 348293931);
	template<> KING_OF_ANIMAL_API UClass* StaticClass<ACPP_Donkey_Character>()
	{
		return ACPP_Donkey_Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPP_Donkey_Character(Z_Construct_UClass_ACPP_Donkey_Character, &ACPP_Donkey_Character::StaticClass, TEXT("/Script/King_Of_Animal"), TEXT("ACPP_Donkey_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Donkey_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
