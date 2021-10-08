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
//		Name   -> Function CA_SummonSetSwitch.CA_SummonSetSwitch_C.OnStartCommandAction
//		Flags  -> (Event, Protected, BlueprintEvent)
void UCA_SummonSetSwitch_C::OnStartCommandAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_SummonSetSwitch.CA_SummonSetSwitch_C.OnStartCommandAction");

	UCA_SummonSetSwitch_C_OnStartCommandAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_SummonSetSwitch.CA_SummonSetSwitch_C.ExecuteUbergraph_CA_SummonSetSwitch
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_SummonSetSwitch_C::ExecuteUbergraph_CA_SummonSetSwitch(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_SummonSetSwitch.CA_SummonSetSwitch_C.ExecuteUbergraph_CA_SummonSetSwitch");

	UCA_SummonSetSwitch_C_ExecuteUbergraph_CA_SummonSetSwitch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
