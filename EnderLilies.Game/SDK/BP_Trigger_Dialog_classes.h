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

// BlueprintGeneratedClass BP_Trigger_Dialog.BP_Trigger_Dialog_C
// 0x003F (FullSize[0x02B0] - InheritedSize[0x0271])
class ABP_Trigger_Dialog_C : public ABP_Trigger_C
{
public:
	unsigned char                                      UnknownData_R6XD[0x7];                                     // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       DialogMessage;                                             // 0x0280(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DialogOKButton;                                            // 0x0298(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Trigger_Dialog.BP_Trigger_Dialog_C");
		return ptr;
	}



	void OnTrigger(class APlayerController* PlayerController);
	void ExecuteUbergraph_BP_Trigger_Dialog(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
