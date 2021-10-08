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
//		Name   -> Function WBP_WorldSpaceWidget.WBP_WorldSpaceWidget_C.Finish
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
void UWBP_WorldSpaceWidget_C::Finish()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_WorldSpaceWidget.WBP_WorldSpaceWidget_C.Finish");

	UWBP_WorldSpaceWidget_C_Finish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_WorldSpaceWidget.WBP_WorldSpaceWidget_C.OnFinished__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_WorldSpaceWidget_C::OnFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_WorldSpaceWidget.WBP_WorldSpaceWidget_C.OnFinished__DelegateSignature");

	UWBP_WorldSpaceWidget_C_OnFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
