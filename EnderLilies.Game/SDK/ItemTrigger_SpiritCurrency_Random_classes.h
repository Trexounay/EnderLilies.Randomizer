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

// BlueprintGeneratedClass ItemTrigger_SpiritCurrency_Random.ItemTrigger_SpiritCurrency_Random_C
// 0x0014 (FullSize[0x003C] - InheritedSize[0x0028])
class UItemTrigger_SpiritCurrency_Random_C : public UItemTrigger_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	Zenith_ECurrencyType                               CurrencyType;                                              // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5E9U[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Add_Min;                                                   // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Add_Max;                                                   // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ItemTrigger_SpiritCurrency_Random.ItemTrigger_SpiritCurrency_Random_C");
		return ptr;
	}



	void OnGetItem(class AController* Controller, const struct FDataTableRowHandle& Item);
	void ExecuteUbergraph_ItemTrigger_SpiritCurrency_Random(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
