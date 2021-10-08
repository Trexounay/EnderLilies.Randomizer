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
//		Name   -> Function PC_Base.PC_Base_C.CanOpenMenu
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool APC_Base_C::CanOpenMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.CanOpenMenu");

	APC_Base_C_CanOpenMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.RefreshPawnSpineData
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void APC_Base_C::RefreshPawnSpineData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.RefreshPawnSpineData");

	APC_Base_C_RefreshPawnSpineData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.ActivateInputActionSet
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		Zenith_EInputActionSet                             ActionSet                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Base_C::ActivateInputActionSet(Zenith_EInputActionSet ActionSet)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.ActivateInputActionSet");

	APC_Base_C_ActivateInputActionSet_Params params;
	params.ActionSet = ActionSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.GetPlayerUI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_PlayerUI_C*                             PlayerUI                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Base_C::GetPlayerUI(class UWBP_PlayerUI_C** PlayerUI)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.GetPlayerUI");

	APC_Base_C_GetPlayerUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerUI != nullptr)
		*PlayerUI = params.PlayerUI;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.EquipDefaultSpirits
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void APC_Base_C::EquipDefaultSpirits()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.EquipDefaultSpirits");

	APC_Base_C_EquipDefaultSpirits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.Equip from Spirit Index
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Zenith_ESummonSet                                  SummonSet                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Zenith_ECommandInputTypes                          CommandInputType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Base_C::Equip_from_Spirit_Index(int Index, Zenith_ESummonSet SummonSet, Zenith_ECommandInputTypes CommandInputType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.Equip from Spirit Index");

	APC_Base_C_Equip_from_Spirit_Index_Params params;
	params.Index = Index;
	params.SummonSet = SummonSet;
	params.CommandInputType = CommandInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.InitializeUI
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void APC_Base_C::InitializeUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.InitializeUI");

	APC_Base_C_InitializeUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.UnregisterPawn
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
void APC_Base_C::UnregisterPawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.UnregisterPawn");

	APC_Base_C_UnregisterPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.RegisterPawn
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void APC_Base_C::RegisterPawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.RegisterPawn");

	APC_Base_C_RegisterPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.InpActEvt_MainMenu_K2Node_InputActionEvent_6
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Base_C::InpActEvt_MainMenu_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.InpActEvt_MainMenu_K2Node_InputActionEvent_6");

	APC_Base_C_InpActEvt_MainMenu_K2Node_InputActionEvent_6_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.InpActEvt_Pause_K2Node_InputActionEvent_5
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Base_C::InpActEvt_Pause_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.InpActEvt_Pause_K2Node_InputActionEvent_5");

	APC_Base_C_InpActEvt_Pause_K2Node_InputActionEvent_5_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.InpActEvt_DEBUG_K2Node_InputActionEvent_4
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Base_C::InpActEvt_DEBUG_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.InpActEvt_DEBUG_K2Node_InputActionEvent_4");

	APC_Base_C_InpActEvt_DEBUG_K2Node_InputActionEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.InpActEvt_DEBUG_Modifier_K2Node_InputActionEvent_3
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Base_C::InpActEvt_DEBUG_Modifier_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.InpActEvt_DEBUG_Modifier_K2Node_InputActionEvent_3");

	APC_Base_C_InpActEvt_DEBUG_Modifier_K2Node_InputActionEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.InpActEvt_DEBUG_Modifier_K2Node_InputActionEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Base_C::InpActEvt_DEBUG_Modifier_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.InpActEvt_DEBUG_Modifier_K2Node_InputActionEvent_2");

	APC_Base_C_InpActEvt_DEBUG_Modifier_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.InpActEvt_Minimap_K2Node_InputActionEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_Base_C::InpActEvt_Minimap_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.InpActEvt_Minimap_K2Node_InputActionEvent_1");

	APC_Base_C_InpActEvt_Minimap_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void APC_Base_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.ReceiveBeginPlay");

	APC_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.OnGameMapSwitch
//		Flags  -> (Event, Public, BlueprintEvent)
void APC_Base_C::OnGameMapSwitch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.OnGameMapSwitch");

	APC_Base_C_OnGameMapSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.OnResumeGameFromMainMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APC_Base_C::OnResumeGameFromMainMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.OnResumeGameFromMainMenu");

	APC_Base_C_OnResumeGameFromMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.OnPawnRespawn
//		Flags  -> (Event, Public, BlueprintEvent)
void APC_Base_C::OnPawnRespawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.OnPawnRespawn");

	APC_Base_C_OnPawnRespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.OnGameDataLoaded
//		Flags  -> (Event, Public, BlueprintEvent)
void APC_Base_C::OnGameDataLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.OnGameDataLoaded");

	APC_Base_C_OnGameDataLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.OnResumeGameFromPause
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APC_Base_C::OnResumeGameFromPause()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.OnResumeGameFromPause");

	APC_Base_C_OnResumeGameFromPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.OnOpenNewArea
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FAreaData                                   AreaData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void APC_Base_C::OnOpenNewArea(const struct FAreaData& AreaData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.OnOpenNewArea");

	APC_Base_C_OnOpenNewArea_Params params;
	params.AreaData = AreaData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.TryPause
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APC_Base_C::TryPause()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.TryPause");

	APC_Base_C_TryPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.BndEvt__ParameterPlayerComponent_K2Node_ComponentBoundEvent_0_ParameterPlayerEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bExecuteVisuals                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_Base_C::BndEvt__ParameterPlayerComponent_K2Node_ComponentBoundEvent_0_ParameterPlayerEvent__DelegateSignature(bool bExecuteVisuals)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.BndEvt__ParameterPlayerComponent_K2Node_ComponentBoundEvent_0_ParameterPlayerEvent__DelegateSignature");

	APC_Base_C_BndEvt__ParameterPlayerComponent_K2Node_ComponentBoundEvent_0_ParameterPlayerEvent__DelegateSignature_Params params;
	params.bExecuteVisuals = bExecuteVisuals;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.OnPawnChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
void APC_Base_C::OnPawnChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.OnPawnChanged");

	APC_Base_C_OnPawnChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.ReceiveEndPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Base_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.ReceiveEndPlay");

	APC_Base_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.OnEventStarted
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UEventAsset*                                 EventAsset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Base_C::OnEventStarted(class UEventAsset* EventAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.OnEventStarted");

	APC_Base_C_OnEventStarted_Params params;
	params.EventAsset = EventAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.OnEventStopped
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UEventAsset*                                 EventAsset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Base_C::OnEventStopped(class UEventAsset* EventAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.OnEventStopped");

	APC_Base_C_OnEventStopped_Params params;
	params.EventAsset = EventAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_BaseInventoryEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FInventoryBaseItemData                      InventoryItemData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void APC_Base_C::BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_BaseInventoryEvent__DelegateSignature(const struct FInventoryBaseItemData& InventoryItemData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_BaseInventoryEvent__DelegateSignature");

	APC_Base_C_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_BaseInventoryEvent__DelegateSignature_Params params;
	params.InventoryItemData = InventoryItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.OnAchievementUnlocked
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		Zenith_EZenithAchievement                          Achievement                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Base_C::OnAchievementUnlocked(Zenith_EZenithAchievement Achievement)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.OnAchievementUnlocked");

	APC_Base_C_OnAchievementUnlocked_Params params;
	params.Achievement = Achievement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Base_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.ReceiveTick");

	APC_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.TriggerOrDeferPause
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void APC_Base_C::TriggerOrDeferPause()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.TriggerOrDeferPause");

	APC_Base_C_TriggerOrDeferPause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.OnGameMapReadyPostFade
//		Flags  -> (Event, Public, BlueprintEvent)
void APC_Base_C::OnGameMapReadyPostFade()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.OnGameMapReadyPostFade");

	APC_Base_C_OnGameMapReadyPostFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_3_CurrencyEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		Zenith_ECurrencyType                               CurrencyType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                AddedCurrency                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Base_C::BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_3_CurrencyEvent__DelegateSignature(Zenith_ECurrencyType CurrencyType, int AddedCurrency)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_3_CurrencyEvent__DelegateSignature");

	APC_Base_C_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_3_CurrencyEvent__DelegateSignature_Params params;
	params.CurrencyType = CurrencyType;
	params.AddedCurrency = AddedCurrency;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.OnApplicationWillDeactivate
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bApplicationWillBeSuspended                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_Base_C::OnApplicationWillDeactivate(bool bApplicationWillBeSuspended)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.OnApplicationWillDeactivate");

	APC_Base_C_OnApplicationWillDeactivate_Params params;
	params.bApplicationWillBeSuspended = bApplicationWillBeSuspended;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.BndEvt__PC_Base_ParameterPlayerComponent_K2Node_ComponentBoundEvent_2_ParameterPlayerEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void APC_Base_C::BndEvt__PC_Base_ParameterPlayerComponent_K2Node_ComponentBoundEvent_2_ParameterPlayerEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.BndEvt__PC_Base_ParameterPlayerComponent_K2Node_ComponentBoundEvent_2_ParameterPlayerEvent__DelegateSignature");

	APC_Base_C_BndEvt__PC_Base_ParameterPlayerComponent_K2Node_ComponentBoundEvent_2_ParameterPlayerEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function PC_Base.PC_Base_C.ExecuteUbergraph_PC_Base
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_Base_C::ExecuteUbergraph_PC_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_Base.PC_Base_C.ExecuteUbergraph_PC_Base");

	APC_Base_C_ExecuteUbergraph_PC_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
