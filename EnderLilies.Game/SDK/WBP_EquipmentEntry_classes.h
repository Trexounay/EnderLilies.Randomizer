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

// WidgetBlueprintGeneratedClass WBP_EquipmentEntry.WBP_EquipmentEntry_C
// 0x000D (FullSize[0x0472] - InheritedSize[0x0465])
class UWBP_EquipmentEntry_C : public UWBP_Item_C
{
public:
	unsigned char                                      UnknownData_8E6J[0x3];                                     // 0x0465(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0468(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	Zenith_ECommandInputTypes                          InputType;                                                 // 0x0470(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_ESummonSet                                  SummonSet;                                                 // 0x0471(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_EquipmentEntry.WBP_EquipmentEntry_C");
		return ptr;
	}



	void RefreshEntry(Zenith_ESummonSet SummonSet, const struct FSummonSetData& SummonSetData);
	void ExecuteUbergraph_WBP_EquipmentEntry(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
