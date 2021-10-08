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
//		Name   -> Function AIC_Companion.AIC_Companion_C.ReceiveUnPossess
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APawn*                                       UnpossessedPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Companion_C::ReceiveUnPossess(class APawn* UnpossessedPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Companion.AIC_Companion_C.ReceiveUnPossess");

	AAIC_Companion_C_ReceiveUnPossess_Params params;
	params.UnpossessedPawn = UnpossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function AIC_Companion.AIC_Companion_C.ReceivePossess
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Companion_C::ReceivePossess(class APawn* PossessedPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Companion.AIC_Companion_C.ReceivePossess");

	AAIC_Companion_C_ReceivePossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function AIC_Companion.AIC_Companion_C.ExecuteUbergraph_AIC_Companion
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAIC_Companion_C::ExecuteUbergraph_AIC_Companion(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AIC_Companion.AIC_Companion_C.ExecuteUbergraph_AIC_Companion");

	AAIC_Companion_C_ExecuteUbergraph_AIC_Companion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
