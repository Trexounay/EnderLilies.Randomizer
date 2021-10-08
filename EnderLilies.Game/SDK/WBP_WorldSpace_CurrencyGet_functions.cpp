﻿// Name: enderlilies, Version: 1.1.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_WorldSpace_CurrencyGet.WBP_WorldSpace_CurrencyGet_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_WorldSpace_CurrencyGet_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_WorldSpace_CurrencyGet.WBP_WorldSpace_CurrencyGet_C.PreConstruct");

	UWBP_WorldSpace_CurrencyGet_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_WorldSpace_CurrencyGet.WBP_WorldSpace_CurrencyGet_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_WorldSpace_CurrencyGet_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_WorldSpace_CurrencyGet.WBP_WorldSpace_CurrencyGet_C.Construct");

	UWBP_WorldSpace_CurrencyGet_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_WorldSpace_CurrencyGet.WBP_WorldSpace_CurrencyGet_C.OnAnimationFinished
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WorldSpace_CurrencyGet_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_WorldSpace_CurrencyGet.WBP_WorldSpace_CurrencyGet_C.OnAnimationFinished");

	UWBP_WorldSpace_CurrencyGet_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_WorldSpace_CurrencyGet.WBP_WorldSpace_CurrencyGet_C.ExecuteUbergraph_WBP_WorldSpace_CurrencyGet
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WorldSpace_CurrencyGet_C::ExecuteUbergraph_WBP_WorldSpace_CurrencyGet(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_WorldSpace_CurrencyGet.WBP_WorldSpace_CurrencyGet_C.ExecuteUbergraph_WBP_WorldSpace_CurrencyGet");

	UWBP_WorldSpace_CurrencyGet_C_ExecuteUbergraph_WBP_WorldSpace_CurrencyGet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
