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
//		Name   -> Function WBP_SaveAsync.WBP_SaveAsync_C.Show
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_SaveAsync_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SaveAsync.WBP_SaveAsync_C.Show");

	UWBP_SaveAsync_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SaveAsync.WBP_SaveAsync_C.HideAndRemoveFromViewport
//		Flags  -> (Event, Public, BlueprintEvent)
void UWBP_SaveAsync_C::HideAndRemoveFromViewport()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SaveAsync.WBP_SaveAsync_C.HideAndRemoveFromViewport");

	UWBP_SaveAsync_C_HideAndRemoveFromViewport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SaveAsync.WBP_SaveAsync_C.OnAnimationFinished
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SaveAsync_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SaveAsync.WBP_SaveAsync_C.OnAnimationFinished");

	UWBP_SaveAsync_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SaveAsync.WBP_SaveAsync_C.ExecuteUbergraph_WBP_SaveAsync
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SaveAsync_C::ExecuteUbergraph_WBP_SaveAsync(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SaveAsync.WBP_SaveAsync_C.ExecuteUbergraph_WBP_SaveAsync");

	UWBP_SaveAsync_C_ExecuteUbergraph_WBP_SaveAsync_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
