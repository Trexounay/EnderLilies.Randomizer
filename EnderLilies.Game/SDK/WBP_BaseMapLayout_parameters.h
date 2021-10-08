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

// Function WBP_BaseMapLayout.WBP_BaseMapLayout_C.GetLevels
struct UWBP_BaseMapLayout_C_GetLevels_Params
{
	TArray<class UWBP_Map_Level_C*>                    Levels;                                                    // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
};

// Function WBP_BaseMapLayout.WBP_BaseMapLayout_C.GetLinks
struct UWBP_BaseMapLayout_C_GetLinks_Params
{
	TArray<class UWBP_Map_Link_C*>                     MapLinks;                                                  // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
