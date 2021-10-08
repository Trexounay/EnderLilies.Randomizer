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
//		Name   -> Function BP_p0000_Lily.BP_p0000_Lily_C.SetSpineData
//		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FFSpineDataGroup                            FSpineDataGroup                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
void ABP_p0000_Lily_C::SetSpineData(const struct FFSpineDataGroup& FSpineDataGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_p0000_Lily.BP_p0000_Lily_C.SetSpineData");

	ABP_p0000_Lily_C_SetSpineData_Params params;
	params.FSpineDataGroup = FSpineDataGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_p0000_Lily.BP_p0000_Lily_C.GetCameraFocusTarget
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class USceneComponent*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USceneComponent* ABP_p0000_Lily_C::GetCameraFocusTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_p0000_Lily.BP_p0000_Lily_C.GetCameraFocusTarget");

	ABP_p0000_Lily_C_GetCameraFocusTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_p0000_Lily.BP_p0000_Lily_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_p0000_Lily_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_p0000_Lily.BP_p0000_Lily_C.ReceiveBeginPlay");

	ABP_p0000_Lily_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_p0000_Lily.BP_p0000_Lily_C.K2_OnStartCrouch
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              HalfHeightAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ScaledHalfHeightAdjust                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_p0000_Lily_C::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_p0000_Lily.BP_p0000_Lily_C.K2_OnStartCrouch");

	ABP_p0000_Lily_C_K2_OnStartCrouch_Params params;
	params.HalfHeightAdjust = HalfHeightAdjust;
	params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_p0000_Lily.BP_p0000_Lily_C.K2_OnEndCrouch
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              HalfHeightAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ScaledHalfHeightAdjust                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_p0000_Lily_C::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_p0000_Lily.BP_p0000_Lily_C.K2_OnEndCrouch");

	ABP_p0000_Lily_C_K2_OnEndCrouch_Params params;
	params.HalfHeightAdjust = HalfHeightAdjust;
	params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_p0000_Lily.BP_p0000_Lily_C.ExecuteUbergraph_BP_p0000_Lily
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_p0000_Lily_C::ExecuteUbergraph_BP_p0000_Lily(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_p0000_Lily.BP_p0000_Lily_C.ExecuteUbergraph_BP_p0000_Lily");

	ABP_p0000_Lily_C_ExecuteUbergraph_BP_p0000_Lily_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
