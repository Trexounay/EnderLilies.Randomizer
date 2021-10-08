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
//		Name   -> Function BP_Trigger_Event_Unique.BP_Trigger_Event_Unique_C.ConfigureEventPlayer
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UEventPlayer*                                EventPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trigger_Event_Unique_C::ConfigureEventPlayer(class UEventPlayer* EventPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Trigger_Event_Unique.BP_Trigger_Event_Unique_C.ConfigureEventPlayer");

	ABP_Trigger_Event_Unique_C_ConfigureEventPlayer_Params params;
	params.EventPlayer = EventPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Trigger_Event_Unique.BP_Trigger_Event_Unique_C.AllowTrigger
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_Trigger_Event_Unique_C::AllowTrigger()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Trigger_Event_Unique.BP_Trigger_Event_Unique_C.AllowTrigger");

	ABP_Trigger_Event_Unique_C_AllowTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Trigger_Event_Unique.BP_Trigger_Event_Unique_C.GenerateActorBindings
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Trigger_Event_Unique_C::GenerateActorBindings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Trigger_Event_Unique.BP_Trigger_Event_Unique_C.GenerateActorBindings");

	ABP_Trigger_Event_Unique_C_GenerateActorBindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Trigger_Event_Unique.BP_Trigger_Event_Unique_C.OnReady_F16DFAA64BB4A1FBA9BC0FB4399FD005
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Trigger_Event_Unique_C::OnReady_F16DFAA64BB4A1FBA9BC0FB4399FD005()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Trigger_Event_Unique.BP_Trigger_Event_Unique_C.OnReady_F16DFAA64BB4A1FBA9BC0FB4399FD005");

	ABP_Trigger_Event_Unique_C_OnReady_F16DFAA64BB4A1FBA9BC0FB4399FD005_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Trigger_Event_Unique.BP_Trigger_Event_Unique_C.OnTrigger
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trigger_Event_Unique_C::OnTrigger(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Trigger_Event_Unique.BP_Trigger_Event_Unique_C.OnTrigger");

	ABP_Trigger_Event_Unique_C_OnTrigger_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Trigger_Event_Unique.BP_Trigger_Event_Unique_C.ExecuteUbergraph_BP_Trigger_Event_Unique
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Trigger_Event_Unique_C::ExecuteUbergraph_BP_Trigger_Event_Unique(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Trigger_Event_Unique.BP_Trigger_Event_Unique_C.ExecuteUbergraph_BP_Trigger_Event_Unique");

	ABP_Trigger_Event_Unique_C_ExecuteUbergraph_BP_Trigger_Event_Unique_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
