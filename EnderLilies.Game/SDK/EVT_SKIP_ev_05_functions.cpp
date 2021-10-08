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
//		Name   -> Function EVT_SKIP_ev_05.EVT_SKIP_ev_05_C.OnSkip
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UEventPlayer*                                EventPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEVT_SKIP_ev_05_C::OnSkip(class UEventPlayer* EventPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_SKIP_ev_05.EVT_SKIP_ev_05_C.OnSkip");

	UEVT_SKIP_ev_05_C_OnSkip_Params params;
	params.EventPlayer = EventPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function EVT_SKIP_ev_05.EVT_SKIP_ev_05_C.ExecuteUbergraph_EVT_SKIP_ev_05
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEVT_SKIP_ev_05_C::ExecuteUbergraph_EVT_SKIP_ev_05(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_SKIP_ev_05.EVT_SKIP_ev_05_C.ExecuteUbergraph_EVT_SKIP_ev_05");

	UEVT_SKIP_ev_05_C_ExecuteUbergraph_EVT_SKIP_ev_05_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
