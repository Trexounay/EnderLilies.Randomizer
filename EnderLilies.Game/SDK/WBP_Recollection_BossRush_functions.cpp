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
//		Name   -> Function WBP_Recollection_BossRush.WBP_Recollection_BossRush_C.OnPressContext
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Recollection_BossRush_C::OnPressContext(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_BossRush.WBP_Recollection_BossRush_C.OnPressContext");

	UWBP_Recollection_BossRush_C_OnPressContext_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_BossRush.WBP_Recollection_BossRush_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Recollection_BossRush_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_BossRush.WBP_Recollection_BossRush_C.OnFocusReceived");

	UWBP_Recollection_BossRush_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_BossRush.WBP_Recollection_BossRush_C.BndEvt__WBP_Recollection_BossRush_WBP_DefaultButton_BossRushStart_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UWBP_Recollection_BossRush_C::BndEvt__WBP_Recollection_BossRush_WBP_DefaultButton_BossRushStart_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_BossRush.WBP_Recollection_BossRush_C.BndEvt__WBP_Recollection_BossRush_WBP_DefaultButton_BossRushStart_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWBP_Recollection_BossRush_C_BndEvt__WBP_Recollection_BossRush_WBP_DefaultButton_BossRushStart_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_BossRush.WBP_Recollection_BossRush_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Recollection_BossRush_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_BossRush.WBP_Recollection_BossRush_C.Construct");

	UWBP_Recollection_BossRush_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_BossRush.WBP_Recollection_BossRush_C.OnRequestResetRecords
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Recollection_BossRush_C::OnRequestResetRecords()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_BossRush.WBP_Recollection_BossRush_C.OnRequestResetRecords");

	UWBP_Recollection_BossRush_C_OnRequestResetRecords_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_BossRush.WBP_Recollection_BossRush_C.OnResetRecords_Confirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Recollection_BossRush_C::OnResetRecords_Confirm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_BossRush.WBP_Recollection_BossRush_C.OnResetRecords_Confirm");

	UWBP_Recollection_BossRush_C_OnResetRecords_Confirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_BossRush.WBP_Recollection_BossRush_C.ExecuteUbergraph_WBP_Recollection_BossRush
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Recollection_BossRush_C::ExecuteUbergraph_WBP_Recollection_BossRush(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_BossRush.WBP_Recollection_BossRush_C.ExecuteUbergraph_WBP_Recollection_BossRush");

	UWBP_Recollection_BossRush_C_ExecuteUbergraph_WBP_Recollection_BossRush_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Recollection_BossRush.WBP_Recollection_BossRush_C.OnLaunchBossRush__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_Recollection_BossRush_C::OnLaunchBossRush__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Recollection_BossRush.WBP_Recollection_BossRush_C.OnLaunchBossRush__DelegateSignature");

	UWBP_Recollection_BossRush_C_OnLaunchBossRush__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
