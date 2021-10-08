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
//		Name   -> Function CA_Crouch.CA_Crouch_C.OnStartCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCA_Crouch_C::OnStartCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Crouch.CA_Crouch_C.OnStartCommandAction");

	UCA_Crouch_C_OnStartCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Crouch.CA_Crouch_C.OnEndCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		Zenith_ECommandRemoveTypes                         RemoveType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_Crouch_C::OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Crouch.CA_Crouch_C.OnEndCommandAction");

	UCA_Crouch_C_OnEndCommandAction_Params params;
	params.RemoveType = RemoveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Crouch.CA_Crouch_C.ExecuteUbergraph_CA_Crouch
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_Crouch_C::ExecuteUbergraph_CA_Crouch(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Crouch.CA_Crouch_C.ExecuteUbergraph_CA_Crouch");

	UCA_Crouch_C_ExecuteUbergraph_CA_Crouch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
