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

// Function WBP_Experience.WBP_Experience_C.Initialize
struct UWBP_Experience_C_Initialize_Params
{
	class UParameterPlayerComponent*                   ParameterComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Experience.WBP_Experience_C.RefreshExpPoints
struct UWBP_Experience_C_RefreshExpPoints_Params
{
};

// Function WBP_Experience.WBP_Experience_C.RefreshAll
struct UWBP_Experience_C_RefreshAll_Params
{
};

// Function WBP_Experience.WBP_Experience_C.RefreshLevel
struct UWBP_Experience_C_RefreshLevel_Params
{
};

// Function WBP_Experience.WBP_Experience_C.OnAddExpPoint
struct UWBP_Experience_C_OnAddExpPoint_Params
{
};

// Function WBP_Experience.WBP_Experience_C.OnLevelUp
struct UWBP_Experience_C_OnLevelUp_Params
{
	bool                                               ExecuteVisuals;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Experience.WBP_Experience_C.ExecuteUbergraph_WBP_Experience
struct UWBP_Experience_C_ExecuteUbergraph_WBP_Experience_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
