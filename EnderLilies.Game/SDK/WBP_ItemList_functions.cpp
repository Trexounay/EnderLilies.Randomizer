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
//		Name   -> Function WBP_ItemList.WBP_ItemList_C.FocusFirstChild
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_ItemList_C::FocusFirstChild()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemList.WBP_ItemList_C.FocusFirstChild");

	UWBP_ItemList_C_FocusFirstChild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemList.WBP_ItemList_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_ItemList_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemList.WBP_ItemList_C.OnFocusReceived");

	UWBP_ItemList_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemList.WBP_ItemList_C.AddEntry
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDataTableRowHandle                         ItemDataHandle                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_ItemList_C::AddEntry(const struct FDataTableRowHandle& ItemDataHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemList.WBP_ItemList_C.AddEntry");

	UWBP_ItemList_C_AddEntry_Params params;
	params.ItemDataHandle = ItemDataHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemList.WBP_ItemList_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_ItemList_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemList.WBP_ItemList_C.PreConstruct");

	UWBP_ItemList_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemList.WBP_ItemList_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_ItemList_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemList.WBP_ItemList_C.Construct");

	UWBP_ItemList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemList.WBP_ItemList_C.Clear
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_ItemList_C::Clear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemList.WBP_ItemList_C.Clear");

	UWBP_ItemList_C_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemList.WBP_ItemList_C.Initialize
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UBaseInventory*                              Inventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemList_C::Initialize(class UBaseInventory* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemList.WBP_ItemList_C.Initialize");

	UWBP_ItemList_C_Initialize_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemList.WBP_ItemList_C.OnEntrySelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Item_C*                                 EquipmentItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemList_C::OnEntrySelected(class UWBP_Item_C* EquipmentItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemList.WBP_ItemList_C.OnEntrySelected");

	UWBP_ItemList_C_OnEntrySelected_Params params;
	params.EquipmentItem = EquipmentItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemList.WBP_ItemList_C.OnItemFocused
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Item_C*                                 Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemList_C::OnItemFocused(class UWBP_Item_C* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemList.WBP_ItemList_C.OnItemFocused");

	UWBP_ItemList_C_OnItemFocused_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemList.WBP_ItemList_C.ExecuteUbergraph_WBP_ItemList
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemList_C::ExecuteUbergraph_WBP_ItemList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemList.WBP_ItemList_C.ExecuteUbergraph_WBP_ItemList");

	UWBP_ItemList_C_ExecuteUbergraph_WBP_ItemList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemList.WBP_ItemList_C.OnFocused__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Item_C*                                 Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemList_C::OnFocused__DelegateSignature(class UWBP_Item_C* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemList.WBP_ItemList_C.OnFocused__DelegateSignature");

	UWBP_ItemList_C_OnFocused__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemList.WBP_ItemList_C.OnSelect__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Item_C*                                 Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_ItemList_C::OnSelect__DelegateSignature(class UWBP_Item_C* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemList.WBP_ItemList_C.OnSelect__DelegateSignature");

	UWBP_ItemList_C_OnSelect__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_ItemList.WBP_ItemList_C.OnCancel__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UWBP_ItemList_C::OnCancel__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_ItemList.WBP_ItemList_C.OnCancel__DelegateSignature");

	UWBP_ItemList_C_OnCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
