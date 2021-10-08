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

// Function WBP_PlayerConversation.WBP_PlayerConversation_C.SetupTexts
struct UWBP_PlayerConversation_C_SetupTexts_Params
{
	float                                              Duration;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerConversation.WBP_PlayerConversation_C.IsConversationFinished
struct UWBP_PlayerConversation_C_IsConversationFinished_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerConversation.WBP_PlayerConversation_C.LaunchConversation
struct UWBP_PlayerConversation_C_LaunchConversation_Params
{
	struct FConversationData                           ConversationData;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Launched;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_PlayerConversation.WBP_PlayerConversation_C.ShowText
struct UWBP_PlayerConversation_C_ShowText_Params
{
};

// Function WBP_PlayerConversation.WBP_PlayerConversation_C.FinishConversation
struct UWBP_PlayerConversation_C_FinishConversation_Params
{
};

// Function WBP_PlayerConversation.WBP_PlayerConversation_C.StartConversation
struct UWBP_PlayerConversation_C_StartConversation_Params
{
};

// Function WBP_PlayerConversation.WBP_PlayerConversation_C.Construct
struct UWBP_PlayerConversation_C_Construct_Params
{
};

// Function WBP_PlayerConversation.WBP_PlayerConversation_C.FadeOutText
struct UWBP_PlayerConversation_C_FadeOutText_Params
{
};

// Function WBP_PlayerConversation.WBP_PlayerConversation_C.ExecuteUbergraph_WBP_PlayerConversation
struct UWBP_PlayerConversation_C_ExecuteUbergraph_WBP_PlayerConversation_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_PlayerConversation.WBP_PlayerConversation_C.OnFinish__DelegateSignature
struct UWBP_PlayerConversation_C_OnFinish__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
