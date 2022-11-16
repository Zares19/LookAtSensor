// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LookAtSensor_CPP/LookAtSensor_CPPHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLookAtSensor_CPPHUD() {}
// Cross Module References
	LOOKATSENSOR_CPP_API UClass* Z_Construct_UClass_ALookAtSensor_CPPHUD_NoRegister();
	LOOKATSENSOR_CPP_API UClass* Z_Construct_UClass_ALookAtSensor_CPPHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_LookAtSensor_CPP();
// End Cross Module References
	void ALookAtSensor_CPPHUD::StaticRegisterNativesALookAtSensor_CPPHUD()
	{
	}
	UClass* Z_Construct_UClass_ALookAtSensor_CPPHUD_NoRegister()
	{
		return ALookAtSensor_CPPHUD::StaticClass();
	}
	struct Z_Construct_UClass_ALookAtSensor_CPPHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALookAtSensor_CPPHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_LookAtSensor_CPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALookAtSensor_CPPHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "LookAtSensor_CPPHUD.h" },
		{ "ModuleRelativePath", "LookAtSensor_CPPHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALookAtSensor_CPPHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALookAtSensor_CPPHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALookAtSensor_CPPHUD_Statics::ClassParams = {
		&ALookAtSensor_CPPHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALookAtSensor_CPPHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALookAtSensor_CPPHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALookAtSensor_CPPHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALookAtSensor_CPPHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALookAtSensor_CPPHUD, 3447905289);
	template<> LOOKATSENSOR_CPP_API UClass* StaticClass<ALookAtSensor_CPPHUD>()
	{
		return ALookAtSensor_CPPHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALookAtSensor_CPPHUD(Z_Construct_UClass_ALookAtSensor_CPPHUD, &ALookAtSensor_CPPHUD::StaticClass, TEXT("/Script/LookAtSensor_CPP"), TEXT("ALookAtSensor_CPPHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALookAtSensor_CPPHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
