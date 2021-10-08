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

// Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.On_ArrowRight_MouseButtonDown
struct UWBP_DebugMenuValueEntry_C_On_ArrowRight_MouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.On_ArrowLeft_MouseButtonDown
struct UWBP_DebugMenuValueEntry_C_On_ArrowLeft_MouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.RefreshStatusText
struct UWBP_DebugMenuValueEntry_C_RefreshStatusText_Params
{
};

// Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.OnKeyDown
struct UWBP_DebugMenuValueEntry_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.PreConstruct
struct UWBP_DebugMenuValueEntry_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.Tick
struct UWBP_DebugMenuValueEntry_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.Increment
struct UWBP_DebugMenuValueEntry_C_Increment_Params
{
};

// Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.Decrement
struct UWBP_DebugMenuValueEntry_C_Decrement_Params
{
};

// Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.SetValue
struct UWBP_DebugMenuValueEntry_C_SetValue_Params
{
	int                                                Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.ExecuteUbergraph_WBP_DebugMenuValueEntry
struct UWBP_DebugMenuValueEntry_C_ExecuteUbergraph_WBP_DebugMenuValueEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_DebugMenuValueEntry.WBP_DebugMenuValueEntry_C.OnValueChanged__DelegateSignature
struct UWBP_DebugMenuValueEntry_C_OnValueChanged__DelegateSignature_Params
{
	int                                                NewValue;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
