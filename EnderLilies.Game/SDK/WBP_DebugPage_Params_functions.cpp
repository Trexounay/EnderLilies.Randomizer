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
//		Name   -> Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.OnFocusReceived
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_DebugPage_Params_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.OnFocusReceived");

	UWBP_DebugPage_Params_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__DifficultyLevel_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DebugPage_Params_C::BndEvt__DifficultyLevel_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(int NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__DifficultyLevel_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature");

	UWBP_DebugPage_Params_C_BndEvt__DifficultyLevel_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__PlayerLevel_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DebugPage_Params_C::BndEvt__PlayerLevel_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(int NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__PlayerLevel_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");

	UWBP_DebugPage_Params_C_BndEvt__PlayerLevel_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__HealCountLevel_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DebugPage_Params_C::BndEvt__HealCountLevel_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(int NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__HealCountLevel_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");

	UWBP_DebugPage_Params_C_BndEvt__HealCountLevel_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__HealPowerLevel_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DebugPage_Params_C::BndEvt__HealPowerLevel_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(int NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__HealPowerLevel_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature");

	UWBP_DebugPage_Params_C_BndEvt__HealPowerLevel_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_DebugPage_Params_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.Construct");

	UWBP_DebugPage_Params_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__WBP_DebugMenuButtonEntry_K2Node_ComponentBoundEvent_4_OnExecute__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Params_C::BndEvt__WBP_DebugMenuButtonEntry_K2Node_ComponentBoundEvent_4_OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__WBP_DebugMenuButtonEntry_K2Node_ComponentBoundEvent_4_OnExecute__DelegateSignature");

	UWBP_DebugPage_Params_C_BndEvt__WBP_DebugMenuButtonEntry_K2Node_ComponentBoundEvent_4_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__AddHPUpLv2_K2Node_ComponentBoundEvent_5_OnExecute__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Params_C::BndEvt__AddHPUpLv2_K2Node_ComponentBoundEvent_5_OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__AddHPUpLv2_K2Node_ComponentBoundEvent_5_OnExecute__DelegateSignature");

	UWBP_DebugPage_Params_C_BndEvt__AddHPUpLv2_K2Node_ComponentBoundEvent_5_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__AddHPUpLv3_K2Node_ComponentBoundEvent_6_OnExecute__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Params_C::BndEvt__AddHPUpLv3_K2Node_ComponentBoundEvent_6_OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__AddHPUpLv3_K2Node_ComponentBoundEvent_6_OnExecute__DelegateSignature");

	UWBP_DebugPage_Params_C_BndEvt__AddHPUpLv3_K2Node_ComponentBoundEvent_6_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__AddSpiritCurrencyLv1_K2Node_ComponentBoundEvent_7_OnExecute__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Params_C::BndEvt__AddSpiritCurrencyLv1_K2Node_ComponentBoundEvent_7_OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__AddSpiritCurrencyLv1_K2Node_ComponentBoundEvent_7_OnExecute__DelegateSignature");

	UWBP_DebugPage_Params_C_BndEvt__AddSpiritCurrencyLv1_K2Node_ComponentBoundEvent_7_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__AddSpiritCurrencyLv2_K2Node_ComponentBoundEvent_8_OnExecute__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Params_C::BndEvt__AddSpiritCurrencyLv2_K2Node_ComponentBoundEvent_8_OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__AddSpiritCurrencyLv2_K2Node_ComponentBoundEvent_8_OnExecute__DelegateSignature");

	UWBP_DebugPage_Params_C_BndEvt__AddSpiritCurrencyLv2_K2Node_ComponentBoundEvent_8_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__RestoreAllHeals_K2Node_ComponentBoundEvent_9_OnExecute__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Params_C::BndEvt__RestoreAllHeals_K2Node_ComponentBoundEvent_9_OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__RestoreAllHeals_K2Node_ComponentBoundEvent_9_OnExecute__DelegateSignature");

	UWBP_DebugPage_Params_C_BndEvt__RestoreAllHeals_K2Node_ComponentBoundEvent_9_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__HealPowerLevel_1_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DebugPage_Params_C::BndEvt__HealPowerLevel_1_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature(int NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__HealPowerLevel_1_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature");

	UWBP_DebugPage_Params_C_BndEvt__HealPowerLevel_1_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__AddSpiritCurrencyLv3_K2Node_ComponentBoundEvent_11_OnExecute__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Params_C::BndEvt__AddSpiritCurrencyLv3_K2Node_ComponentBoundEvent_11_OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__AddSpiritCurrencyLv3_K2Node_ComponentBoundEvent_11_OnExecute__DelegateSignature");

	UWBP_DebugPage_Params_C_BndEvt__AddSpiritCurrencyLv3_K2Node_ComponentBoundEvent_11_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__PlayerSkinLevel_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DebugPage_Params_C::BndEvt__PlayerSkinLevel_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature(int NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__PlayerSkinLevel_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature");

	UWBP_DebugPage_Params_C_BndEvt__PlayerSkinLevel_K2Node_ComponentBoundEvent_12_OnValueChanged__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__WBP_DebugPage_Params_FinalPassivePartCount_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DebugPage_Params_C::BndEvt__WBP_DebugPage_Params_FinalPassivePartCount_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature(int NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__WBP_DebugPage_Params_FinalPassivePartCount_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature");

	UWBP_DebugPage_Params_C_BndEvt__WBP_DebugPage_Params_FinalPassivePartCount_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__WBP_DebugPage_Params_SimulateEndingA_K2Node_ComponentBoundEvent_14_OnExecute__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Params_C::BndEvt__WBP_DebugPage_Params_SimulateEndingA_K2Node_ComponentBoundEvent_14_OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__WBP_DebugPage_Params_SimulateEndingA_K2Node_ComponentBoundEvent_14_OnExecute__DelegateSignature");

	UWBP_DebugPage_Params_C_BndEvt__WBP_DebugPage_Params_SimulateEndingA_K2Node_ComponentBoundEvent_14_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__WBP_DebugPage_Params_SimulateEndingB_K2Node_ComponentBoundEvent_15_OnExecute__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Params_C::BndEvt__WBP_DebugPage_Params_SimulateEndingB_K2Node_ComponentBoundEvent_15_OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__WBP_DebugPage_Params_SimulateEndingB_K2Node_ComponentBoundEvent_15_OnExecute__DelegateSignature");

	UWBP_DebugPage_Params_C_BndEvt__WBP_DebugPage_Params_SimulateEndingB_K2Node_ComponentBoundEvent_15_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__WBP_DebugPage_Params_SimulateEndingC_K2Node_ComponentBoundEvent_16_OnExecute__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UWBP_DebugPage_Params_C::BndEvt__WBP_DebugPage_Params_SimulateEndingC_K2Node_ComponentBoundEvent_16_OnExecute__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__WBP_DebugPage_Params_SimulateEndingC_K2Node_ComponentBoundEvent_16_OnExecute__DelegateSignature");

	UWBP_DebugPage_Params_C_BndEvt__WBP_DebugPage_Params_SimulateEndingC_K2Node_ComponentBoundEvent_16_OnExecute__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__WBP_DebugPage_Params_NGGeneration_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		int                                                NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DebugPage_Params_C::BndEvt__WBP_DebugPage_Params_NGGeneration_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature(int NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.BndEvt__WBP_DebugPage_Params_NGGeneration_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature");

	UWBP_DebugPage_Params_C_BndEvt__WBP_DebugPage_Params_NGGeneration_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.ExecuteUbergraph_WBP_DebugPage_Params
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DebugPage_Params_C::ExecuteUbergraph_WBP_DebugPage_Params(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DebugPage_Params.WBP_DebugPage_Params_C.ExecuteUbergraph_WBP_DebugPage_Params");

	UWBP_DebugPage_Params_C_ExecuteUbergraph_WBP_DebugPage_Params_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
