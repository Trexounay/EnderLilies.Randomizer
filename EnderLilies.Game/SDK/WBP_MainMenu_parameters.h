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

// Function WBP_MainMenu.WBP_MainMenu_C.InstantiatePage
struct UWBP_MainMenu_C_InstantiatePage_Params
{
	int                                                PageIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_MainMenu_PageBase_C*                    Output;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MainMenu.WBP_MainMenu_C.IsPageCached
struct UWBP_MainMenu_C_IsPageCached_Params
{
	int                                                PageIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_MainMenu.WBP_MainMenu_C.GetPageIndex
struct UWBP_MainMenu_C_GetPageIndex_Params
{
	int                                                CurrPageIndex;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MainMenu.WBP_MainMenu_C.OnKeyDown
struct UWBP_MainMenu_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_MainMenu.WBP_MainMenu_C.StartSoundSnapshot
struct UWBP_MainMenu_C_StartSoundSnapshot_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.StopSoundSnapshot
struct UWBP_MainMenu_C_StopSoundSnapshot_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.OnPressCancel
struct UWBP_MainMenu_C_OnPressCancel_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_MainMenu.WBP_MainMenu_C.OnPressPrevPage
struct UWBP_MainMenu_C_OnPressPrevPage_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_MainMenu.WBP_MainMenu_C.OnPressNextPage
struct UWBP_MainMenu_C_OnPressNextPage_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_MainMenu.WBP_MainMenu_C.OnFocusReceived
struct UWBP_MainMenu_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_MainMenu.WBP_MainMenu_C.OnFinish_066E292E42E788874C41348F8B0EB052
struct UWBP_MainMenu_C_OnFinish_066E292E42E788874C41348F8B0EB052_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.OnFinish_2071A4134BF576284BB5479C3AA2F471
struct UWBP_MainMenu_C_OnFinish_2071A4134BF576284BB5479C3AA2F471_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.Construct
struct UWBP_MainMenu_C_Construct_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.ResumeGame
struct UWBP_MainMenu_C_ResumeGame_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.ForceClose
struct UWBP_MainMenu_C_ForceClose_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.GoToNextPage
struct UWBP_MainMenu_C_GoToNextPage_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.GoToPrevPage
struct UWBP_MainMenu_C_GoToPrevPage_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.GoToPage
struct UWBP_MainMenu_C_GoToPage_Params
{
	int                                                PageIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MainMenu.WBP_MainMenu_C.OnCategoryClicked
struct UWBP_MainMenu_C_OnCategoryClicked_Params
{
	class UWBP_MainMenu_Category_C*                    Category;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MainMenu.WBP_MainMenu_C.ExecuteUbergraph_WBP_MainMenu
struct UWBP_MainMenu_C_ExecuteUbergraph_WBP_MainMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MainMenu.WBP_MainMenu_C.OnClose__DelegateSignature
struct UWBP_MainMenu_C_OnClose__DelegateSignature_Params
{
};

// Function WBP_MainMenu.WBP_MainMenu_C.OnResumeGame__DelegateSignature
struct UWBP_MainMenu_C_OnResumeGame__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
