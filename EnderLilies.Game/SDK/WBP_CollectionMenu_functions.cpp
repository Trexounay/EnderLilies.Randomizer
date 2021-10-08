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
//		Name   -> Function WBP_CollectionMenu.WBP_CollectionMenu_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_CollectionMenu_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CollectionMenu.WBP_CollectionMenu_C.OnFocusReceived");

	UWBP_CollectionMenu_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_CollectionMenu.WBP_CollectionMenu_C.InitializeInventory
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_ItemList_C*                             Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UBaseInventory*                              Inventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CollectionMenu_C::InitializeInventory(class UWBP_ItemList_C* Target, class UBaseInventory* Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CollectionMenu.WBP_CollectionMenu_C.InitializeInventory");

	UWBP_CollectionMenu_C_InitializeInventory_Params params;
	params.Target = Target;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_CollectionMenu.WBP_CollectionMenu_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_CollectionMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CollectionMenu.WBP_CollectionMenu_C.Construct");

	UWBP_CollectionMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_CollectionMenu.WBP_CollectionMenu_C.OnFocusItem
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Item_C*                                 Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CollectionMenu_C::OnFocusItem(class UWBP_Item_C* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CollectionMenu.WBP_CollectionMenu_C.OnFocusItem");

	UWBP_CollectionMenu_C_OnFocusItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_CollectionMenu.WBP_CollectionMenu_C.ExecuteUbergraph_WBP_CollectionMenu
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CollectionMenu_C::ExecuteUbergraph_WBP_CollectionMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CollectionMenu.WBP_CollectionMenu_C.ExecuteUbergraph_WBP_CollectionMenu");

	UWBP_CollectionMenu_C_ExecuteUbergraph_WBP_CollectionMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
