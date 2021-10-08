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

// Function EVT_ACT_OpenWBP_Get_Item.EVT_ACT_OpenWBP_Get_Item_C.OnGameUnpaused_48C8F81840AE488A293540A5A51D14D8
struct UEVT_ACT_OpenWBP_Get_Item_C_OnGameUnpaused_48C8F81840AE488A293540A5A51D14D8_Params
{
};

// Function EVT_ACT_OpenWBP_Get_Item.EVT_ACT_OpenWBP_Get_Item_C.OnStartAction
struct UEVT_ACT_OpenWBP_Get_Item_C_OnStartAction_Params
{
	class APlayerController*                           ConsideringPlayer;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Subject;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Target;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventBlackBoard*                            EventBlackBoard;                                           // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EVT_ACT_OpenWBP_Get_Item.EVT_ACT_OpenWBP_Get_Item_C.OnTickAction
struct UEVT_ACT_OpenWBP_Get_Item_C_OnTickAction_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           ConsideringPlayer;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Subject;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Target;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEventBlackBoard*                            EventBlackBoard;                                           // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function EVT_ACT_OpenWBP_Get_Item.EVT_ACT_OpenWBP_Get_Item_C.ExecuteUbergraph_EVT_ACT_OpenWBP_Get_Item
struct UEVT_ACT_OpenWBP_Get_Item_C_ExecuteUbergraph_EVT_ACT_OpenWBP_Get_Item_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
