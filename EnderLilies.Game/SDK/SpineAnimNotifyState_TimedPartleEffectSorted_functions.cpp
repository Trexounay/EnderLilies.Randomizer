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
//		Name   -> Function SpineAnimNotifyState_TimedPartleEffectSorted.SpineAnimNotifyState_TimedPartleEffectSorted_C.CustomizeParticleEffect
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class UParticleSystemComponent*                    ParticleSystem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USpineAnimNotifyState_TimedPartleEffectSorted_C::CustomizeParticleEffect(class UParticleSystemComponent* ParticleSystem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpineAnimNotifyState_TimedPartleEffectSorted.SpineAnimNotifyState_TimedPartleEffectSorted_C.CustomizeParticleEffect");

	USpineAnimNotifyState_TimedPartleEffectSorted_C_CustomizeParticleEffect_Params params;
	params.ParticleSystem = ParticleSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
