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

// BlueprintGeneratedClass BP_Interactable_SpiritCurrency_Release.BP_Interactable_SpiritCurrency_Release_C
// 0x0038 (FullSize[0x03E1] - InheritedSize[0x03A9])
class ABP_Interactable_SpiritCurrency_Release_C : public ABP_Interactable_Item_C
{
public:
	unsigned char                                      UnknownData_WATY[0x7];                                     // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             VisualContainer;                                           // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPaperSpriteComponent*                       SpriteComponent;                                           // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              FadeTimeline_FadeValue_184106464476B3436ABCD491BC45EF06;   // 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             FadeTimeline__Direction_184106464476B3436ABCD491BC45EF06;  // 0x03CC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N08W[0x3];                                     // 0x03CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FadeTimeline;                                              // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPaperSprite*                                Sprite;                                                    // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_ETranslucencyLayer                          TranslucencyLayer;                                         // 0x03E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Interactable_SpiritCurrency_Release.BP_Interactable_SpiritCurrency_Release_C");
		return ptr;
	}



	void ConfigureEventPlayer(class UEventPlayer* EventPlayer);
	void UserConstructionScript();
	void FadeTimeline__FinishedFunc();
	void FadeTimeline__UpdateFunc();
	void OnEventFinished();
	void OnInteractableAlreadyCleared();
	void ExecuteUbergraph_BP_Interactable_SpiritCurrency_Release(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
