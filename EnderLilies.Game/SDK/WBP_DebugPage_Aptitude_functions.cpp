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
//		Name   -> Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.SetInitialToggle
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_DebugMenuToggleEntry_C*                 ToggleEntry                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FDataTableRowHandle                         ItemData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UWBP_DebugPage_Aptitude_C::SetInitialToggle(class UWBP_DebugMenuToggleEntry_C* ToggleEntry, const struct FDataTableRowHandle& ItemData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.SetInitialToggle");

	UWBP_DebugPage_Aptitude_C_SetInitialToggle_Params params;
	params.ToggleEntry = ToggleEntry;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.ToggleAptitude
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWBP_DebugMenuToggleEntry_C*                 ToggleEntry                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FDataTableRowHandle                         ItemData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UWBP_DebugPage_Aptitude_C::ToggleAptitude(class UWBP_DebugMenuToggleEntry_C* ToggleEntry, const struct FDataTableRowHandle& ItemData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.ToggleAptitude");

	UWBP_DebugPage_Aptitude_C_ToggleAptitude_Params params;
	params.ToggleEntry = ToggleEntry;
	params.ItemData = ItemData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_DebugPage_Aptitude_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.OnFocusReceived");

	UWBP_DebugPage_Aptitude_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_DebugPage_Aptitude_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.Construct");

	UWBP_DebugPage_Aptitude_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.BndEvt__DoubleJump_K2Node_ComponentBoundEvent_6_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Aptitude_C::BndEvt__DoubleJump_K2Node_ComponentBoundEvent_6_OnToggle__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.BndEvt__DoubleJump_K2Node_ComponentBoundEvent_6_OnToggle__DelegateSignature");

	UWBP_DebugPage_Aptitude_C_BndEvt__DoubleJump_K2Node_ComponentBoundEvent_6_OnToggle__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.BndEvt__Dash_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Aptitude_C::BndEvt__Dash_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.BndEvt__Dash_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature");

	UWBP_DebugPage_Aptitude_C_BndEvt__Dash_K2Node_ComponentBoundEvent_7_OnToggle__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.BndEvt__DashAttack_K2Node_ComponentBoundEvent_8_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Aptitude_C::BndEvt__DashAttack_K2Node_ComponentBoundEvent_8_OnToggle__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.BndEvt__DashAttack_K2Node_ComponentBoundEvent_8_OnToggle__DelegateSignature");

	UWBP_DebugPage_Aptitude_C_BndEvt__DashAttack_K2Node_ComponentBoundEvent_8_OnToggle__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.BndEvt__Dive_K2Node_ComponentBoundEvent_9_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Aptitude_C::BndEvt__Dive_K2Node_ComponentBoundEvent_9_OnToggle__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.BndEvt__Dive_K2Node_ComponentBoundEvent_9_OnToggle__DelegateSignature");

	UWBP_DebugPage_Aptitude_C_BndEvt__Dive_K2Node_ComponentBoundEvent_9_OnToggle__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.BndEvt__Dodge_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Aptitude_C::BndEvt__Dodge_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.BndEvt__Dodge_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature");

	UWBP_DebugPage_Aptitude_C_BndEvt__Dodge_K2Node_ComponentBoundEvent_10_OnToggle__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.BndEvt__Hook_K2Node_ComponentBoundEvent_11_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Aptitude_C::BndEvt__Hook_K2Node_ComponentBoundEvent_11_OnToggle__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.BndEvt__Hook_K2Node_ComponentBoundEvent_11_OnToggle__DelegateSignature");

	UWBP_DebugPage_Aptitude_C_BndEvt__Hook_K2Node_ComponentBoundEvent_11_OnToggle__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.BndEvt__PoundAttack_K2Node_ComponentBoundEvent_12_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Aptitude_C::BndEvt__PoundAttack_K2Node_ComponentBoundEvent_12_OnToggle__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.BndEvt__PoundAttack_K2Node_ComponentBoundEvent_12_OnToggle__DelegateSignature");

	UWBP_DebugPage_Aptitude_C_BndEvt__PoundAttack_K2Node_ComponentBoundEvent_12_OnToggle__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.BndEvt__Wallgrab_K2Node_ComponentBoundEvent_13_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Aptitude_C::BndEvt__Wallgrab_K2Node_ComponentBoundEvent_13_OnToggle__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.BndEvt__Wallgrab_K2Node_ComponentBoundEvent_13_OnToggle__DelegateSignature");

	UWBP_DebugPage_Aptitude_C_BndEvt__Wallgrab_K2Node_ComponentBoundEvent_13_OnToggle__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.BndEvt__WBP_DebugPage_Aptitude_UnlockDoors_K2Node_ComponentBoundEvent_0_OnToggle__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Aptitude_C::BndEvt__WBP_DebugPage_Aptitude_UnlockDoors_K2Node_ComponentBoundEvent_0_OnToggle__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.BndEvt__WBP_DebugPage_Aptitude_UnlockDoors_K2Node_ComponentBoundEvent_0_OnToggle__DelegateSignature");

	UWBP_DebugPage_Aptitude_C_BndEvt__WBP_DebugPage_Aptitude_UnlockDoors_K2Node_ComponentBoundEvent_0_OnToggle__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.ExecuteUbergraph_WBP_DebugPage_Aptitude
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DebugPage_Aptitude_C::ExecuteUbergraph_WBP_DebugPage_Aptitude(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Aptitude.WBP_DebugPage_Aptitude_C.ExecuteUbergraph_WBP_DebugPage_Aptitude");

	UWBP_DebugPage_Aptitude_C_ExecuteUbergraph_WBP_DebugPage_Aptitude_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
