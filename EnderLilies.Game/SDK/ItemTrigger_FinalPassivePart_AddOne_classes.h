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

// BlueprintGeneratedClass ItemTrigger_FinalPassivePart_AddOne.ItemTrigger_FinalPassivePart_AddOne_C
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UItemTrigger_FinalPassivePart_AddOne_C : public UItemTrigger_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ItemTrigger_FinalPassivePart_AddOne.ItemTrigger_FinalPassivePart_AddOne_C");
		return ptr;
	}



	void OnGetItem(class AController* Controller, const struct FDataTableRowHandle& Item);
	void ExecuteUbergraph_ItemTrigger_FinalPassivePart_AddOne(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
