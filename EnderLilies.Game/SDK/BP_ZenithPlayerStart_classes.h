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

// BlueprintGeneratedClass BP_ZenithPlayerStart.BP_ZenithPlayerStart_C
// 0x0068 (FullSize[0x02B8] - InheritedSize[0x0250])
class ABP_ZenithPlayerStart_C : public AZenithPlayerStart
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0250(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UEventAsset*                                 EventOnRespawn;                                            // 0x0258(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FName, class AActor*>                  ActorBindings;                                             // 0x0260(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FTimerHandle                                CheckLoadingHandle;                                        // 0x02B0(0x0008) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZenithPlayerStart.BP_ZenithPlayerStart_C");
		return ptr;
	}



	void OnReady_DA4995B24DCA828804B34EAB8F3BFE41();
	void OnReady_F13B2D194E945BB1D5D4F98A77744A89();
	void OnPlayerRespawn(class APlayerController* PlayerController, class APawn* Pawn);
	void PostWorldLoading();
	void OnSaveFinished(bool bSuccess);
	void ExecuteUbergraph_BP_ZenithPlayerStart(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
