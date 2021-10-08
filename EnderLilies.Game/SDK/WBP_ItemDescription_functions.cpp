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
//		Name   -> Function WBP_ItemDescription.WBP_ItemDescription_C.Clear
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ItemDescription_C::Clear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemDescription.WBP_ItemDescription_C.Clear");

	UWBP_ItemDescription_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemDescription.WBP_ItemDescription_C.InitializeForItem
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
void UWBP_ItemDescription_C::InitializeForItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemDescription.WBP_ItemDescription_C.InitializeForItem");

	UWBP_ItemDescription_C_InitializeForItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemDescription.WBP_ItemDescription_C.Initialize
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDataTableRowHandle                         ItemDataHandle                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_ItemDescription_C::Initialize(const struct FDataTableRowHandle& ItemDataHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemDescription.WBP_ItemDescription_C.Initialize");

	UWBP_ItemDescription_C_Initialize_Params params;
	params.ItemDataHandle = ItemDataHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemDescription.WBP_ItemDescription_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ItemDescription_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemDescription.WBP_ItemDescription_C.PreConstruct");

	UWBP_ItemDescription_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemDescription.WBP_ItemDescription_C.ExecuteUbergraph_WBP_ItemDescription
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemDescription_C::ExecuteUbergraph_WBP_ItemDescription(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemDescription.WBP_ItemDescription_C.ExecuteUbergraph_WBP_ItemDescription");

	UWBP_ItemDescription_C_ExecuteUbergraph_WBP_ItemDescription_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
