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

// BlueprintGeneratedClass ItemTrigger_Heal_Base.ItemTrigger_Heal_Base_C
// 0x000C (FullSize[0x0034] - InheritedSize[0x0028])
class UItemTrigger_Heal_Base_C : public UItemTrigger_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              HealPercentage;                                            // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ItemTrigger_Heal_Base.ItemTrigger_Heal_Base_C");
		return ptr;
	}



	void OnGetItem(class AController* Controller, const struct FDataTableRowHandle& Item);
	void ExecuteUbergraph_ItemTrigger_Heal_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
