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

// Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.OnPreviewMouseButtonDown
struct UWBP_MapScrollableTick_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.OnMouseButtonUp
struct UWBP_MapScrollableTick_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.OnMouseMove
struct UWBP_MapScrollableTick_C_OnMouseMove_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.OnMouseWheel
struct UWBP_MapScrollableTick_C_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.OnKeyDown
struct UWBP_MapScrollableTick_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.InitializeMapZoom
struct UWBP_MapScrollableTick_C_InitializeMapZoom_Params
{
	struct FGeometry                                   Geometry;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.GetScrollSpeed
struct UWBP_MapScrollableTick_C_GetScrollSpeed_Params
{
	float                                              ScrollSpeed;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.UpdateMapZoom
struct UWBP_MapScrollableTick_C_UpdateMapZoom_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                                   Geometry;                                                  // 0x0004(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.UpdateMapScroll
struct UWBP_MapScrollableTick_C_UpdateMapScroll_Params
{
	struct FGeometry                                   Geometry;                                                  // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FVector2D                                   ScrollValue;                                               // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.Tick
struct UWBP_MapScrollableTick_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.OnRequestZoom
struct UWBP_MapScrollableTick_C_OnRequestZoom_Params
{
};

// Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.OnMouseEnter
struct UWBP_MapScrollableTick_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.ZoomToLevel
struct UWBP_MapScrollableTick_C_ZoomToLevel_Params
{
	int                                                NewZoomLevel;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MapScrollableTick.WBP_MapScrollableTick_C.ExecuteUbergraph_WBP_MapScrollableTick
struct UWBP_MapScrollableTick_C_ExecuteUbergraph_WBP_MapScrollableTick_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
