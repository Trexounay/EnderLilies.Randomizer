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
//		Name   -> Function WBP_KeyBindings.WBP_KeyBindings_C.DoCustomNavigation_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UWBP_KeyBindings_C::DoCustomNavigation_1(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindings.WBP_KeyBindings_C.DoCustomNavigation_1");

	UWBP_KeyBindings_C_DoCustomNavigation_1_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindings.WBP_KeyBindings_C.CancelAllKeyBindingOperations
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_KeyBindings_C::CancelAllKeyBindingOperations()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindings.WBP_KeyBindings_C.CancelAllKeyBindingOperations");

	UWBP_KeyBindings_C_CancelAllKeyBindingOperations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindings.WBP_KeyBindings_C.SetResetToDefaultButtonVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		UMG_ESlateVisibility                               InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_KeyBindings_C::SetResetToDefaultButtonVisibility(UMG_ESlateVisibility InVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindings.WBP_KeyBindings_C.SetResetToDefaultButtonVisibility");

	UWBP_KeyBindings_C_SetResetToDefaultButtonVisibility_Params params;
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindings.WBP_KeyBindings_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_KeyBindings_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindings.WBP_KeyBindings_C.OnFocusReceived");

	UWBP_KeyBindings_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindings.WBP_KeyBindings_C.RefreshAllBindings
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_KeyBindings_C::RefreshAllBindings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindings.WBP_KeyBindings_C.RefreshAllBindings");

	UWBP_KeyBindings_C_RefreshAllBindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindings.WBP_KeyBindings_C.BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_KeyBindings_C::BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindings.WBP_KeyBindings_C.BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWBP_KeyBindings_C_BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindings.WBP_KeyBindings_C.InitializeKeyBindingEntries
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWBP_KeyBindingEntry_C*>              TargetArray                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UWBP_KeyBindings_C::InitializeKeyBindingEntries(TArray<class UWBP_KeyBindingEntry_C*> TargetArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindings.WBP_KeyBindings_C.InitializeKeyBindingEntries");

	UWBP_KeyBindings_C_InitializeKeyBindingEntries_Params params;
	params.TargetArray = TargetArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindings.WBP_KeyBindings_C.OnSelectKeyModeChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_KeyBindingEntry_C*                      KeyBindingEntry                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsSelectingKey                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_KeyBindings_C::OnSelectKeyModeChanged(class UWBP_KeyBindingEntry_C* KeyBindingEntry, bool IsSelectingKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindings.WBP_KeyBindings_C.OnSelectKeyModeChanged");

	UWBP_KeyBindings_C_OnSelectKeyModeChanged_Params params;
	params.KeyBindingEntry = KeyBindingEntry;
	params.IsSelectingKey = IsSelectingKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindings.WBP_KeyBindings_C.ExecuteUbergraph_WBP_KeyBindings
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_KeyBindings_C::ExecuteUbergraph_WBP_KeyBindings(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindings.WBP_KeyBindings_C.ExecuteUbergraph_WBP_KeyBindings");

	UWBP_KeyBindings_C_ExecuteUbergraph_WBP_KeyBindings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindings.WBP_KeyBindings_C.OnKeyBindingKeyModeChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_KeyBindingEntry_C*                      KeyBindingEntry                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsSelectingKey                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_KeyBindings_C::OnKeyBindingKeyModeChanged__DelegateSignature(class UWBP_KeyBindingEntry_C* KeyBindingEntry, bool IsSelectingKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindings.WBP_KeyBindings_C.OnKeyBindingKeyModeChanged__DelegateSignature");

	UWBP_KeyBindings_C_OnKeyBindingKeyModeChanged__DelegateSignature_Params params;
	params.KeyBindingEntry = KeyBindingEntry;
	params.IsSelectingKey = IsSelectingKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
