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
//		Name   -> Function WBP_FaderBase.WBP_FaderBase_C.Get Fade PlaybackSpeed
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               bFadeIn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              PlaybackSpeed                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FaderBase_C::Get_Fade_PlaybackSpeed(bool bFadeIn, float* PlaybackSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FaderBase.WBP_FaderBase_C.Get Fade PlaybackSpeed");

	UWBP_FaderBase_C_Get_Fade_PlaybackSpeed_Params params;
	params.bFadeIn = bFadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlaybackSpeed != nullptr)
		*PlaybackSpeed = params.PlaybackSpeed;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FaderBase.WBP_FaderBase_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1
//		Flags  -> (BlueprintEvent)
void UWBP_FaderBase_C::WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FaderBase.WBP_FaderBase_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1");

	UWBP_FaderBase_C_WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FaderBase.WBP_FaderBase_C.LaunchFadeIn
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UWBP_FaderBase_C::LaunchFadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FaderBase.WBP_FaderBase_C.LaunchFadeIn");

	UWBP_FaderBase_C_LaunchFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FaderBase.WBP_FaderBase_C.LaunchFadeOut
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UWBP_FaderBase_C::LaunchFadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FaderBase.WBP_FaderBase_C.LaunchFadeOut");

	UWBP_FaderBase_C_LaunchFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FaderBase.WBP_FaderBase_C.PrepareFadeIn
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UWBP_FaderBase_C::PrepareFadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FaderBase.WBP_FaderBase_C.PrepareFadeIn");

	UWBP_FaderBase_C_PrepareFadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FaderBase.WBP_FaderBase_C.ExecuteUbergraph_WBP_FaderBase
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FaderBase_C::ExecuteUbergraph_WBP_FaderBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FaderBase.WBP_FaderBase_C.ExecuteUbergraph_WBP_FaderBase");

	UWBP_FaderBase_C_ExecuteUbergraph_WBP_FaderBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
