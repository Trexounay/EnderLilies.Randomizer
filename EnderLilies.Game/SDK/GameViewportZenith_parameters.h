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

// Function GameViewportZenith.GameViewportZenith_C.OnControllerConnected
struct UGameViewportZenith_C_OnControllerConnected_Params
{
	int                                                ControllerId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameViewportZenith.GameViewportZenith_C.OnControllerDisconnected
struct UGameViewportZenith_C_OnControllerDisconnected_Params
{
	int                                                ControllerId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameViewportZenith.GameViewportZenith_C.OnKeyDownBP
struct UGameViewportZenith_C_OnKeyDownBP_Params
{
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GameViewportZenith.GameViewportZenith_C.OnMouseMoveBP
struct UGameViewportZenith_C_OnMouseMoveBP_Params
{
	struct FPointerEvent                               MouseEvent;                                                // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GameViewportZenith.GameViewportZenith_C.OnMouseDownBP
struct UGameViewportZenith_C_OnMouseDownBP_Params
{
	struct FPointerEvent                               MouseEvent;                                                // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GameViewportZenith.GameViewportZenith_C.OnReceivedFocus
struct UGameViewportZenith_C_OnReceivedFocus_Params
{
};

// Function GameViewportZenith.GameViewportZenith_C.OnApplicationDeactivated
struct UGameViewportZenith_C_OnApplicationDeactivated_Params
{
};

// Function GameViewportZenith.GameViewportZenith_C.OnApplicationReactivated
struct UGameViewportZenith_C_OnApplicationReactivated_Params
{
};

// Function GameViewportZenith.GameViewportZenith_C.ExecuteUbergraph_GameViewportZenith
struct UGameViewportZenith_C_ExecuteUbergraph_GameViewportZenith_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
