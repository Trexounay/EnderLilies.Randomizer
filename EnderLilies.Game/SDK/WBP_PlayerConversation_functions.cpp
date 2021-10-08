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
//		Name   -> Function WBP_PlayerConversation.WBP_PlayerConversation_C.SetupTexts
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerConversation_C::SetupTexts(float* Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerConversation.WBP_PlayerConversation_C.SetupTexts");

	UWBP_PlayerConversation_C_SetupTexts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerConversation.WBP_PlayerConversation_C.IsConversationFinished
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UWBP_PlayerConversation_C::IsConversationFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerConversation.WBP_PlayerConversation_C.IsConversationFinished");

	UWBP_PlayerConversation_C_IsConversationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerConversation.WBP_PlayerConversation_C.LaunchConversation
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FConversationData                           ConversationData                                           (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               Launched                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_PlayerConversation_C::LaunchConversation(const struct FConversationData& ConversationData, bool* Launched)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerConversation.WBP_PlayerConversation_C.LaunchConversation");

	UWBP_PlayerConversation_C_LaunchConversation_Params params;
	params.ConversationData = ConversationData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Launched != nullptr)
		*Launched = params.Launched;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerConversation.WBP_PlayerConversation_C.ShowText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PlayerConversation_C::ShowText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerConversation.WBP_PlayerConversation_C.ShowText");

	UWBP_PlayerConversation_C_ShowText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerConversation.WBP_PlayerConversation_C.FinishConversation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PlayerConversation_C::FinishConversation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerConversation.WBP_PlayerConversation_C.FinishConversation");

	UWBP_PlayerConversation_C_FinishConversation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerConversation.WBP_PlayerConversation_C.StartConversation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PlayerConversation_C::StartConversation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerConversation.WBP_PlayerConversation_C.StartConversation");

	UWBP_PlayerConversation_C_StartConversation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerConversation.WBP_PlayerConversation_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_PlayerConversation_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerConversation.WBP_PlayerConversation_C.Construct");

	UWBP_PlayerConversation_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerConversation.WBP_PlayerConversation_C.FadeOutText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_PlayerConversation_C::FadeOutText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerConversation.WBP_PlayerConversation_C.FadeOutText");

	UWBP_PlayerConversation_C_FadeOutText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerConversation.WBP_PlayerConversation_C.ExecuteUbergraph_WBP_PlayerConversation
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_PlayerConversation_C::ExecuteUbergraph_WBP_PlayerConversation(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerConversation.WBP_PlayerConversation_C.ExecuteUbergraph_WBP_PlayerConversation");

	UWBP_PlayerConversation_C_ExecuteUbergraph_WBP_PlayerConversation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_PlayerConversation.WBP_PlayerConversation_C.OnFinish__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_PlayerConversation_C::OnFinish__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_PlayerConversation.WBP_PlayerConversation_C.OnFinish__DelegateSignature");

	UWBP_PlayerConversation_C_OnFinish__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
