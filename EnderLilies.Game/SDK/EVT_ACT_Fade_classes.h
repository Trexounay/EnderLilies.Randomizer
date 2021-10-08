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

// BlueprintGeneratedClass EVT_ACT_Fade.EVT_ACT_Fade_C
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class UEVT_ACT_Fade_C : public UEventAction
{
public:
	struct FName                                       FadeBlackboardName;                                        // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      FaderClass;                                                // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EVT_ACT_Fade.EVT_ACT_Fade_C");
		return ptr;
	}



	void GetOrCreateFade(class UUserWidget** Value);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
