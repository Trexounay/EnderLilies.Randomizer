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
//		Name   -> Function CA_StumbleRecovery_Base.CA_StumbleRecovery_Base_C.OnEndCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		Zenith_ECommandRemoveTypes                         RemoveType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_StumbleRecovery_Base_C::OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_StumbleRecovery_Base.CA_StumbleRecovery_Base_C.OnEndCommandAction");

	UCA_StumbleRecovery_Base_C_OnEndCommandAction_Params params;
	params.RemoveType = RemoveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_StumbleRecovery_Base.CA_StumbleRecovery_Base_C.OnRemovedFromBuffer
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCA_StumbleRecovery_Base_C::OnRemovedFromBuffer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_StumbleRecovery_Base.CA_StumbleRecovery_Base_C.OnRemovedFromBuffer");

	UCA_StumbleRecovery_Base_C_OnRemovedFromBuffer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_StumbleRecovery_Base.CA_StumbleRecovery_Base_C.ExecuteUbergraph_CA_StumbleRecovery_Base
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_StumbleRecovery_Base_C::ExecuteUbergraph_CA_StumbleRecovery_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_StumbleRecovery_Base.CA_StumbleRecovery_Base_C.ExecuteUbergraph_CA_StumbleRecovery_Base");

	UCA_StumbleRecovery_Base_C_ExecuteUbergraph_CA_StumbleRecovery_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
