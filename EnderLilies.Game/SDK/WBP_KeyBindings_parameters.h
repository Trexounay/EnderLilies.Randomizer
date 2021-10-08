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

// Function WBP_KeyBindings.WBP_KeyBindings_C.DoCustomNavigation_1
struct UWBP_KeyBindings_C_DoCustomNavigation_1_Params
{
	SlateCore_EUINavigation                            Navigation;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_KeyBindings.WBP_KeyBindings_C.CancelAllKeyBindingOperations
struct UWBP_KeyBindings_C_CancelAllKeyBindingOperations_Params
{
};

// Function WBP_KeyBindings.WBP_KeyBindings_C.SetResetToDefaultButtonVisibility
struct UWBP_KeyBindings_C_SetResetToDefaultButtonVisibility_Params
{
	UMG_ESlateVisibility                               InVisibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_KeyBindings.WBP_KeyBindings_C.OnFocusReceived
struct UWBP_KeyBindings_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_KeyBindings.WBP_KeyBindings_C.RefreshAllBindings
struct UWBP_KeyBindings_C_RefreshAllBindings_Params
{
};

// Function WBP_KeyBindings.WBP_KeyBindings_C.BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UWBP_KeyBindings_C_BndEvt__WBP_DefaultButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_KeyBindings.WBP_KeyBindings_C.InitializeKeyBindingEntries
struct UWBP_KeyBindings_C_InitializeKeyBindingEntries_Params
{
	TArray<class UWBP_KeyBindingEntry_C*>              TargetArray;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function WBP_KeyBindings.WBP_KeyBindings_C.OnSelectKeyModeChanged
struct UWBP_KeyBindings_C_OnSelectKeyModeChanged_Params
{
	class UWBP_KeyBindingEntry_C*                      KeyBindingEntry;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSelectingKey;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_KeyBindings.WBP_KeyBindings_C.ExecuteUbergraph_WBP_KeyBindings
struct UWBP_KeyBindings_C_ExecuteUbergraph_WBP_KeyBindings_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_KeyBindings.WBP_KeyBindings_C.OnKeyBindingKeyModeChanged__DelegateSignature
struct UWBP_KeyBindings_C_OnKeyBindingKeyModeChanged__DelegateSignature_Params
{
	class UWBP_KeyBindingEntry_C*                      KeyBindingEntry;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSelectingKey;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
