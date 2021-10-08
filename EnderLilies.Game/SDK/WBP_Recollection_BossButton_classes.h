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

// WidgetBlueprintGeneratedClass WBP_Recollection_BossButton.WBP_Recollection_BossButton_C
// 0x00F0 (FullSize[0x03D8] - InheritedSize[0x02E8])
class UWBP_Recollection_BossButton_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Focused;                                                   // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      BossImage;                                                 // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  BossName;                                                  // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    FocusedContainer;                                          // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    NewContainer;                                              // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FRecollectionBossData                       BossData;                                                  // 0x0318(0x00A0) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, AdvancedDisplay)
	struct FDataTableRowHandle                         BossDataHandle;                                            // 0x03B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn)
	struct FScriptMulticastDelegate                    OnMoveToBossMap;                                           // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Recollection_BossButton.WBP_Recollection_BossButton_C");
		return ptr;
	}



	struct FEventReply OnPressConfirm(const struct FKeyEvent& KeyEvent);
	void Construct();
	void MoveToBossMap();
	void RefreshDesign(bool bFocused);
	void ExecuteUbergraph_WBP_Recollection_BossButton(int EntryPoint);
	void OnMoveToBossMap__DelegateSignature(const struct FDataTableRowHandle& BossMap);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
