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
//		Name   -> Function EVT_ACT_FadeIn.EVT_ACT_FadeIn_C.OnStartAction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APlayerController*                           ConsideringPlayer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Subject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UEventBlackBoard*                            EventBlackBoard                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEVT_ACT_FadeIn_C::OnStartAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_ACT_FadeIn.EVT_ACT_FadeIn_C.OnStartAction");

	UEVT_ACT_FadeIn_C_OnStartAction_Params params;
	params.ConsideringPlayer = ConsideringPlayer;
	params.Subject = Subject;
	params.Target = Target;
	params.EventBlackBoard = EventBlackBoard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EVT_ACT_FadeIn.EVT_ACT_FadeIn_C.OnFadeFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bWasFadeIn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UEVT_ACT_FadeIn_C::OnFadeFinished(bool bWasFadeIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_ACT_FadeIn.EVT_ACT_FadeIn_C.OnFadeFinished");

	UEVT_ACT_FadeIn_C_OnFadeFinished_Params params;
	params.bWasFadeIn = bWasFadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EVT_ACT_FadeIn.EVT_ACT_FadeIn_C.ExecuteUbergraph_EVT_ACT_FadeIn
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEVT_ACT_FadeIn_C::ExecuteUbergraph_EVT_ACT_FadeIn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_ACT_FadeIn.EVT_ACT_FadeIn_C.ExecuteUbergraph_EVT_ACT_FadeIn");

	UEVT_ACT_FadeIn_C_ExecuteUbergraph_EVT_ACT_FadeIn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
