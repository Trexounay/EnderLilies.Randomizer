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

// Function BP_Interactable_Button.BP_Interactable_Button_C.StopSoundEventWhilePressed
struct ABP_Interactable_Button_C_StopSoundEventWhilePressed_Params
{
};

// Function BP_Interactable_Button.BP_Interactable_Button_C.PlaySoundEventWhilePressed
struct ABP_Interactable_Button_C_PlaySoundEventWhilePressed_Params
{
};

// Function BP_Interactable_Button.BP_Interactable_Button_C.GetIsPressed
struct ABP_Interactable_Button_C_GetIsPressed_Params
{
	bool                                               IsPressed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Interactable_Button.BP_Interactable_Button_C.SetIsPressed
struct ABP_Interactable_Button_C_SetIsPressed_Params
{
	bool                                               IsPressed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Interactable_Button.BP_Interactable_Button_C.Release
struct ABP_Interactable_Button_C_Release_Params
{
};

// Function BP_Interactable_Button.BP_Interactable_Button_C.Press
struct ABP_Interactable_Button_C_Press_Params
{
};

// Function BP_Interactable_Button.BP_Interactable_Button_C.OnIsInteractable
struct ABP_Interactable_Button_C_OnIsInteractable_Params
{
	class APlayerController*                           Controller;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_Interactable_Button.BP_Interactable_Button_C.OnInteract
struct ABP_Interactable_Button_C_OnInteract_Params
{
	class APlayerController*                           Controller;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Interactable_Button.BP_Interactable_Button_C.OnInteractableAlreadyCleared
struct ABP_Interactable_Button_C_OnInteractableAlreadyCleared_Params
{
};

// Function BP_Interactable_Button.BP_Interactable_Button_C.OnPress
struct ABP_Interactable_Button_C_OnPress_Params
{
};

// Function BP_Interactable_Button.BP_Interactable_Button_C.OnRelease
struct ABP_Interactable_Button_C_OnRelease_Params
{
};

// Function BP_Interactable_Button.BP_Interactable_Button_C.ReceiveEndPlay
struct ABP_Interactable_Button_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Interactable_Button.BP_Interactable_Button_C.ExecuteUbergraph_BP_Interactable_Button
struct ABP_Interactable_Button_C_ExecuteUbergraph_BP_Interactable_Button_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Interactable_Button.BP_Interactable_Button_C.OnStateChanged__DelegateSignature
struct ABP_Interactable_Button_C_OnStateChanged__DelegateSignature_Params
{
	class ABP_Interactable_Button_C*                   Button;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
