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

// Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnPreviewMouseButtonDown
struct UWBP_KeyBindingEntry_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.Cancel Binding Operation
struct UWBP_KeyBindingEntry_C_Cancel_Binding_Operation_Params
{
};

// Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.ChangeSelectKeyMode
struct UWBP_KeyBindingEntry_C_ChangeSelectKeyMode_Params
{
	bool                                               WaitingForKey;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnPreviewKeyDown
struct UWBP_KeyBindingEntry_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnPressConfirm
struct UWBP_KeyBindingEntry_C_OnPressConfirm_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.GetInputChord
struct UWBP_KeyBindingEntry_C_GetInputChord_Params
{
	struct FInputChord                                 InputChord;                                                // 0x0000(0x0020)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnFocusReceived
struct UWBP_KeyBindingEntry_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OverrideActionBinding
struct UWBP_KeyBindingEntry_C_OverrideActionBinding_Params
{
	struct FInputChord                                 InputChord;                                                // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.RefreshDisplay
struct UWBP_KeyBindingEntry_C_RefreshDisplay_Params
{
};

// Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.Construct
struct UWBP_KeyBindingEntry_C_Construct_Params
{
};

// Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.PreConstruct
struct UWBP_KeyBindingEntry_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnNewKeySelected
struct UWBP_KeyBindingEntry_C_OnNewKeySelected_Params
{
	struct FInputChord                                 InputChord;                                                // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnSelectKeyModeChange
struct UWBP_KeyBindingEntry_C_OnSelectKeyModeChange_Params
{
	bool                                               IsSelectingKey;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnRemovedFromFocusPath
struct UWBP_KeyBindingEntry_C_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.ExecuteUbergraph_WBP_KeyBindingEntry
struct UWBP_KeyBindingEntry_C_ExecuteUbergraph_WBP_KeyBindingEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnSelectKeyModeChanged__DelegateSignature
struct UWBP_KeyBindingEntry_C_OnSelectKeyModeChanged__DelegateSignature_Params
{
	class UWBP_KeyBindingEntry_C*                      KeyBindingEntry;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSelectingKey;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_KeyBindingEntry.WBP_KeyBindingEntry_C.OnOverrideActionMapping__DelegateSignature
struct UWBP_KeyBindingEntry_C_OnOverrideActionMapping__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
