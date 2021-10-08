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
//		Name   -> Function WBP_SettingEntry_Sound.WBP_SettingEntry_Sound_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_SettingEntry_Sound_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingEntry_Sound.WBP_SettingEntry_Sound_C.OnFocusReceived");

	UWBP_SettingEntry_Sound_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingEntry_Sound.WBP_SettingEntry_Sound_C.BndEvt__WBP_SettingEntry_Sound_WBP_DefaultButton_ResetToDefault_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_SettingEntry_Sound_C::BndEvt__WBP_SettingEntry_Sound_WBP_DefaultButton_ResetToDefault_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingEntry_Sound.WBP_SettingEntry_Sound_C.BndEvt__WBP_SettingEntry_Sound_WBP_DefaultButton_ResetToDefault_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWBP_SettingEntry_Sound_C_BndEvt__WBP_SettingEntry_Sound_WBP_DefaultButton_ResetToDefault_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_SettingEntry_Sound.WBP_SettingEntry_Sound_C.ExecuteUbergraph_WBP_SettingEntry_Sound
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SettingEntry_Sound_C::ExecuteUbergraph_WBP_SettingEntry_Sound(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SettingEntry_Sound.WBP_SettingEntry_Sound_C.ExecuteUbergraph_WBP_SettingEntry_Sound");

	UWBP_SettingEntry_Sound_C_ExecuteUbergraph_WBP_SettingEntry_Sound_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
