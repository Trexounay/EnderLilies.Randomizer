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
//		Name   -> Function WBP_Tips_List.WBP_Tips_List_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Tips_List_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Tips_List.WBP_Tips_List_C.OnFocusReceived");

	UWBP_Tips_List_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Tips_List.WBP_Tips_List_C.OnFocusTipItem
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Tips_Item_C*                            TipItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Tips_List_C::OnFocusTipItem(class UWBP_Tips_Item_C* TipItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Tips_List.WBP_Tips_List_C.OnFocusTipItem");

	UWBP_Tips_List_C_OnFocusTipItem_Params params;
	params.TipItem = TipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Tips_List.WBP_Tips_List_C.AddTips
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDataTableRowHandle                         TRUE                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_Tips_List_C::AddTips(const struct FDataTableRowHandle& TRUE)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Tips_List.WBP_Tips_List_C.AddTips");

	UWBP_Tips_List_C_AddTips_Params params;
	params.TRUE = TRUE;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Tips_List.WBP_Tips_List_C.ExecuteUbergraph_WBP_Tips_List
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Tips_List_C::ExecuteUbergraph_WBP_Tips_List(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Tips_List.WBP_Tips_List_C.ExecuteUbergraph_WBP_Tips_List");

	UWBP_Tips_List_C_ExecuteUbergraph_WBP_Tips_List_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Tips_List.WBP_Tips_List_C.OnFocusedTipItem__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Tips_Item_C*                            TipItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Tips_List_C::OnFocusedTipItem__DelegateSignature(class UWBP_Tips_Item_C* TipItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Tips_List.WBP_Tips_List_C.OnFocusedTipItem__DelegateSignature");

	UWBP_Tips_List_C_OnFocusedTipItem__DelegateSignature_Params params;
	params.TipItem = TipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
