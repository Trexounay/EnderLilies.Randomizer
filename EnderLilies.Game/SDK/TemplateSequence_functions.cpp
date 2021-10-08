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
//		Offset -> 0x00B9B8C0
//		Name   -> Function TemplateSequence.TemplateSequenceActor.SetSequence
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UTemplateSequence*                           InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATemplateSequenceActor::SetSequence(class UTemplateSequence* InSequence)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.SetSequence");

	ATemplateSequenceActor_SetSequence_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9B830
//		Name   -> Function TemplateSequence.TemplateSequenceActor.SetBinding
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ATemplateSequenceActor::SetBinding(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.SetBinding");

	ATemplateSequenceActor_SetBinding_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00B9B800
//		Name   -> Function TemplateSequence.TemplateSequenceActor.LoadSequence
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UTemplateSequence*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTemplateSequence* ATemplateSequenceActor::LoadSequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.LoadSequence");

	ATemplateSequenceActor_LoadSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9B7D0
//		Name   -> Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UTemplateSequencePlayer*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTemplateSequencePlayer* ATemplateSequenceActor::GetSequencePlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer");

	ATemplateSequenceActor_GetSequencePlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9B7A0
//		Name   -> Function TemplateSequence.TemplateSequenceActor.GetSequence
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UTemplateSequence*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTemplateSequence* ATemplateSequenceActor::GetSequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.GetSequence");

	ATemplateSequenceActor_GetSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00B9B620
//		Name   -> Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTemplateSequence*                           TemplateSequence                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FMovieSceneSequencePlaybackSettings         Settings                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class ATemplateSequenceActor*                      OutActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTemplateSequencePlayer*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTemplateSequencePlayer* UTemplateSequencePlayer::STATIC_CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ATemplateSequenceActor** OutActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer");

	UTemplateSequencePlayer_CreateTemplateSequencePlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TemplateSequence = TemplateSequence;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActor != nullptr)
		*OutActor = params.OutActor;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
