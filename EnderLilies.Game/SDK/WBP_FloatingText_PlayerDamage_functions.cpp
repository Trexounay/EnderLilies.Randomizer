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
//		Name   -> Function WBP_FloatingText_PlayerDamage.WBP_FloatingText_PlayerDamage_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FloatingText_PlayerDamage_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FloatingText_PlayerDamage.WBP_FloatingText_PlayerDamage_C.Tick");

	UWBP_FloatingText_PlayerDamage_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FloatingText_PlayerDamage.WBP_FloatingText_PlayerDamage_C.ExecuteUbergraph_WBP_FloatingText_PlayerDamage
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FloatingText_PlayerDamage_C::ExecuteUbergraph_WBP_FloatingText_PlayerDamage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FloatingText_PlayerDamage.WBP_FloatingText_PlayerDamage_C.ExecuteUbergraph_WBP_FloatingText_PlayerDamage");

	UWBP_FloatingText_PlayerDamage_C_ExecuteUbergraph_WBP_FloatingText_PlayerDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
