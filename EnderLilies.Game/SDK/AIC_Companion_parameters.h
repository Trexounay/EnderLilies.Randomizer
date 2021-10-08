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

// Function AIC_Companion.AIC_Companion_C.ReceiveUnPossess
struct AAIC_Companion_C_ReceiveUnPossess_Params
{
	class APawn*                                       UnpossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_Companion.AIC_Companion_C.ReceivePossess
struct AAIC_Companion_C_ReceivePossess_Params
{
	class APawn*                                       PossessedPawn;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AIC_Companion.AIC_Companion_C.ExecuteUbergraph_AIC_Companion
struct AAIC_Companion_C_ExecuteUbergraph_AIC_Companion_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
