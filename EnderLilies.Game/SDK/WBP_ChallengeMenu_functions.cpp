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
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.RefreshTextOptionColor
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_ChallengeEntry_Text_C*                  ChallengeTextEntry                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               UseDefaultColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ChallengeMenu_C::RefreshTextOptionColor(class UWBP_ChallengeEntry_Text_C* ChallengeTextEntry, bool UseDefaultColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.RefreshTextOptionColor");

	UWBP_ChallengeMenu_C_RefreshTextOptionColor_Params params;
	params.ChallengeTextEntry = ChallengeTextEntry;
	params.UseDefaultColor = UseDefaultColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.RefreshToggleOptionColor
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_SettingEntry_Toggle_C*                  ChallengeToggleEntry                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               UseDefaultColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ChallengeMenu_C::RefreshToggleOptionColor(class UWBP_SettingEntry_Toggle_C* ChallengeToggleEntry, bool UseDefaultColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.RefreshToggleOptionColor");

	UWBP_ChallengeMenu_C_RefreshToggleOptionColor_Params params;
	params.ChallengeToggleEntry = ChallengeToggleEntry;
	params.UseDefaultColor = UseDefaultColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.GetFactorText
//		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Result                                                     (Parm, OutParm)
void UWBP_ChallengeMenu_C::GetFactorText(float Value, struct FText* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.GetFactorText");

	UWBP_ChallengeMenu_C_GetFactorText_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.SetPauseIfNecessary
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bPaused                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ChallengeMenu_C::SetPauseIfNecessary(bool bPaused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.SetPauseIfNecessary");

	UWBP_ChallengeMenu_C_SetPauseIfNecessary_Params params;
	params.bPaused = bPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.ReequipSpiritsIfNecessary
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ChallengeMenu_C::ReequipSpiritsIfNecessary()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.ReequipSpiritsIfNecessary");

	UWBP_ChallengeMenu_C_ReequipSpiritsIfNecessary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.AddSpiritMaxLevelClamp
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                OffsetToAdd                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               AllowLoop                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ChallengeMenu_C::AddSpiritMaxLevelClamp(int OffsetToAdd, bool AllowLoop)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.AddSpiritMaxLevelClamp");

	UWBP_ChallengeMenu_C_AddSpiritMaxLevelClamp_Params params;
	params.OffsetToAdd = OffsetToAdd;
	params.AllowLoop = AllowLoop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.AddPlayerMaxLevelClamp
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                OffsetToAdd                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               AllowLoop                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ChallengeMenu_C::AddPlayerMaxLevelClamp(int OffsetToAdd, bool AllowLoop)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.AddPlayerMaxLevelClamp");

	UWBP_ChallengeMenu_C_AddPlayerMaxLevelClamp_Params params;
	params.OffsetToAdd = OffsetToAdd;
	params.AllowLoop = AllowLoop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.AddContactDamageFactor
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              FactorToAdd                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               AllowLoop                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ChallengeMenu_C::AddContactDamageFactor(float FactorToAdd, bool AllowLoop)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.AddContactDamageFactor");

	UWBP_ChallengeMenu_C_AddContactDamageFactor_Params params;
	params.FactorToAdd = FactorToAdd;
	params.AllowLoop = AllowLoop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.AddEnemyMaxHPFactor
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              FactorToAdd                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               AllowLoop                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ChallengeMenu_C::AddEnemyMaxHPFactor(float FactorToAdd, bool AllowLoop)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.AddEnemyMaxHPFactor");

	UWBP_ChallengeMenu_C_AddEnemyMaxHPFactor_Params params;
	params.FactorToAdd = FactorToAdd;
	params.AllowLoop = AllowLoop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.AddEnemyAttackFactor
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              FactorToAdd                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               AllowLoop                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ChallengeMenu_C::AddEnemyAttackFactor(float FactorToAdd, bool AllowLoop)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.AddEnemyAttackFactor");

	UWBP_ChallengeMenu_C_AddEnemyAttackFactor_Params params;
	params.FactorToAdd = FactorToAdd;
	params.AllowLoop = AllowLoop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.RefreshDisplay
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ChallengeMenu_C::RefreshDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.RefreshDisplay");

	UWBP_ChallengeMenu_C_RefreshDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.OnPressCancel
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_ChallengeMenu_C::OnPressCancel(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.OnPressCancel");

	UWBP_ChallengeMenu_C_OnPressCancel_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_ChallengeMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.OnFocusReceived");

	UWBP_ChallengeMenu_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.OnFinish_066E292E42E788874C41348FA3822509
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ChallengeMenu_C::OnFinish_066E292E42E788874C41348FA3822509()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.OnFinish_066E292E42E788874C41348FA3822509");

	UWBP_ChallengeMenu_C_OnFinish_066E292E42E788874C41348FA3822509_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.OnFinish_2071A4134BF576284BB5479C122E612A
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ChallengeMenu_C::OnFinish_2071A4134BF576284BB5479C122E612A()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.OnFinish_2071A4134BF576284BB5479C122E612A");

	UWBP_ChallengeMenu_C_OnFinish_2071A4134BF576284BB5479C122E612A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.OnFinish_066E292E42E788874C41348F40D6FDB1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ChallengeMenu_C::OnFinish_066E292E42E788874C41348F40D6FDB1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.OnFinish_066E292E42E788874C41348F40D6FDB1");

	UWBP_ChallengeMenu_C_OnFinish_066E292E42E788874C41348F40D6FDB1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.OnFinish_2071A4134BF576284BB5479CF17AB992
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ChallengeMenu_C::OnFinish_2071A4134BF576284BB5479CF17AB992()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.OnFinish_2071A4134BF576284BB5479CF17AB992");

	UWBP_ChallengeMenu_C_OnFinish_2071A4134BF576284BB5479CF17AB992_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ChallengeMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.Construct");

	UWBP_ChallengeMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__NewWidgetBlueprint_WBP_ChallengeEntry_Values_K2Node_ComponentBoundEvent_0_OnPressedRight__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ChallengeMenu_C::BndEvt__NewWidgetBlueprint_WBP_ChallengeEntry_Values_K2Node_ComponentBoundEvent_0_OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__NewWidgetBlueprint_WBP_ChallengeEntry_Values_K2Node_ComponentBoundEvent_0_OnPressedRight__DelegateSignature");

	UWBP_ChallengeMenu_C_BndEvt__NewWidgetBlueprint_WBP_ChallengeEntry_Values_K2Node_ComponentBoundEvent_0_OnPressedRight__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.Close
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ChallengeMenu_C::Close()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.Close");

	UWBP_ChallengeMenu_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_OneHitKO_K2Node_ComponentBoundEvent_2_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               ToggleValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ChallengeMenu_C::BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_OneHitKO_K2Node_ComponentBoundEvent_2_OnToggle__DelegateSignature(bool ToggleValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_OneHitKO_K2Node_ComponentBoundEvent_2_OnToggle__DelegateSignature");

	UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_OneHitKO_K2Node_ComponentBoundEvent_2_OnToggle__DelegateSignature_Params params;
	params.ToggleValue = ToggleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_DefaultButton_Reset_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ChallengeMenu_C::BndEvt__WBP_ChallengeMenu_WBP_DefaultButton_Reset_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_DefaultButton_Reset_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_DefaultButton_Reset_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_EnemyDamageFactor_K2Node_ComponentBoundEvent_5_OnPressedLeft__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ChallengeMenu_C::BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_EnemyDamageFactor_K2Node_ComponentBoundEvent_5_OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_EnemyDamageFactor_K2Node_ComponentBoundEvent_5_OnPressedLeft__DelegateSignature");

	UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_EnemyDamageFactor_K2Node_ComponentBoundEvent_5_OnPressedLeft__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_EnemyMaxHPFactor_K2Node_ComponentBoundEvent_6_OnPressedLeft__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ChallengeMenu_C::BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_EnemyMaxHPFactor_K2Node_ComponentBoundEvent_6_OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_EnemyMaxHPFactor_K2Node_ComponentBoundEvent_6_OnPressedLeft__DelegateSignature");

	UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_EnemyMaxHPFactor_K2Node_ComponentBoundEvent_6_OnPressedLeft__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_EnemyMaxHPFactor_K2Node_ComponentBoundEvent_7_OnPressedRight__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ChallengeMenu_C::BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_EnemyMaxHPFactor_K2Node_ComponentBoundEvent_7_OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_EnemyMaxHPFactor_K2Node_ComponentBoundEvent_7_OnPressedRight__DelegateSignature");

	UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_EnemyMaxHPFactor_K2Node_ComponentBoundEvent_7_OnPressedRight__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_ContactDamageFactor_K2Node_ComponentBoundEvent_8_OnPressedLeft__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ChallengeMenu_C::BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_ContactDamageFactor_K2Node_ComponentBoundEvent_8_OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_ContactDamageFactor_K2Node_ComponentBoundEvent_8_OnPressedLeft__DelegateSignature");

	UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_ContactDamageFactor_K2Node_ComponentBoundEvent_8_OnPressedLeft__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_ContactDamageFactor_K2Node_ComponentBoundEvent_9_OnPressedRight__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ChallengeMenu_C::BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_ContactDamageFactor_K2Node_ComponentBoundEvent_9_OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_ContactDamageFactor_K2Node_ComponentBoundEvent_9_OnPressedRight__DelegateSignature");

	UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_ContactDamageFactor_K2Node_ComponentBoundEvent_9_OnPressedRight__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_PlayerCantHeal_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               ToggleValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ChallengeMenu_C::BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_PlayerCantHeal_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature(bool ToggleValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_PlayerCantHeal_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature");

	UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_PlayerCantHeal_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature_Params params;
	params.ToggleValue = ToggleValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_BackButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ChallengeMenu_C::BndEvt__WBP_ChallengeMenu_WBP_BackButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_BackButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");

	UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_BackButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_PlayerLevelClamp_K2Node_ComponentBoundEvent_12_OnPressedLeft__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ChallengeMenu_C::BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_PlayerLevelClamp_K2Node_ComponentBoundEvent_12_OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_PlayerLevelClamp_K2Node_ComponentBoundEvent_12_OnPressedLeft__DelegateSignature");

	UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_PlayerLevelClamp_K2Node_ComponentBoundEvent_12_OnPressedLeft__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_PlayerLevelClamp_K2Node_ComponentBoundEvent_13_OnPressedRight__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ChallengeMenu_C::BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_PlayerLevelClamp_K2Node_ComponentBoundEvent_13_OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_PlayerLevelClamp_K2Node_ComponentBoundEvent_13_OnPressedRight__DelegateSignature");

	UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_PlayerLevelClamp_K2Node_ComponentBoundEvent_13_OnPressedRight__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_SpiritLevelClamp_K2Node_ComponentBoundEvent_1_OnPressedLeft__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ChallengeMenu_C::BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_SpiritLevelClamp_K2Node_ComponentBoundEvent_1_OnPressedLeft__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_SpiritLevelClamp_K2Node_ComponentBoundEvent_1_OnPressedLeft__DelegateSignature");

	UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_SpiritLevelClamp_K2Node_ComponentBoundEvent_1_OnPressedLeft__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_SpiritLevelClamp_K2Node_ComponentBoundEvent_14_OnPressedRight__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_ChallengeMenu_C::BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_SpiritLevelClamp_K2Node_ComponentBoundEvent_14_OnPressedRight__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_SpiritLevelClamp_K2Node_ComponentBoundEvent_14_OnPressedRight__DelegateSignature");

	UWBP_ChallengeMenu_C_BndEvt__WBP_ChallengeMenu_WBP_ChallengeEntry_SpiritLevelClamp_K2Node_ComponentBoundEvent_14_OnPressedRight__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.ExecuteUbergraph_WBP_ChallengeMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ChallengeMenu_C::ExecuteUbergraph_WBP_ChallengeMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.ExecuteUbergraph_WBP_ChallengeMenu");

	UWBP_ChallengeMenu_C_ExecuteUbergraph_WBP_ChallengeMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.OnClosed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_ChallengeMenu_C::OnClosed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ChallengeMenu.WBP_ChallengeMenu_C.OnClosed__DelegateSignature");

	UWBP_ChallengeMenu_C_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
