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

	struct ABP_Door_C_Open_Params
	{
		bool instant;
	};

	// Function Engine.MovementComponent.SetPlaneConstraintFromVectors
	struct ABP_Door_C_IsOpen_Params
	{
		bool isOpen;
	};
	// Function Engine.MovementComponent.SetPlaneConstraintFromVectors
	struct ABP_Door_C_Toggle_Params
	{
	};

	class ABP_Door_C : public AActor
	{
	public:
		FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
		class USceneComponent* FXLocation;                                                // 0x0228 (size: 0x8)
		class UPaperSpriteComponent* Sprite;                                              // 0x0230 (size: 0x8)
		class UBoxComponent* Box;                                                         // 0x0238 (size: 0x8)
		class USceneComponent* DoorContainer;                                             // 0x0240 (size: 0x8)
		class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
		bool StartOpen;                                                                   // 0x0250 (size: 0x1)
		char padding_0[0x7];                                                              // 0x0251 (size: 0x7)
		class UFMODEvent* SoundEventOpen;                                                 // 0x0258 (size: 0x8)
		class UFMODEvent* SoundEventClose;                                                // 0x0260 (size: 0x8)
		bool IsOpen;                                                                      // 0x0268 (size: 0x1)
		char padding_1[0x7];                                                              // 0x0269 (size: 0x7)
		class UFMODEvent* AttackSoundEvent;                                               // 0x0270 (size: 0x8)
		class UParticleSystem* AttackParticleSystem;                                      // 0x0278 (size: 0x8)
		bool ComputeAttackFXLocation;                                                     // 0x0280 (size: 0x1)

		void TriggerAbilityCollisionEffects(class AAbilityHitbox* AbilityHitbox);
		void Toggle()
		{
			UFunction* fn = UObject::FindFunction("BP_Door_C.Toggle");

			ABP_Door_C_Toggle_Params params;
			auto flags = fn->FunctionFlags;

			UObject::ProcessEvent(fn, &params);
			fn->FunctionFlags = flags;
		}
		void Close(bool RequestInstant);


		void Open(bool RequestInstant)
		{
			UFunction* fn = UObject::FindFunction("BP_Door_C.Open");

			ABP_Door_C_Open_Params params;

			params.instant = RequestInstant;
			auto flags = fn->FunctionFlags;

			UObject::ProcessEvent(fn, &params);
			fn->FunctionFlags = flags;
		}

		void GetIsOpen(bool& IsOpen)
		{
			UFunction* fn = UObject::FindFunction("BP_Door_C.GetIsOpen");

			ABP_Door_C_IsOpen_Params params;

			params.isOpen = IsOpen;
			auto flags = fn->FunctionFlags;

			UObject::ProcessEvent(fn, &params);
			fn->FunctionFlags = flags;
			IsOpen = params.isOpen;
		}

		void OnOpen(bool RequestInstant);
		void OnClose(bool RequestInstant);
		void ReceiveBeginPlay();
		void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
		void ExecuteUbergraph_BP_Door(int EntryPoint);
	}; // Size: 0x281
}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
