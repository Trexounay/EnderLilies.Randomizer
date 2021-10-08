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

// Function WBP_EquipmentSet.WBP_EquipmentSet_C.Set Target Summon Skill Set
struct UWBP_EquipmentSet_C_Set_Target_Summon_Skill_Set_Params
{
	Zenith_ESummonSet                                  TargetSummonSet;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EquipmentSet.WBP_EquipmentSet_C.OnPressContext
struct UWBP_EquipmentSet_C_OnPressContext_Params
{
	struct FKeyEvent                                   KeyEvent;                                                  // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x0038(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_EquipmentSet.WBP_EquipmentSet_C.OnFocusReceived
struct UWBP_EquipmentSet_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_EquipmentSet.WBP_EquipmentSet_C.RefreshSet
struct UWBP_EquipmentSet_C_RefreshSet_Params
{
	struct FSummonSetData                              SummonSetData;                                             // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	Zenith_ESummonSet                                  TargetSummonSet;                                           // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EquipmentSet.WBP_EquipmentSet_C.BndEvt__WBP_EquipmentEntry_Attack_K2Node_ComponentBoundEvent_4_OnSelected__DelegateSignature
struct UWBP_EquipmentSet_C_BndEvt__WBP_EquipmentEntry_Attack_K2Node_ComponentBoundEvent_4_OnSelected__DelegateSignature_Params
{
	class UWBP_Item_C*                                 EquipmentItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EquipmentSet.WBP_EquipmentSet_C.BndEvt__WBP_EquipmentEntry_Summon1_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature
struct UWBP_EquipmentSet_C_BndEvt__WBP_EquipmentEntry_Summon1_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature_Params
{
	class UWBP_Item_C*                                 EquipmentItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EquipmentSet.WBP_EquipmentSet_C.BndEvt__WBP_EquipmentEntry_Summon2_K2Node_ComponentBoundEvent_6_OnSelected__DelegateSignature
struct UWBP_EquipmentSet_C_BndEvt__WBP_EquipmentEntry_Summon2_K2Node_ComponentBoundEvent_6_OnSelected__DelegateSignature_Params
{
	class UWBP_Item_C*                                 EquipmentItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EquipmentSet.WBP_EquipmentSet_C.BndEvt__WBP_EquipmentEntry_Attack_K2Node_ComponentBoundEvent_0_OnFocused__DelegateSignature
struct UWBP_EquipmentSet_C_BndEvt__WBP_EquipmentEntry_Attack_K2Node_ComponentBoundEvent_0_OnFocused__DelegateSignature_Params
{
	class UWBP_Item_C*                                 EquipmentItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EquipmentSet.WBP_EquipmentSet_C.BndEvt__WBP_EquipmentEntry_Summon1_K2Node_ComponentBoundEvent_1_OnFocused__DelegateSignature
struct UWBP_EquipmentSet_C_BndEvt__WBP_EquipmentEntry_Summon1_K2Node_ComponentBoundEvent_1_OnFocused__DelegateSignature_Params
{
	class UWBP_Item_C*                                 EquipmentItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EquipmentSet.WBP_EquipmentSet_C.BndEvt__WBP_EquipmentEntry_Summon2_K2Node_ComponentBoundEvent_2_OnFocused__DelegateSignature
struct UWBP_EquipmentSet_C_BndEvt__WBP_EquipmentEntry_Summon2_K2Node_ComponentBoundEvent_2_OnFocused__DelegateSignature_Params
{
	class UWBP_Item_C*                                 EquipmentItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EquipmentSet.WBP_EquipmentSet_C.ExecuteUbergraph_WBP_EquipmentSet
struct UWBP_EquipmentSet_C_ExecuteUbergraph_WBP_EquipmentSet_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EquipmentSet.WBP_EquipmentSet_C.OnContextItem__DelegateSignature
struct UWBP_EquipmentSet_C_OnContextItem__DelegateSignature_Params
{
	class UWBP_EquipmentEntry_C*                       EquipmentEntry;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EquipmentSet.WBP_EquipmentSet_C.OnFocusedItem__DelegateSignature
struct UWBP_EquipmentSet_C_OnFocusedItem__DelegateSignature_Params
{
	class UWBP_Item_C*                                 Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_EquipmentSet.WBP_EquipmentSet_C.OnClicked_Entry_Summon1__DelegateSignature
struct UWBP_EquipmentSet_C_OnClicked_Entry_Summon1__DelegateSignature_Params
{
};

// Function WBP_EquipmentSet.WBP_EquipmentSet_C.OnClicked_Entry_Summon2__DelegateSignature
struct UWBP_EquipmentSet_C_OnClicked_Entry_Summon2__DelegateSignature_Params
{
};

// Function WBP_EquipmentSet.WBP_EquipmentSet_C.OnClicked_Entry_Attack__DelegateSignature
struct UWBP_EquipmentSet_C_OnClicked_Entry_Attack__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
