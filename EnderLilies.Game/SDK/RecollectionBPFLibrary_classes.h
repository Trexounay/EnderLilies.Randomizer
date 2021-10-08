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

// BlueprintGeneratedClass RecollectionBPFLibrary.RecollectionBPFLibrary_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URecollectionBPFLibrary_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass RecollectionBPFLibrary.RecollectionBPFLibrary_C");
		return ptr;
	}



	void STATIC_IsAllRecollectionItemFromTableVisible(class AZenithPlayerController* PlayerController, class UDataTable* RecollectionItemDataTable, Zenith_ERecollectionItemType RecollectionItemType, class UObject* __WorldContext, bool* Result);
	void STATIC_IsAnyRecollectionItemFromTableVisible(class AZenithPlayerController* PlayerController, class UDataTable* RecollectionItemDataTable, Zenith_ERecollectionItemType RecollectionItemType, class UObject* __WorldContext, bool* Result);
	void STATIC_IsAllRecollectionItemsChecked(class AZenithPlayerController* PlayerController, class UObject* __WorldContext, bool* Result);
	void STATIC_IsAllRecollectionItemFromTableChecked(class AZenithPlayerController* PlayerController, class UDataTable* RecollectionItemDataTable, Zenith_ERecollectionItemType RecollectionItemType, class UObject* __WorldContext, bool* Result);
	void STATIC_IsRecollectionItemVisible(class AZenithPlayerController* PlayerController, const struct FDataTableRowHandle& RecollectionItemDataHandle, Zenith_ERecollectionItemType RecollectionItemType, class UObject* __WorldContext, bool* Result);
	void STATIC_CheckRecollectionConditions(class AZenithPlayerController* PlayerController, const struct FRecollectionConditionData& RecollectionConditionData, class UObject* __WorldContext, bool* Result);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
