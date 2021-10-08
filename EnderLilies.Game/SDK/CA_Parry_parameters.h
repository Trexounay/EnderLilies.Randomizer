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

// Function CA_Parry.CA_Parry_C.OnSampleCommandAction
struct UCA_Parry_C_OnSampleCommandAction_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_ECommandResult                              ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_Parry.CA_Parry_C.UnbindPawnEvents
struct UCA_Parry_C_UnbindPawnEvents_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_Parry.CA_Parry_C.BindPawnEvents
struct UCA_Parry_C_BindPawnEvents_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_Parry.CA_Parry_C.OnFinish_B7F8FF2342C78B61294C59BC4317558C
struct UCA_Parry_C_OnFinish_B7F8FF2342C78B61294C59BC4317558C_Params
{
};

// Function CA_Parry.CA_Parry_C.OnStartCommandAction
struct UCA_Parry_C_OnStartCommandAction_Params
{
};

// Function CA_Parry.CA_Parry_C.OnParry
struct UCA_Parry_C_OnParry_Params
{
	class AAbility*                                    Ability;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Invoker;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bWillForwardEventToAttacker;                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bTriggerParryAbility;                                      // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CA_Parry.CA_Parry_C.OnEndCommandAction
struct UCA_Parry_C_OnEndCommandAction_Params
{
	Zenith_ECommandRemoveTypes                         RemoveType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CA_Parry.CA_Parry_C.ExecuteUbergraph_CA_Parry
struct UCA_Parry_C_ExecuteUbergraph_CA_Parry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
