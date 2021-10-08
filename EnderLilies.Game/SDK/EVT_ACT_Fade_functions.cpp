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
//		Name   -> Function EVT_ACT_Fade.EVT_ACT_Fade_C.GetOrCreateFade
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUserWidget*                                 Value                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEVT_ACT_Fade_C::GetOrCreateFade(class UUserWidget** Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_ACT_Fade.EVT_ACT_Fade_C.GetOrCreateFade");

	UEVT_ACT_Fade_C_GetOrCreateFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
