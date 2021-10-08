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
//		Name   -> Function WBP_TipNotification.WBP_TipNotification_C.LaunchNewTipAnim
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_TipNotification_C::LaunchNewTipAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TipNotification.WBP_TipNotification_C.LaunchNewTipAnim");

	UWBP_TipNotification_C_LaunchNewTipAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_TipNotification.WBP_TipNotification_C.OnAnimationFinished
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TipNotification_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TipNotification.WBP_TipNotification_C.OnAnimationFinished");

	UWBP_TipNotification_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_TipNotification.WBP_TipNotification_C.QueueTipNotification
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDataTableRowHandle                         TipDataHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_TipNotification_C::QueueTipNotification(const struct FDataTableRowHandle& TipDataHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TipNotification.WBP_TipNotification_C.QueueTipNotification");

	UWBP_TipNotification_C_QueueTipNotification_Params params;
	params.TipDataHandle = TipDataHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_TipNotification.WBP_TipNotification_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_TipNotification_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TipNotification.WBP_TipNotification_C.Construct");

	UWBP_TipNotification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_TipNotification.WBP_TipNotification_C.ExecuteUbergraph_WBP_TipNotification
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TipNotification_C::ExecuteUbergraph_WBP_TipNotification(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TipNotification.WBP_TipNotification_C.ExecuteUbergraph_WBP_TipNotification");

	UWBP_TipNotification_C_ExecuteUbergraph_WBP_TipNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
