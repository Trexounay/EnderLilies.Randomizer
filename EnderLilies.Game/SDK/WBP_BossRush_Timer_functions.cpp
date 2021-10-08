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
//		Name   -> Function WBP_BossRush_Timer.WBP_BossRush_Timer_C.RefreshVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BossRush_Timer_C::RefreshVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BossRush_Timer.WBP_BossRush_Timer_C.RefreshVisibility");

	UWBP_BossRush_Timer_C_RefreshVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_BossRush_Timer.WBP_BossRush_Timer_C.RefreshTimerText
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_BossRush_Timer_C::RefreshTimerText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BossRush_Timer.WBP_BossRush_Timer_C.RefreshTimerText");

	UWBP_BossRush_Timer_C_RefreshTimerText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_BossRush_Timer.WBP_BossRush_Timer_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_BossRush_Timer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BossRush_Timer.WBP_BossRush_Timer_C.Construct");

	UWBP_BossRush_Timer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_BossRush_Timer.WBP_BossRush_Timer_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BossRush_Timer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BossRush_Timer.WBP_BossRush_Timer_C.Tick");

	UWBP_BossRush_Timer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_BossRush_Timer.WBP_BossRush_Timer_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_BossRush_Timer_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BossRush_Timer.WBP_BossRush_Timer_C.Destruct");

	UWBP_BossRush_Timer_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_BossRush_Timer.WBP_BossRush_Timer_C.OnDisplayPlayerUIChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_BossRush_Timer_C::OnDisplayPlayerUIChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BossRush_Timer.WBP_BossRush_Timer_C.OnDisplayPlayerUIChanged");

	UWBP_BossRush_Timer_C_OnDisplayPlayerUIChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_BossRush_Timer.WBP_BossRush_Timer_C.ExecuteUbergraph_WBP_BossRush_Timer
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_BossRush_Timer_C::ExecuteUbergraph_WBP_BossRush_Timer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_BossRush_Timer.WBP_BossRush_Timer_C.ExecuteUbergraph_WBP_BossRush_Timer");

	UWBP_BossRush_Timer_C_ExecuteUbergraph_WBP_BossRush_Timer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
