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
//		Name   -> Function AE_FXOnTrigger.AE_FXOnTrigger_C.GetBone
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UBaseFXComponent*                            FXComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		SpineExtensionPlugin_ESpineBone                    Bone                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAE_FXOnTrigger_C::GetBone(class UBaseFXComponent* FXComponent, SpineExtensionPlugin_ESpineBone* Bone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AE_FXOnTrigger.AE_FXOnTrigger_C.GetBone");

	UAE_FXOnTrigger_C_GetBone_Params params;
	params.FXComponent = FXComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Bone != nullptr)
		*Bone = params.Bone;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function AE_FXOnTrigger.AE_FXOnTrigger_C.ComputeOffset
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTransform                                  Offset                                                     (Parm, OutParm, IsPlainOldData, NoDestructor)
void UAE_FXOnTrigger_C::ComputeOffset(class AActor* From, class AActor* To, struct FTransform* Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AE_FXOnTrigger.AE_FXOnTrigger_C.ComputeOffset");

	UAE_FXOnTrigger_C_ComputeOffset_Params params;
	params.From = From;
	params.To = To;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Offset != nullptr)
		*Offset = params.Offset;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function AE_FXOnTrigger.AE_FXOnTrigger_C.OnApplyEffect
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		class AActor*                                      From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitInfos                                   HitInfos                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
void UAE_FXOnTrigger_C::OnApplyEffect(class AActor* From, class AActor* To, const struct FHitInfos& HitInfos)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AE_FXOnTrigger.AE_FXOnTrigger_C.OnApplyEffect");

	UAE_FXOnTrigger_C_OnApplyEffect_Params params;
	params.From = From;
	params.To = To;
	params.HitInfos = HitInfos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function AE_FXOnTrigger.AE_FXOnTrigger_C.ExecuteUbergraph_AE_FXOnTrigger
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAE_FXOnTrigger_C::ExecuteUbergraph_AE_FXOnTrigger(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AE_FXOnTrigger.AE_FXOnTrigger_C.ExecuteUbergraph_AE_FXOnTrigger");

	UAE_FXOnTrigger_C_ExecuteUbergraph_AE_FXOnTrigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
