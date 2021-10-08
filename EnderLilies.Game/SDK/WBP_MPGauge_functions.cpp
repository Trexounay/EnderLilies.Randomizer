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
//		Name   -> Function WBP_MPGauge.WBP_MPGauge_C.SequenceEvent__ENTRYPOINTWBP_MPGauge_2
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_MPGauge_C::SequenceEvent__ENTRYPOINTWBP_MPGauge_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MPGauge.WBP_MPGauge_C.SequenceEvent__ENTRYPOINTWBP_MPGauge_2");

	UWBP_MPGauge_C_SequenceEvent__ENTRYPOINTWBP_MPGauge_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MPGauge.WBP_MPGauge_C.SequenceEvent__ENTRYPOINTWBP_MPGauge_1
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UWBP_MPGauge_C::SequenceEvent__ENTRYPOINTWBP_MPGauge_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MPGauge.WBP_MPGauge_C.SequenceEvent__ENTRYPOINTWBP_MPGauge_1");

	UWBP_MPGauge_C_SequenceEvent__ENTRYPOINTWBP_MPGauge_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MPGauge.WBP_MPGauge_C.SampleMPFullIdle
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Frame                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class UImage*                                      Gauge                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MPGauge_C::SampleMPFullIdle(class UWidget* Frame, class UImage* Gauge)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MPGauge.WBP_MPGauge_C.SampleMPFullIdle");

	UWBP_MPGauge_C_SampleMPFullIdle_Params params;
	params.Frame = Frame;
	params.Gauge = Gauge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MPGauge.WBP_MPGauge_C.SetEnableState
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_MPGauge_C::SetEnableState(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MPGauge.WBP_MPGauge_C.SetEnableState");

	UWBP_MPGauge_C_SetEnableState_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MPGauge.WBP_MPGauge_C.RefreshMpGauge
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_MPGauge_C::RefreshMpGauge()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MPGauge.WBP_MPGauge_C.RefreshMpGauge");

	UWBP_MPGauge_C_RefreshMpGauge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MPGauge.WBP_MPGauge_C.RefreshVisibility
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UWBP_MPGauge_C::RefreshVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MPGauge.WBP_MPGauge_C.RefreshVisibility");

	UWBP_MPGauge_C_RefreshVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MPGauge.WBP_MPGauge_C.GetMaxMP
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		int                                                Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MPGauge_C::GetMaxMP(int* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MPGauge.WBP_MPGauge_C.GetMaxMP");

	UWBP_MPGauge_C_GetMaxMP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MPGauge.WBP_MPGauge_C.GetMP
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		int                                                Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MPGauge_C::GetMP(int* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MPGauge.WBP_MPGauge_C.GetMP");

	UWBP_MPGauge_C_GetMP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MPGauge.WBP_MPGauge_C.Get_MPGauge_Percent
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UWBP_MPGauge_C::Get_MPGauge_Percent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MPGauge.WBP_MPGauge_C.Get_MPGauge_Percent");

	UWBP_MPGauge_C_Get_MPGauge_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MPGauge.WBP_MPGauge_C.Sample_OnFirstGaugeFullIdle
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_MPGauge_C::Sample_OnFirstGaugeFullIdle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MPGauge.WBP_MPGauge_C.Sample_OnFirstGaugeFullIdle");

	UWBP_MPGauge_C_Sample_OnFirstGaugeFullIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MPGauge.WBP_MPGauge_C.Sample_OnSecondGaugeFullIdle
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_MPGauge_C::Sample_OnSecondGaugeFullIdle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MPGauge.WBP_MPGauge_C.Sample_OnSecondGaugeFullIdle");

	UWBP_MPGauge_C_Sample_OnSecondGaugeFullIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MPGauge.WBP_MPGauge_C.Initialize
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AZenithPlayerController*                     Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AZenithCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MPGauge_C::Initialize(class AZenithPlayerController* Controller, class AZenithCharacter* Character)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MPGauge.WBP_MPGauge_C.Initialize");

	UWBP_MPGauge_C_Initialize_Params params;
	params.Controller = Controller;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MPGauge.WBP_MPGauge_C.OnMPChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_MPGauge_C::OnMPChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MPGauge.WBP_MPGauge_C.OnMPChanged");

	UWBP_MPGauge_C_OnMPChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MPGauge.WBP_MPGauge_C.OnAptitudeUnlockedDelegate_Event_1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_MPGauge_C::OnAptitudeUnlockedDelegate_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MPGauge.WBP_MPGauge_C.OnAptitudeUnlockedDelegate_Event_1");

	UWBP_MPGauge_C_OnAptitudeUnlockedDelegate_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MPGauge.WBP_MPGauge_C.OnMaxMPChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UWBP_MPGauge_C::OnMaxMPChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MPGauge.WBP_MPGauge_C.OnMaxMPChanged");

	UWBP_MPGauge_C_OnMaxMPChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MPGauge.WBP_MPGauge_C.OnMPGaugeFull
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                GaugeIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MPGauge_C::OnMPGaugeFull(int GaugeIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MPGauge.WBP_MPGauge_C.OnMPGaugeFull");

	UWBP_MPGauge_C_OnMPGaugeFull_Params params;
	params.GaugeIndex = GaugeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MPGauge.WBP_MPGauge_C.OnMPGaugeNotFull
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                GaugeIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MPGauge_C::OnMPGaugeNotFull(int GaugeIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MPGauge.WBP_MPGauge_C.OnMPGaugeNotFull");

	UWBP_MPGauge_C_OnMPGaugeNotFull_Params params;
	params.GaugeIndex = GaugeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_MPGauge.WBP_MPGauge_C.ExecuteUbergraph_WBP_MPGauge
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_MPGauge_C::ExecuteUbergraph_WBP_MPGauge(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_MPGauge.WBP_MPGauge_C.ExecuteUbergraph_WBP_MPGauge");

	UWBP_MPGauge_C_ExecuteUbergraph_WBP_MPGauge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
