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

// Function WBP_RestMenu.WBP_RestMenu_C.OnPreviewKeyDown
struct UWBP_RestMenu_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_RestMenu.WBP_RestMenu_C.ToggleUI
struct UWBP_RestMenu_C_ToggleUI_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.RefreshButtonStates
struct UWBP_RestMenu_C_RefreshButtonStates_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.RefreshNavigationRules
struct UWBP_RestMenu_C_RefreshNavigationRules_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.SetStrengthenButtonActive
struct UWBP_RestMenu_C_SetStrengthenButtonActive_Params
{
	bool                                               Active;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RestMenu.WBP_RestMenu_C.SetPassiveButtonActive
struct UWBP_RestMenu_C_SetPassiveButtonActive_Params
{
	bool                                               Active;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RestMenu.WBP_RestMenu_C.SetEquipButtonActive
struct UWBP_RestMenu_C_SetEquipButtonActive_Params
{
	bool                                               Active;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RestMenu.WBP_RestMenu_C.SetActiveFastTravelWidget
struct UWBP_RestMenu_C_SetActiveFastTravelWidget_Params
{
	bool                                               Active;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RestMenu.WBP_RestMenu_C.CheckAvailableStrengthen
struct UWBP_RestMenu_C_CheckAvailableStrengthen_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_RestMenu.WBP_RestMenu_C.CheckAvailablePassive
struct UWBP_RestMenu_C_CheckAvailablePassive_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_RestMenu.WBP_RestMenu_C.CheckAvailableEquip
struct UWBP_RestMenu_C_CheckAvailableEquip_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_RestMenu.WBP_RestMenu_C.CheckAvailableFastTravel
struct UWBP_RestMenu_C_CheckAvailableFastTravel_Params
{
	bool                                               IsAvaliableFastTravel;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RestMenu.WBP_RestMenu_C.SetChallengeIconVisibility
struct UWBP_RestMenu_C_SetChallengeIconVisibility_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.SetRecollectionNewIconVisibility
struct UWBP_RestMenu_C_SetRecollectionNewIconVisibility_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.SetPassiveNewIconVisibility
struct UWBP_RestMenu_C_SetPassiveNewIconVisibility_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.SetSpiritNewIconVisibility
struct UWBP_RestMenu_C_SetSpiritNewIconVisibility_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.RefreshRestPointName
struct UWBP_RestMenu_C_RefreshRestPointName_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnPressCancel
struct UWBP_RestMenu_C_OnPressCancel_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnPressContext
struct UWBP_RestMenu_C_OnPressContext_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFocusReceived
struct UWBP_RestMenu_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F18657F70
struct UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348F18657F70_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CA9C93B53
struct UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479CA9C93B53_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348FFFB8C7B3
struct UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348FFFB8C7B3_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479C4E148390
struct UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479C4E148390_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F17F69077
struct UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348F17F69077_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CA65AD454
struct UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479CA65AD454_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F3F09A060
struct UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348F3F09A060_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479C8EA5E443
struct UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479C8EA5E443_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F747ABB69
struct UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348F747ABB69_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CC5D6FF4A
struct UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479CC5D6FF4A_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F7D6DF003
struct UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348F7D6DF003_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CCCC1B420
struct UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479CCCC1B420_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348FAA067F54
struct UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348FAA067F54_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479C1BAA3B77
struct UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479C1BAA3B77_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F42B6A853
struct UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348F42B6A853_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CF31AEC70
struct UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479CF31AEC70_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F01D7E1E3
struct UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348F01D7E1E3_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CB07BA5C0
struct UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479CB07BA5C0_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CC8EBDD08
struct UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479CC8EBDD08_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F52F9E87B
struct UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348F52F9E87B_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CE355AC58
struct UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479CE355AC58_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479C695AEDBD
struct UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479C695AEDBD_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F7947992B
struct UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348F7947992B_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F65BAF5C7
struct UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348F65BAF5C7_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479CD416B1E4
struct UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479CD416B1E4_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348FD8F6A99E
struct UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348FD8F6A99E_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_066E292E42E788874C41348F9C40240B
struct UWBP_RestMenu_C_OnFinish_066E292E42E788874C41348F9C40240B_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_2071A4134BF576284BB5479C2DEC6028
struct UWBP_RestMenu_C_OnFinish_2071A4134BF576284BB5479C2DEC6028_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnFinish_B201F08648361695E1BF52BB7F603DFF
struct UWBP_RestMenu_C_OnFinish_B201F08648361695E1BF52BB7F603DFF_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.Construct
struct UWBP_RestMenu_C_Construct_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.CloseMenu
struct UWBP_RestMenu_C_CloseMenu_Params
{
	bool                                               PlayAnimation;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnAnimationFinished
struct UWBP_RestMenu_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnCloseStrengthen
struct UWBP_RestMenu_C_OnCloseStrengthen_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnCloseEquipment
struct UWBP_RestMenu_C_OnCloseEquipment_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnCloseMap
struct UWBP_RestMenu_C_OnCloseMap_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnRequestFastTravel
struct UWBP_RestMenu_C_OnRequestFastTravel_Params
{
	struct FDataTableRowHandle                         GameMapHandle;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__RestButton_Map_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_RestMenu_C_BndEvt__RestButton_Map_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__RestButton_Equipment_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UWBP_RestMenu_C_BndEvt__RestButton_Equipment_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__RestButton_Strengthen_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UWBP_RestMenu_C_BndEvt__RestButton_Strengthen_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__RestButton_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UWBP_RestMenu_C_BndEvt__RestButton_Leave_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.RemoveMenu
struct UWBP_RestMenu_C_RemoveMenu_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__RestButton_Save_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UWBP_RestMenu_C_BndEvt__RestButton_Save_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__RestButton_Passive_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UWBP_RestMenu_C_BndEvt__RestButton_Passive_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnClosePassive
struct UWBP_RestMenu_C_OnClosePassive_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnSaveFinished
struct UWBP_RestMenu_C_OnSaveFinished_Params
{
	bool                                               bSuccess;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnClickedOK
struct UWBP_RestMenu_C_OnClickedOK_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.CheckTutorials
struct UWBP_RestMenu_C_CheckTutorials_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.WidgetAnimationEvt_HideUI_K2Node_WidgetAnimationEvent_2
struct UWBP_RestMenu_C_WidgetAnimationEvt_HideUI_K2Node_WidgetAnimationEvent_2_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__WBP_RestMenu_RestButton_Recollection_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWBP_RestMenu_C_BndEvt__WBP_RestMenu_RestButton_Recollection_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnCloseRecollection
struct UWBP_RestMenu_C_OnCloseRecollection_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.BndEvt__WBP_RestMenu_RestButton_Challenge_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UWBP_RestMenu_C_BndEvt__WBP_RestMenu_RestButton_Challenge_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnCloseChallenge
struct UWBP_RestMenu_C_OnCloseChallenge_Params
{
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnRequestMapChange
struct UWBP_RestMenu_C_OnRequestMapChange_Params
{
	struct FDataTableRowHandle                         Map;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_RestMenu.WBP_RestMenu_C.OnRemovedFromFocusPath
struct UWBP_RestMenu_C_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_RestMenu.WBP_RestMenu_C.ExecuteUbergraph_WBP_RestMenu
struct UWBP_RestMenu_C_ExecuteUbergraph_WBP_RestMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
