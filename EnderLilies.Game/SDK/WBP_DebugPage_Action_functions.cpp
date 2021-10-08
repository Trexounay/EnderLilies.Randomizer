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
//		Name   -> Function WBP_DebugPage_Action.WBP_DebugPage_Action_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_DebugPage_Action_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Action.WBP_DebugPage_Action_C.OnFocusReceived");

	UWBP_DebugPage_Action_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Action.WBP_DebugPage_Action_C.BndEvt__KillPlayer_K2Node_ComponentBoundEvent_1_OnExecute__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Action_C::BndEvt__KillPlayer_K2Node_ComponentBoundEvent_1_OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Action.WBP_DebugPage_Action_C.BndEvt__KillPlayer_K2Node_ComponentBoundEvent_1_OnExecute__DelegateSignature");

	UWBP_DebugPage_Action_C_BndEvt__KillPlayer_K2Node_ComponentBoundEvent_1_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Action.WBP_DebugPage_Action_C.BndEvt__OpenStrengthenMenu_K2Node_ComponentBoundEvent_0_OnExecute__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Action_C::BndEvt__OpenStrengthenMenu_K2Node_ComponentBoundEvent_0_OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Action.WBP_DebugPage_Action_C.BndEvt__OpenStrengthenMenu_K2Node_ComponentBoundEvent_0_OnExecute__DelegateSignature");

	UWBP_DebugPage_Action_C_BndEvt__OpenStrengthenMenu_K2Node_ComponentBoundEvent_0_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Action.WBP_DebugPage_Action_C.OnStrengthenClose
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DebugPage_Action_C::OnStrengthenClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Action.WBP_DebugPage_Action_C.OnStrengthenClose");

	UWBP_DebugPage_Action_C_OnStrengthenClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Action.WBP_DebugPage_Action_C.BndEvt__ResetAchievements_K2Node_ComponentBoundEvent_2_OnExecute__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Action_C::BndEvt__ResetAchievements_K2Node_ComponentBoundEvent_2_OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Action.WBP_DebugPage_Action_C.BndEvt__ResetAchievements_K2Node_ComponentBoundEvent_2_OnExecute__DelegateSignature");

	UWBP_DebugPage_Action_C_BndEvt__ResetAchievements_K2Node_ComponentBoundEvent_2_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Action.WBP_DebugPage_Action_C.BndEvt__WBP_DebugPage_Action_OpenChallengeMenu_K2Node_ComponentBoundEvent_3_OnExecute__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Action_C::BndEvt__WBP_DebugPage_Action_OpenChallengeMenu_K2Node_ComponentBoundEvent_3_OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Action.WBP_DebugPage_Action_C.BndEvt__WBP_DebugPage_Action_OpenChallengeMenu_K2Node_ComponentBoundEvent_3_OnExecute__DelegateSignature");

	UWBP_DebugPage_Action_C_BndEvt__WBP_DebugPage_Action_OpenChallengeMenu_K2Node_ComponentBoundEvent_3_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Action.WBP_DebugPage_Action_C.OnChallengeMenuClosed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DebugPage_Action_C::OnChallengeMenuClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Action.WBP_DebugPage_Action_C.OnChallengeMenuClosed");

	UWBP_DebugPage_Action_C_OnChallengeMenuClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Action.WBP_DebugPage_Action_C.BndEvt__WBP_DebugPage_Action_OpenRecollectionMenu_K2Node_ComponentBoundEvent_4_OnExecute__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Action_C::BndEvt__WBP_DebugPage_Action_OpenRecollectionMenu_K2Node_ComponentBoundEvent_4_OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Action.WBP_DebugPage_Action_C.BndEvt__WBP_DebugPage_Action_OpenRecollectionMenu_K2Node_ComponentBoundEvent_4_OnExecute__DelegateSignature");

	UWBP_DebugPage_Action_C_BndEvt__WBP_DebugPage_Action_OpenRecollectionMenu_K2Node_ComponentBoundEvent_4_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Action.WBP_DebugPage_Action_C.OnRecollectionMenuClosed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DebugPage_Action_C::OnRecollectionMenuClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Action.WBP_DebugPage_Action_C.OnRecollectionMenuClosed");

	UWBP_DebugPage_Action_C_OnRecollectionMenuClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Action.WBP_DebugPage_Action_C.ExecuteUbergraph_WBP_DebugPage_Action
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DebugPage_Action_C::ExecuteUbergraph_WBP_DebugPage_Action(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Action.WBP_DebugPage_Action_C.ExecuteUbergraph_WBP_DebugPage_Action");

	UWBP_DebugPage_Action_C_ExecuteUbergraph_WBP_DebugPage_Action_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
