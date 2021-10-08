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
//		Name   -> Function SpineAnimNotify_PlayStep.SpineAnimNotify_PlayStep_C.TriggerSEAndFXFromFloor
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		struct FVector                                     ActorLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USpineAnimNotify_PlayStep_C::TriggerSEAndFXFromFloor(const struct FHitResult& Hit, const struct FVector& ActorLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpineAnimNotify_PlayStep.SpineAnimNotify_PlayStep_C.TriggerSEAndFXFromFloor");

	USpineAnimNotify_PlayStep_C_TriggerSEAndFXFromFloor_Params params;
	params.Hit = Hit;
	params.ActorLocation = ActorLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function SpineAnimNotify_PlayStep.SpineAnimNotify_PlayStep_C.Received_SpineNotify
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class USpineSkeletonAnimationComponent*            SpineComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool USpineAnimNotify_PlayStep_C::Received_SpineNotify(class USpineSkeletonAnimationComponent* SpineComp, class UAnimSequenceBase* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpineAnimNotify_PlayStep.SpineAnimNotify_PlayStep_C.Received_SpineNotify");

	USpineAnimNotify_PlayStep_C_Received_SpineNotify_Params params;
	params.SpineComp = SpineComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
