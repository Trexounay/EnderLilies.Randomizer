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

// Function CA_ParryActivation.CA_ParryActivation_C.OnStartCommandAction
struct UCA_ParryActivation_C_OnStartCommandAction_Params
{
};

// Function CA_ParryActivation.CA_ParryActivation_C.OnEndCommandAction
struct UCA_ParryActivation_C_OnEndCommandAction_Params
{
	Zenith_ECommandRemoveTypes                         RemoveType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_ParryActivation.CA_ParryActivation_C.ExecuteUbergraph_CA_ParryActivation
struct UCA_ParryActivation_C_ExecuteUbergraph_CA_ParryActivation_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
