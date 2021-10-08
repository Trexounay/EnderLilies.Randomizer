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
//		Name   -> Function CA_Base.CA_Base_C.ClearSpineColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_Base_C::ClearSpineColor(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Base.CA_Base_C.ClearSpineColor");

	UCA_Base_C_ClearSpineColor_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Base.CA_Base_C.SetSpineColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_Base_C::SetSpineColor(class APawn* Pawn, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Base.CA_Base_C.SetSpineColor");

	UCA_Base_C_SetSpineColor_Params params;
	params.Pawn = Pawn;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Base.CA_Base_C.UnbindPawnEvents
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_Base_C::UnbindPawnEvents(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Base.CA_Base_C.UnbindPawnEvents");

	UCA_Base_C_UnbindPawnEvents_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Base.CA_Base_C.BindPawnEvents
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_Base_C::BindPawnEvents(class APawn* Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Base.CA_Base_C.BindPawnEvents");

	UCA_Base_C_BindPawnEvents_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Base.CA_Base_C.OnChangePawn
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class APawn*                                       OldPawnSubject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       NewPawnSubject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_Base_C::OnChangePawn(class APawn* OldPawnSubject, class APawn* NewPawnSubject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Base.CA_Base_C.OnChangePawn");

	UCA_Base_C_OnChangePawn_Params params;
	params.OldPawnSubject = OldPawnSubject;
	params.NewPawnSubject = NewPawnSubject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function CA_Base.CA_Base_C.ExecuteUbergraph_CA_Base
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCA_Base_C::ExecuteUbergraph_CA_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CA_Base.CA_Base_C.ExecuteUbergraph_CA_Base");

	UCA_Base_C_ExecuteUbergraph_CA_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
