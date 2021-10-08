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

// BlueprintGeneratedClass BaseGameplayMap.BaseGameplayMap_C
// 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
class ABaseGameplayMap_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_GameplayCamera_C*                        BP_GameplayCamera_ExecuteUbergraph_BaseGameplayMap_RefProperty; // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BaseGameplayMap.BaseGameplayMap_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BaseGameplayMap(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
