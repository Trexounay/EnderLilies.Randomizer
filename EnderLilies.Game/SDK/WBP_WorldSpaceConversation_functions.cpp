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
//		Name   -> Function WBP_WorldSpaceConversation.WBP_WorldSpaceConversation_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_WorldSpaceConversation_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_WorldSpaceConversation.WBP_WorldSpaceConversation_C.Construct");

	UWBP_WorldSpaceConversation_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_WorldSpaceConversation.WBP_WorldSpaceConversation_C.ShowText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_WorldSpaceConversation_C::ShowText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_WorldSpaceConversation.WBP_WorldSpaceConversation_C.ShowText");

	UWBP_WorldSpaceConversation_C_ShowText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_WorldSpaceConversation.WBP_WorldSpaceConversation_C.FadeOutText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_WorldSpaceConversation_C::FadeOutText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_WorldSpaceConversation.WBP_WorldSpaceConversation_C.FadeOutText");

	UWBP_WorldSpaceConversation_C_FadeOutText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_WorldSpaceConversation.WBP_WorldSpaceConversation_C.OnViewportKeyDown
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FKeyEvent                                   KeyEvent                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_WorldSpaceConversation_C::OnViewportKeyDown(const struct FKeyEvent& KeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_WorldSpaceConversation.WBP_WorldSpaceConversation_C.OnViewportKeyDown");

	UWBP_WorldSpaceConversation_C_OnViewportKeyDown_Params params;
	params.KeyEvent = KeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_WorldSpaceConversation.WBP_WorldSpaceConversation_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_WorldSpaceConversation_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_WorldSpaceConversation.WBP_WorldSpaceConversation_C.Destruct");

	UWBP_WorldSpaceConversation_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_WorldSpaceConversation.WBP_WorldSpaceConversation_C.ExecuteUbergraph_WBP_WorldSpaceConversation
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_WorldSpaceConversation_C::ExecuteUbergraph_WBP_WorldSpaceConversation(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_WorldSpaceConversation.WBP_WorldSpaceConversation_C.ExecuteUbergraph_WBP_WorldSpaceConversation");

	UWBP_WorldSpaceConversation_C_ExecuteUbergraph_WBP_WorldSpaceConversation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
