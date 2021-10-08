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
//		Name   -> Function AE_SetFacing.AE_SetFacing_C.OnApplyEffect
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		class AActor*                                      From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitInfos                                   HitInfos                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
void UAE_SetFacing_C::OnApplyEffect(class AActor* From, class AActor* To, const struct FHitInfos& HitInfos)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AE_SetFacing.AE_SetFacing_C.OnApplyEffect");

	UAE_SetFacing_C_OnApplyEffect_Params params;
	params.From = From;
	params.To = To;
	params.HitInfos = HitInfos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function AE_SetFacing.AE_SetFacing_C.ExecuteUbergraph_AE_SetFacing
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAE_SetFacing_C::ExecuteUbergraph_AE_SetFacing(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AE_SetFacing.AE_SetFacing_C.ExecuteUbergraph_AE_SetFacing");

	UAE_SetFacing_C_ExecuteUbergraph_AE_SetFacing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
