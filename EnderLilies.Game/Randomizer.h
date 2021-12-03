#pragma once

#include "pch.h"
#include "SDK.h"
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
	FTableRowProxy* progress = nullptr;
};

class Randomizer
{
public:
	CG::UWorld* World() { return *_pworld; }

	Randomizer(std::string path, CG::UWorld** pworld);
	~Randomizer();

	bool IsReady();
	void Update();

private:
	CG::UWorld** _pworld;

	bool _new_game = true;
	bool _new_map = true;
	bool _new_data = true;

	int _skin_override = -1;
	bool _shuffle_relics = false;
	bool _shuffle_rooms = false;
	bool _force_ancient_souls = false;

	std::string _path;
	std::unordered_map<std::string, FTableRowProxy> _replacements;
	std::unordered_set<CG::FDataTableRowHandle*> _done;

	CG::UClass* _bosses;
	CG::UClass* _pickups;
	CG::UClass* _chests;
	CG::UClass* _transitions_volumes;
	CG::UClass* _transitions_trigger;

	CG::FNameEntry* _bosses_name;
	CG::FNameEntry* _pickups_name;
	CG::FNameEntry* _chests_name;
	CG::FNameEntry* _transitions_volumes_name;
	CG::FNameEntry* _transitions_trigger_name;

	void RemoveHasItemCheck();
	void ModifySpirits();
	void RefreshAptitudes();
	void ShuffleRelicSlots();
	void ShuffleRooms();
	void ReadSeedFile(std::string path);
	void FindItems(CG::UClass* type);
	void ItemFound(CG::AActor* actor, CG::FDataTableRowHandle* itemhandle);
	void TransitionFound(CG::FDataTableRowHandle* handle, CG::FName* PlayerStartTag);
	void FindNames();
	void NewGame();
	void NewMap();
	void GameDataReady();
	bool FindTableRow(std::string item, FTableRowProxy& result);
	bool PlayerHasItem(const FTableRowProxy proxy);
};
