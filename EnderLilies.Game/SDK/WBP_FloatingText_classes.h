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

// WidgetBlueprintGeneratedClass WBP_FloatingText.WBP_FloatingText_C
// 0x0038 (FullSize[0x02C8] - InheritedSize[0x0290])
class UWBP_FloatingText_C : public UUserWidgetFloatingText
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Show;                                                      // 0x0298(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  TextBlock;                                                 // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              RandomPosRadius;                                           // 0x02A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_E4M4[0x4];                                     // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnFinished;                                                // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                                   PositionOffset;                                            // 0x02C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_FloatingText.WBP_FloatingText_C");
		return ptr;
	}



	void GetAttachComponent(class AActor* ActorTarget, class USceneComponent** SceneComponent);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void Initialize(const struct FText& Text, class AActor* ActorTarget);
	void Construct();
	void ExecuteUbergraph_WBP_FloatingText(int EntryPoint);
	void OnFinished__DelegateSignature(class UUserWidget* UserWidget);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
