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

// Function WBP_Strengthen.WBP_Strengthen_C.GetSpritCurrencyLevelTranslationText
struct UWBP_Strengthen_C_GetSpritCurrencyLevelTranslationText_Params
{
	Zenith_ECurrencyType                               CurrencyType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       CurrencyTypeText;                                          // 0x0008(0x0018)  (Parm, OutParm)
};

// Function WBP_Strengthen.WBP_Strengthen_C.CreateConfirmationWidget
struct UWBP_Strengthen_C_CreateConfirmationWidget_Params
{
};

// Function WBP_Strengthen.WBP_Strengthen_C.SetLevelUpTexts
struct UWBP_Strengthen_C_SetLevelUpTexts_Params
{
	struct FDataTableRowHandle                         DataTableRowHandle;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function WBP_Strengthen.WBP_Strengthen_C.GetSpiritLevelDataLevel
struct UWBP_Strengthen_C_GetSpiritLevelDataLevel_Params
{
	struct FDataTableRowHandle                         DataTableRowHandle;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FSpiritParameterLevelData                   ReturnValue;                                               // 0x0010(0x0050)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Strengthen.WBP_Strengthen_C.SetButtonText
struct UWBP_Strengthen_C_SetButtonText_Params
{
	Zenith_ECurrencyType                               CurrencyType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Value;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         ItemHandle;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_Strengthen.WBP_Strengthen_C.SetExplanationVisible
struct UWBP_Strengthen_C_SetExplanationVisible_Params
{
	int                                                Count;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Strengthen.WBP_Strengthen_C.SetExplanationText
struct UWBP_Strengthen_C_SetExplanationText_Params
{
	TArray<struct FText>                               Text;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_Strengthen.WBP_Strengthen_C.SetArrowVisible
struct UWBP_Strengthen_C_SetArrowVisible_Params
{
	bool                                               CastCountArrow;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RecastArrow;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Strengthen.WBP_Strengthen_C.SetRequireCurrencyWidget
struct UWBP_Strengthen_C_SetRequireCurrencyWidget_Params
{
	struct FDataTableRowHandle                         Item_Handle;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_Strengthen.WBP_Strengthen_C.SetSpiritLevelIcon
struct UWBP_Strengthen_C_SetSpiritLevelIcon_Params
{
	struct FDataTableRowHandle                         DataTableRowHandle;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function WBP_Strengthen.WBP_Strengthen_C.OnPressContext
struct UWBP_Strengthen_C_OnPressContext_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Strengthen.WBP_Strengthen_C.IsSpiritMaxLevel
struct UWBP_Strengthen_C_IsSpiritMaxLevel_Params
{
	struct FDataTableRowHandle                         ItemHandle;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                               IsMaxLevel;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Strengthen.WBP_Strengthen_C.LevelUpSpirit
struct UWBP_Strengthen_C_LevelUpSpirit_Params
{
	struct FDataTableRowHandle                         ItemHandle;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function WBP_Strengthen.WBP_Strengthen_C.CanPayCost
struct UWBP_Strengthen_C_CanPayCost_Params
{
	Zenith_ECurrencyType                               CurrencyType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Value;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanPayCost;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Strengthen.WBP_Strengthen_C.GetCurrencyCount
struct UWBP_Strengthen_C_GetCurrencyCount_Params
{
	Zenith_ECurrencyType                               CurrencyType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrencyCount;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Strengthen.WBP_Strengthen_C.GetCost
struct UWBP_Strengthen_C_GetCost_Params
{
	struct FDataTableRowHandle                         ItemHandle;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	Zenith_ECurrencyType                               CurrencyType;                                              // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Value;                                                     // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Strengthen.WBP_Strengthen_C.OnFocusReceived
struct UWBP_Strengthen_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Strengthen.WBP_Strengthen_C.OnPressCancel
struct UWBP_Strengthen_C_OnPressCancel_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Strengthen.WBP_Strengthen_C.OnFinish_066E292E42E788874C41348FA6A33E9D
struct UWBP_Strengthen_C_OnFinish_066E292E42E788874C41348FA6A33E9D_Params
{
};

// Function WBP_Strengthen.WBP_Strengthen_C.OnFinish_2071A4134BF576284BB5479C170F7ABE
struct UWBP_Strengthen_C_OnFinish_2071A4134BF576284BB5479C170F7ABE_Params
{
};

// Function WBP_Strengthen.WBP_Strengthen_C.OnFinish_066E292E42E788874C41348FB97C0A6B
struct UWBP_Strengthen_C_OnFinish_066E292E42E788874C41348FB97C0A6B_Params
{
};

// Function WBP_Strengthen.WBP_Strengthen_C.OnFinish_2071A4134BF576284BB5479C08D04E48
struct UWBP_Strengthen_C_OnFinish_2071A4134BF576284BB5479C08D04E48_Params
{
};

// Function WBP_Strengthen.WBP_Strengthen_C.Construct
struct UWBP_Strengthen_C_Construct_Params
{
};

// Function WBP_Strengthen.WBP_Strengthen_C.CloseMenu
struct UWBP_Strengthen_C_CloseMenu_Params
{
};

// Function WBP_Strengthen.WBP_Strengthen_C.BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_0_OnFocused__DelegateSignature
struct UWBP_Strengthen_C_BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_0_OnFocused__DelegateSignature_Params
{
	class UWBP_Item_C*                                 Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Strengthen.WBP_Strengthen_C.RefreshCurrencies
struct UWBP_Strengthen_C_RefreshCurrencies_Params
{
};

// Function WBP_Strengthen.WBP_Strengthen_C.BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature
struct UWBP_Strengthen_C_BndEvt__WBP_ItemList_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature_Params
{
	class UWBP_Item_C*                                 Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Strengthen.WBP_Strengthen_C.OnConfirmationStrengthenClickYES
struct UWBP_Strengthen_C_OnConfirmationStrengthenClickYES_Params
{
};

// Function WBP_Strengthen.WBP_Strengthen_C.OnConfirmationStrengthenClickNo
struct UWBP_Strengthen_C_OnConfirmationStrengthenClickNo_Params
{
};

// Function WBP_Strengthen.WBP_Strengthen_C.BndEvt__StrengthenButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWBP_Strengthen_C_BndEvt__StrengthenButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_Strengthen.WBP_Strengthen_C.ExecuteUbergraph_WBP_Strengthen
struct UWBP_Strengthen_C_ExecuteUbergraph_WBP_Strengthen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Strengthen.WBP_Strengthen_C.OnClose__DelegateSignature
struct UWBP_Strengthen_C_OnClose__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
