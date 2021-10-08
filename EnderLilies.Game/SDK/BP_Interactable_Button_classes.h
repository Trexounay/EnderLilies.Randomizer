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

// BlueprintGeneratedClass BP_Interactable_Button.BP_Interactable_Button_C
// 0x004F (FullSize[0x0360] - InheritedSize[0x0311])
class ABP_Interactable_Button_C : public ABP_Interactable_Base_C
{
public:
	unsigned char                                      UnknownData_16UF[0x7];                                     // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0318(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPaperSpriteComponent*                       PaperSprite;                                               // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              DelayUntilRelease;                                         // 0x0328(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AllowInteractionWhilePressed;                              // 0x032C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F8NW[0x3];                                     // 0x032D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFMODEvent*                                  SoundEventWhilePressed;                                    // 0x0330(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                                  SoundEventOnRelease;                                       // 0x0338(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPressed;                                                 // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_N9GF[0x7];                                     // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnStateChanged;                                            // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FFMODEventInstance                          SoundEventWhilePressedInstance;                            // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Interactable_Button.BP_Interactable_Button_C");
		return ptr;
	}



	void StopSoundEventWhilePressed();
	void PlaySoundEventWhilePressed();
	void GetIsPressed(bool* IsPressed);
	void SetIsPressed(bool IsPressed);
	void Release();
	void Press();
	bool OnIsInteractable(class APlayerController* Controller);
	void OnInteract(class APlayerController* Controller);
	void OnInteractableAlreadyCleared();
	void OnPress();
	void OnRelease();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_Interactable_Button(int EntryPoint);
	void OnStateChanged__DelegateSignature(class ABP_Interactable_Button_C* Button);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
