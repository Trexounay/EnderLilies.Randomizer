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

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.GoToSideTab
struct UWBP_RecollectionMenu_C_GoToSideTab_Params
{
	bool                                               NextTab;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.SelectTab
struct UWBP_RecollectionMenu_C_SelectTab_Params
{
	int                                                TabIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.IsBossRushMenuVisible
struct UWBP_RecollectionMenu_C_IsBossRushMenuVisible_Params
{
	bool                                               Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.IsBossMenuVisible
struct UWBP_RecollectionMenu_C_IsBossMenuVisible_Params
{
	bool                                               Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.SetupMenuTabs
struct UWBP_RecollectionMenu_C_SetupMenuTabs_Params
{
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnPressNextPage
struct UWBP_RecollectionMenu_C_OnPressNextPage_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnPressPrevPage
struct UWBP_RecollectionMenu_C_OnPressPrevPage_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnFocusReceived
struct UWBP_RecollectionMenu_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnPressCancel
struct UWBP_RecollectionMenu_C_OnPressCancel_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnFinish_2071A4134BF576284BB5479CEB53F866
struct UWBP_RecollectionMenu_C_OnFinish_2071A4134BF576284BB5479CEB53F866_Params
{
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnFinish_066E292E42E788874C41348F5D2F02F2
struct UWBP_RecollectionMenu_C_OnFinish_066E292E42E788874C41348F5D2F02F2_Params
{
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnFinish_2071A4134BF576284BB5479CEC8346D1
struct UWBP_RecollectionMenu_C_OnFinish_2071A4134BF576284BB5479CEC8346D1_Params
{
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnFinish_066E292E42E788874C41348F5AFFBC45
struct UWBP_RecollectionMenu_C_OnFinish_066E292E42E788874C41348F5AFFBC45_Params
{
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.Construct
struct UWBP_RecollectionMenu_C_Construct_Params
{
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.CloseMenu
struct UWBP_RecollectionMenu_C_CloseMenu_Params
{
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.BndEvt__WBP_RecollectionMenu_WBP_Recollection_BossList_K2Node_ComponentBoundEvent_0_OnRequestMapChange__DelegateSignature
struct UWBP_RecollectionMenu_C_BndEvt__WBP_RecollectionMenu_WBP_Recollection_BossList_K2Node_ComponentBoundEvent_0_OnRequestMapChange__DelegateSignature_Params
{
	struct FDataTableRowHandle                         Map;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnFadeFinished
struct UWBP_RecollectionMenu_C_OnFadeFinished_Params
{
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnBossRushFadeFinished
struct UWBP_RecollectionMenu_C_OnBossRushFadeFinished_Params
{
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.BndEvt__WBP_RecollectionMenu_WBP_Recollection_BossList_K2Node_ComponentBoundEvent_1_OnRequestBossRush__DelegateSignature
struct UWBP_RecollectionMenu_C_BndEvt__WBP_RecollectionMenu_WBP_Recollection_BossList_K2Node_ComponentBoundEvent_1_OnRequestBossRush__DelegateSignature_Params
{
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.BndEvt__WBP_RecollectionMenu_WBP_Recollection_BossRush_C_2_K2Node_ComponentBoundEvent_3_OnLaunchBossRush__DelegateSignature
struct UWBP_RecollectionMenu_C_BndEvt__WBP_RecollectionMenu_WBP_Recollection_BossRush_C_2_K2Node_ComponentBoundEvent_3_OnLaunchBossRush__DelegateSignature_Params
{
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.BndEvt__WBP_RecollectionMenu_Tab_BossRush_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UWBP_RecollectionMenu_C_BndEvt__WBP_RecollectionMenu_Tab_BossRush_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.BndEvt__WBP_RecollectionMenu_Tab_Bosses_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UWBP_RecollectionMenu_C_BndEvt__WBP_RecollectionMenu_Tab_Bosses_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.BndEvt__WBP_RecollectionMenu_Tab_Movies_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UWBP_RecollectionMenu_C_BndEvt__WBP_RecollectionMenu_Tab_Movies_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.ExecuteUbergraph_WBP_RecollectionMenu
struct UWBP_RecollectionMenu_C_ExecuteUbergraph_WBP_RecollectionMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnRequestMapChange__DelegateSignature
struct UWBP_RecollectionMenu_C_OnRequestMapChange__DelegateSignature_Params
{
	struct FDataTableRowHandle                         Map;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_RecollectionMenu.WBP_RecollectionMenu_C.OnClose__DelegateSignature
struct UWBP_RecollectionMenu_C_OnClose__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
