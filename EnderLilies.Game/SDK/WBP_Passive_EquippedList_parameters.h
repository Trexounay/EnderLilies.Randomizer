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

// Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.ClearPassives
struct UWBP_Passive_EquippedList_C_ClearPassives_Params
{
};

// Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.SetLockContainerVisibility
struct UWBP_Passive_EquippedList_C_SetLockContainerVisibility_Params
{
	UMG_ESlateVisibility                               Visibility;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.OnFocusReceived
struct UWBP_Passive_EquippedList_C_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                                 ReturnValue;                                               // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.Initialize
struct UWBP_Passive_EquippedList_C_Initialize_Params
{
	class UPassiveEquipComponent*                      PassiveEquipComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.OnPassiveChanged
struct UWBP_Passive_EquippedList_C_OnPassiveChanged_Params
{
};

// Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.OnSelectPassive
struct UWBP_Passive_EquippedList_C_OnSelectPassive_Params
{
	class UWBP_Item_C*                                 EquipmentItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.OnFocusPassive
struct UWBP_Passive_EquippedList_C_OnFocusPassive_Params
{
	class UWBP_Item_C*                                 EquipmentItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.ExecuteUbergraph_WBP_Passive_EquippedList
struct UWBP_Passive_EquippedList_C_ExecuteUbergraph_WBP_Passive_EquippedList_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.OnPassiveFocused__DelegateSignature
struct UWBP_Passive_EquippedList_C_OnPassiveFocused__DelegateSignature_Params
{
	class UWBP_Item_C*                                 EquipmentItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Passive_EquippedList.WBP_Passive_EquippedList_C.OnPassiveSelected__DelegateSignature
struct UWBP_Passive_EquippedList_C_OnPassiveSelected__DelegateSignature_Params
{
	class UWBP_Item_C*                                 EquipmentItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
