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
//		Name   -> Function Cave_01_GAMEPLAY_LevelInstance_3.Cave_01_GAMEPLAY_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ACave_01_GAMEPLAY_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cave_01_GAMEPLAY_LevelInstance_3.Cave_01_GAMEPLAY_C.ReceiveBeginPlay");

	ACave_01_GAMEPLAY_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function Cave_01_GAMEPLAY_LevelInstance_3.Cave_01_GAMEPLAY_C.ExecuteUbergraph_Cave_01_GAMEPLAY
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACave_01_GAMEPLAY_C::ExecuteUbergraph_Cave_01_GAMEPLAY(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cave_01_GAMEPLAY_LevelInstance_3.Cave_01_GAMEPLAY_C.ExecuteUbergraph_Cave_01_GAMEPLAY");

	ACave_01_GAMEPLAY_C_ExecuteUbergraph_Cave_01_GAMEPLAY_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
