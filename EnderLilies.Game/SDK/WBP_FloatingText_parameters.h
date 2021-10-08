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

// Function WBP_FloatingText.WBP_FloatingText_C.GetAttachComponent
struct UWBP_FloatingText_C_GetAttachComponent_Params
{
	class AActor*                                      ActorTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SceneComponent;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_FloatingText.WBP_FloatingText_C.OnAnimationFinished
struct UWBP_FloatingText_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_FloatingText.WBP_FloatingText_C.Initialize
struct UWBP_FloatingText_C_Initialize_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      ActorTarget;                                               // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_FloatingText.WBP_FloatingText_C.Construct
struct UWBP_FloatingText_C_Construct_Params
{
};

// Function WBP_FloatingText.WBP_FloatingText_C.ExecuteUbergraph_WBP_FloatingText
struct UWBP_FloatingText_C_ExecuteUbergraph_WBP_FloatingText_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_FloatingText.WBP_FloatingText_C.OnFinished__DelegateSignature
struct UWBP_FloatingText_C_OnFinished__DelegateSignature_Params
{
	class UUserWidget*                                 UserWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
