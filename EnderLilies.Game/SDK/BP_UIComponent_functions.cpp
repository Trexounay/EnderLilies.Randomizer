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
//		Name   -> Function BP_UIComponent.BP_UIComponent_C.LaunchFloatingText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      FloatingTextType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UBP_UIComponent_C::LaunchFloatingText(class UClass* FloatingTextType, const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_UIComponent.BP_UIComponent_C.LaunchFloatingText");

	UBP_UIComponent_C_LaunchFloatingText_Params params;
	params.FloatingTextType = FloatingTextType;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_UIComponent.BP_UIComponent_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_UIComponent_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_UIComponent.BP_UIComponent_C.ReceiveBeginPlay");

	UBP_UIComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_UIComponent.BP_UIComponent_C.OnReceiveDamage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_UIComponent_C::OnReceiveDamage(class AActor* From, int Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_UIComponent.BP_UIComponent_C.OnReceiveDamage");

	UBP_UIComponent_C_OnReceiveDamage_Params params;
	params.From = From;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_UIComponent.BP_UIComponent_C.OnFloatingTextFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUserWidget*                                 UserWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_UIComponent_C::OnFloatingTextFinished(class UUserWidget* UserWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_UIComponent.BP_UIComponent_C.OnFloatingTextFinished");

	UBP_UIComponent_C_OnFloatingTextFinished_Params params;
	params.UserWidget = UserWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_UIComponent.BP_UIComponent_C.OnReceiveHeal
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Heal                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_UIComponent_C::OnReceiveHeal(class AActor* From, int Heal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_UIComponent.BP_UIComponent_C.OnReceiveHeal");

	UBP_UIComponent_C_OnReceiveHeal_Params params;
	params.From = From;
	params.Heal = Heal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function BP_UIComponent.BP_UIComponent_C.ExecuteUbergraph_BP_UIComponent
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_UIComponent_C::ExecuteUbergraph_BP_UIComponent(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_UIComponent.BP_UIComponent_C.ExecuteUbergraph_BP_UIComponent");

	UBP_UIComponent_C_ExecuteUbergraph_BP_UIComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
