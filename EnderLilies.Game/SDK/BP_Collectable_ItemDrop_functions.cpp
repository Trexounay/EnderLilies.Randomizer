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
//		Name   -> Function BP_Collectable_ItemDrop.BP_Collectable_ItemDrop_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Collectable_ItemDrop_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Collectable_ItemDrop.BP_Collectable_ItemDrop_C.ReceiveBeginPlay");

	ABP_Collectable_ItemDrop_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Collectable_ItemDrop.BP_Collectable_ItemDrop_C.OnGrantDrop
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_Collectable_ItemDrop_C::OnGrantDrop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Collectable_ItemDrop.BP_Collectable_ItemDrop_C.OnGrantDrop");

	ABP_Collectable_ItemDrop_C_OnGrantDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Collectable_ItemDrop.BP_Collectable_ItemDrop_C.ExecuteUbergraph_BP_Collectable_ItemDrop
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Collectable_ItemDrop_C::ExecuteUbergraph_BP_Collectable_ItemDrop(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Collectable_ItemDrop.BP_Collectable_ItemDrop_C.ExecuteUbergraph_BP_Collectable_ItemDrop");

	ABP_Collectable_ItemDrop_C_ExecuteUbergraph_BP_Collectable_ItemDrop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
