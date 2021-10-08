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

// WidgetBlueprintGeneratedClass WBP_Get_Item_Base.WBP_Get_Item_Base_C
// 0x0040 (FullSize[0x0328] - InheritedSize[0x02E8])
class UWBP_Get_Item_Base_C : public UUserWidgetNavigable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Hide;                                                      // 0x02F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Show;                                                      // 0x02F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         Item;                                                      // 0x0300(0x0010) (Edit, BlueprintVisible, Transient, NoDestructor, AdvancedDisplay, ExposeOnSpawn)
	bool                                               AllowValidation;                                           // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	unsigned char                                      UnknownData_ATCX[0x7];                                     // 0x0311(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnClose;                                                   // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Get_Item_Base.WBP_Get_Item_Base_C");
		return ptr;
	}



	void OnFinish_066E292E42E788874C41348F12D48BA4();
	void OnFinish_2071A4134BF576284BB5479CA378CF87();
	void OnFinish_066E292E42E788874C41348F736DBC3D();
	void OnFinish_2071A4134BF576284BB5479CC2C1F81E();
	void Construct();
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void OnConfirm();
	void ExecuteUbergraph_WBP_Get_Item_Base(int EntryPoint);
	void OnClose__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
