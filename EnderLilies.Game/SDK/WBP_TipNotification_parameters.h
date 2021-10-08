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

// Function WBP_TipNotification.WBP_TipNotification_C.LaunchNewTipAnim
struct UWBP_TipNotification_C_LaunchNewTipAnim_Params
{
};

// Function WBP_TipNotification.WBP_TipNotification_C.OnAnimationFinished
struct UWBP_TipNotification_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_TipNotification.WBP_TipNotification_C.QueueTipNotification
struct UWBP_TipNotification_C_QueueTipNotification_Params
{
	struct FDataTableRowHandle                         TipDataHandle;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_TipNotification.WBP_TipNotification_C.Construct
struct UWBP_TipNotification_C_Construct_Params
{
};

// Function WBP_TipNotification.WBP_TipNotification_C.ExecuteUbergraph_WBP_TipNotification
struct UWBP_TipNotification_C_ExecuteUbergraph_WBP_TipNotification_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
