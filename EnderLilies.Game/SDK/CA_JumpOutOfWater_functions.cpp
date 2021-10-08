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
//		Name   -> Function CA_JumpOutOfWater.CA_JumpOutOfWater_C.CanStartCommandAction
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCA_JumpOutOfWater_C::CanStartCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_JumpOutOfWater.CA_JumpOutOfWater_C.CanStartCommandAction");

	UCA_JumpOutOfWater_C_CanStartCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_JumpOutOfWater.CA_JumpOutOfWater_C.OnEndCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		Zenith_ECommandRemoveTypes                         RemoveType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_JumpOutOfWater_C::OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_JumpOutOfWater.CA_JumpOutOfWater_C.OnEndCommandAction");

	UCA_JumpOutOfWater_C_OnEndCommandAction_Params params;
	params.RemoveType = RemoveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_JumpOutOfWater.CA_JumpOutOfWater_C.ExecuteUbergraph_CA_JumpOutOfWater
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_JumpOutOfWater_C::ExecuteUbergraph_CA_JumpOutOfWater(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_JumpOutOfWater.CA_JumpOutOfWater_C.ExecuteUbergraph_CA_JumpOutOfWater");

	UCA_JumpOutOfWater_C_ExecuteUbergraph_CA_JumpOutOfWater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
