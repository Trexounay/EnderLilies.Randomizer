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
//		Name   -> Function EVT_ACT_SetFacing.EVT_ACT_SetFacing_C.OnStartAction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APlayerController*                           ConsideringPlayer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Subject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UEventBlackBoard*                            EventBlackBoard                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEVT_ACT_SetFacing_C::OnStartAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_ACT_SetFacing.EVT_ACT_SetFacing_C.OnStartAction");

	UEVT_ACT_SetFacing_C_OnStartAction_Params params;
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
//		Name   -> Function EVT_ACT_SetFacing.EVT_ACT_SetFacing_C.OnTickAction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerController*                           ConsideringPlayer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Subject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UEventBlackBoard*                            EventBlackBoard                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEVT_ACT_SetFacing_C::OnTickAction(float DeltaTime, class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_ACT_SetFacing.EVT_ACT_SetFacing_C.OnTickAction");

	UEVT_ACT_SetFacing_C_OnTickAction_Params params;
	params.DeltaTime = DeltaTime;
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
//		Name   -> Function EVT_ACT_SetFacing.EVT_ACT_SetFacing_C.ExecuteUbergraph_EVT_ACT_SetFacing
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEVT_ACT_SetFacing_C::ExecuteUbergraph_EVT_ACT_SetFacing(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_ACT_SetFacing.EVT_ACT_SetFacing_C.ExecuteUbergraph_EVT_ACT_SetFacing");

	UEVT_ACT_SetFacing_C_ExecuteUbergraph_EVT_ACT_SetFacing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
