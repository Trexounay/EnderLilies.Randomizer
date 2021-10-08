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

// BlueprintGeneratedClass BP_Interactable_Button_TriggerElevator.BP_Interactable_Button_TriggerElevator_C
// 0x0008 (FullSize[0x0368] - InheritedSize[0x0360])
class ABP_Interactable_Button_TriggerElevator_C : public ABP_Interactable_Button_C
{
public:
	class ABP_Elevator_C*                              Elevator;                                                  // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Interactable_Button_TriggerElevator.BP_Interactable_Button_TriggerElevator_C");
		return ptr;
	}



	void SetElevator(class ABP_Elevator_C* Elevator);
	bool OnIsInteractable(class APlayerController* Controller);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
