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
//		Name   -> Function BP_Passive_RecastTimeCut_LV1.BP_Passive_RecastTimeCut_LV1_C.OnApplyToPawn
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Passive_RecastTimeCut_LV1_C::OnApplyToPawn(class APawn* Pawn, class AController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Passive_RecastTimeCut_LV1.BP_Passive_RecastTimeCut_LV1_C.OnApplyToPawn");

	UBP_Passive_RecastTimeCut_LV1_C_OnApplyToPawn_Params params;
	params.Pawn = Pawn;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Passive_RecastTimeCut_LV1.BP_Passive_RecastTimeCut_LV1_C.OnRemoveFromPawn
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Passive_RecastTimeCut_LV1_C::OnRemoveFromPawn(class APawn* Pawn, class AController* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Passive_RecastTimeCut_LV1.BP_Passive_RecastTimeCut_LV1_C.OnRemoveFromPawn");

	UBP_Passive_RecastTimeCut_LV1_C_OnRemoveFromPawn_Params params;
	params.Pawn = Pawn;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Passive_RecastTimeCut_LV1.BP_Passive_RecastTimeCut_LV1_C.ExecuteUbergraph_BP_Passive_RecastTimeCut_LV1
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_Passive_RecastTimeCut_LV1_C::ExecuteUbergraph_BP_Passive_RecastTimeCut_LV1(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Passive_RecastTimeCut_LV1.BP_Passive_RecastTimeCut_LV1_C.ExecuteUbergraph_BP_Passive_RecastTimeCut_LV1");

	UBP_Passive_RecastTimeCut_LV1_C_ExecuteUbergraph_BP_Passive_RecastTimeCut_LV1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
