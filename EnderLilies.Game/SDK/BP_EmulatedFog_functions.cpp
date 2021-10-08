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
//		Name   -> Function BP_EmulatedFog.BP_EmulatedFog_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_EmulatedFog_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EmulatedFog.BP_EmulatedFog_C.UserConstructionScript");

	ABP_EmulatedFog_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_EmulatedFog.BP_EmulatedFog_C.OnActivateFog
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_EmulatedFog_C::OnActivateFog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EmulatedFog.BP_EmulatedFog_C.OnActivateFog");

	ABP_EmulatedFog_C_OnActivateFog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_EmulatedFog.BP_EmulatedFog_C.OnDeactivateFog
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_EmulatedFog_C::OnDeactivateFog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EmulatedFog.BP_EmulatedFog_C.OnDeactivateFog");

	ABP_EmulatedFog_C_OnDeactivateFog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_EmulatedFog.BP_EmulatedFog_C.ExecuteUbergraph_BP_EmulatedFog
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_EmulatedFog_C::ExecuteUbergraph_BP_EmulatedFog(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EmulatedFog.BP_EmulatedFog_C.ExecuteUbergraph_BP_EmulatedFog");

	ABP_EmulatedFog_C_ExecuteUbergraph_BP_EmulatedFog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
