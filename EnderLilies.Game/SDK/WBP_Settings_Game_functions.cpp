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
//		Name   -> Function WBP_Settings_Game.WBP_Settings_Game_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Settings_Game_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Game.WBP_Settings_Game_C.OnFocusReceived");

	UWBP_Settings_Game_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Game.WBP_Settings_Game_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Settings_Game_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Game.WBP_Settings_Game_C.Construct");

	UWBP_Settings_Game_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Game.WBP_Settings_Game_C.BndEvt__WBP_Settings_DisplayDamageValues_K2Node_ComponentBoundEvent_0_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               ToggleValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_Game_C::BndEvt__WBP_Settings_DisplayDamageValues_K2Node_ComponentBoundEvent_0_OnToggle__DelegateSignature(bool ToggleValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Game.WBP_Settings_Game_C.BndEvt__WBP_Settings_DisplayDamageValues_K2Node_ComponentBoundEvent_0_OnToggle__DelegateSignature");

	UWBP_Settings_Game_C_BndEvt__WBP_Settings_DisplayDamageValues_K2Node_ComponentBoundEvent_0_OnToggle__DelegateSignature_Params params;
	params.ToggleValue = ToggleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Game.WBP_Settings_Game_C.BndEvt__WBP_Settings_DisplayHealValues_K2Node_ComponentBoundEvent_1_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               ToggleValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_Game_C::BndEvt__WBP_Settings_DisplayHealValues_K2Node_ComponentBoundEvent_1_OnToggle__DelegateSignature(bool ToggleValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Game.WBP_Settings_Game_C.BndEvt__WBP_Settings_DisplayHealValues_K2Node_ComponentBoundEvent_1_OnToggle__DelegateSignature");

	UWBP_Settings_Game_C_BndEvt__WBP_Settings_DisplayHealValues_K2Node_ComponentBoundEvent_1_OnToggle__DelegateSignature_Params params;
	params.ToggleValue = ToggleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Game.WBP_Settings_Game_C.BndEvt__WBP_Settings_EnableForceFeedback_K2Node_ComponentBoundEvent_2_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               ToggleValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_Game_C::BndEvt__WBP_Settings_EnableForceFeedback_K2Node_ComponentBoundEvent_2_OnToggle__DelegateSignature(bool ToggleValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Game.WBP_Settings_Game_C.BndEvt__WBP_Settings_EnableForceFeedback_K2Node_ComponentBoundEvent_2_OnToggle__DelegateSignature");

	UWBP_Settings_Game_C_BndEvt__WBP_Settings_EnableForceFeedback_K2Node_ComponentBoundEvent_2_OnToggle__DelegateSignature_Params params;
	params.ToggleValue = ToggleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Game.WBP_Settings_Game_C.BndEvt__WBP_Settings_EnableCameraShake_K2Node_ComponentBoundEvent_3_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               ToggleValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_Game_C::BndEvt__WBP_Settings_EnableCameraShake_K2Node_ComponentBoundEvent_3_OnToggle__DelegateSignature(bool ToggleValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Game.WBP_Settings_Game_C.BndEvt__WBP_Settings_EnableCameraShake_K2Node_ComponentBoundEvent_3_OnToggle__DelegateSignature");

	UWBP_Settings_Game_C_BndEvt__WBP_Settings_EnableCameraShake_K2Node_ComponentBoundEvent_3_OnToggle__DelegateSignature_Params params;
	params.ToggleValue = ToggleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Game.WBP_Settings_Game_C.BndEvt__WBP_Settings_EnableInternalAchievementNotification_K2Node_ComponentBoundEvent_4_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               ToggleValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_Game_C::BndEvt__WBP_Settings_EnableInternalAchievementNotification_K2Node_ComponentBoundEvent_4_OnToggle__DelegateSignature(bool ToggleValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Game.WBP_Settings_Game_C.BndEvt__WBP_Settings_EnableInternalAchievementNotification_K2Node_ComponentBoundEvent_4_OnToggle__DelegateSignature");

	UWBP_Settings_Game_C_BndEvt__WBP_Settings_EnableInternalAchievementNotification_K2Node_ComponentBoundEvent_4_OnToggle__DelegateSignature_Params params;
	params.ToggleValue = ToggleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Game.WBP_Settings_Game_C.BndEvt__WBP_Settings_HoldForSummonSetSwitch_K2Node_ComponentBoundEvent_5_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               ToggleValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_Game_C::BndEvt__WBP_Settings_HoldForSummonSetSwitch_K2Node_ComponentBoundEvent_5_OnToggle__DelegateSignature(bool ToggleValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Game.WBP_Settings_Game_C.BndEvt__WBP_Settings_HoldForSummonSetSwitch_K2Node_ComponentBoundEvent_5_OnToggle__DelegateSignature");

	UWBP_Settings_Game_C_BndEvt__WBP_Settings_HoldForSummonSetSwitch_K2Node_ComponentBoundEvent_5_OnToggle__DelegateSignature_Params params;
	params.ToggleValue = ToggleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Game.WBP_Settings_Game_C.BndEvt__WBP_Settings_DisplayPlayerUI_K2Node_ComponentBoundEvent_6_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               ToggleValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_Game_C::BndEvt__WBP_Settings_DisplayPlayerUI_K2Node_ComponentBoundEvent_6_OnToggle__DelegateSignature(bool ToggleValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Game.WBP_Settings_Game_C.BndEvt__WBP_Settings_DisplayPlayerUI_K2Node_ComponentBoundEvent_6_OnToggle__DelegateSignature");

	UWBP_Settings_Game_C_BndEvt__WBP_Settings_DisplayPlayerUI_K2Node_ComponentBoundEvent_6_OnToggle__DelegateSignature_Params params;
	params.ToggleValue = ToggleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Game.WBP_Settings_Game_C.BndEvt__WBP_Settings_DisplayEnemyFloatingGauges_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               ToggleValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_Game_C::BndEvt__WBP_Settings_DisplayEnemyFloatingGauges_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature(bool ToggleValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Game.WBP_Settings_Game_C.BndEvt__WBP_Settings_DisplayEnemyFloatingGauges_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature");

	UWBP_Settings_Game_C_BndEvt__WBP_Settings_DisplayEnemyFloatingGauges_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature_Params params;
	params.ToggleValue = ToggleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Game.WBP_Settings_Game_C.BndEvt__WBP_Settings_Game_WBP_DefaultButton_ResetToDefault_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Settings_Game_C::BndEvt__WBP_Settings_Game_WBP_DefaultButton_ResetToDefault_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Game.WBP_Settings_Game_C.BndEvt__WBP_Settings_Game_WBP_DefaultButton_ResetToDefault_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UWBP_Settings_Game_C_BndEvt__WBP_Settings_Game_WBP_DefaultButton_ResetToDefault_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Game.WBP_Settings_Game_C.InitializeValues
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Settings_Game_C::InitializeValues()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Game.WBP_Settings_Game_C.InitializeValues");

	UWBP_Settings_Game_C_InitializeValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Game.WBP_Settings_Game_C.BndEvt__WBP_Settings_Game_WBP_Settings_EnableDamageAreaPostProcess_K2Node_ComponentBoundEvent_9_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               ToggleValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_Game_C::BndEvt__WBP_Settings_Game_WBP_Settings_EnableDamageAreaPostProcess_K2Node_ComponentBoundEvent_9_OnToggle__DelegateSignature(bool ToggleValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Game.WBP_Settings_Game_C.BndEvt__WBP_Settings_Game_WBP_Settings_EnableDamageAreaPostProcess_K2Node_ComponentBoundEvent_9_OnToggle__DelegateSignature");

	UWBP_Settings_Game_C_BndEvt__WBP_Settings_Game_WBP_Settings_EnableDamageAreaPostProcess_K2Node_ComponentBoundEvent_9_OnToggle__DelegateSignature_Params params;
	params.ToggleValue = ToggleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Game.WBP_Settings_Game_C.BndEvt__WBP_Settings_Game_WBP_Settings_NoAutoclimbWhilePressingDown_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               ToggleValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Settings_Game_C::BndEvt__WBP_Settings_Game_WBP_Settings_NoAutoclimbWhilePressingDown_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature(bool ToggleValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Game.WBP_Settings_Game_C.BndEvt__WBP_Settings_Game_WBP_Settings_NoAutoclimbWhilePressingDown_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature");

	UWBP_Settings_Game_C_BndEvt__WBP_Settings_Game_WBP_Settings_NoAutoclimbWhilePressingDown_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature_Params params;
	params.ToggleValue = ToggleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Settings_Game.WBP_Settings_Game_C.ExecuteUbergraph_WBP_Settings_Game
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Settings_Game_C::ExecuteUbergraph_WBP_Settings_Game(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Settings_Game.WBP_Settings_Game_C.ExecuteUbergraph_WBP_Settings_Game");

	UWBP_Settings_Game_C_ExecuteUbergraph_WBP_Settings_Game_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
