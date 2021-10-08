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

// Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.IsCurrentMap
struct UWBP_FastTravel_Button_C_IsCurrentMap_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.OnFocusReceived
struct UWBP_FastTravel_Button_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.Construct
struct UWBP_FastTravel_Button_C_Construct_Params
{
};

// Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.RefreshDesign
struct UWBP_FastTravel_Button_C_RefreshDesign_Params
{
	bool                                               bFocused;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.BndEvt__WBP_RestMenuButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWBP_FastTravel_Button_C_BndEvt__WBP_RestMenuButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.ExecuteUbergraph_WBP_FastTravel_Button
struct UWBP_FastTravel_Button_C_ExecuteUbergraph_WBP_FastTravel_Button_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.OnFocused__DelegateSignature
struct UWBP_FastTravel_Button_C_OnFocused__DelegateSignature_Params
{
	class UWBP_FastTravel_Button_C*                    FastTravelButton;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_FastTravel_Button.WBP_FastTravel_Button_C.OnConfirmed__DelegateSignature
struct UWBP_FastTravel_Button_C_OnConfirmed__DelegateSignature_Params
{
	class UWBP_FastTravel_Button_C*                    FastTravelButton;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
