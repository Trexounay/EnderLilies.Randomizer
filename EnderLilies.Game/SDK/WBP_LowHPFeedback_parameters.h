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

// Function WBP_LowHPFeedback.WBP_LowHPFeedback_C.UpdateLayerColor
struct UWBP_LowHPFeedback_C_UpdateLayerColor_Params
{
	struct FLinearColor                                AppliedColor;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function WBP_LowHPFeedback.WBP_LowHPFeedback_C.Initialize
struct UWBP_LowHPFeedback_C_Initialize_Params
{
	class AZenithCharacter*                            Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LowHPFeedback.WBP_LowHPFeedback_C.OnHPChanged
struct UWBP_LowHPFeedback_C_OnHPChanged_Params
{
};

// Function WBP_LowHPFeedback.WBP_LowHPFeedback_C.Tick
struct UWBP_LowHPFeedback_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LowHPFeedback.WBP_LowHPFeedback_C.ExecuteUbergraph_WBP_LowHPFeedback
struct UWBP_LowHPFeedback_C_ExecuteUbergraph_WBP_LowHPFeedback_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
