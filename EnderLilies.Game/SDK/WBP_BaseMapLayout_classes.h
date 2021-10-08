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

// WidgetBlueprintGeneratedClass WBP_BaseMapLayout.WBP_BaseMapLayout_C
// 0x0020 (FullSize[0x0280] - InheritedSize[0x0260])
class UWBP_BaseMapLayout_C : public UUserWidget
{
public:
	TArray<class UWBP_Map_Level_C*>                    Levels;                                                    // 0x0260(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UWBP_Map_Link_C*>                     Links;                                                     // 0x0270(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_BaseMapLayout.WBP_BaseMapLayout_C");
		return ptr;
	}



	void GetLevels(TArray<class UWBP_Map_Level_C*>* Levels);
	void GetLinks(TArray<class UWBP_Map_Link_C*>* MapLinks);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
