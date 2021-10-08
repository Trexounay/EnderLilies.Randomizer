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

// BlueprintGeneratedClass CA_LedgeClimb_Base.CA_LedgeClimb_Base_C
// 0x0070 (FullSize[0x0358] - InheritedSize[0x02E8])
class UCA_LedgeClimb_Base_C : public UCA_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CameraSpeedBlendFactorMin;                                 // 0x02F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CameraSpeedBlendTime;                                      // 0x02F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LocalLocationOffset;                                       // 0x02F8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JCRI[0x4];                                     // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveVector*                                LocationBlendCurve;                                        // 0x0308(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VisualPivotResetBlendTime;                                 // 0x0310(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseIK;                                                     // 0x0314(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7S1Q[0x3];                                     // 0x0315(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       IKBoneTagName;                                             // 0x0318(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ClimbTargetLocation;                                       // 0x0320(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                                     StartPawnLocation;                                         // 0x032C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class USceneComponent*                             PawnVisualPivot;                                           // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class USceneComponent*                             IKBone;                                                    // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UAutoClimbComponent*                         CachedAutoClimbComponent;                                  // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UBP_IKBones_C*                               CachedIKBonesComponent;                                    // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass CA_LedgeClimb_Base.CA_LedgeClimb_Base_C");
		return ptr;
	}



	void RefreshIKBoneLocation();
	void CacheClimbTargetLocation();
	Zenith_ECommandResult OnSampleCommandAction(float DeltaTime);
	void OnEndCommandAction(Zenith_ECommandRemoveTypes RemoveType);
	void OnStartCommandAction();
	void OnChangePawn(class APawn* OldPawnSubject, class APawn* NewPawnSubject);
	void ExecuteUbergraph_CA_LedgeClimb_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
