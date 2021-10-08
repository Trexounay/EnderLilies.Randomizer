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

// Function WBP_DebugMenuSpiritEntry.WBP_DebugMenuSpiritEntry_C.Initalize
struct UWBP_DebugMenuSpiritEntry_C_Initalize_Params
{
	struct FDataTableRowHandle                         SpiritDataTableRowHandle;                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_DebugMenuSpiritEntry.WBP_DebugMenuSpiritEntry_C.OnKeyDown
struct UWBP_DebugMenuSpiritEntry_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_DebugMenuSpiritEntry.WBP_DebugMenuSpiritEntry_C.Execute
struct UWBP_DebugMenuSpiritEntry_C_Execute_Params
{
};

// Function WBP_DebugMenuSpiritEntry.WBP_DebugMenuSpiritEntry_C.PreConstruct
struct UWBP_DebugMenuSpiritEntry_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_DebugMenuSpiritEntry.WBP_DebugMenuSpiritEntry_C.RefreshDesign
struct UWBP_DebugMenuSpiritEntry_C_RefreshDesign_Params
{
	bool                                               bFocused;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_DebugMenuSpiritEntry.WBP_DebugMenuSpiritEntry_C.ExecuteUbergraph_WBP_DebugMenuSpiritEntry
struct UWBP_DebugMenuSpiritEntry_C_ExecuteUbergraph_WBP_DebugMenuSpiritEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_DebugMenuSpiritEntry.WBP_DebugMenuSpiritEntry_C.OnExecute__DelegateSignature
struct UWBP_DebugMenuSpiritEntry_C_OnExecute__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
