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

// BlueprintGeneratedClass BP_PlatformProfileChecker.BP_PlatformProfileChecker_C
// 0x0019 (FullSize[0x00C9] - InheritedSize[0x00B0])
class UBP_PlatformProfileChecker_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CheckProfileChanges;                                       // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_97CJ[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWBP_DialogProfileChange_C*                  ProfileDialogWidget;                                       // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               InProcess;                                                 // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlatformProfileChecker.BP_PlatformProfileChecker_C");
		return ptr;
	}



	void CheckProfileValidity();
	void OnReady_B701D1744B99269AEABE44B251E50948();
	void ReceiveBeginPlay();
	void OnProfileChangeDetected();
	void OnProfileResumeGame();
	void OnCurrentProfileChanged();
	void OnLockActiveControllerID();
	void ExecuteUbergraph_BP_PlatformProfileChecker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
