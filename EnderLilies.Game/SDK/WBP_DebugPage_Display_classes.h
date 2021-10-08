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

// WidgetBlueprintGeneratedClass WBP_DebugPage_Display.WBP_DebugPage_Display_C
// 0x0088 (FullSize[0x0370] - InheritedSize[0x02E8])
class UWBP_DebugPage_Display_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_DebugMenuToggleEntry_C*                 HideScreenMessages;                                        // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuToggleEntry_C*                 HideSpine;                                                 // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuButtonEntry_C*                 HideUIA;                                                   // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuValueEntry_C*                  InputStyle;                                                // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuToggleEntry_C*                 ShowCollisions;                                            // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_DebugMenuToggleEntry_C*                 ShowFPS;                                                   // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<int, Zenith_EInputStyle>                      ValueToInputStyle;                                         // 0x0320(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DebugPage_Display.WBP_DebugPage_Display_C");
		return ptr;
	}



	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void BndEvt__WBP_DebugPage_Display_WBP_DebugMenuValueEntry_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(int NewValue);
	void BndEvt__WBP_DebugPage_Display_HideUIA_K2Node_ComponentBoundEvent_2_OnExecute__DelegateSignature();
	void ExecuteUbergraph_WBP_DebugPage_Display(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
