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

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.RefreshTextOptionColor
struct UWBP_ChallengeMenu_C_RefreshTextOptionColor_Params
{
	class UWBP_ChallengeEntry_Text_C*                  ChallengeTextEntry;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseDefaultColor;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.RefreshToggleOptionColor
struct UWBP_ChallengeMenu_C_RefreshToggleOptionColor_Params
{
	class UWBP_SettingEntry_Toggle_C*                  ChallengeToggleEntry;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseDefaultColor;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.GetFactorText
struct UWBP_ChallengeMenu_C_GetFactorText_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Result;                                                    // 0x0008(0x0018)  (Parm, OutParm)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.SetPauseIfNecessary
struct UWBP_ChallengeMenu_C_SetPauseIfNecessary_Params
{
	bool                                               bPaused;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.ReequipSpiritsIfNecessary
struct UWBP_ChallengeMenu_C_ReequipSpiritsIfNecessary_Params
{
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.AddSpiritMaxLevelClamp
struct UWBP_ChallengeMenu_C_AddSpiritMaxLevelClamp_Params
{
	int                                                OffsetToAdd;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AllowLoop;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.AddPlayerMaxLevelClamp
struct UWBP_ChallengeMenu_C_AddPlayerMaxLevelClamp_Params
{
	int                                                OffsetToAdd;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AllowLoop;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.AddContactDamageFactor
struct UWBP_ChallengeMenu_C_AddContactDamageFactor_Params
{
	float                                              FactorToAdd;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AllowLoop;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.AddEnemyMaxHPFactor
struct UWBP_ChallengeMenu_C_AddEnemyMaxHPFactor_Params
{
	float                                              FactorToAdd;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AllowLoop;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.AddEnemyAttackFactor
struct UWBP_ChallengeMenu_C_AddEnemyAttackFactor_Params
{
	float                                              FactorToAdd;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AllowLoop;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.RefreshDisplay
struct UWBP_ChallengeMenu_C_RefreshDisplay_Params
{
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.OnPressCancel
struct UWBP_ChallengeMenu_C_OnPressCancel_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.OnFocusReceived
struct UWBP_ChallengeMenu_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.OnFinish_066E292E42E788874C41348FA3822509
struct UWBP_ChallengeMenu_C_OnFinish_066E292E42E788874C41348FA3822509_Params
{
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.OnFinish_2071A4134BF576284BB5479C122E612A
struct UWBP_ChallengeMenu_C_OnFinish_2071A4134BF576284BB5479C122E612A_Params
{
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.OnFinish_066E292E42E788874C41348F40D6FDB1
struct UWBP_ChallengeMenu_C_OnFinish_066E292E42E788874C41348F40D6FDB1_Params
{
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.OnFinish_2071A4134BF576284BB5479CF17AB992
struct UWBP_ChallengeMenu_C_OnFinish_2071A4134BF576284BB5479CF17AB992_Params
{
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.Construct
struct UWBP_ChallengeMenu_C_Construct_Params
{
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__NewWidgetBlueprint_WBP_ChallengeEntry_Values_K2Node_ComponentBoundEvent_0_OnPressedRight__DelegateSignature
struct UWBP_ChallengeMenu_C_BndEvt__NewWidgetBlueprint_WBP_ChallengeEntry_Values_K2Node_ComponentBoundEvent_0_OnPressedRight__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.Close
struct UWBP_ChallengeMenu_C_Close_Params
{
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_OneHitKO_K2Node_ComponentBoundEvent_2_OnToggle__DelegateSignature
struct UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_OneHitKO_K2Node_ComponentBoundEvent_2_OnToggle__DelegateSignature_Params
{
	bool                                               ToggleValue;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_DefaultButton_Reset_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_DefaultButton_Reset_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_EnemyDamageFactor_K2Node_ComponentBoundEvent_5_OnPressedLeft__DelegateSignature
struct UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_EnemyDamageFactor_K2Node_ComponentBoundEvent_5_OnPressedLeft__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_EnemyMaxHPFactor_K2Node_ComponentBoundEvent_6_OnPressedLeft__DelegateSignature
struct UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_EnemyMaxHPFactor_K2Node_ComponentBoundEvent_6_OnPressedLeft__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_EnemyMaxHPFactor_K2Node_ComponentBoundEvent_7_OnPressedRight__DelegateSignature
struct UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_EnemyMaxHPFactor_K2Node_ComponentBoundEvent_7_OnPressedRight__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_ContactDamageFactor_K2Node_ComponentBoundEvent_8_OnPressedLeft__DelegateSignature
struct UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_ContactDamageFactor_K2Node_ComponentBoundEvent_8_OnPressedLeft__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_ContactDamageFactor_K2Node_ComponentBoundEvent_9_OnPressedRight__DelegateSignature
struct UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_ContactDamageFactor_K2Node_ComponentBoundEvent_9_OnPressedRight__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_PlayerCantHeal_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature
struct UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_PlayerCantHeal_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature_Params
{
	bool                                               ToggleValue;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_BackButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
struct UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_BackButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_PlayerLevelClamp_K2Node_ComponentBoundEvent_12_OnPressedLeft__DelegateSignature
struct UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_PlayerLevelClamp_K2Node_ComponentBoundEvent_12_OnPressedLeft__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_PlayerLevelClamp_K2Node_ComponentBoundEvent_13_OnPressedRight__DelegateSignature
struct UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_PlayerLevelClamp_K2Node_ComponentBoundEvent_13_OnPressedRight__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_SpiritLevelClamp_K2Node_ComponentBoundEvent_1_OnPressedLeft__DelegateSignature
struct UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_SpiritLevelClamp_K2Node_ComponentBoundEvent_1_OnPressedLeft__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_SpiritLevelClamp_K2Node_ComponentBoundEvent_14_OnPressedRight__DelegateSignature
struct UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_SpiritLevelClamp_K2Node_ComponentBoundEvent_14_OnPressedRight__DelegateSignature_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.ExecuteUbergraph_WBP_ChallengeMenu
struct UWBP_ChallengeMenu_C_ExecuteUbergraph_WBP_ChallengeMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.OnClosed__DelegateSignature
struct UWBP_ChallengeMenu_C_OnClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
