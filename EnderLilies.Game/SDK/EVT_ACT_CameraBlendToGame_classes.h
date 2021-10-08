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

// BlueprintGeneratedClass EVT_ACT_CameraBlendToGame.EVT_ACT_CameraBlendToGame_C
// 0x0000 (FullSize[0x0054] - InheritedSize[0x0054])
class UEVT_ACT_CameraBlendToGame_C : public UEVT_ACT_CameraBlendToEvent_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EVT_ACT_CameraBlendToGame.EVT_ACT_CameraBlendToGame_C");
		return ptr;
	}



	void GetViewTarget(class UEventBlackBoard* EventBlackBoard, class AActor** ViewTarget);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
