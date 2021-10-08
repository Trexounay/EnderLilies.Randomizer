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
//		Name   -> Function CA_StumbleRecovery_Ground.CA_StumbleRecovery_Ground_C.OnStartCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCA_StumbleRecovery_Ground_C::OnStartCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_StumbleRecovery_Ground.CA_StumbleRecovery_Ground_C.OnStartCommandAction");

	UCA_StumbleRecovery_Ground_C_OnStartCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_StumbleRecovery_Ground.CA_StumbleRecovery_Ground_C.ExecuteUbergraph_CA_StumbleRecovery_Ground
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_StumbleRecovery_Ground_C::ExecuteUbergraph_CA_StumbleRecovery_Ground(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_StumbleRecovery_Ground.CA_StumbleRecovery_Ground_C.ExecuteUbergraph_CA_StumbleRecovery_Ground");

	UCA_StumbleRecovery_Ground_C_ExecuteUbergraph_CA_StumbleRecovery_Ground_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
