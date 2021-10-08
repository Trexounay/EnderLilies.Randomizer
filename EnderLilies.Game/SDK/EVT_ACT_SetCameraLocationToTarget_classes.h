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

// BlueprintGeneratedClass EVT_ACT_SetCameraLocationToTarget.EVT_ACT_SetCameraLocationToTarget_C
// 0x0080 (FullSize[0x00C0] - InheritedSize[0x0040])
class UEVT_ACT_SetCameraLocationToTarget_C : public UEventAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0040(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData_7MGQ[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  TransformOffset;                                           // 0x0050(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor)
	float                                              BlendTime;                                                 // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EEasingFunc>                    EaseFunction;                                              // 0x0084(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W5JM[0x3];                                     // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlendExp;                                                  // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CurrTime;                                                  // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FTransform                                  StartTransform;                                            // 0x0090(0x0030) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass EVT_ACT_SetCameraLocationToTarget.EVT_ACT_SetCameraLocationToTarget_C");
		return ptr;
	}



	void GetTargetTransform(class AActor* ActorTarget, struct FTransform* TargetTransform);
	void OnStartAction(class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
	void OnTickAction(float DeltaTime, class APlayerController* ConsideringPlayer, class AActor* Subject, class AActor* Target, class UEventBlackBoard* EventBlackBoard);
	void ExecuteUbergraph_EVT_ACT_SetCameraLocationToTarget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
