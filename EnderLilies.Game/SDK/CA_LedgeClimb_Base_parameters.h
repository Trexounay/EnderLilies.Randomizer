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

// Function CA_LedgeClimb_Base.CA_LedgeClimb_Base_C.RefreshIKBoneLocation
struct UCA_LedgeClimb_Base_C_RefreshIKBoneLocation_Params
{
};

// Function CA_LedgeClimb_Base.CA_LedgeClimb_Base_C.CacheClimbTargetLocation
struct UCA_LedgeClimb_Base_C_CacheClimbTargetLocation_Params
{
};

// Function CA_LedgeClimb_Base.CA_LedgeClimb_Base_C.OnSampleCommandAction
struct UCA_LedgeClimb_Base_C_OnSampleCommandAction_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_ECommandResult                              ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_LedgeClimb_Base.CA_LedgeClimb_Base_C.OnEndCommandAction
struct UCA_LedgeClimb_Base_C_OnEndCommandAction_Params
{
	Zenith_ECommandRemoveTypes                         RemoveType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_LedgeClimb_Base.CA_LedgeClimb_Base_C.OnStartCommandAction
struct UCA_LedgeClimb_Base_C_OnStartCommandAction_Params
{
};

// Function CA_LedgeClimb_Base.CA_LedgeClimb_Base_C.OnChangePawn
struct UCA_LedgeClimb_Base_C_OnChangePawn_Params
{
	class APawn*                                       OldPawnSubject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       NewPawnSubject;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_LedgeClimb_Base.CA_LedgeClimb_Base_C.ExecuteUbergraph_CA_LedgeClimb_Base
struct UCA_LedgeClimb_Base_C_ExecuteUbergraph_CA_LedgeClimb_Base_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
