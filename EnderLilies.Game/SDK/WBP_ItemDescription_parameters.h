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

// Function WBP_ItemDescription.WBP_ItemDescription_C.Clear
struct UWBP_ItemDescription_C_Clear_Params
{
};

// Function WBP_ItemDescription.WBP_ItemDescription_C.InitializeForItem
struct UWBP_ItemDescription_C_InitializeForItem_Params
{
};

// Function WBP_ItemDescription.WBP_ItemDescription_C.Initialize
struct UWBP_ItemDescription_C_Initialize_Params
{
	struct FDataTableRowHandle                         ItemDataHandle;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_ItemDescription.WBP_ItemDescription_C.PreConstruct
struct UWBP_ItemDescription_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_ItemDescription.WBP_ItemDescription_C.ExecuteUbergraph_WBP_ItemDescription
struct UWBP_ItemDescription_C_ExecuteUbergraph_WBP_ItemDescription_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
