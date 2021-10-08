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

// Function CA_UseHeal.CA_UseHeal_C.GetAnimations
struct UCA_UseHeal_C_GetAnimations_Params
{
	TArray<struct FSpineAnimationDefinition>           ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// Function CA_UseHeal.CA_UseHeal_C.ConsumeHeal
struct UCA_UseHeal_C_ConsumeHeal_Params
{
};

// Function CA_UseHeal.CA_UseHeal_C.OnSampleCommandAction
struct UCA_UseHeal_C_OnSampleCommandAction_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_ECommandResult                              ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_UseHeal.CA_UseHeal_C.GetHealComponent
struct UCA_UseHeal_C_GetHealComponent_Params
{
	class UHealComponent*                              HealComponent;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_UseHeal.CA_UseHeal_C.CanStartCommandAction
struct UCA_UseHeal_C_CanStartCommandAction_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CA_UseHeal.CA_UseHeal_C.OnStartCommandAction
struct UCA_UseHeal_C_OnStartCommandAction_Params
{
};

// Function CA_UseHeal.CA_UseHeal_C.OnEndCommandAction
struct UCA_UseHeal_C_OnEndCommandAction_Params
{
	Zenith_ECommandRemoveTypes                         RemoveType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_UseHeal.CA_UseHeal_C.ExecuteUbergraph_CA_UseHeal
struct UCA_UseHeal_C_ExecuteUbergraph_CA_UseHeal_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
