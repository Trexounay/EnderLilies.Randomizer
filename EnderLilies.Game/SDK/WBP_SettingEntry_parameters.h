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

// Function WBP_SettingEntry.WBP_SettingEntry_C.OnPressConfirm
struct UWBP_SettingEntry_C_OnPressConfirm_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_SettingEntry.WBP_SettingEntry_C.SetCustomSettingIcon
struct UWBP_SettingEntry_C_SetCustomSettingIcon_Params
{
	class UPaperSprite*                                CustomSettingIcon;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingEntry.WBP_SettingEntry_C.SetLabelText
struct UWBP_SettingEntry_C_SetLabelText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SettingEntry.WBP_SettingEntry_C.OnPressRight
struct UWBP_SettingEntry_C_OnPressRight_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_SettingEntry.WBP_SettingEntry_C.OnPressLeft
struct UWBP_SettingEntry_C_OnPressLeft_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_SettingEntry.WBP_SettingEntry_C.PreConstruct
struct UWBP_SettingEntry_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingEntry.WBP_SettingEntry_C.RefreshDesign
struct UWBP_SettingEntry_C_RefreshDesign_Params
{
	bool                                               bFocused;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingEntry.WBP_SettingEntry_C.Construct
struct UWBP_SettingEntry_C_Construct_Params
{
};

// Function WBP_SettingEntry.WBP_SettingEntry_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UWBP_SettingEntry_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_SettingEntry.WBP_SettingEntry_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UWBP_SettingEntry_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_SettingEntry.WBP_SettingEntry_C.ExecuteUbergraph_WBP_SettingEntry
struct UWBP_SettingEntry_C_ExecuteUbergraph_WBP_SettingEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingEntry.WBP_SettingEntry_C.OnPressedLeft__DelegateSignature
struct UWBP_SettingEntry_C_OnPressedLeft__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SettingEntry.WBP_SettingEntry_C.OnPressedRight__DelegateSignature
struct UWBP_SettingEntry_C_OnPressedRight__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
