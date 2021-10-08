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

// Function WBP_Map_Link.WBP_Map_Link_C.UpdateLinkVisibility
struct UWBP_Map_Link_C_UpdateLinkVisibility_Params
{
};

// Function WBP_Map_Link.WBP_Map_Link_C.UpdateMapVisibility
struct UWBP_Map_Link_C_UpdateMapVisibility_Params
{
	class UWBP_Map_Level_C*                            Map;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Base;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Visible;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Map_Link.WBP_Map_Link_C.Construct
struct UWBP_Map_Link_C_Construct_Params
{
};

// Function WBP_Map_Link.WBP_Map_Link_C.ForceVisible
struct UWBP_Map_Link_C_ForceVisible_Params
{
};

// Function WBP_Map_Link.WBP_Map_Link_C.ExecuteUbergraph_WBP_Map_Link
struct UWBP_Map_Link_C_ExecuteUbergraph_WBP_Map_Link_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
