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
//		Name   -> Function BP_MaterialCollectionInitializer.BP_MaterialCollectionInitializer_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_MaterialCollectionInitializer_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MaterialCollectionInitializer.BP_MaterialCollectionInitializer_C.ReceiveBeginPlay");

	ABP_MaterialCollectionInitializer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_MaterialCollectionInitializer.BP_MaterialCollectionInitializer_C.ExecuteUbergraph_BP_MaterialCollectionInitializer
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_MaterialCollectionInitializer_C::ExecuteUbergraph_BP_MaterialCollectionInitializer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MaterialCollectionInitializer.BP_MaterialCollectionInitializer_C.ExecuteUbergraph_BP_MaterialCollectionInitializer");

	ABP_MaterialCollectionInitializer_C_ExecuteUbergraph_BP_MaterialCollectionInitializer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
