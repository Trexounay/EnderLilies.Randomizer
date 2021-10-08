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

// Function WBP_SummonDecks.WBP_SummonDecks_C.PlayAnimToSlotB
struct UWBP_SummonDecks_C_PlayAnimToSlotB_Params
{
	bool                                               SkipAnimation;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SummonDecks.WBP_SummonDecks_C.PlayAnimToSlotA
struct UWBP_SummonDecks_C_PlayAnimToSlotA_Params
{
	bool                                               SkipAnimation;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SummonDecks.WBP_SummonDecks_C.Initialize
struct UWBP_SummonDecks_C_Initialize_Params
{
	class AZenithPlayerController*                     Controller;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SummonDecks.WBP_SummonDecks_C.OnSwitchSummonSet
struct UWBP_SummonDecks_C_OnSwitchSummonSet_Params
{
	Zenith_ESummonSet                                  PrevSummonSet;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_ESummonSet                                  NewSummonSet;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_SummonDecks.WBP_SummonDecks_C.RefreshSetSwitch
struct UWBP_SummonDecks_C_RefreshSetSwitch_Params
{
};

// Function WBP_SummonDecks.WBP_SummonDecks_C.PlaySwitchSummonSetAnim
struct UWBP_SummonDecks_C_PlaySwitchSummonSetAnim_Params
{
	Zenith_ESummonSet                                  NewSummonSet;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SkipAnimation;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_SummonDecks.WBP_SummonDecks_C.ExecuteUbergraph_WBP_SummonDecks
struct UWBP_SummonDecks_C_ExecuteUbergraph_WBP_SummonDecks_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
