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
//		Name   -> Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.ClearPassives
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_Passive_EquippedList_C::ClearPassives()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.ClearPassives");

	UWBP_Passive_EquippedList_C_ClearPassives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.SetLockContainerVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		UMG_ESlateVisibility                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Passive_EquippedList_C::SetLockContainerVisibility(UMG_ESlateVisibility Visibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.SetLockContainerVisibility");

	UWBP_Passive_EquippedList_C_SetLockContainerVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_Passive_EquippedList_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.OnFocusReceived");

	UWBP_Passive_EquippedList_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.Initialize
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPassiveEquipComponent*                      PassiveEquipComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Passive_EquippedList_C::Initialize(class UPassiveEquipComponent* PassiveEquipComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.Initialize");

	UWBP_Passive_EquippedList_C_Initialize_Params params;
	params.PassiveEquipComponent = PassiveEquipComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.OnPassiveChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_Passive_EquippedList_C::OnPassiveChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.OnPassiveChanged");

	UWBP_Passive_EquippedList_C_OnPassiveChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.OnSelectPassive
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Item_C*                                 EquipmentItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Passive_EquippedList_C::OnSelectPassive(class UWBP_Item_C* EquipmentItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.OnSelectPassive");

	UWBP_Passive_EquippedList_C_OnSelectPassive_Params params;
	params.EquipmentItem = EquipmentItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.OnFocusPassive
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Item_C*                                 EquipmentItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Passive_EquippedList_C::OnFocusPassive(class UWBP_Item_C* EquipmentItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.OnFocusPassive");

	UWBP_Passive_EquippedList_C_OnFocusPassive_Params params;
	params.EquipmentItem = EquipmentItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.ExecuteUbergraph_WBP_Passive_EquippedList
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Passive_EquippedList_C::ExecuteUbergraph_WBP_Passive_EquippedList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.ExecuteUbergraph_WBP_Passive_EquippedList");

	UWBP_Passive_EquippedList_C_ExecuteUbergraph_WBP_Passive_EquippedList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.OnPassiveFocused__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Item_C*                                 EquipmentItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Passive_EquippedList_C::OnPassiveFocused__DelegateSignature(class UWBP_Item_C* EquipmentItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.OnPassiveFocused__DelegateSignature");

	UWBP_Passive_EquippedList_C_OnPassiveFocused__DelegateSignature_Params params;
	params.EquipmentItem = EquipmentItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.OnPassiveSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_Item_C*                                 EquipmentItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_Passive_EquippedList_C::OnPassiveSelected__DelegateSignature(class UWBP_Item_C* EquipmentItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.OnPassiveSelected__DelegateSignature");

	UWBP_Passive_EquippedList_C_OnPassiveSelected__DelegateSignature_Params params;
	params.EquipmentItem = EquipmentItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
