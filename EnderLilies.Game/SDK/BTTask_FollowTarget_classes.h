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

// BlueprintGeneratedClass BTTask_FollowTarget.BTTask_FollowTarget_C
// 0x0033 (FullSize[0x00E8] - InheritedSize[0x00B5])
class UBTTask_FollowTarget_C : public UBTTask_MoveBase_C
{
public:
	unsigned char                                      UnknownData_KU3I[0x3];                                     // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      TargetKey;                                                 // 0x00C0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_FollowTarget.BTTask_FollowTarget_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_FollowTarget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
