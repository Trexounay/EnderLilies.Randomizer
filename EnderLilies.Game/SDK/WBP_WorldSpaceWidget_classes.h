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

// WidgetBlueprintGeneratedClass WBP_WorldSpaceWidget.WBP_WorldSpaceWidget_C
// 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
class UWBP_WorldSpaceWidget_C : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnFinished;                                                // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_WorldSpaceWidget.WBP_WorldSpaceWidget_C");
		return ptr;
	}



	void Finish();
	void OnFinished__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
