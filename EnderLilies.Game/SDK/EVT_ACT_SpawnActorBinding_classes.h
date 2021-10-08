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

// BlueprintGeneratedClass EVT_ACT_SpawnActorBinding.EVT_ACT_SpawnActorBinding_C
// 0x0070 (FullSize[0x00B0] - InheritedSize[0x0040])
class UEVT_ACT_SpawnActorBinding_C : public UEventAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0040(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       BindingName;                                               // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActorBindingInfos                          ActorBindingInfos;                                         // 0x0050(0x0060) (Edit, BlueprintVisible, BlueprintReadOnly)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EVT_ACT_SpawnActorBinding.EVT_ACT_SpawnActorBinding_C");
		return ptr;
	}



	void OnStartAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
	void ExecuteUbergraph_EVT_ACT_SpawnActorBinding(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
