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

// Function WBP_MapScrollable.WBP_MapScrollable_C.ScrollToCurrentMap
struct UWBP_MapScrollable_C_ScrollToCurrentMap_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_MapScrollable.WBP_MapScrollable_C.ToggleLegendDisplay
struct UWBP_MapScrollable_C_ToggleLegendDisplay_Params
{
};

// Function WBP_MapScrollable.WBP_MapScrollable_C.Center to Map
struct UWBP_MapScrollable_C_Center_to_Map_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MapScrollable.WBP_MapScrollable_C.ClampSides
struct UWBP_MapScrollable_C_ClampSides_Params
{
	struct FGeometry                                   Geometry;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FVector2D                                   Clamp_to_;                                                 // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Clamped;                                                   // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MapScrollable.WBP_MapScrollable_C.OnPressContext
struct UWBP_MapScrollable_C_OnPressContext_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_MapScrollable.WBP_MapScrollable_C.OnFocusReceived
struct UWBP_MapScrollable_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_MapScrollable.WBP_MapScrollable_C.Construct
struct UWBP_MapScrollable_C_Construct_Params
{
};

// Function WBP_MapScrollable.WBP_MapScrollable_C.PreConstruct
struct UWBP_MapScrollable_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_MapScrollable.WBP_MapScrollable_C.ScrollToMap
struct UWBP_MapScrollable_C_ScrollToMap_Params
{
	class UWBP_Map_Level_C*                            MapLevelItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MapScrollable.WBP_MapScrollable_C.ScrollToMapID
struct UWBP_MapScrollable_C_ScrollToMapID_Params
{
	struct FName                                       MapID;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MapScrollable.WBP_MapScrollable_C.ExecuteUbergraph_WBP_MapScrollable
struct UWBP_MapScrollable_C_ExecuteUbergraph_WBP_MapScrollable_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
