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
//		Name   -> Function CA_ParryActivation.CA_ParryActivation_C.OnStartCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCA_ParryActivation_C::OnStartCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_ParryActivation.CA_ParryActivation_C.OnStartCommandAction");

	UCA_ParryActivation_C_OnStartCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_ParryActivation.CA_ParryActivation_C.OnEndCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		Zenith_ECommandRemoveTypes                         RemoveType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_ParryActivation_C::OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_ParryActivation.CA_ParryActivation_C.OnEndCommandAction");

	UCA_ParryActivation_C_OnEndCommandAction_Params params;
	params.RemoveType = RemoveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_ParryActivation.CA_ParryActivation_C.ExecuteUbergraph_CA_ParryActivation
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_ParryActivation_C::ExecuteUbergraph_CA_ParryActivation(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_ParryActivation.CA_ParryActivation_C.ExecuteUbergraph_CA_ParryActivation");

	UCA_ParryActivation_C_ExecuteUbergraph_CA_ParryActivation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
