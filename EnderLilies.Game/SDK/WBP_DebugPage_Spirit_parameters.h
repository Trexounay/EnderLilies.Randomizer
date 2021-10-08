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

// Function WBP_DebugPage_Spirit.WBP_DebugPage_Spirit_C.UnlockAchievement
struct UWBP_DebugPage_Spirit_C_UnlockAchievement_Params
{
	Zenith_EZenithAchievement                          Achievement;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_DebugPage_Spirit.WBP_DebugPage_Spirit_C.OnFocusReceived
struct UWBP_DebugPage_Spirit_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_DebugPage_Spirit.WBP_DebugPage_Spirit_C.PreConstruct
struct UWBP_DebugPage_Spirit_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_DebugPage_Spirit.WBP_DebugPage_Spirit_C.Construct
struct UWBP_DebugPage_Spirit_C_Construct_Params
{
};

// Function WBP_DebugPage_Spirit.WBP_DebugPage_Spirit_C.ExecuteUbergraph_WBP_DebugPage_Spirit
struct UWBP_DebugPage_Spirit_C_ExecuteUbergraph_WBP_DebugPage_Spirit_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
