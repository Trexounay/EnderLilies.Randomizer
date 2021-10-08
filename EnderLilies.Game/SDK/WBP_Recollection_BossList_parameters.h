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

// Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.SetupNavigation
struct UWBP_Recollection_BossList_C_SetupNavigation_Params
{
};

// Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.CreateBossList
struct UWBP_Recollection_BossList_C_CreateBossList_Params
{
};

// Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.OnFocusReceived
struct UWBP_Recollection_BossList_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.Construct
struct UWBP_Recollection_BossList_C_Construct_Params
{
};

// Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.OnMoveToBossMap
struct UWBP_Recollection_BossList_C_OnMoveToBossMap_Params
{
	struct FDataTableRowHandle                         BossMap;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.ExecuteUbergraph_WBP_Recollection_BossList
struct UWBP_Recollection_BossList_C_ExecuteUbergraph_WBP_Recollection_BossList_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.OnRequestBossRush__DelegateSignature
struct UWBP_Recollection_BossList_C_OnRequestBossRush__DelegateSignature_Params
{
};

// Function WBP_Recollection_BossList.WBP_Recollection_BossList_C.OnRequestMapChange__DelegateSignature
struct UWBP_Recollection_BossList_C_OnRequestMapChange__DelegateSignature_Params
{
	struct FDataTableRowHandle                         Map;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
