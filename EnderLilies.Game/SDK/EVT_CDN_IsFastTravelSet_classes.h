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

// BlueprintGeneratedClass EVT_CDN_IsFastTravelSet.EVT_CDN_IsFastTravelSet_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEVT_CDN_IsFastTravelSet_C : public UEventCondition
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EVT_CDN_IsFastTravelSet.EVT_CDN_IsFastTravelSet_C");
		return ptr;
	}



	bool IsConditionMet(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
