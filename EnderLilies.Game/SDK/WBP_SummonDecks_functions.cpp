// Name: enderlilies, Version: 1.1.3

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
//		Name   -> Function WBP_SummonDecks.WBP_SummonDecks_C.PlayAnimToSlotB
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               SkipAnimation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SummonDecks_C::PlayAnimToSlotB(bool SkipAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonDecks.WBP_SummonDecks_C.PlayAnimToSlotB");

	UWBP_SummonDecks_C_PlayAnimToSlotB_Params params;
	params.SkipAnimation = SkipAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonDecks.WBP_SummonDecks_C.PlayAnimToSlotA
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               SkipAnimation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SummonDecks_C::PlayAnimToSlotA(bool SkipAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonDecks.WBP_SummonDecks_C.PlayAnimToSlotA");

	UWBP_SummonDecks_C_PlayAnimToSlotA_Params params;
	params.SkipAnimation = SkipAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonDecks.WBP_SummonDecks_C.Initialize
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AZenithPlayerController*                     Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SummonDecks_C::Initialize(class AZenithPlayerController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonDecks.WBP_SummonDecks_C.Initialize");

	UWBP_SummonDecks_C_Initialize_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonDecks.WBP_SummonDecks_C.OnSwitchSummonSet
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		Zenith_ESummonSet                                  PrevSummonSet                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Zenith_ESummonSet                                  NewSummonSet                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SummonDecks_C::OnSwitchSummonSet(Zenith_ESummonSet PrevSummonSet, Zenith_ESummonSet NewSummonSet)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonDecks.WBP_SummonDecks_C.OnSwitchSummonSet");

	UWBP_SummonDecks_C_OnSwitchSummonSet_Params params;
	params.PrevSummonSet = PrevSummonSet;
	params.NewSummonSet = NewSummonSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonDecks.WBP_SummonDecks_C.RefreshSetSwitch
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_SummonDecks_C::RefreshSetSwitch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonDecks.WBP_SummonDecks_C.RefreshSetSwitch");

	UWBP_SummonDecks_C_RefreshSetSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonDecks.WBP_SummonDecks_C.PlaySwitchSummonSetAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		Zenith_ESummonSet                                  NewSummonSet                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               SkipAnimation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SummonDecks_C::PlaySwitchSummonSetAnim(Zenith_ESummonSet NewSummonSet, bool SkipAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonDecks.WBP_SummonDecks_C.PlaySwitchSummonSetAnim");

	UWBP_SummonDecks_C_PlaySwitchSummonSetAnim_Params params;
	params.NewSummonSet = NewSummonSet;
	params.SkipAnimation = SkipAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SummonDecks.WBP_SummonDecks_C.ExecuteUbergraph_WBP_SummonDecks
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SummonDecks_C::ExecuteUbergraph_WBP_SummonDecks(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SummonDecks.WBP_SummonDecks_C.ExecuteUbergraph_WBP_SummonDecks");

	UWBP_SummonDecks_C_ExecuteUbergraph_WBP_SummonDecks_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
