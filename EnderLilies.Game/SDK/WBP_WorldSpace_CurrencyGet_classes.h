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

// WidgetBlueprintGeneratedClass WBP_WorldSpace_CurrencyGet.WBP_WorldSpace_CurrencyGet_C
// 0x0040 (FullSize[0x02B0] - InheritedSize[0x0270])
class UWBP_WorldSpace_CurrencyGet_C : public UWBP_WorldSpaceWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Show;                                                      // 0x0278(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  ItemCount;                                                 // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ItemIcon;                                                  // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	Zenith_ECurrencyType                               CurrencyType;                                              // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_47C5[0x3];                                     // 0x0291(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Count;                                                     // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UPaperSprite*                                Sprite_SpiritCurrencyLv1;                                  // 0x0298(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                                Sprite_SpiritCurrencyLv2;                                  // 0x02A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                                Sprite_SpiritCurrencyLv3;                                  // 0x02A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_WorldSpace_CurrencyGet.WBP_WorldSpace_CurrencyGet_C");
		return ptr;
	}



	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void ExecuteUbergraph_WBP_WorldSpace_CurrencyGet(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
