// Name: enderlilies, Version: gerrod_room

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
//		Name   -> Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.DisableBossAura
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Character_Boss_Base_C::DisableBossAura()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.DisableBossAura");

	ABP_Character_Boss_Base_C_DisableBossAura_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.EnableBossAura
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Character_Boss_Base_C::EnableBossAura()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.EnableBossAura");

	ABP_Character_Boss_Base_C_EnableBossAura_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.SetupDeathEventBlackboard
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UEventPlayer*                                EventPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_Boss_Base_C::SetupDeathEventBlackboard(class UEventPlayer* EventPlayer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.SetupDeathEventBlackboard");

	ABP_Character_Boss_Base_C_SetupDeathEventBlackboard_Params params;
	params.EventPlayer = EventPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.Timeline_0__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABP_Character_Boss_Base_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.Timeline_0__FinishedFunc");

	ABP_Character_Boss_Base_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.Timeline_0__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABP_Character_Boss_Base_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.Timeline_0__UpdateFunc");

	ABP_Character_Boss_Base_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.BossAuraIn__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABP_Character_Boss_Base_C::BossAuraIn__FinishedFunc()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.BossAuraIn__FinishedFunc");

	ABP_Character_Boss_Base_C_BossAuraIn__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.BossAuraIn__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABP_Character_Boss_Base_C::BossAuraIn__UpdateFunc()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.BossAuraIn__UpdateFunc");

	ABP_Character_Boss_Base_C_BossAuraIn__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.BossAuraOut__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABP_Character_Boss_Base_C::BossAuraOut__FinishedFunc()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.BossAuraOut__FinishedFunc");

	ABP_Character_Boss_Base_C_BossAuraOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.BossAuraOut__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABP_Character_Boss_Base_C::BossAuraOut__UpdateFunc()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.BossAuraOut__UpdateFunc");

	ABP_Character_Boss_Base_C_BossAuraOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.OnFinish_94D3316D428E3071DF0952A4CFD5AC4B
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Character_Boss_Base_C::OnFinish_94D3316D428E3071DF0952A4CFD5AC4B()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.OnFinish_94D3316D428E3071DF0952A4CFD5AC4B");

	ABP_Character_Boss_Base_C_OnFinish_94D3316D428E3071DF0952A4CFD5AC4B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.BndEvt__SpineAnimation_K2Node_ComponentBoundEvent_3_SpineAnimationEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ABP_Character_Boss_Base_C::BndEvt__SpineAnimation_K2Node_ComponentBoundEvent_3_SpineAnimationEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.BndEvt__SpineAnimation_K2Node_ComponentBoundEvent_3_SpineAnimationEvent__DelegateSignature");

	ABP_Character_Boss_Base_C_BndEvt__SpineAnimation_K2Node_ComponentBoundEvent_3_SpineAnimationEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.BndEvt__DeathComponent_K2Node_ComponentBoundEvent_2_DeathEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void ABP_Character_Boss_Base_C::BndEvt__DeathComponent_K2Node_ComponentBoundEvent_2_DeathEvent__DelegateSignature()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.BndEvt__DeathComponent_K2Node_ComponentBoundEvent_2_DeathEvent__DelegateSignature");

	ABP_Character_Boss_Base_C_BndEvt__DeathComponent_K2Node_ComponentBoundEvent_2_DeathEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.OnDeathEventFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Character_Boss_Base_C::OnDeathEventFinished()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.OnDeathEventFinished");

	ABP_Character_Boss_Base_C_OnDeathEventFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.OnDeathProcessStart
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Character_Boss_Base_C::OnDeathProcessStart()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.OnDeathProcessStart");

	ABP_Character_Boss_Base_C_OnDeathProcessStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.OnDeathAnimationComplete
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Character_Boss_Base_C::OnDeathAnimationComplete()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.OnDeathAnimationComplete");

	ABP_Character_Boss_Base_C_OnDeathAnimationComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Character_Boss_Base_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.ReceiveBeginPlay");

	ABP_Character_Boss_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.ReceivePossessed
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_Boss_Base_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.ReceivePossessed");

	ABP_Character_Boss_Base_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.OnEnableBossAura
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Character_Boss_Base_C::OnEnableBossAura()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.OnEnableBossAura");

	ABP_Character_Boss_Base_C_OnEnableBossAura_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.OnDisableBossAura
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_Character_Boss_Base_C::OnDisableBossAura()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.OnDisableBossAura");

	ABP_Character_Boss_Base_C_OnDisableBossAura_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.ExecuteUbergraph_BP_Character_Boss_Base
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Character_Boss_Base_C::ExecuteUbergraph_BP_Character_Boss_Base(int EntryPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BP_Character_Boss_Base.BP_Character_Boss_Base_C.ExecuteUbergraph_BP_Character_Boss_Base");

	ABP_Character_Boss_Base_C_ExecuteUbergraph_BP_Character_Boss_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
