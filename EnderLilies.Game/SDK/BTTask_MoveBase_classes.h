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

// BlueprintGeneratedClass BTTask_MoveBase.BTTask_MoveBase_C
// 0x000D (FullSize[0x00B5] - InheritedSize[0x00A8])
class UBTTask_MoveBase_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              AcceptableRadius;                                          // 0x00B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Zenith_EWalkMode                                   ForcedWalkMode;                                            // 0x00B4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_MoveBase.BTTask_MoveBase_C");
		return ptr;
	}



	void IsAlreadyAtDestination(class APawn* Pawn, const struct FVector& TargetLocation, class AActor* TargetActor, bool* Result);
	void ClampDestination(const struct FVector& Destination, struct FVector* ClampedDestination);
	void OnFail_F1A707A84ECFFDEAE2AF4EB36EB48C8A(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_F1A707A84ECFFDEAE2AF4EB36EB48C8A(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnMoveFinished_51D1FBAA45E53E8DCB3F09A9336A616B(TEnumAsByte<AIModule_EPathFollowingResult> Result, class AAIController* AIController);
	void OnRequestFailed_51D1FBAA45E53E8DCB3F09A9336A616B();
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void OnMoveSuccess();
	void OnMoveFail();
	void ExecuteMovement(class AAIController* OwnerController, class APawn* ControlledPawn, const struct FVector& Destination, class AActor* TargetActor);
	void ExecuteUbergraph_BTTask_MoveBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
