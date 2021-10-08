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

// BlueprintGeneratedClass EVT_SKIP_ev_05.EVT_SKIP_ev_05_C
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UEVT_SKIP_ev_05_C : public UEVT_SKIP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0038(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EVT_SKIP_ev_05.EVT_SKIP_ev_05_C");
		return ptr;
	}



	void OnSkip(class UEventPlayer* EventPlayer);
	void ExecuteUbergraph_EVT_SKIP_ev_05(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
