// Name: enderlilies, Version: 1.1.3

#include "pch.h"

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
//		Name   -> Function BP_WorldTravelVolume.BP_WorldTravelVolume_C.ReceiveActorBeginOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WorldTravelVolume_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	UFunction* fn = UObject::FindObject<UFunction>("Function BP_WorldTravelVolume.BP_WorldTravelVolume_C.ReceiveActorBeginOverlap");

	ABP_WorldTravelVolume_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_WorldTravelVolume.BP_WorldTravelVolume_C.OnPlayerEnter
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_WorldTravelVolume_C::OnPlayerEnter()
{
	UFunction* fn = UObject::FindObject<UFunction>("Function BP_WorldTravelVolume.BP_WorldTravelVolume_C.OnPlayerEnter");

	ABP_WorldTravelVolume_C_OnPlayerEnter_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_WorldTravelVolume.BP_WorldTravelVolume_C.ExecuteUbergraph_BP_WorldTravelVolume
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WorldTravelVolume_C::ExecuteUbergraph_BP_WorldTravelVolume(int EntryPoint)
{
	UFunction* fn = UObject::FindObject<UFunction>("Function BP_WorldTravelVolume.BP_WorldTravelVolume_C.ExecuteUbergraph_BP_WorldTravelVolume");

	ABP_WorldTravelVolume_C_ExecuteUbergraph_BP_WorldTravelVolume_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
