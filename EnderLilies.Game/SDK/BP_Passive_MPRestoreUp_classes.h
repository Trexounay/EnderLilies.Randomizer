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

// BlueprintGeneratedClass BP_Passive_MPRestoreUp.BP_Passive_MPRestoreUp_C
// 0x000C (FullSize[0x0034] - InheritedSize[0x0028])
class UBP_Passive_MPRestoreUp_C : public UBP_Passive_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              MPRestoreBonusPercentage;                                  // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Passive_MPRestoreUp.BP_Passive_MPRestoreUp_C");
		return ptr;
	}



	void OnEquipPassive(class AController* Controller);
	void OnUnequipPassive(class AController* Controller);
	void ExecuteUbergraph_BP_Passive_MPRestoreUp(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
