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
//		Name   -> Function WBP_FaderLoading.WBP_FaderLoading_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_FaderLoading_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FaderLoading.WBP_FaderLoading_C.Construct");

	UWBP_FaderLoading_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FaderLoading.WBP_FaderLoading_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1
//		Flags  -> (BlueprintEvent)
void UWBP_FaderLoading_C::WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FaderLoading.WBP_FaderLoading_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1");

	UWBP_FaderLoading_C_WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FaderLoading.WBP_FaderLoading_C.LaunchFadeIn
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UWBP_FaderLoading_C::LaunchFadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FaderLoading.WBP_FaderLoading_C.LaunchFadeIn");

	UWBP_FaderLoading_C_LaunchFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FaderLoading.WBP_FaderLoading_C.LaunchFadeOut
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UWBP_FaderLoading_C::LaunchFadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FaderLoading.WBP_FaderLoading_C.LaunchFadeOut");

	UWBP_FaderLoading_C_LaunchFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FaderLoading.WBP_FaderLoading_C.PrepareFadeIn
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UWBP_FaderLoading_C::PrepareFadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FaderLoading.WBP_FaderLoading_C.PrepareFadeIn");

	UWBP_FaderLoading_C_PrepareFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FaderLoading.WBP_FaderLoading_C.ExecuteUbergraph_WBP_FaderLoading
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FaderLoading_C::ExecuteUbergraph_WBP_FaderLoading(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FaderLoading.WBP_FaderLoading_C.ExecuteUbergraph_WBP_FaderLoading");

	UWBP_FaderLoading_C_ExecuteUbergraph_WBP_FaderLoading_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
