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
//		Name   -> Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_DebugPage_Default_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.OnFocusReceived");

	UWBP_DebugPage_Default_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_DebugPage_Default_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.Construct");

	UWBP_DebugPage_Default_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.BndEvt__SAVE_K2Node_ComponentBoundEvent_1_OnExecute__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Default_C::BndEvt__SAVE_K2Node_ComponentBoundEvent_1_OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.BndEvt__SAVE_K2Node_ComponentBoundEvent_1_OnExecute__DelegateSignature");

	UWBP_DebugPage_Default_C_BndEvt__SAVE_K2Node_ComponentBoundEvent_1_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.BndEvt__UnlockAllSpirits_K2Node_ComponentBoundEvent_2_OnExecute__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Default_C::BndEvt__UnlockAllSpirits_K2Node_ComponentBoundEvent_2_OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.BndEvt__UnlockAllSpirits_K2Node_ComponentBoundEvent_2_OnExecute__DelegateSignature");

	UWBP_DebugPage_Default_C_BndEvt__UnlockAllSpirits_K2Node_ComponentBoundEvent_2_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.BndEvt__UnlockAllPassives_K2Node_ComponentBoundEvent_3_OnExecute__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Default_C::BndEvt__UnlockAllPassives_K2Node_ComponentBoundEvent_3_OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.BndEvt__UnlockAllPassives_K2Node_ComponentBoundEvent_3_OnExecute__DelegateSignature");

	UWBP_DebugPage_Default_C_BndEvt__UnlockAllPassives_K2Node_ComponentBoundEvent_3_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.BndEvt__TeleportMenu_K2Node_ComponentBoundEvent_4_OnExecute__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Default_C::BndEvt__TeleportMenu_K2Node_ComponentBoundEvent_4_OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.BndEvt__TeleportMenu_K2Node_ComponentBoundEvent_4_OnExecute__DelegateSignature");

	UWBP_DebugPage_Default_C_BndEvt__TeleportMenu_K2Node_ComponentBoundEvent_4_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.OnCloseFastTravel
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DebugPage_Default_C::OnCloseFastTravel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.OnCloseFastTravel");

	UWBP_DebugPage_Default_C_OnCloseFastTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.OnRequestFastTravel
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDataTableRowHandle                         GameMapHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UWBP_DebugPage_Default_C::OnRequestFastTravel(const struct FDataTableRowHandle& GameMapHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.OnRequestFastTravel");

	UWBP_DebugPage_Default_C_OnRequestFastTravel_Params params;
	params.GameMapHandle = GameMapHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.BndEvt__UnlockAllTips_K2Node_ComponentBoundEvent_5_OnExecute__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Default_C::BndEvt__UnlockAllTips_K2Node_ComponentBoundEvent_5_OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.BndEvt__UnlockAllTips_K2Node_ComponentBoundEvent_5_OnExecute__DelegateSignature");

	UWBP_DebugPage_Default_C_BndEvt__UnlockAllTips_K2Node_ComponentBoundEvent_5_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.BndEvt__OpenAllMaps_K2Node_ComponentBoundEvent_6_OnExecute__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Default_C::BndEvt__OpenAllMaps_K2Node_ComponentBoundEvent_6_OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.BndEvt__OpenAllMaps_K2Node_ComponentBoundEvent_6_OnExecute__DelegateSignature");

	UWBP_DebugPage_Default_C_BndEvt__OpenAllMaps_K2Node_ComponentBoundEvent_6_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.BndEvt__EquipMenu_K2Node_ComponentBoundEvent_7_OnExecute__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Default_C::BndEvt__EquipMenu_K2Node_ComponentBoundEvent_7_OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.BndEvt__EquipMenu_K2Node_ComponentBoundEvent_7_OnExecute__DelegateSignature");

	UWBP_DebugPage_Default_C_BndEvt__EquipMenu_K2Node_ComponentBoundEvent_7_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.OnCloseMainMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_DebugPage_Default_C::OnCloseMainMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.OnCloseMainMenu");

	UWBP_DebugPage_Default_C_OnCloseMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.OnSaveFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bSuccess                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_DebugPage_Default_C::OnSaveFinished(bool bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.OnSaveFinished");

	UWBP_DebugPage_Default_C_OnSaveFinished_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.ExecuteUbergraph_WBP_DebugPage_Default
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DebugPage_Default_C::ExecuteUbergraph_WBP_DebugPage_Default(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Default.WBP_DebugPage_Default_C.ExecuteUbergraph_WBP_DebugPage_Default");

	UWBP_DebugPage_Default_C_ExecuteUbergraph_WBP_DebugPage_Default_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
