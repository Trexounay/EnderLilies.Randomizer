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

// Function WBP_SettingsTab.WBP_SettingsTab_C.SetText
struct UWBP_SettingsTab_C_SetText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SettingsTab.WBP_SettingsTab_C.OnFocusReceived
struct UWBP_SettingsTab_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_SettingsTab.WBP_SettingsTab_C.PreConstruct
struct UWBP_SettingsTab_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsTab.WBP_SettingsTab_C.Construct
struct UWBP_SettingsTab_C_Construct_Params
{
};

// Function WBP_SettingsTab.WBP_SettingsTab_C.SetSelected
struct UWBP_SettingsTab_C_SetSelected_Params
{
	bool                                               Selected;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SettingsTab.WBP_SettingsTab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UWBP_SettingsTab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WBP_SettingsTab.WBP_SettingsTab_C.ExecuteUbergraph_WBP_SettingsTab
struct UWBP_SettingsTab_C_ExecuteUbergraph_WBP_SettingsTab_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SettingsTab.WBP_SettingsTab_C.OnClicked__DelegateSignature
struct UWBP_SettingsTab_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
