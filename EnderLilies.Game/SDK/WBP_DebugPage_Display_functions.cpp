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
//		Name   -> Function WBP_DebugPage_Display.WBP_DebugPage_Display_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_DebugPage_Display_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Display.WBP_DebugPage_Display_C.OnFocusReceived");

	UWBP_DebugPage_Display_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Display.WBP_DebugPage_Display_C.BndEvt__WBP_DebugPage_Display_WBP_DebugMenuValueEntry_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DebugPage_Display_C::BndEvt__WBP_DebugPage_Display_WBP_DebugMenuValueEntry_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(int NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Display.WBP_DebugPage_Display_C.BndEvt__WBP_DebugPage_Display_WBP_DebugMenuValueEntry_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");

	UWBP_DebugPage_Display_C_BndEvt__WBP_DebugPage_Display_WBP_DebugMenuValueEntry_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Display.WBP_DebugPage_Display_C.BndEvt__WBP_DebugPage_Display_HideUIA_K2Node_ComponentBoundEvent_2_OnExecute__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Display_C::BndEvt__WBP_DebugPage_Display_HideUIA_K2Node_ComponentBoundEvent_2_OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Display.WBP_DebugPage_Display_C.BndEvt__WBP_DebugPage_Display_HideUIA_K2Node_ComponentBoundEvent_2_OnExecute__DelegateSignature");

	UWBP_DebugPage_Display_C_BndEvt__WBP_DebugPage_Display_HideUIA_K2Node_ComponentBoundEvent_2_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Display.WBP_DebugPage_Display_C.ExecuteUbergraph_WBP_DebugPage_Display
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DebugPage_Display_C::ExecuteUbergraph_WBP_DebugPage_Display(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Display.WBP_DebugPage_Display_C.ExecuteUbergraph_WBP_DebugPage_Display");

	UWBP_DebugPage_Display_C_ExecuteUbergraph_WBP_DebugPage_Display_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
