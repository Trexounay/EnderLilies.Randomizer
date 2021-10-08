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

// Function CAS_Hook.CAS_Hook_C.UpdateIKBonesLocation
struct UCAS_Hook_C_UpdateIKBonesLocation_Params
{
};

// Function CAS_Hook.CAS_Hook_C.CanStartCommandAction
struct UCAS_Hook_C_CanStartCommandAction_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CAS_Hook.CAS_Hook_C.LaunchCharacterToHook
struct UCAS_Hook_C_LaunchCharacterToHook_Params
{
};

// Function CAS_Hook.CAS_Hook_C.OnSampleCommandAction
struct UCAS_Hook_C_OnSampleCommandAction_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_ECommandResult                              ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CAS_Hook.CAS_Hook_C.OnStartCommandAction
struct UCAS_Hook_C_OnStartCommandAction_Params
{
};

// Function CAS_Hook.CAS_Hook_C.OnChangePawn
struct UCAS_Hook_C_OnChangePawn_Params
{
	class APawn*                                       OldPawnSubject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       NewPawnSubject;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CAS_Hook.CAS_Hook_C.OnEndCommandAction
struct UCAS_Hook_C_OnEndCommandAction_Params
{
	Zenith_ECommandRemoveTypes                         RemoveType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CAS_Hook.CAS_Hook_C.ExecuteUbergraph_CAS_Hook
struct UCAS_Hook_C_ExecuteUbergraph_CAS_Hook_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
