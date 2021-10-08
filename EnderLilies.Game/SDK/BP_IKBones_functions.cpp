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
//		Name   -> Function BP_IKBones.BP_IKBones_C.RemoveFinishedBlends
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UBP_IKBones_C::RemoveFinishedBlends()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_IKBones.BP_IKBones_C.RemoveFinishedBlends");

	UBP_IKBones_C_RemoveFinishedBlends_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_IKBones.BP_IKBones_C.UpdateBlends
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DelatTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_IKBones_C::UpdateBlends(float DelatTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_IKBones.BP_IKBones_C.UpdateBlends");

	UBP_IKBones_C_UpdateBlends_Params params;
	params.DelatTime = DelatTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_IKBones.BP_IKBones_C.ResetIKBoneByTag
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              BlendTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_IKBones_C::ResetIKBoneByTag(const struct FName& Tag, float BlendTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_IKBones.BP_IKBones_C.ResetIKBoneByTag");

	UBP_IKBones_C_ResetIKBoneByTag_Params params;
	params.Tag = Tag;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_IKBones.BP_IKBones_C.GetIKBoneByTag
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USceneComponent*                             IKBone                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_IKBones_C::GetIKBoneByTag(const struct FName& Tag, class USceneComponent** IKBone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_IKBones.BP_IKBones_C.GetIKBoneByTag");

	UBP_IKBones_C_GetIKBoneByTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IKBone != nullptr)
		*IKBone = params.IKBone;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_IKBones.BP_IKBones_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_IKBones_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_IKBones.BP_IKBones_C.ReceiveTick");

	UBP_IKBones_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_IKBones.BP_IKBones_C.ExecuteUbergraph_BP_IKBones
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_IKBones_C::ExecuteUbergraph_BP_IKBones(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_IKBones.BP_IKBones_C.ExecuteUbergraph_BP_IKBones");

	UBP_IKBones_C_ExecuteUbergraph_BP_IKBones_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
