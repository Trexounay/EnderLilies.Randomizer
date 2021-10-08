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

// BlueprintGeneratedClass GameViewportZenith.GameViewportZenith_C
// 0x0008 (FullSize[0x04A8] - InheritedSize[0x04A0])
class UGameViewportZenith_C : public UGameViewportZenithBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GameViewportZenith.GameViewportZenith_C");
		return ptr;
	}



	void OnControllerConnected(int ControllerId);
	void OnControllerDisconnected(int ControllerId);
	void OnKeyDownBP(const struct FKeyEvent& InKeyEvent);
	void OnMouseMoveBP(const struct FPointerEvent& MouseEvent);
	void OnMouseDownBP(const struct FPointerEvent& MouseEvent);
	void OnReceivedFocus();
	void OnApplicationDeactivated();
	void OnApplicationReactivated();
	void ExecuteUbergraph_GameViewportZenith(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
