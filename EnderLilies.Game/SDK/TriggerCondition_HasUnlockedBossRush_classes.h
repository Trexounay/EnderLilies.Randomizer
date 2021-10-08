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

// BlueprintGeneratedClass TriggerCondition_HasUnlockedBossRush.TriggerCondition_HasUnlockedBossRush_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UTriggerCondition_HasUnlockedBossRush_C : public UTriggerCondition_Base_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TriggerCondition_HasUnlockedBossRush.TriggerCondition_HasUnlockedBossRush_C");
		return ptr;
	}



	bool CheckCondition(class APlayerController* PlayerController);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
