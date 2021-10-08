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

// BlueprintGeneratedClass EVT_ACT_PlayConversation.EVT_ACT_PlayConversation_C
// 0x0030 (FullSize[0x0070] - InheritedSize[0x0040])
class UEVT_ACT_PlayConversation_C : public UEventAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0040(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FConversationData                           ConversationData;                                          // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector                                     LocalOffset;                                               // 0x0058(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AE74[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_WorldSpaceWidget_C*                      WorldSpaceWidgetActor;                                     // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EVT_ACT_PlayConversation.EVT_ACT_PlayConversation_C");
		return ptr;
	}



	void OnStartAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
	void OnTickAction(float DeltaTime, class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
	void OnAbortAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
	void ExecuteUbergraph_EVT_ACT_PlayConversation(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
