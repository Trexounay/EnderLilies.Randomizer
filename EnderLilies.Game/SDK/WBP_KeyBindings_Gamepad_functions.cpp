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
//		Name   -> Function WBP_KeyBindings_Gamepad.WBP_KeyBindings_Gamepad_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_KeyBindings_Gamepad_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindings_Gamepad.WBP_KeyBindings_Gamepad_C.OnFocusReceived");

	UWBP_KeyBindings_Gamepad_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindings_Gamepad.WBP_KeyBindings_Gamepad_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_KeyBindings_Gamepad_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindings_Gamepad.WBP_KeyBindings_Gamepad_C.Construct");

	UWBP_KeyBindings_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindings_Gamepad.WBP_KeyBindings_Gamepad_C.GamepadCheck
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_KeyBindings_Gamepad_C::GamepadCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindings_Gamepad.WBP_KeyBindings_Gamepad_C.GamepadCheck");

	UWBP_KeyBindings_Gamepad_C_GamepadCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindings_Gamepad.WBP_KeyBindings_Gamepad_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_KeyBindings_Gamepad_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindings_Gamepad.WBP_KeyBindings_Gamepad_C.Destruct");

	UWBP_KeyBindings_Gamepad_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindings_Gamepad.WBP_KeyBindings_Gamepad_C.BndEvt__WBP_KeyBindings_K2Node_ComponentBoundEvent_0_OnKeyBindingKeyModeChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UWBP_KeyBindingEntry_C*                      KeyBindingEntry                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsSelectingKey                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_KeyBindings_Gamepad_C::BndEvt__WBP_KeyBindings_K2Node_ComponentBoundEvent_0_OnKeyBindingKeyModeChanged__DelegateSignature(class UWBP_KeyBindingEntry_C* KeyBindingEntry, bool IsSelectingKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindings_Gamepad.WBP_KeyBindings_Gamepad_C.BndEvt__WBP_KeyBindings_K2Node_ComponentBoundEvent_0_OnKeyBindingKeyModeChanged__DelegateSignature");

	UWBP_KeyBindings_Gamepad_C_BndEvt__WBP_KeyBindings_K2Node_ComponentBoundEvent_0_OnKeyBindingKeyModeChanged__DelegateSignature_Params params;
	params.KeyBindingEntry = KeyBindingEntry;
	params.IsSelectingKey = IsSelectingKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindings_Gamepad.WBP_KeyBindings_Gamepad_C.ExecuteUbergraph_WBP_KeyBindings_Gamepad
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_KeyBindings_Gamepad_C::ExecuteUbergraph_WBP_KeyBindings_Gamepad(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindings_Gamepad.WBP_KeyBindings_Gamepad_C.ExecuteUbergraph_WBP_KeyBindings_Gamepad");

	UWBP_KeyBindings_Gamepad_C_ExecuteUbergraph_WBP_KeyBindings_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_KeyBindings_Gamepad.WBP_KeyBindings_Gamepad_C.OnKeyBindingModeChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_KeyBindingEntry_C*                      KeyBindingEntry                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsSelectingKey                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_KeyBindings_Gamepad_C::OnKeyBindingModeChanged__DelegateSignature(class UWBP_KeyBindingEntry_C* KeyBindingEntry, bool IsSelectingKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_KeyBindings_Gamepad.WBP_KeyBindings_Gamepad_C.OnKeyBindingModeChanged__DelegateSignature");

	UWBP_KeyBindings_Gamepad_C_OnKeyBindingModeChanged__DelegateSignature_Params params;
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
