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

// Function CA_s5060_Hook.CA_s5060_Hook_C.UpdateWireEffectEndLocation
struct UCA_s5060_Hook_C_UpdateWireEffectEndLocation_Params
{
};

// Function CA_s5060_Hook.CA_s5060_Hook_C.GetWireStartLocation
struct UCA_s5060_Hook_C_GetWireStartLocation_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_s5060_Hook.CA_s5060_Hook_C.UpdateWireEffectStartLocation
struct UCA_s5060_Hook_C_UpdateWireEffectStartLocation_Params
{
};

// Function CA_s5060_Hook.CA_s5060_Hook_C.PlayBlendAnims
struct UCA_s5060_Hook_C_PlayBlendAnims_Params
{
	TArray<struct FString>                             Array;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                TrackIndex;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_s5060_Hook.CA_s5060_Hook_C.SetAnimationBlend
struct UCA_s5060_Hook_C_SetAnimationBlend_Params
{
	float                                              BlendValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_s5060_Hook.CA_s5060_Hook_C.GetBlendValue
struct UCA_s5060_Hook_C_GetBlendValue_Params
{
	float                                              BlendValue;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_s5060_Hook.CA_s5060_Hook_C.OnSampleCommandAction
struct UCA_s5060_Hook_C_OnSampleCommandAction_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_ECommandResult                              ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_s5060_Hook.CA_s5060_Hook_C.OnStartCommandAction
struct UCA_s5060_Hook_C_OnStartCommandAction_Params
{
};

// Function CA_s5060_Hook.CA_s5060_Hook_C.OnEndCommandAction
struct UCA_s5060_Hook_C_OnEndCommandAction_Params
{
	Zenith_ECommandRemoveTypes                         RemoveType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_s5060_Hook.CA_s5060_Hook_C.OnChangePawn
struct UCA_s5060_Hook_C_OnChangePawn_Params
{
	class APawn*                                       OldPawnSubject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       NewPawnSubject;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_s5060_Hook.CA_s5060_Hook_C.ExecuteUbergraph_CA_s5060_Hook
struct UCA_s5060_Hook_C_ExecuteUbergraph_CA_s5060_Hook_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
