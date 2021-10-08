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
//		Name   -> Function BP_FakeWall.BP_FakeWall_C.IsDisappeared
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               Disappeared                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FakeWall_C::IsDisappeared(bool* Disappeared)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FakeWall.BP_FakeWall_C.IsDisappeared");

	ABP_FakeWall_C_IsDisappeared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Disappeared != nullptr)
		*Disappeared = params.Disappeared;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_FakeWall.BP_FakeWall_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FakeWall_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FakeWall.BP_FakeWall_C.UserConstructionScript");

	ABP_FakeWall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_FakeWall.BP_FakeWall_C.FadeOut__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABP_FakeWall_C::FadeOut__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FakeWall.BP_FakeWall_C.FadeOut__FinishedFunc");

	ABP_FakeWall_C_FadeOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_FakeWall.BP_FakeWall_C.FadeOut__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABP_FakeWall_C::FadeOut__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FakeWall.BP_FakeWall_C.FadeOut__UpdateFunc");

	ABP_FakeWall_C_FadeOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_FakeWall.BP_FakeWall_C.Disappear
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_FakeWall_C::Disappear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FakeWall.BP_FakeWall_C.Disappear");

	ABP_FakeWall_C_Disappear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_FakeWall.BP_FakeWall_C.ForceDisappear
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_FakeWall_C::ForceDisappear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FakeWall.BP_FakeWall_C.ForceDisappear");

	ABP_FakeWall_C_ForceDisappear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_FakeWall.BP_FakeWall_C.ExecuteUbergraph_BP_FakeWall
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FakeWall_C::ExecuteUbergraph_BP_FakeWall(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FakeWall.BP_FakeWall_C.ExecuteUbergraph_BP_FakeWall");

	ABP_FakeWall_C_ExecuteUbergraph_BP_FakeWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
