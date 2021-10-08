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

// BlueprintGeneratedClass BP_UIComponent.BP_UIComponent_C
// 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
class UBP_UIComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFactionComponent*                           FactionComponent;                                          // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UClass*                                      FloatingTextDamage;                                        // 0x00C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      FloatingTextPlayerDamage;                                  // 0x00C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      FloatingTextHeal;                                          // 0x00D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_UIComponent.BP_UIComponent_C");
		return ptr;
	}



	void LaunchFloatingText(class UClass* FloatingTextType, const struct FText& Text);
	void ReceiveBeginPlay();
	void OnReceiveDamage(class AActor* From, int Damage);
	void OnFloatingTextFinished(class UUserWidget* UserWidget);
	void OnReceiveHeal(class AActor* From, int Heal);
	void ExecuteUbergraph_BP_UIComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
