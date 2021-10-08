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
//		Name   -> Function MapLayout_Widget.MapLayout_Widget_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UMapLayout_Widget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapLayout_Widget.MapLayout_Widget_C.Construct");

	UMapLayout_Widget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function MapLayout_Widget.MapLayout_Widget_C.ExecuteUbergraph_MapLayout_Widget
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMapLayout_Widget_C::ExecuteUbergraph_MapLayout_Widget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapLayout_Widget.MapLayout_Widget_C.ExecuteUbergraph_MapLayout_Widget");

	UMapLayout_Widget_C_ExecuteUbergraph_MapLayout_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
