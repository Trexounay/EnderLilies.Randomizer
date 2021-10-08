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

// Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.OnFocusReceived
struct UWBP_DefaultScrollView_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.Get_ArrowDown_ColorAndOpacity_1
struct UWBP_DefaultScrollView_C_Get_ArrowDown_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.Get_ArrowUp_ColorAndOpacity_1
struct UWBP_DefaultScrollView_C_Get_ArrowUp_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.PreConstruct
struct UWBP_DefaultScrollView_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.Construct
struct UWBP_DefaultScrollView_C_Construct_Params
{
};

// Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.OnAddedToFocusPath
struct UWBP_DefaultScrollView_C_OnAddedToFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.OnRemovedFromFocusPath
struct UWBP_DefaultScrollView_C_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.OnDescendantFocused
struct UWBP_DefaultScrollView_C_OnDescendantFocused_Params
{
	class UNativeWidgetHost*                           FocusedWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SlateCore_EFocusCause                              FocusCause;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_DefaultScrollView.WBP_DefaultScrollView_C.ExecuteUbergraph_WBP_DefaultScrollView
struct UWBP_DefaultScrollView_C_ExecuteUbergraph_WBP_DefaultScrollView_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
