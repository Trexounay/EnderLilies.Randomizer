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
//		Name   -> Function BP_GameplayCamera.BP_GameplayCamera_C.InpActEvt_CameraReset_K2Node_InputActionEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ABP_GameplayCamera_C::InpActEvt_CameraReset_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameplayCamera.BP_GameplayCamera_C.InpActEvt_CameraReset_K2Node_InputActionEvent_1");

	ABP_GameplayCamera_C_InpActEvt_CameraReset_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_GameplayCamera.BP_GameplayCamera_C.ActivateStreamingTrigger
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_GameplayCamera_C::ActivateStreamingTrigger()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameplayCamera.BP_GameplayCamera_C.ActivateStreamingTrigger");

	ABP_GameplayCamera_C_ActivateStreamingTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_GameplayCamera.BP_GameplayCamera_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GameplayCamera_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameplayCamera.BP_GameplayCamera_C.ReceiveTick");

	ABP_GameplayCamera_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_GameplayCamera.BP_GameplayCamera_C.InpAxisEvt_CameraAltY_K2Node_InputAxisEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GameplayCamera_C::InpAxisEvt_CameraAltY_K2Node_InputAxisEvent_1(float AxisValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameplayCamera.BP_GameplayCamera_C.InpAxisEvt_CameraAltY_K2Node_InputAxisEvent_1");

	ABP_GameplayCamera_C_InpAxisEvt_CameraAltY_K2Node_InputAxisEvent_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_GameplayCamera.BP_GameplayCamera_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_GameplayCamera_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameplayCamera.BP_GameplayCamera_C.ReceiveBeginPlay");

	ABP_GameplayCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_GameplayCamera.BP_GameplayCamera_C.ReceiveEndPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GameplayCamera_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameplayCamera.BP_GameplayCamera_C.ReceiveEndPlay");

	ABP_GameplayCamera_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_GameplayCamera.BP_GameplayCamera_C.ExecuteUbergraph_BP_GameplayCamera
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GameplayCamera_C::ExecuteUbergraph_BP_GameplayCamera(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GameplayCamera.BP_GameplayCamera_C.ExecuteUbergraph_BP_GameplayCamera");

	ABP_GameplayCamera_C_ExecuteUbergraph_BP_GameplayCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
