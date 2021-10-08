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
//		Name   -> Function ConversationBPFLibrary.ConversationBPFLibrary_C.CreateConversationAtActor
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FConversationData                           ConversationData                                           (BlueprintVisible, BlueprintReadOnly, Parm)
//		class AActor*                                      ActorTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     LocalSpaceOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ABP_WorldSpaceWidget_C*                      WidgetActor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UConversationBPFLibrary_C::STATIC_CreateConversationAtActor(class UObject* WorldContext, const struct FConversationData& ConversationData, class AActor* ActorTarget, const struct FVector& LocalSpaceOffset, class UObject* __WorldContext, class ABP_WorldSpaceWidget_C** WidgetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConversationBPFLibrary.ConversationBPFLibrary_C.CreateConversationAtActor");

	UConversationBPFLibrary_C_CreateConversationAtActor_Params params;
	params.WorldContext = WorldContext;
	params.ConversationData = ConversationData;
	params.ActorTarget = ActorTarget;
	params.LocalSpaceOffset = LocalSpaceOffset;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WidgetActor != nullptr)
		*WidgetActor = params.WidgetActor;

}


// Function:
//		Offset -> 0x010B8CE0
//		Name   -> Function ConversationBPFLibrary.ConversationBPFLibrary_C.CreateConversation
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     WorldContext                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FConversationData                           ConversationData                                           (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FVector                                     WorldLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class ABP_WorldSpaceWidget_C*                      WidgetActor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UConversationBPFLibrary_C::STATIC_CreateConversation(class UObject* WorldContext, const struct FConversationData& ConversationData, const struct FVector& WorldLocation, class UObject* __WorldContext, class ABP_WorldSpaceWidget_C** WidgetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConversationBPFLibrary.ConversationBPFLibrary_C.CreateConversation");

	UConversationBPFLibrary_C_CreateConversation_Params params;
	params.WorldContext = WorldContext;
	params.ConversationData = ConversationData;
	params.WorldLocation = WorldLocation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WidgetActor != nullptr)
		*WidgetActor = params.WidgetActor;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
