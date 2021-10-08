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

// Function WBP_DebugMenuButtonEntry.WBP_DebugMenuButtonEntry_C.OnKeyDown
struct UWBP_DebugMenuButtonEntry_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_DebugMenuButtonEntry.WBP_DebugMenuButtonEntry_C.Execute
struct UWBP_DebugMenuButtonEntry_C_Execute_Params
{
};

// Function WBP_DebugMenuButtonEntry.WBP_DebugMenuButtonEntry_C.PreConstruct
struct UWBP_DebugMenuButtonEntry_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_DebugMenuButtonEntry.WBP_DebugMenuButtonEntry_C.Tick
struct UWBP_DebugMenuButtonEntry_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_DebugMenuButtonEntry.WBP_DebugMenuButtonEntry_C.ExecuteUbergraph_WBP_DebugMenuButtonEntry
struct UWBP_DebugMenuButtonEntry_C_ExecuteUbergraph_WBP_DebugMenuButtonEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_DebugMenuButtonEntry.WBP_DebugMenuButtonEntry_C.OnExecute__DelegateSignature
struct UWBP_DebugMenuButtonEntry_C_OnExecute__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
