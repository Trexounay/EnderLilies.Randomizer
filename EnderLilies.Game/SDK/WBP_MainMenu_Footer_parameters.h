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

// Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.AddEntry
struct UWBP_MainMenu_Footer_C_AddEntry_Params
{
	struct FFRichTextInputPair                         RichTextData;                                              // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               Temporary;                                                 // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.ClearEntries
struct UWBP_MainMenu_Footer_C_ClearEntries_Params
{
};

// Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.AddEntries
struct UWBP_MainMenu_Footer_C_AddEntries_Params
{
	TArray<struct FFRichTextInputPair>                 RichTextDataArray;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Temporary;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.InitializeWithEntries
struct UWBP_MainMenu_Footer_C_InitializeWithEntries_Params
{
	TArray<struct FFRichTextInputPair>                 RichTextDataArray;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.Construct
struct UWBP_MainMenu_Footer_C_Construct_Params
{
};

// Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.PreConstruct
struct UWBP_MainMenu_Footer_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.ClearTemporaryEntries
struct UWBP_MainMenu_Footer_C_ClearTemporaryEntries_Params
{
};

// Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.InitializeWithDefaultEntries
struct UWBP_MainMenu_Footer_C_InitializeWithDefaultEntries_Params
{
};

// Function WBP_MainMenu_Footer.WBP_MainMenu_Footer_C.ExecuteUbergraph_WBP_MainMenu_Footer
struct UWBP_MainMenu_Footer_C_ExecuteUbergraph_WBP_MainMenu_Footer_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
