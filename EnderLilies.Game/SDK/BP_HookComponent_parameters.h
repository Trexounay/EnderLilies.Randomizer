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

// Function BP_HookComponent.BP_HookComponent_C.ReceiveBeginPlay
struct UBP_HookComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_HookComponent.BP_HookComponent_C.OnHookChanged
struct UBP_HookComponent_C_OnHookChanged_Params
{
};

// Function BP_HookComponent.BP_HookComponent_C.OnLockHook
struct UBP_HookComponent_C_OnLockHook_Params
{
	class AHookPoint*                                  HookPoint;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HookComponent.BP_HookComponent_C.OnUnlockHook
struct UBP_HookComponent_C_OnUnlockHook_Params
{
	class AHookPoint*                                  HookPoint;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HookComponent.BP_HookComponent_C.ReceiveEndPlay
struct UBP_HookComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HookComponent.BP_HookComponent_C.ExecuteUbergraph_BP_HookComponent
struct UBP_HookComponent_C_ExecuteUbergraph_BP_HookComponent_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
