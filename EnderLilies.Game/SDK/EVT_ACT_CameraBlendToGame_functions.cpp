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
//		Name   -> Function EVT_ACT_CameraBlendToGame.EVT_ACT_CameraBlendToGame_C.GetViewTarget
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UEventBlackBoard*                            EventBlackBoard                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      ViewTarget                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEVT_ACT_CameraBlendToGame_C::GetViewTarget(class UEventBlackBoard* EventBlackBoard, class AActor** ViewTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EVT_ACT_CameraBlendToGame.EVT_ACT_CameraBlendToGame_C.GetViewTarget");

	UEVT_ACT_CameraBlendToGame_C_GetViewTarget_Params params;
	params.EventBlackBoard = EventBlackBoard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ViewTarget != nullptr)
		*ViewTarget = params.ViewTarget;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
