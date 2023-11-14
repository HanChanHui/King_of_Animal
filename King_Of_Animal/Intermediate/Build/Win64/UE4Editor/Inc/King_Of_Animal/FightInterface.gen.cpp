// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "King_Of_Animal/FightInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFightInterface() {}
// Cross Module References
	KING_OF_ANIMAL_API UClass* Z_Construct_UClass_UFightInterface_NoRegister();
	KING_OF_ANIMAL_API UClass* Z_Construct_UClass_UFightInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_King_Of_Animal();
// End Cross Module References
	DEFINE_FUNCTION(IFightInterface::execCheckAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckAttack_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFightInterface::execCheckKick)
	{
		P_GET_UBOOL(Z_Param_is_leftLeg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckKick_Implementation(Z_Param_is_leftLeg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IFightInterface::execCheckPunch)
	{
		P_GET_UBOOL(Z_Param_is_leftHand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckPunch_Implementation(Z_Param_is_leftHand);
		P_NATIVE_END;
	}
	void IFightInterface::CheckAttack()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CheckAttack instead.");
	}
	void IFightInterface::CheckKick(bool is_leftLeg)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CheckKick instead.");
	}
	void IFightInterface::CheckPunch(bool is_leftHand)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CheckPunch instead.");
	}
	void UFightInterface::StaticRegisterNativesUFightInterface()
	{
		UClass* Class = UFightInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckAttack", &IFightInterface::execCheckAttack },
			{ "CheckKick", &IFightInterface::execCheckKick },
			{ "CheckPunch", &IFightInterface::execCheckPunch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFightInterface_CheckAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFightInterface_CheckAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "attacks" },
		{ "ModuleRelativePath", "FightInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFightInterface_CheckAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFightInterface, nullptr, "CheckAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFightInterface_CheckAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFightInterface_CheckAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFightInterface_CheckAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFightInterface_CheckAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFightInterface_CheckKick_Statics
	{
		static void NewProp_is_leftLeg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_is_leftLeg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFightInterface_CheckKick_Statics::NewProp_is_leftLeg_SetBit(void* Obj)
	{
		((FightInterface_eventCheckKick_Parms*)Obj)->is_leftLeg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFightInterface_CheckKick_Statics::NewProp_is_leftLeg = { "is_leftLeg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FightInterface_eventCheckKick_Parms), &Z_Construct_UFunction_UFightInterface_CheckKick_Statics::NewProp_is_leftLeg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFightInterface_CheckKick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFightInterface_CheckKick_Statics::NewProp_is_leftLeg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFightInterface_CheckKick_Statics::Function_MetaDataParams[] = {
		{ "Category", "attacks" },
		{ "ModuleRelativePath", "FightInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFightInterface_CheckKick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFightInterface, nullptr, "CheckKick", nullptr, nullptr, sizeof(FightInterface_eventCheckKick_Parms), Z_Construct_UFunction_UFightInterface_CheckKick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFightInterface_CheckKick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFightInterface_CheckKick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFightInterface_CheckKick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFightInterface_CheckKick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFightInterface_CheckKick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFightInterface_CheckPunch_Statics
	{
		static void NewProp_is_leftHand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_is_leftHand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFightInterface_CheckPunch_Statics::NewProp_is_leftHand_SetBit(void* Obj)
	{
		((FightInterface_eventCheckPunch_Parms*)Obj)->is_leftHand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFightInterface_CheckPunch_Statics::NewProp_is_leftHand = { "is_leftHand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FightInterface_eventCheckPunch_Parms), &Z_Construct_UFunction_UFightInterface_CheckPunch_Statics::NewProp_is_leftHand_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFightInterface_CheckPunch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFightInterface_CheckPunch_Statics::NewProp_is_leftHand,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFightInterface_CheckPunch_Statics::Function_MetaDataParams[] = {
		{ "Category", "attacks" },
		{ "ModuleRelativePath", "FightInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFightInterface_CheckPunch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFightInterface, nullptr, "CheckPunch", nullptr, nullptr, sizeof(FightInterface_eventCheckPunch_Parms), Z_Construct_UFunction_UFightInterface_CheckPunch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFightInterface_CheckPunch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFightInterface_CheckPunch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFightInterface_CheckPunch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFightInterface_CheckPunch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFightInterface_CheckPunch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFightInterface_NoRegister()
	{
		return UFightInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFightInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFightInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_King_Of_Animal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFightInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFightInterface_CheckAttack, "CheckAttack" }, // 3046454064
		{ &Z_Construct_UFunction_UFightInterface_CheckKick, "CheckKick" }, // 1336011440
		{ &Z_Construct_UFunction_UFightInterface_CheckPunch, "CheckPunch" }, // 611891330
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFightInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "FightInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFightInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFightInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFightInterface_Statics::ClassParams = {
		&UFightInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFightInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFightInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFightInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFightInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFightInterface, 3120679418);
	template<> KING_OF_ANIMAL_API UClass* StaticClass<UFightInterface>()
	{
		return UFightInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFightInterface(Z_Construct_UClass_UFightInterface, &UFightInterface::StaticClass, TEXT("/Script/King_Of_Animal"), TEXT("UFightInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFightInterface);
	static FName NAME_UFightInterface_CheckAttack = FName(TEXT("CheckAttack"));
	void IFightInterface::Execute_CheckAttack(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFightInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UFightInterface_CheckAttack);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IFightInterface*)(O->GetNativeInterfaceAddress(UFightInterface::StaticClass())))
		{
			I->CheckAttack_Implementation();
		}
	}
	static FName NAME_UFightInterface_CheckKick = FName(TEXT("CheckKick"));
	void IFightInterface::Execute_CheckKick(UObject* O, bool is_leftLeg)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFightInterface::StaticClass()));
		FightInterface_eventCheckKick_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFightInterface_CheckKick);
		if (Func)
		{
			Parms.is_leftLeg=is_leftLeg;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFightInterface*)(O->GetNativeInterfaceAddress(UFightInterface::StaticClass())))
		{
			I->CheckKick_Implementation(is_leftLeg);
		}
	}
	static FName NAME_UFightInterface_CheckPunch = FName(TEXT("CheckPunch"));
	void IFightInterface::Execute_CheckPunch(UObject* O, bool is_leftHand)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFightInterface::StaticClass()));
		FightInterface_eventCheckPunch_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFightInterface_CheckPunch);
		if (Func)
		{
			Parms.is_leftHand=is_leftHand;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFightInterface*)(O->GetNativeInterfaceAddress(UFightInterface::StaticClass())))
		{
			I->CheckPunch_Implementation(is_leftHand);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
