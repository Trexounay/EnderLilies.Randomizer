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

// BlueprintGeneratedClass BP_WaterInteractionComponent.BP_WaterInteractionComponent_C
// 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
class UBP_WaterInteractionComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_WaterSurface_C*                          WaterSurface;                                              // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class ABP_CustomPhysicsVolume_Water_C*             WaterVolume;                                               // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_WaterInteractionComponent.BP_WaterInteractionComponent_C");
		return ptr;
	}



	void IsOverlappingWaterSurface(bool* CanDisplay);
	void OnFinish_E3898B81464AE4DC15F4A1B8E356DF1B();
	void ReceiveBeginPlay();
	void OnActorBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnActorEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void splash(const struct FVector& WorldLocation, float Size, float Strength);
	void TriggerStep(Zenith_EWalkMode Index, const struct FVector& ActorLocation);
	void TriggerWaterVolumeEntryMedium();
	void ExecuteUbergraph_BP_WaterInteractionComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
