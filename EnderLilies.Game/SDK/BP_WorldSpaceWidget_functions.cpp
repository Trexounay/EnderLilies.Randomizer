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
//		Name   -> Function BP_WorldSpaceWidget.BP_WorldSpaceWidget_C.ForceFinish
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_WorldSpaceWidget_C::ForceFinish()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WorldSpaceWidget.BP_WorldSpaceWidget_C.ForceFinish");

	ABP_WorldSpaceWidget_C_ForceFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_WorldSpaceWidget.BP_WorldSpaceWidget_C.IsFinished
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               Finished                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_WorldSpaceWidget_C::IsFinished(bool* Finished)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WorldSpaceWidget.BP_WorldSpaceWidget_C.IsFinished");

	ABP_WorldSpaceWidget_C_IsFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Finished != nullptr)
		*Finished = params.Finished;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_WorldSpaceWidget.BP_WorldSpaceWidget_C.OnWidgetFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_WorldSpaceWidget_C::OnWidgetFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WorldSpaceWidget.BP_WorldSpaceWidget_C.OnWidgetFinished");

	ABP_WorldSpaceWidget_C_OnWidgetFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_WorldSpaceWidget.BP_WorldSpaceWidget_C.InitializeWithInstance
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUserWidget*                                 UserWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnToPoolOnFinish                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_WorldSpaceWidget_C::InitializeWithInstance(class UUserWidget* UserWidget, bool ReturnToPoolOnFinish)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WorldSpaceWidget.BP_WorldSpaceWidget_C.InitializeWithInstance");

	ABP_WorldSpaceWidget_C_InitializeWithInstance_Params params;
	params.UserWidget = UserWidget;
	params.ReturnToPoolOnFinish = ReturnToPoolOnFinish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_WorldSpaceWidget.BP_WorldSpaceWidget_C.Initialize
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnToPoolOnFinish                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_WorldSpaceWidget_C::Initialize(class UClass* Class, bool ReturnToPoolOnFinish)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WorldSpaceWidget.BP_WorldSpaceWidget_C.Initialize");

	ABP_WorldSpaceWidget_C_Initialize_Params params;
	params.Class = Class;
	params.ReturnToPoolOnFinish = ReturnToPoolOnFinish;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_WorldSpaceWidget.BP_WorldSpaceWidget_C.SetFollowTarget
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USceneComponent*                             NewFollowTarget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bSnapToTarget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_WorldSpaceWidget_C::SetFollowTarget(class USceneComponent* NewFollowTarget, const struct FVector& Offset, bool bSnapToTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WorldSpaceWidget.BP_WorldSpaceWidget_C.SetFollowTarget");

	ABP_WorldSpaceWidget_C_SetFollowTarget_Params params;
	params.NewFollowTarget = NewFollowTarget;
	params.Offset = Offset;
	params.bSnapToTarget = bSnapToTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_WorldSpaceWidget.BP_WorldSpaceWidget_C.ExecuteUbergraph_BP_WorldSpaceWidget
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_WorldSpaceWidget_C::ExecuteUbergraph_BP_WorldSpaceWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WorldSpaceWidget.BP_WorldSpaceWidget_C.ExecuteUbergraph_BP_WorldSpaceWidget");

	ABP_WorldSpaceWidget_C_ExecuteUbergraph_BP_WorldSpaceWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
