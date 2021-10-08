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

// BlueprintGeneratedClass BP_GameplayCamera.BP_GameplayCamera_C
// 0x0014 (FullSize[0x0A14] - InheritedSize[0x0A00])
class ABP_GameplayCamera_C : public AGameplayCamera
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0A00(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            StreamTrigger;                                             // 0x0A08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              DBG_CameraZoomSpeed;                                       // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameplayCamera.BP_GameplayCamera_C");
		return ptr;
	}



	void InpActEvt_CameraReset_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ActivateStreamingTrigger();
	void ReceiveTick(float DeltaSeconds);
	void InpAxisEvt_CameraAltY_K2Node_InputAxisEvent_1(float AxisValue);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BP_GameplayCamera(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
