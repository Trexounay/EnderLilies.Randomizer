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
//		Name   -> Function BP_Collectable_Base.BP_Collectable_Base_C.DidReachTarget
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bReachedTarget                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Collectable_Base_C::DidReachTarget(bool* bReachedTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Collectable_Base.BP_Collectable_Base_C.DidReachTarget");

	ABP_Collectable_Base_C_DidReachTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bReachedTarget != nullptr)
		*bReachedTarget = params.bReachedTarget;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Collectable_Base.BP_Collectable_Base_C.OnCollect
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Collectable_Base_C::OnCollect(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Collectable_Base.BP_Collectable_Base_C.OnCollect");

	ABP_Collectable_Base_C_OnCollect_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Collectable_Base.BP_Collectable_Base_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Collectable_Base_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Collectable_Base.BP_Collectable_Base_C.ReceiveTick");

	ABP_Collectable_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Collectable_Base.BP_Collectable_Base_C.OnReachedTarget
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Collectable_Base_C::OnReachedTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Collectable_Base.BP_Collectable_Base_C.OnReachedTarget");

	ABP_Collectable_Base_C_OnReachedTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Collectable_Base.BP_Collectable_Base_C.OnActivate
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_Collectable_Base_C::OnActivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Collectable_Base.BP_Collectable_Base_C.OnActivate");

	ABP_Collectable_Base_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Collectable_Base.BP_Collectable_Base_C.DeactivateCollectable
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Collectable_Base_C::DeactivateCollectable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Collectable_Base.BP_Collectable_Base_C.DeactivateCollectable");

	ABP_Collectable_Base_C_DeactivateCollectable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Collectable_Base.BP_Collectable_Base_C.OnDeactivate
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_Collectable_Base_C::OnDeactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Collectable_Base.BP_Collectable_Base_C.OnDeactivate");

	ABP_Collectable_Base_C_OnDeactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Collectable_Base.BP_Collectable_Base_C.ExecuteUbergraph_BP_Collectable_Base
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Collectable_Base_C::ExecuteUbergraph_BP_Collectable_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Collectable_Base.BP_Collectable_Base_C.ExecuteUbergraph_BP_Collectable_Base");

	ABP_Collectable_Base_C_ExecuteUbergraph_BP_Collectable_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
