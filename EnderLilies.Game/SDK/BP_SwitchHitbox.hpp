#pragma once

// Name: enderlilies, Version: gerrod_room


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
#pragma pack(push, 0x01)
#endif

namespace CG
{
	class ABP_SwitchHitbox_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame  UberGraphFrame;                                  // 0x0220 (size: 0x8)
		class UParticleSystemComponent* ParticleSystem;                                   // 0x0228 (size: 0x8)
		class UParticleSystemComponent* ParticleSystemAttach;                             // 0x0230 (size: 0x8)
		class UClearableComponent* Clearable;                                             // 0x0238 (size: 0x8)
		class UPaperSpriteComponent* Sprite;                                              // 0x0240 (size: 0x8)
		class USphereComponent* Collider;                                                 // 0x0248 (size: 0x8)
		class USceneComponent* Scene;                                                     // 0x0250 (size: 0x8)
		bool IsActivated;                                                                 // 0x0258 (size: 0x1)
		unsigned char Unknown_stuff[0x7];                                                 // 0x0259 (size: 0x8)
		unsigned char OnStateChanged[0x10];                                               // 0x0260 (size: 0x10)
		//void OnStateChanged(class ABP_SwitchHitbox_C* SwitchHitbox);
		class UPaperSprite* SpriteInactive;                                               // 0x0270 (size: 0x8)
		class UPaperSprite* SpriteActive;                                                 // 0x0278 (size: 0x8)
		class UFMODEvent* ActivateSoundEvent;                                             // 0x0280 (size: 0x8)
		class UParticleSystem* BreakFX;                                                   // 0x0288 (size: 0x8)

		void SetIsActivated(bool IsActivated)
		{
			UFunction* fn = UObject::FindFunction("BP_SwitchHitbox_C.SetIsActivated");

			ABP_Door_C_Open_Params params;

			params.instant = IsActivated;
			auto flags = fn->FunctionFlags;

			UObject::ProcessEvent(fn, &params);
			fn->FunctionFlags = flags;
		}
		void GetIsActivated(bool& IsActivated);
		void DeactivateSwitch(bool RequestInstant);
		void ActivateSwitch(bool RequestInstant)
		{
			UFunction* fn = UObject::FindFunction("BP_SwitchHitbox_C.ActivateSwitch");

			ABP_Door_C_Open_Params params;

			params.instant = RequestInstant;
			auto flags = fn->FunctionFlags;

			UObject::ProcessEvent(fn, &params);
			fn->FunctionFlags = flags;
		}

		void ToggleSwitch()
		{
			UFunction* fn = UObject::FindFunction("BP_SwitchHitbox_C.ToggleSwitch");

			ABP_Door_C_Toggle_Params params;
			auto flags = fn->FunctionFlags;

			UObject::ProcessEvent(fn, &params);
			fn->FunctionFlags = flags;
		}

		void OnReady_5C801CCD4B2F8BEF00D460BC61CC62C0();

		void BndEvt__Collider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
		void OnActivateSwitch(bool RequestInstant);
		void OnDeactivateSwitch(bool RequestInstant);
		void BndEvt__Clearable_K2Node_ComponentBoundEvent_1_ClearableEvent__DelegateSignature(bool bAlreadyCleared);
		void ExecuteUbergraph_BP_SwitchHitbox(int EntryPoint);
		void OnStateChanged__DelegateSignature(class ABP_SwitchHitbox_C* SwitchHitbox);
	}; // Size: 0x290

}
