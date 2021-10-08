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

// Function PC_Base.PC_Base_C.CanOpenMenu
struct APC_Base_C_CanOpenMenu_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PC_Base.PC_Base_C.RefreshPawnSpineData
struct APC_Base_C_RefreshPawnSpineData_Params
{
};

// Function PC_Base.PC_Base_C.ActivateInputActionSet
struct APC_Base_C_ActivateInputActionSet_Params
{
	Zenith_EInputActionSet                             ActionSet;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Base.PC_Base_C.GetPlayerUI
struct APC_Base_C_GetPlayerUI_Params
{
	class UWBP_PlayerUI_C*                             PlayerUI;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Base.PC_Base_C.EquipDefaultSpirits
struct APC_Base_C_EquipDefaultSpirits_Params
{
};

// Function PC_Base.PC_Base_C.Equip from Spirit Index
struct APC_Base_C_Equip_from_Spirit_Index_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_ESummonSet                                  SummonSet;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_ECommandInputTypes                          CommandInputType;                                          // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Base.PC_Base_C.InitializeUI
struct APC_Base_C_InitializeUI_Params
{
};

// Function PC_Base.PC_Base_C.UnregisterPawn
struct APC_Base_C_UnregisterPawn_Params
{
};

// Function PC_Base.PC_Base_C.RegisterPawn
struct APC_Base_C_RegisterPawn_Params
{
};

// Function PC_Base.PC_Base_C.InpActEvt_MainMenu_K2Node_InputActionEvent_6
struct APC_Base_C_InpActEvt_MainMenu_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Base.PC_Base_C.InpActEvt_Pause_K2Node_InputActionEvent_5
struct APC_Base_C_InpActEvt_Pause_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Base.PC_Base_C.InpActEvt_DEBUG_K2Node_InputActionEvent_4
struct APC_Base_C_InpActEvt_DEBUG_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Base.PC_Base_C.InpActEvt_DEBUG_Modifier_K2Node_InputActionEvent_3
struct APC_Base_C_InpActEvt_DEBUG_Modifier_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Base.PC_Base_C.InpActEvt_DEBUG_Modifier_K2Node_InputActionEvent_2
struct APC_Base_C_InpActEvt_DEBUG_Modifier_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Base.PC_Base_C.InpActEvt_Minimap_K2Node_InputActionEvent_1
struct APC_Base_C_InpActEvt_Minimap_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_Base.PC_Base_C.ReceiveBeginPlay
struct APC_Base_C_ReceiveBeginPlay_Params
{
};

// Function PC_Base.PC_Base_C.OnGameMapSwitch
struct APC_Base_C_OnGameMapSwitch_Params
{
};

// Function PC_Base.PC_Base_C.OnResumeGameFromMainMenu
struct APC_Base_C_OnResumeGameFromMainMenu_Params
{
};

// Function PC_Base.PC_Base_C.OnPawnRespawn
struct APC_Base_C_OnPawnRespawn_Params
{
};

// Function PC_Base.PC_Base_C.OnGameDataLoaded
struct APC_Base_C_OnGameDataLoaded_Params
{
};

// Function PC_Base.PC_Base_C.OnResumeGameFromPause
struct APC_Base_C_OnResumeGameFromPause_Params
{
};

// Function PC_Base.PC_Base_C.OnOpenNewArea
struct APC_Base_C_OnOpenNewArea_Params
{
	struct FAreaData                                   AreaData;                                                  // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PC_Base.PC_Base_C.TryPause
struct APC_Base_C_TryPause_Params
{
};

// Function PC_Base.PC_Base_C.BndEvt__ParameterPlayerComponent_K2Node_ComponentBoundEvent_0_ParameterPlayerEvent__DelegateSignature
struct APC_Base_C_BndEvt__ParameterPlayerComponent_K2Node_ComponentBoundEvent_0_ParameterPlayerEvent__DelegateSignature_Params
{
	bool                                               bExecuteVisuals;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_Base.PC_Base_C.OnPawnChanged
struct APC_Base_C_OnPawnChanged_Params
{
};

// Function PC_Base.PC_Base_C.ReceiveEndPlay
struct APC_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Base.PC_Base_C.OnEventStarted
struct APC_Base_C_OnEventStarted_Params
{
	class UEventAsset*                                 EventAsset;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Base.PC_Base_C.OnEventStopped
struct APC_Base_C_OnEventStopped_Params
{
	class UEventAsset*                                 EventAsset;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Base.PC_Base_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_BaseInventoryEvent__DelegateSignature
struct APC_Base_C_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_BaseInventoryEvent__DelegateSignature_Params
{
	struct FInventoryBaseItemData                      InventoryItemData;                                         // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function PC_Base.PC_Base_C.OnAchievementUnlocked
struct APC_Base_C_OnAchievementUnlocked_Params
{
	Zenith_EZenithAchievement                          Achievement;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Base.PC_Base_C.ReceiveTick
struct APC_Base_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Base.PC_Base_C.TriggerOrDeferPause
struct APC_Base_C_TriggerOrDeferPause_Params
{
};

// Function PC_Base.PC_Base_C.OnGameMapReadyPostFade
struct APC_Base_C_OnGameMapReadyPostFade_Params
{
};

// Function PC_Base.PC_Base_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_3_CurrencyEvent__DelegateSignature
struct APC_Base_C_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_3_CurrencyEvent__DelegateSignature_Params
{
	Zenith_ECurrencyType                               CurrencyType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AddedCurrency;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_Base.PC_Base_C.OnApplicationWillDeactivate
struct APC_Base_C_OnApplicationWillDeactivate_Params
{
	bool                                               bApplicationWillBeSuspended;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_Base.PC_Base_C.BndEvt__PC_Base_ParameterPlayerComponent_K2Node_ComponentBoundEvent_2_ParameterPlayerEvent__DelegateSignature
struct APC_Base_C_BndEvt__PC_Base_ParameterPlayerComponent_K2Node_ComponentBoundEvent_2_ParameterPlayerEvent__DelegateSignature_Params
{
};

// Function PC_Base.PC_Base_C.ExecuteUbergraph_PC_Base
struct APC_Base_C_ExecuteUbergraph_PC_Base_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
