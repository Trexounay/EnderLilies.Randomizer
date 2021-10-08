#pragma once

// Name: enderlilies, Version: 1.1.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_GameplayCamera.BP_GameplayCamera_C.InpActEvt_CameraReset_K2Node_InputActionEvent_1
struct ABP_GameplayCamera_C_InpActEvt_CameraReset_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BP_GameplayCamera.BP_GameplayCamera_C.ActivateStreamingTrigger
struct ABP_GameplayCamera_C_ActivateStreamingTrigger_Params
{
};

// Function BP_GameplayCamera.BP_GameplayCamera_C.ReceiveTick
struct ABP_GameplayCamera_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameplayCamera.BP_GameplayCamera_C.InpAxisEvt_CameraAltY_K2Node_InputAxisEvent_1
struct ABP_GameplayCamera_C_InpAxisEvt_CameraAltY_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameplayCamera.BP_GameplayCamera_C.ReceiveBeginPlay
struct ABP_GameplayCamera_C_ReceiveBeginPlay_Params
{
};

// Function BP_GameplayCamera.BP_GameplayCamera_C.ReceiveEndPlay
struct ABP_GameplayCamera_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GameplayCamera.BP_GameplayCamera_C.ExecuteUbergraph_BP_GameplayCamera
struct ABP_GameplayCamera_C_ExecuteUbergraph_BP_GameplayCamera_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
