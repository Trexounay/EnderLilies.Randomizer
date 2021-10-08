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

// Function WBP_Map.WBP_Map_C.FindMapItem
struct UWBP_Map_C_FindMapItem_Params
{
	struct FName                                       MapID;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Map_Level_C*                            MapLevelItem;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Map.WBP_Map_C.GenerateMapLinkList
struct UWBP_Map_C_GenerateMapLinkList_Params
{
};

// Function WBP_Map.WBP_Map_C.GenerateMapLevelItemList
struct UWBP_Map_C_GenerateMapLevelItemList_Params
{
};

// Function WBP_Map.WBP_Map_C.GetCurrentMapItem
struct UWBP_Map_C_GetCurrentMapItem_Params
{
	class UWBP_Map_Level_C*                            MapItem;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Map.WBP_Map_C.Construct
struct UWBP_Map_C_Construct_Params
{
};

// Function WBP_Map.WBP_Map_C.OnMapItemConfirm
struct UWBP_Map_C_OnMapItemConfirm_Params
{
	class UWBP_Map_Level_C*                            MapLevel;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Map.WBP_Map_C.SetupMap
struct UWBP_Map_C_SetupMap_Params
{
};

// Function WBP_Map.WBP_Map_C.RefreshCurrentMap
struct UWBP_Map_C_RefreshCurrentMap_Params
{
};

// Function WBP_Map.WBP_Map_C.OnPlayerOpenWorld
struct UWBP_Map_C_OnPlayerOpenWorld_Params
{
};

// Function WBP_Map.WBP_Map_C.OnGameMapSwitch
struct UWBP_Map_C_OnGameMapSwitch_Params
{
};

// Function WBP_Map.WBP_Map_C.OnMapItemFocused
struct UWBP_Map_C_OnMapItemFocused_Params
{
	class UWBP_Map_Level_C*                            MapLevelItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Map.WBP_Map_C.PreConstruct
struct UWBP_Map_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Map.WBP_Map_C.SetMapBGVisibility
struct UWBP_Map_C_SetMapBGVisibility_Params
{
	UMG_ESlateVisibility                               InVisibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Map.WBP_Map_C.OnMapCompletionUpdated
struct UWBP_Map_C_OnMapCompletionUpdated_Params
{
};

// Function WBP_Map.WBP_Map_C.OnClearedObjectManagerReady
struct UWBP_Map_C_OnClearedObjectManagerReady_Params
{
};

// Function WBP_Map.WBP_Map_C.ExecuteUbergraph_WBP_Map
struct UWBP_Map_C_ExecuteUbergraph_WBP_Map_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Map.WBP_Map_C.OnMapItemGotFocused__DelegateSignature
struct UWBP_Map_C_OnMapItemGotFocused__DelegateSignature_Params
{
	class UWBP_Map_Level_C*                            MapLevelItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Map.WBP_Map_C.OnMapItemConfirmed__DelegateSignature
struct UWBP_Map_C_OnMapItemConfirmed__DelegateSignature_Params
{
	class UWBP_Map_Level_C*                            MapLevelItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
