// Name: enderlilies, Version: 1.1.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FloatingText.WBP_FloatingText_C.GetAttachComponent
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      ActorTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USceneComponent*                             SceneComponent                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FloatingText_C::GetAttachComponent(class AActor* ActorTarget, class USceneComponent** SceneComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FloatingText.WBP_FloatingText_C.GetAttachComponent");

	UWBP_FloatingText_C_GetAttachComponent_Params params;
	params.ActorTarget = ActorTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SceneComponent != nullptr)
		*SceneComponent = params.SceneComponent;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FloatingText.WBP_FloatingText_C.OnAnimationFinished
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FloatingText_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FloatingText.WBP_FloatingText_C.OnAnimationFinished");

	UWBP_FloatingText_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FloatingText.WBP_FloatingText_C.Initialize
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		class AActor*                                      ActorTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FloatingText_C::Initialize(const struct FText& Text, class AActor* ActorTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FloatingText.WBP_FloatingText_C.Initialize");

	UWBP_FloatingText_C_Initialize_Params params;
	params.Text = Text;
	params.ActorTarget = ActorTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FloatingText.WBP_FloatingText_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UWBP_FloatingText_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FloatingText.WBP_FloatingText_C.Construct");

	UWBP_FloatingText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FloatingText.WBP_FloatingText_C.ExecuteUbergraph_WBP_FloatingText
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FloatingText_C::ExecuteUbergraph_WBP_FloatingText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FloatingText.WBP_FloatingText_C.ExecuteUbergraph_WBP_FloatingText");

	UWBP_FloatingText_C_ExecuteUbergraph_WBP_FloatingText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function WBP_FloatingText.WBP_FloatingText_C.OnFinished__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUserWidget*                                 UserWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FloatingText_C::OnFinished__DelegateSignature(class UUserWidget* UserWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FloatingText.WBP_FloatingText_C.OnFinished__DelegateSignature");

	UWBP_FloatingText_C_OnFinished__DelegateSignature_Params params;
	params.UserWidget = UserWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
