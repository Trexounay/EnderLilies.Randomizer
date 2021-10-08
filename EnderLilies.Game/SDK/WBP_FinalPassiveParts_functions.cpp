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
//		Name   -> Function WBP_FinalPassiveParts.WBP_FinalPassiveParts_C.SetPartVisibility
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		bool                                               Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
void UWBP_FinalPassiveParts_C::SetPartVisibility(class UWidget* Target, bool Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FinalPassiveParts.WBP_FinalPassiveParts_C.SetPartVisibility");

	UWBP_FinalPassiveParts_C_SetPartVisibility_Params params;
	params.Target = Target;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FinalPassiveParts.WBP_FinalPassiveParts_C.Setup
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PartCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FinalPassiveParts_C::Setup(int PartCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FinalPassiveParts.WBP_FinalPassiveParts_C.Setup");

	UWBP_FinalPassiveParts_C_Setup_Params params;
	params.PartCount = PartCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FinalPassiveParts.WBP_FinalPassiveParts_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_FinalPassiveParts_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FinalPassiveParts.WBP_FinalPassiveParts_C.Construct");

	UWBP_FinalPassiveParts_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FinalPassiveParts.WBP_FinalPassiveParts_C.ExecuteUbergraph_WBP_FinalPassiveParts
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FinalPassiveParts_C::ExecuteUbergraph_WBP_FinalPassiveParts(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FinalPassiveParts.WBP_FinalPassiveParts_C.ExecuteUbergraph_WBP_FinalPassiveParts");

	UWBP_FinalPassiveParts_C_ExecuteUbergraph_WBP_FinalPassiveParts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
