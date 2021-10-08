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

// Function WBP_Map_Level.WBP_Map_Level_C.RefreshCompletion
struct UWBP_Map_Level_C_RefreshCompletion_Params
{
};

// Function WBP_Map_Level.WBP_Map_Level_C.SetEnable
struct UWBP_Map_Level_C_SetEnable_Params
{
	bool                                               Index;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Map_Level.WBP_Map_Level_C.ContainsRestPoint
struct UWBP_Map_Level_C_ContainsRestPoint_Params
{
	bool                                               ContainsRestPoint;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Map_Level.WBP_Map_Level_C.GetIsCurrentMap
struct UWBP_Map_Level_C_GetIsCurrentMap_Params
{
	bool                                               IsCurrentMap;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Map_Level.WBP_Map_Level_C.GetGameMapID
struct UWBP_Map_Level_C_GetGameMapID_Params
{
	struct FName                                       GameMapID;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Map_Level.WBP_Map_Level_C.PreConstruct
struct UWBP_Map_Level_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Map_Level.WBP_Map_Level_C.Construct
struct UWBP_Map_Level_C_Construct_Params
{
};

// Function WBP_Map_Level.WBP_Map_Level_C.RefreshCurrentMap
struct UWBP_Map_Level_C_RefreshCurrentMap_Params
{
};

// Function WBP_Map_Level.WBP_Map_Level_C.SetHighlightEnabled
struct UWBP_Map_Level_C_SetHighlightEnabled_Params
{
	bool                                               Enabled;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Map_Level.WBP_Map_Level_C.ExecuteUbergraph_WBP_Map_Level
struct UWBP_Map_Level_C_ExecuteUbergraph_WBP_Map_Level_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
