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
//		Name   -> Function WBP_Map_Link.WBP_Map_Link_C.UpdateLinkVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Map_Link_C::UpdateLinkVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Link.WBP_Map_Link_C.UpdateLinkVisibility");

	UWBP_Map_Link_C_UpdateLinkVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Link.WBP_Map_Link_C.UpdateMapVisibility
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Map_Level_C*                            Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     Base                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Visible                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_Map_Link_C::UpdateMapVisibility(class UWBP_Map_Level_C* Map, class UWidget* Base, bool* Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Link.WBP_Map_Link_C.UpdateMapVisibility");

	UWBP_Map_Link_C_UpdateMapVisibility_Params params;
	params.Map = Map;
	params.Base = Base;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Link.WBP_Map_Link_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_Map_Link_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Link.WBP_Map_Link_C.Construct");

	UWBP_Map_Link_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Link.WBP_Map_Link_C.ForceVisible
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Map_Link_C::ForceVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Link.WBP_Map_Link_C.ForceVisible");

	UWBP_Map_Link_C_ForceVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Map_Link.WBP_Map_Link_C.ExecuteUbergraph_WBP_Map_Link
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Map_Link_C::ExecuteUbergraph_WBP_Map_Link(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Map_Link.WBP_Map_Link_C.ExecuteUbergraph_WBP_Map_Link");

	UWBP_Map_Link_C_ExecuteUbergraph_WBP_Map_Link_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
