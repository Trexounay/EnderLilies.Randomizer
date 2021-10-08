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

// BlueprintGeneratedClass BP_ControllerChecker.BP_ControllerChecker_C
// 0x0019 (FullSize[0x00C9] - InheritedSize[0x00B0])
class UBP_ControllerChecker_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CheckControllerDisconnect;                                 // 0x00B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PZ2J[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWBP_DialogNoController_C*                   NoControllerWidget;                                        // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               InProcess;                                                 // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ControllerChecker.BP_ControllerChecker_C");
		return ptr;
	}



	void CheckController();
	void OnReady_875B41654187463385316FB7395B8A76();
	void ReceiveBeginPlay();
	void OnMainControllerDisconnected();
	void OnClose();
	void ExecuteUbergraph_BP_ControllerChecker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
