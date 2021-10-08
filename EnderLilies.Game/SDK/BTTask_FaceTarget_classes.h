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

// BlueprintGeneratedClass BTTask_FaceTarget.BTTask_FaceTarget_C
// 0x0031 (FullSize[0x00F9] - InheritedSize[0x00C8])
class UBTTask_FaceTarget_C : public UBTTask_FaceDirectionBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      TargetKey;                                                 // 0x00D0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               FaceOpposite;                                              // 0x00F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_FaceTarget.BTTask_FaceTarget_C");
		return ptr;
	}



	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_FaceTarget(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
