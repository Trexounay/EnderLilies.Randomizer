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
	class ABP_SwitchHitbox_Door_C : public ABP_SwitchHitbox_C
	{
	public:
		struct FPointerToUberGraphFrame UberGraphFrame;        // 0x0290 (size: 0x8)
		class ABP_Door_C* Door;                                                           // 0x0298 (size: 0x8)

		void OnActivateSwitch(bool RequestInstant)
		{
				static UFunction* fn = nullptr;
				if (!fn) fn = UObject::FindObject<UFunction>("Function BP_SwitchHitbox_Door.BP_SwitchHitbox_Door_C.OnActivateSwitch");

				ABP_Door_C_Open_Params params;

				params.instant = RequestInstant;
				auto flags = fn->FunctionFlags;

				UObject::ProcessEvent(fn, &params);
				fn->FunctionFlags = flags;
		}
		void OnDeactivateSwitch(bool RequestInstant);
		void ExecuteUbergraph_BP_SwitchHitbox_Door(int EntryPoint);
	}; // Size: 0x2A0
}