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

// Function WBP_Recollection_BossButton.WBP_Recollection_BossButton_C.OnPressConfirm
struct UWBP_Recollection_BossButton_C_OnPressConfirm_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Recollection_BossButton.WBP_Recollection_BossButton_C.Construct
struct UWBP_Recollection_BossButton_C_Construct_Params
{
};

// Function WBP_Recollection_BossButton.WBP_Recollection_BossButton_C.MoveToBossMap
struct UWBP_Recollection_BossButton_C_MoveToBossMap_Params
{
};

// Function WBP_Recollection_BossButton.WBP_Recollection_BossButton_C.RefreshDesign
struct UWBP_Recollection_BossButton_C_RefreshDesign_Params
{
	bool                                               bFocused;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Recollection_BossButton.WBP_Recollection_BossButton_C.ExecuteUbergraph_WBP_Recollection_BossButton
struct UWBP_Recollection_BossButton_C_ExecuteUbergraph_WBP_Recollection_BossButton_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Recollection_BossButton.WBP_Recollection_BossButton_C.OnMoveToBossMap__DelegateSignature
struct UWBP_Recollection_BossButton_C_OnMoveToBossMap__DelegateSignature_Params
{
	struct FDataTableRowHandle                         BossMap;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
