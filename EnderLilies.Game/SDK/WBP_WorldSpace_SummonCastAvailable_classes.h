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

// WidgetBlueprintGeneratedClass WBP_WorldSpace_SummonCastAvailable.WBP_WorldSpace_SummonCastAvailable_C
// 0x0070 (FullSize[0x02E0] - InheritedSize[0x0270])
class UWBP_WorldSpace_SummonCastAvailable_C : public UWBP_WorldSpaceWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Animation;                                                 // 0x0278(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      BG;                                                        // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Icon;                                                      // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	unsigned char                                      Soft_Sprite[0x28];                                         // 0x0290(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FSlateColor                                 Tint_Color;                                                // 0x02B8(0x0028) (Edit, BlueprintVisible, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_WorldSpace_SummonCastAvailable.WBP_WorldSpace_SummonCastAvailable_C");
		return ptr;
	}



	void Construct();
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void ExecuteUbergraph_WBP_WorldSpace_SummonCastAvailable(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
