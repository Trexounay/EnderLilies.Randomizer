#pragma once

#include "pch.h"
#include "SDK.h"

namespace CG
{
	struct BP_Condition_C_SetConditionResult_Params
	{
		bool ConditionResult;
		bool CallFunc_NotEqual_BoolBool_ReturnValue;
	};

	struct OnEnemyDeath_Params
	{
		UObject* EnemySpawnPoint;
	};

	class BP_Condition_EnemyList : public AActor
	{
	public:
		class UActorComponent* TextRender;                                            // 0x220(0x8) (ZeroConstructor, Transient, DuplicateTransient)
		class USceneComponent* DefaultSceneRoot;                                      // 0x228(0x8) (ZeroConstructor, Transient, DuplicateTransient)
		struct FScriptMulticastDelegate	OnConditionResultChanged;                              // 0x230(0x10) (ZeroConstructor, Transient, DuplicateTransient)
		bool							ConditionResult;                                       // 0x240(0x1) (ZeroConstructor, Transient, DuplicateTransient)
		bool							InvertResult;                                          // 0x241(0x1) (ZeroConstructor, Transient, DuplicateTransient)
		unsigned char					UnknownData_1379[0x6];					               // 0x242(0x6) (ZeroConstructor, Transient, DuplicateTransient)
		struct FPointerToUberGraphFrame UberGraphFrame;										   // 0x248(0x8) (ZeroConstructor, Transient, DuplicateTransient)
		TArray<UObject*>				Enemies;											   // 0x250(0x10) (ZeroConstructor, Transient, DuplicateTransient)
		int32_t							EnemyDeathCount;                                       // 0x260(0x4) (ZeroConstructor, Transient, DuplicateTransient)

		static UClass* StaticClass()
		{
			static UClass* ptr = nullptr;
			if (!ptr)
				ptr = UObject::FindClass("BlueprintGeneratedClass BP_Condition_EnemyList_C");
			return ptr;
		}
		
		void	SetConditionResult(bool ConditionResult, bool CallFunc_NotEqual_BoolBool_ReturnValue)
		{
			static UFunction* fn = CG::UObject::FindFunction("BP_Condition_C.SetConditionResult");

			BP_Condition_C_SetConditionResult_Params params;
			params.ConditionResult = ConditionResult;
			params.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

			auto flags = fn->FunctionFlags;
			this->ProcessEvent(fn, &params);
			fn->FunctionFlags = flags;
		}

		void	OnEnemyDeath(UObject* EnemySpawnPoint)
		{
			static UFunction* fn = CG::UObject::FindFunction("BP_Condition_EnemyList_C.OnEnemyDeath");
			OnEnemyDeath_Params params;
			params.EnemySpawnPoint = EnemySpawnPoint;

			auto flags = fn->FunctionFlags;

			UObject::ProcessEvent(fn, &params);
			fn->FunctionFlags = flags;
		}
	};
}
