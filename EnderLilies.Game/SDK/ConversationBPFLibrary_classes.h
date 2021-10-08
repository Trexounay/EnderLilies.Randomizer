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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ConversationBPFLibrary.ConversationBPFLibrary_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UConversationBPFLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ConversationBPFLibrary.ConversationBPFLibrary_C");
		return ptr;
	}



	void STATIC_CreateConversationAtActor(class UObject* WorldContext, const struct FConversationData& ConversationData, class AActor* ActorTarget, const struct FVector& LocalSpaceOffset, class UObject* __WorldContext, class ABP_WorldSpaceWidget_C** WidgetActor);
	void STATIC_CreateConversation(class UObject* WorldContext, const struct FConversationData& ConversationData, const struct FVector& WorldLocation, class UObject* __WorldContext, class ABP_WorldSpaceWidget_C** WidgetActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
