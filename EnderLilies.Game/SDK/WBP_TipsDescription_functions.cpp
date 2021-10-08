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
//		Name   -> Function WBP_TipsDescription.WBP_TipsDescription_C.Clear
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UWBP_TipsDescription_C::Clear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TipsDescription.WBP_TipsDescription_C.Clear");

	UWBP_TipsDescription_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_TipsDescription.WBP_TipsDescription_C.InitializeForItem
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_TipsDescription_C::InitializeForItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TipsDescription.WBP_TipsDescription_C.InitializeForItem");

	UWBP_TipsDescription_C_InitializeForItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_TipsDescription.WBP_TipsDescription_C.Initialize
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDataTableRowHandle                         ItemDataHandle                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_TipsDescription_C::Initialize(const struct FDataTableRowHandle& ItemDataHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TipsDescription.WBP_TipsDescription_C.Initialize");

	UWBP_TipsDescription_C_Initialize_Params params;
	params.ItemDataHandle = ItemDataHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_TipsDescription.WBP_TipsDescription_C.ExecuteUbergraph_WBP_TipsDescription
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_TipsDescription_C::ExecuteUbergraph_WBP_TipsDescription(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_TipsDescription.WBP_TipsDescription_C.ExecuteUbergraph_WBP_TipsDescription");

	UWBP_TipsDescription_C_ExecuteUbergraph_WBP_TipsDescription_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
