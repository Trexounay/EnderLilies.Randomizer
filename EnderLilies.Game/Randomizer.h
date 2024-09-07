#pragma once

#include "pch.h"
#include "SDK.h"
#include <map>
#include <deque>


static inline void ltrim(std::string& s) {
	s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
		return !std::isspace(ch);
	}));
}
static inline void rtrim(std::string& s) {
	s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
		return !std::isspace(ch);
	}).base(), s.end());
}
static inline void trim(std::string& s) {
	ltrim(s);
	rtrim(s);
}

struct FTableRowProxy
{
	int datatable;
	int entry;
	std::string tag;
	FTableRowProxy* progress = nullptr;
};

class Randomizer
{
public:
	CG::UWorld* World() { return *(CG::UWorld::GWorld); }

	Randomizer(std::string path);
	~Randomizer();

	bool	IsReady();
	void	Update();
	void	EquipSpirit(CG::USummonerComponent_OnEquipSpirit_Params* params);

	static CG::UFunction* FindFunction(const std::string& name)
	{
		return _bp_funcs[name];
	}

private:
	static std::unordered_map<std::string, CG::UClass*>	_bp_classes;
	static std::unordered_map<std::string, CG::UFunction*>	_bp_funcs;
	static std::deque<CG::ABP_EnemySpawnPoint_C*> _enemy_spawners;
	std::unordered_map<std::string, std::string> _data;
	std::unordered_set<int> _musics;

	bool _new_game = true;
	bool _new_map = true;
	bool _new_data = true;
	static constexpr const int passive_weapons[] = { 10, 11, 12, 18 };

	int _starting_weapon = 0;
	int _seed = -1;
	int _skin_override = -1;
	int _starting_room = 0;
	bool _has_normal_weapon = true;
	bool _shuffle_relics = false;
	bool _cheat = false;
	bool _shuffle_rooms = false;
	bool _shuffle_upgrades = false;
	bool _shuffle_enemies = false;
	bool _shuffle_bgm = false;
	bool _force_ancient_souls = false;
	bool _minibosses_chapter = false;
	int _min_chapter = 0;
	int _max_chapter = 10;

	float time_travel = 0;
	int room = 0;

	int32_t RestPointTag;
	int32_t BlueprintGeneratedClassIndex = 348039;
	int32_t FunctionIndex = 395;

	std::string _path;
	

	std::unordered_set<int> _aptitudes;
	std::unordered_map<std::string, FTableRowProxy> _replacements;
	std::unordered_map<std::string, int32_t> _player_start_tags;
	std::unordered_map<std::string, int32_t> _events;
	std::unordered_set<CG::FDataTableRowHandle*> _done;

	void RemoveHasItemCheck();
	void ModifySpirits();
	void RefreshAptitudes();
	void ShuffleRelicSlots();
	void ShuffleRooms();
	void ShuffleMusic();
	void ModifySpawnPoints();
	void RemoveBreakable();
	void ReadSeedFile(std::string path);
	void FindItems(const std::string &string);
	CG::TArray<CG::AActor*> FindEnemies(const std::string &string);
	void FindEnemySpawners();
	void ItemFound(CG::AActor* actor, CG::FDataTableRowHandle* itemhandle);
	void TransitionFound(CG::AActor* actor, CG::FDataTableRowHandle* handle, CG::FName* PlayerStartTag, bool test);
	void FindNames();
	void NewGame();
	void NewMap();
	void ChangeStartingRoom(int room);
	void GameDataReady();
	bool FindTableRow(const std::string &item, FTableRowProxy& result);
	bool PlayerHasItem(const FTableRowProxy proxy);

	// Added
	void AddParticlesToInteractable(const std::string& interactable_name);
	void TestingFunction();
	
	// Chapter Related
	void FixChapterLockedEnemies();
	bool FixChapterLockedEnemy(CG::ABP_Character_Enemy_Base_C* enemy, bool is_unique, bool modifyHP, bool modifyAttack, bool modifyXP);
	bool IsEnemyChapterLocked(std::string enemyName);
	bool IsInChapterLockedLocation(std::string locationName);

};

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
			UFunction* fn = Randomizer::FindFunction("BP_Condition_C.SetConditionResult");

			BP_Condition_C_SetConditionResult_Params params;
			params.ConditionResult = ConditionResult;
			params.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

			auto flags = fn->FunctionFlags;
			this->ProcessEvent(fn, &params);
			fn->FunctionFlags = flags;
		}

		void	OnEnemyDeath(UObject* EnemySpawnPoint)
		{
			UFunction* fn = Randomizer::FindFunction("BP_Condition_EnemyList_C.OnEnemyDeath");
			OnEnemyDeath_Params params;
			params.EnemySpawnPoint = EnemySpawnPoint;

			auto flags = fn->FunctionFlags;

			UObject::ProcessEvent(fn, &params);
			fn->FunctionFlags = flags;
		}
	};
}
