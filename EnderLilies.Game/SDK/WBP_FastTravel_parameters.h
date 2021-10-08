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

// Function WBP_FastTravel.WBP_FastTravel_C.SetupWrapNavigationRules
struct UWBP_FastTravel_C_SetupWrapNavigationRules_Params
{
};

// Function WBP_FastTravel.WBP_FastTravel_C.OnPressContext
struct UWBP_FastTravel_C_OnPressContext_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_FastTravel.WBP_FastTravel_C.OnPressPrevPage
struct UWBP_FastTravel_C_OnPressPrevPage_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_FastTravel.WBP_FastTravel_C.OnPressNextPage
struct UWBP_FastTravel_C_OnPressNextPage_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_FastTravel.WBP_FastTravel_C.CreateMapItemList
struct UWBP_FastTravel_C_CreateMapItemList_Params
{
};

// Function WBP_FastTravel.WBP_FastTravel_C.OnFocusReceived
struct UWBP_FastTravel_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_FastTravel.WBP_FastTravel_C.OnPressCancel
struct UWBP_FastTravel_C_OnPressCancel_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_FastTravel.WBP_FastTravel_C.OnFinish_066E292E42E788874C41348FD992F285
struct UWBP_FastTravel_C_OnFinish_066E292E42E788874C41348FD992F285_Params
{
};

// Function WBP_FastTravel.WBP_FastTravel_C.OnFinish_2071A4134BF576284BB5479C683EB6A6
struct UWBP_FastTravel_C_OnFinish_2071A4134BF576284BB5479C683EB6A6_Params
{
};

// Function WBP_FastTravel.WBP_FastTravel_C.OnFinish_066E292E42E788874C41348FC5F08AB2
struct UWBP_FastTravel_C_OnFinish_066E292E42E788874C41348FC5F08AB2_Params
{
};

// Function WBP_FastTravel.WBP_FastTravel_C.OnFinish_2071A4134BF576284BB5479C745CCE91
struct UWBP_FastTravel_C_OnFinish_2071A4134BF576284BB5479C745CCE91_Params
{
};

// Function WBP_FastTravel.WBP_FastTravel_C.Construct
struct UWBP_FastTravel_C_Construct_Params
{
};

// Function WBP_FastTravel.WBP_FastTravel_C.CloseMenu
struct UWBP_FastTravel_C_CloseMenu_Params
{
};

// Function WBP_FastTravel.WBP_FastTravel_C.OnFastTravelButtonConfirmed
struct UWBP_FastTravel_C_OnFastTravelButtonConfirmed_Params
{
	class UWBP_FastTravel_Button_C*                    FastTravelButton;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_FastTravel.WBP_FastTravel_C.OnFastTravelButtonFocused
struct UWBP_FastTravel_C_OnFastTravelButtonFocused_Params
{
	class UWBP_FastTravel_Button_C*                    FastTravelButton;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_FastTravel.WBP_FastTravel_C.PreConstruct
struct UWBP_FastTravel_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_FastTravel.WBP_FastTravel_C.ExecuteUbergraph_WBP_FastTravel
struct UWBP_FastTravel_C_ExecuteUbergraph_WBP_FastTravel_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_FastTravel.WBP_FastTravel_C.OnRequestFastTravel__DelegateSignature
struct UWBP_FastTravel_C_OnRequestFastTravel__DelegateSignature_Params
{
	struct FDataTableRowHandle                         GameMapHandle;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_FastTravel.WBP_FastTravel_C.OnClose__DelegateSignature
struct UWBP_FastTravel_C_OnClose__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
