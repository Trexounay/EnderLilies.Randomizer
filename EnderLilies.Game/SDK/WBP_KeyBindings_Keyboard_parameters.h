#pragma once

// Name: enderlilies, Version: 1.1.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function WBP_KeyBindings_Keyboard.WBP_KeyBindings_Keyboard_C.InitializeEntries
struct UWBP_KeyBindings_Keyboard_C_InitializeEntries_Params
{
};

// Function WBP_KeyBindings_Keyboard.WBP_KeyBindings_Keyboard_C.OnFocusReceived
struct UWBP_KeyBindings_Keyboard_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_KeyBindings_Keyboard.WBP_KeyBindings_Keyboard_C.Construct
struct UWBP_KeyBindings_Keyboard_C_Construct_Params
{
};

// Function WBP_KeyBindings_Keyboard.WBP_KeyBindings_Keyboard_C.BndEvt__WBP_KeyBindings_K2Node_ComponentBoundEvent_0_OnKeyBindingKeyModeChanged__DelegateSignature
struct UWBP_KeyBindings_Keyboard_C_BndEvt__WBP_KeyBindings_K2Node_ComponentBoundEvent_0_OnKeyBindingKeyModeChanged__DelegateSignature_Params
{
	class UWBP_KeyBindingEntry_C*                      KeyBindingEntry;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSelectingKey;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_KeyBindings_Keyboard.WBP_KeyBindings_Keyboard_C.ExecuteUbergraph_WBP_KeyBindings_Keyboard
struct UWBP_KeyBindings_Keyboard_C_ExecuteUbergraph_WBP_KeyBindings_Keyboard_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_KeyBindings_Keyboard.WBP_KeyBindings_Keyboard_C.OnKeyBindingModeChanged__DelegateSignature
struct UWBP_KeyBindings_Keyboard_C_OnKeyBindingModeChanged__DelegateSignature_Params
{
	class UWBP_KeyBindingEntry_C*                      KeyBindingEntry;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSelectingKey;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
