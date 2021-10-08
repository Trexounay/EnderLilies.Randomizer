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

// WidgetBlueprintGeneratedClass WBP_FloatingText_Heal.WBP_FloatingText_Heal_C
// 0x0008 (FullSize[0x02D0] - InheritedSize[0x02C8])
class UWBP_FloatingText_Heal_C : public UWBP_FloatingText_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_FloatingText_Heal.WBP_FloatingText_Heal_C");
		return ptr;
	}



	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WBP_FloatingText_Heal(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
