#pragma once

#include "pch.h"
#include "SDK.h"
#include "SharedMemory.h"
#include <map>


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
	void	OnSave();
	void	OnEndingReached();
	void	EquipSpirit(CG::USummonerComponent_OnEquipSpirit_Params* params);
	void	OnInteract(CG::UObject* obj, CG::ABP_Interactable_Item_C_OnInteract_Params* params);

	bool _new_map = true;
	bool notif_visible;
private:
	static std::unordered_map<std::string, CG::UClass*>	_bp_classes;
	std::unordered_map<std::string, std::string> _data;
	std::unordered_set<int> _musics;

	std::unordered_map<CG::UClearableComponent*, std::string> _mapChecks;
	std::unordered_set<std::string> _completedChecks;
	std::vector<std::string> _receivedItems;

	std::string data_to_send;

	SharedMemory* _game_memory;
	SharedMemory* _remote_memory;

	bool _new_game = true;
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

	void ModifySpirits();
	void RefreshAptitudes();
	void ShuffleRelicSlots();
	void ShuffleMusic();
	void ModifySpawnPoints();
	void RemoveBreakable();
	void ReadSeedFile(std::string path);
	void FindItems(const std::string &string);
	FTableRowProxy ItemFound(CG::AActor* actor, CG::FDataTableRowHandle* itemhandle, CG::UClearableComponent* clearable);
	void TransitionFound(CG::AActor* actor, CG::FDataTableRowHandle* handle, CG::FName* PlayerStartTag, bool test);
	void FindNames();
	void NewGame();
	void NewMap();
	void ChangeStartingRoom(int room);
	void GameDataReady();
	bool FindTableRow(const std::string &item, FTableRowProxy& result);
	bool PlayerHasItem(const FTableRowProxy proxy);
	void AddItem(const std::string& item);
	void RemoveItem(const std::string& item);
	void SendData();
	void DumpTables();
	void AddClearableCheck(std::string name, CG::UClearableComponent* comp);
	void UpdateChecks();
	void UpdateItems();
	void QueueTipNotification(const std::string& item, const FTableRowProxy &result);

	void SetupAPItem(FTableRowProxy replacement, CG::FDataTableRowHandle* itemhandle, CG::FText* onGroundDescription);
	int AddAPItem(const std::string& item);
	//int AddNotification(const std::string& item);
};
