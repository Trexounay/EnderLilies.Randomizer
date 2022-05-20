#include "pch.h"
#include "SDK.h"
#include "Randomizer.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>

std::unordered_map<std::string, CG::UClass*>	Randomizer::_bp_classes;
std::unordered_map<std::string, CG::UFunction*>	Randomizer::_bp_funcs;


Randomizer::Randomizer(std::string path, CG::UWorld** pworld)
{
	_path = path;
	_pworld = pworld;
}


Randomizer::~Randomizer()
{
}

void Randomizer::FindNames()
{
	std::cout << "INIT" << std::endl;
	uintptr_t lastFNameAddress = NULL;
	int32_t nextFNameComparisonId = -1;
	CG::FNamePool pool = CG::FName::GetGlobalNames();

	if (pool[BlueprintGeneratedClassIndex]->GetAnsiName() == "BlueprintGeneratedClass" &&
		pool[FunctionIndex]->GetAnsiName() == "Function")
		return;

	BlueprintGeneratedClassIndex = -1;
	const char* music = "/Game/FMOD/Events/Music/";
	FunctionIndex = -1;
	for (CG::FNameEntry* name = pool.GetNext(lastFNameAddress, nextFNameComparisonId);
		name != nullptr && lastFNameAddress != 0;
		name = pool.GetNext(lastFNameAddress, nextFNameComparisonId))
	{
		auto str = name->GetAnsiName();
		if (str == "BlueprintGeneratedClass")
			BlueprintGeneratedClassIndex = nextFNameComparisonId;
		else if (str == "Function")
			FunctionIndex = nextFNameComparisonId;
		else if (_shuffle_bgm && !strncmp(str.c_str(), music, strlen(music)) && str.find('.', strlen(music)) != std::string::npos)
			_musics.insert(nextFNameComparisonId);
		if (!_shuffle_bgm && BlueprintGeneratedClassIndex > 0 && FunctionIndex > 0)
			return;
	}
}

const CG::FGuid MainLevel = { 1674253860, 1178503981, -1366124878, -652381037 };
bool Randomizer::IsReady()
{
	CG::UWorld* world = World();
	if (world == nullptr)
		return false;
	if (world->AuthorityGameMode == nullptr ||
		world->PersistentLevel == nullptr ||
		world->PersistentLevel->LevelBuildDataId != MainLevel)
	{
		_new_game = true;
		return false;
	}
	CG::UGameInstanceZenithBase* GameInstance = (CG::UGameInstanceZenithBase*)(world->OwningGameInstance);
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)world->AuthorityGameMode;
	if (GameInstance == nullptr || GameInstance->LocalPlayers.Num() < 1 || world->OwningGameInstance->LocalPlayers[0]->PlayerController == nullptr)
	{
		_new_game = true;
		return false;
	}
	if (_new_game)
		this->NewGame();
	if (!gm->bGameDataReady)
	{
		_new_data = true;
		return false;
	}
	CG::UWorldLoaderSubsystem* loader = (CG::UWorldLoaderSubsystem*)GameInstance->SubSystems[0x1F];
	if (loader == nullptr || loader->bProcessingLoad)
	{
		_new_map = true;
		return false;
	}
	if (_new_data)
		this->GameDataReady();
	if (_new_map)
		this->NewMap();
	return true;
}


void  Randomizer::EquipSpirit(CG::USummonerComponent_OnEquipSpirit_Params* params)
{
	if (!_cheat && _starting_weapon < 5)
		return;
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
	CG::FName spiritID = gm->ItemSpiritTable->Data[_starting_weapon].Name;

	if (!_has_normal_weapon)
	{
		_has_normal_weapon = true;
		for (int i = 0; i < 4; i++)
		{
			if (params->SpiritData.SpiritID == gm->ItemSpiritTable->Data[passive_weapons[i]].Name)
			{
				_has_normal_weapon = false;
				break;
			}
		}
	}

	if (!_cheat && params->SpiritData.SpiritID != spiritID)
		return;
	auto command_class = params->SpiritData.CommandSettingsData->CommandSettings.CommandActionType;
	auto count = CG::UObject::GetGlobalObjects().Num();
	for (int i = count; i > 0; --i)
	{
		auto object = CG::UObject::GetGlobalObjects().GetByIndex(i - 1);
		if (object == nullptr)
			continue;
		if (object->Class == command_class)
		{
			if (object->IsA(CG::UCommandActionSummon::StaticClass()))
			{
				auto cas = ((CG::UCommandActionSummon*)object);
				cas->SettingsSummonCastLimit.CastLimitType = CG::Zenith_ECommandSummonLimitType::ECommandSummonLimitType__None;
				if (_cheat)
				{
					cas->RecastTime = 0;
					cas->MaxAirborneExecutionCount = 0;
				}
			}
			else if (object->IsA(CG::UCommandActionComboSummon::StaticClass()))
			{
				auto cas = ((CG::UCommandActionComboSummon*)object);
				cas->SettingsSummonCastLimit.CastLimitType = CG::Zenith_ECommandSummonLimitType::ECommandSummonLimitType__None;
				if (_cheat)
				{
					cas->RecastTime = 0;
					cas->MaxAirborneExecutionCount = 0;
				}
			}
			return;
		}
	}
	std::cout << "not found " << command_class->Name.GetAnsiName() << std::endl;
}


void Randomizer::NewGame()
{
	_new_game = false;
	std::cout << "NEWGAME" << std::endl;
	ReadSeedFile(_path + "/EnderLiliesSeed.txt");
	FindNames();
	RemoveHasItemCheck();
	if (_shuffle_bgm)
		ShuffleMusic();
	if (_shuffle_rooms)
		ShuffleRooms();
	if (_shuffle_relics)
		ShuffleRelicSlots();
	ModifySpirits();
}

void Randomizer::GameDataReady()
{
	_new_data = false;
	std::cout << "NEWDATA" << std::endl;
	RefreshAptitudes();
}

void Randomizer::NewMap()
{
	_new_map = false;
	std::cout << "NEWMAP" << std::endl;
	_done.clear();
	_bp_classes.clear();
	_bp_funcs.clear();

	CG::FNamePool pool = CG::FName::GetGlobalNames();

	for (int i = 0; i < CG::UObject::GetGlobalObjects().Num(); ++i)
	{
		auto object = CG::UObject::GetGlobalObjects().GetByIndex(i);
		if (object == nullptr || object->Name.ComparisonIndex == 0 || object->Class->SuperField == nullptr)
			continue;
		if (object->Class->Name.ComparisonIndex == BlueprintGeneratedClassIndex)
		{
			_bp_classes[object->Name.GetAnsiName()] = static_cast<CG::UClass*>(object);
		}
		else if (object->Class->Name.ComparisonIndex == FunctionIndex)
		{
			CG::FNameEntry* entry = CG::FName::GetGlobalNames()[object->Outer->Name.ComparisonIndex];
			if (entry->AnsiName[0] == 'B' && entry->AnsiName[1] == 'P')
				_bp_funcs[object->Outer->Name.GetAnsiName() + "." + object->Name.GetAnsiName()] = static_cast<CG::UFunction*>(object);
		}
	}
	if (_skin_override >= 0)
	{
		auto parameter = ((CG::AZenithPlayerController*)World()->OwningGameInstance->LocalPlayers[0]->PlayerController)->ParameterPlayerComponent;
		if (parameter != nullptr)
			parameter->SetSkinLevelOverride(_skin_override, true);
	}
	ModifySpawnPoints();

	if (!_has_normal_weapon)
		RemoveBreakable();

#ifdef _DEBUG
	/*
	std::fstream file("dataout.txt", std::ios::out);

	for (const auto& elem : _data) {
		file << elem.first << "\t" << elem.second << "\n";
	}*/
#endif
}

void Randomizer::RemoveBreakable()
{
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
	CG::UGameplayStatics* statics = (CG::UGameplayStatics*)CG::UGameplayStatics::StaticClass();
	CG::UClass* type = _bp_classes["BP_Breakable_Base_C"];
	if (type != nullptr)
	{
		CG::TArray<CG::AActor*> out;
		statics->STATIC_GetAllActorsOfClass(World(), type, &out);
		for (int i = 0; i < out.Num(); ++i)
		{
			CG::ABreakable* door = (CG::ABreakable*)out[i];
			door->HPComponent->DoDamage(nullptr, 1000, false, false);
		}
	}
}

struct FActorSpawnParameters
{
public:
	CG::FName Name;
	CG::AActor* Template;
	CG::AActor* Owner;
	CG::APawn* Instigator;
	CG::ULevel* OverrideLevel;
	CG::Engine_ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride;
	uint8_t bRemoteOwned : 1;
	uint8_t bNoFail : 1;
	uint8_t bDeferConstruction : 1;
	uint8_t	bAllowDuringConstructionScript : 1;
	uint8_t NameMode;
	CG::EObjectFlags ObjectFlags;
};


void Randomizer::ModifySpawnPoints()
{
	CG::UGameplayStatics* statics = (CG::UGameplayStatics*)CG::UGameplayStatics::StaticClass();
	if (_shuffle_bgm && _musics.size() > 0)
	{
		CG::UGameInstanceZenithBase* GameInstance = (CG::UGameInstanceZenithBase*)(World()->OwningGameInstance);
		CG::UWorldLoaderSubsystem* loader = (CG::UWorldLoaderSubsystem*)GameInstance->SubSystems[0x1F];
		CG::USoundSubsystem* sound = (CG::USoundSubsystem*)GameInstance->SubSystems[25];
		CG::TArray<CG::AActor*> out;
		statics->STATIC_GetAllActorsOfClass(World(), _bp_classes["BP_EnemySpawnPoint_Boss_C"], &out);
		for (int i = 0; i < out.Num(); ++i)
		{
			CG::ABP_EnemySpawnPoint_Boss_C* spawn1 = (CG::ABP_EnemySpawnPoint_Boss_C*)out[i];
			sound->StopBGM();
			spawn1->BGMEvent = (CG::UFMODEvent*)loader->CurrentGameMapData.BGMEvent.WeakPtr.Get();
		}
	}
	if (!_shuffle_enemies && !_minibosses_chapter)
		return;
	CG::TArray<CG::AActor*> out;
	statics->STATIC_GetAllActorsOfClass(World(), _bp_classes["BP_EnemySpawnPoint_C"], &out);
	int count = out.Num();
	if (count > 0)
	{
		std::vector<int> shuffled;
		for (int i = 0; i < count; ++i)
		{
			CG::ABP_EnemySpawnPoint_C* spawn1 = (CG::ABP_EnemySpawnPoint_C*)out[i];
			if (spawn1->bHOOK_ConsiderAsBossSpawn)
			{
				if (_minibosses_chapter)
				{
					spawn1->bAddDifficultyLevelOnClear = true;
					spawn1->LockDifficultyLevelOfAreasOnClear.Empty();
				}
				continue;
			}
			/*
			CG::FRotator r = spawn1->K2_GetActorRotation();
			CG::FTransform t = spawn1->GetTransform();
			t.Translation.Y += 200;
			uintptr_t base = reinterpret_cast<uintptr_t>(GetModuleHandleA(0));
			FActorSpawnParameters spawn_params;
			((void(__fastcall*)(FActorSpawnParameters*)) (base + 0x2945840))(&spawn_params);
			spawn_params.ObjectFlags = (CG::EObjectFlags)0x48;
			spawn_params.OverrideLevel = (CG::ULevel*)spawn1->Outer;
			spawn_params.Owner = spawn1;
			spawn_params.SpawnCollisionHandlingOverride = CG::Engine_ESpawnActorCollisionHandlingMethod::ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButDontSpawnIfColliding;
			auto a = (CG::APawn*)((CG::AActor * (__fastcall*)(CG::UWorld*, CG::UClass*, CG::FVector*, CG::FRotator*, FActorSpawnParameters*))(base + 0x25FE600))
				(World(), spawn1->CharacterToSpawn, &t.Translation, &r, &spawn_params);
			if (a != nullptr)
			{
				a->SetActorScale3D(CG::FVector(2, 2, 2));
				a->SpawnDefaultController();
			}
			*/
			spawn1->bShouldActivateByDefault = true;
			shuffled.push_back(i);
		}
		if (_shuffle_enemies)
		{
			srand(_seed + count);
			for (int i = shuffled.size(); i > 1;)
			{
				int k = rand() % i;
				i--;
				CG::ABP_EnemySpawnPoint_C* spawn1 = (CG::ABP_EnemySpawnPoint_C*)out[shuffled[i]];
				CG::ABP_EnemySpawnPoint_C* spawn2 = (CG::ABP_EnemySpawnPoint_C*)out[shuffled[k]];
				auto transform1 = spawn1->GetTransform();
				spawn1->RootComponent->K2_SetWorldTransform(spawn2->GetTransform(), false, NULL, true);
				spawn2->RootComponent->K2_SetWorldTransform(transform1, false, NULL, true);
			}
			if (_bp_classes["BP_Condition_EnemyList_C"] != NULL)
			{
				CG::TArray<CG::AActor*> out;
				statics->STATIC_GetAllActorsOfClass(World(), _bp_classes["BP_Condition_EnemyList_C"], &out);
				for (int i = 0; i < out.Num(); ++i)
				{
					CG::BP_Condition_EnemyList* condition = (CG::BP_Condition_EnemyList*)out[i];
					if (!condition->ConditionResult)
						condition->SetConditionResult(true, true);
				}
			}
		}
	}
}


void Randomizer::Update()
{
	FindItems("BP_Character_Boss_Base_C");
	FindItems("BP_Interactable_Item_C");
	FindItems("BP_Interactable_Treasure_C");
}


void Randomizer::FindItems(const std::string& type_name)
{
	CG::UClass* type = _bp_classes[type_name];
	if (type == nullptr)
		return;
	if (type->Name.ComparisonIndex <= 0)
	{
		_new_map = true;
		return;
	}
	CG::UGameplayStatics* statics = (CG::UGameplayStatics*)CG::UGameplayStatics::StaticClass();
	CG::TArray<CG::AActor*> out;
	statics->STATIC_GetAllActorsOfClass(World(), type, &out);
	for (int i = 0; i < out.Num(); ++i)
	{
		if (type_name == "BP_Character_Boss_Base_C")
		{
			CG::ABP_Character_Boss_Base_C* boss = (CG::ABP_Character_Boss_Base_C*)out[i];
			ItemFound(out[i], &(boss)->Item);
		}
		else if (type_name == "BP_Interactable_Item_C")
			ItemFound(out[i], &((CG::ABP_Interactable_Item_C*)out[i])->Item);
		else if (type_name == "BP_Interactable_Treasure_C")
			ItemFound(out[i], &((CG::ABP_Interactable_Treasure_C*)out[i])->UniqueItem);
	}
}

void Randomizer::TransitionFound(CG::FDataTableRowHandle* handle, CG::FName* PlayerStartTag)
{
	if (_done.find(handle) != _done.end())
		return;
	std::cout << handle->RowName.GetName() << "\t" << PlayerStartTag->GetName() << std::endl;
	_done.insert(handle);
}

void Randomizer::ItemFound(CG::AActor* actor, CG::FDataTableRowHandle* itemhandle)
{
	if (itemhandle == nullptr)
		return;
	auto result = _done.find(itemhandle);
	if (result != _done.end())
		return;
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;

	auto map = actor->Outer->Outer->GetName();
	auto name = actor->GetName();
	if (name.find("_C") != std::string::npos)
	{
		name = actor->Class->GetName();
		name.erase(name.length() - 2, 2);
	}

	name = map + "." + name;
	auto entry = _replacements.find(name);
	if (entry != _replacements.end())
	{
		FTableRowProxy replacement = entry->second;
		while (replacement.progress != nullptr)
		{
			if (PlayerHasItem(replacement))
				replacement = *replacement.progress;
			else
				break;
		}
		itemhandle->DataTable = *(CG::UDataTable**)(&((char*)gm)[replacement.datatable]);
		itemhandle->RowName = itemhandle->DataTable->Data[replacement.entry].Name;
		if (replacement.progress == nullptr)
			_done.insert(itemhandle);
	}
	else
		_done.insert(itemhandle);
#ifdef _DEBUG
	auto v = actor->K2_GetActorLocation();
	std::cout << v.X << " : " << v.Y << " : " << v.Z << name << std::endl;
#endif
}

bool Randomizer::PlayerHasItem(const FTableRowProxy proxy)
{
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
	auto pc = (CG::AZenithPlayerController*)World()->OwningGameInstance->LocalPlayers[0]->PlayerController;

	CG::FDataTableRowHandle handle;
	handle.DataTable = *(CG::UDataTable**)(&((char*)gm)[proxy.datatable]);
	handle.RowName = handle.DataTable->Data[proxy.entry].Name;

	if (handle.DataTable == pc->InventoryComponent->ItemAptitudeInventory->GetValidDataTable())
		return pc->InventoryComponent->ItemAptitudeInventory->HasItem(handle);
	if (handle.DataTable == pc->InventoryComponent->ItemGenericInventory->GetValidDataTable())
		return pc->InventoryComponent->ItemGenericInventory->HasItem(handle);
	if (handle.DataTable == pc->InventoryComponent->ItemParameterInventory->GetValidDataTable())
		return pc->InventoryComponent->ItemParameterInventory->HasItem(handle);
	if (handle.DataTable == pc->InventoryComponent->ItemPassiveInventory->GetValidDataTable())
		return pc->InventoryComponent->ItemPassiveInventory->HasItem(handle);
	if (handle.DataTable == pc->InventoryComponent->ItemSpiritInventory->GetValidDataTable())
		return pc->InventoryComponent->ItemSpiritInventory->HasItem(handle);
	if (handle.DataTable == pc->InventoryComponent->ItemTipInventory->GetValidDataTable())
		return pc->InventoryComponent->ItemTipInventory->HasItem(handle);
	return false;
}

void Randomizer::ShuffleRelicSlots()
{
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
	CG::UDataTable* table = gm->ItemPassiveTable;
	for (int i = table->Data.Num(); i > 1;)
	{
		int k = rand() % i;
		i--;
		int count = ((CG::FItemPassiveData*)table->Data[k].ptr)->SlotCount;
		((CG::FItemPassiveData*)table->Data[k].ptr)->SlotCount = ((CG::FItemPassiveData*)table->Data[i].ptr)->SlotCount;
		((CG::FItemPassiveData*)table->Data[i].ptr)->SlotCount = count;
	}
}

void Randomizer::ShuffleMusic()
{
	if (_musics.size() <= 0)
		return;
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
	CG::UDataTable* table = gm->GameMapTable;
	std::vector<int> musics(_musics.begin(), _musics.end());
	for (int i = table->Data.Num(); i > 0;)
	{
		i--;
		CG::FGameMapData* map = (CG::FGameMapData*)table->Data[i].ptr;
		map->BGMEvent.ObjectID.AssetPathName = CG::FName(musics[rand() % musics.size()]);
	}
}

void Randomizer::ShuffleRooms()
{
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
	CG::UDataTable* table = gm->GameMapTable;
	void* start_room = table->Data[12].ptr;
	for (int i = table->Data.Num(); i > 1;)
	{
		int k = rand() % i;
		i--;
		void* map = table->Data[k].ptr;
		table->Data[k].ptr = table->Data[i].ptr;
		table->Data[i].ptr = map;
	}
	for (int i = table->Data.Num(); i > 1; )
	{
		--i;
		void* map = table->Data[i].ptr;
		if (map == start_room)
		{
			table->Data[i].ptr = table->Data[0].ptr;
			table->Data[0].ptr = start_room;
			break;
		}
	}
}

void Randomizer::ReadSeedFile(std::string path)
{
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
	_replacements.clear();
	_aptitudes.clear();
	std::fstream file(path, std::ios::in);
	_force_ancient_souls = false;
	_shuffle_relics = false;
	_shuffle_upgrades = false;
	_shuffle_enemies = false;
	_shuffle_rooms = false;
	_shuffle_bgm = false;
	_cheat = false;
	_has_normal_weapon = true;
	_minibosses_chapter = false;
	_skin_override = -1;
	if (file.is_open())
	{
		std::string line;
		while (std::getline(file, line))
		{
			auto sep = line.find(":");
			if (sep <= 0)
				continue;
			std::string location = line.substr(0, sep);
			std::string item = line.substr(sep + 1, line.length());
			trim(location);
			trim(item);
			if (location == "SEED")
			{
				_seed = atoi(item.c_str());
				srand(_seed);
			}
			else if (location == "SETTINGS")
			{
				if (item == "shuffle_slots")
					_shuffle_relics = true;
				if (item == "cheat")
					_cheat = true;
				else if (item == "shuffle_rooms")
					_shuffle_rooms = true;
				else if (item == "shuffle_bgm")
					_shuffle_bgm = true;
				else if (item == "shuffle_upgrades")
					_shuffle_upgrades = true;
				else if (item == "shuffle_enemies")
					_shuffle_enemies = true;
				else if (item == "NG+")
					gm->NewGamePlusGeneration = 1;
				else if (item == "force_ancient_souls")
					_force_ancient_souls = true;
				else if (item == "minibosses_chapter")
					_minibosses_chapter = true;
				else if (item.find("start_chapter") != std::string::npos)
				{
					int chapter = atoi(item.substr(sizeof("start_chapter"), item.length()).c_str());
					if (gm->DifficultyLevel < chapter)
						gm->SetDifficultyLevel(chapter);
				}
				else if (item.find("max_chapter") != std::string::npos)
				{
					int chapter = atoi(item.substr(sizeof("max_chapter"), item.length()).c_str());
					gm->MaxDifficultyLevel = chapter;
					if (gm->DifficultyLevel > chapter)
						gm->SetDifficultyLevel(chapter);
				}
				else if (item.find("override_skin") != std::string::npos)
					this->_skin_override = atoi(item.substr(sizeof("override_skin"), item.length()).c_str());
			}
			else
			{
				FTableRowProxy result;
				for (int index = item.rfind(","); index != std::string::npos; index = item.rfind(","))
				{
					FTableRowProxy* progress = new FTableRowProxy();
					std::string token = item.substr(index + 1, item.length());
					item = item.substr(0, index);
					if (FindTableRow(token, *progress))
					{
						progress->progress = result.progress;
						result.progress = progress;
					}
					else
						delete progress;
				}
				if (FindTableRow(item, result))
					_replacements[location] = result;
				else
					std::cout << "unknown item:\t" << item << std::endl;
			}
		}
		if (file.is_open())
			file.close();
	}
}

bool Randomizer::FindTableRow(const std::string& item, FTableRowProxy& result)
{
	const char* tableNames[6] = {
		"Aptitude",
		"Generic",
		"Parameter",
		"Passive",
		"Spirit",
		"Tip",
	};
	int offsets[6] = {
		0x338,
		0x328,
		0x330,
		0x348,
		0x340,
		0x350,
	};
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
	for (char i = 0; i < 6; ++i)
	{
		if (item.compare(0, strlen(tableNames[i]), tableNames[i]) == 0)
		{
			auto entry = item.substr(strlen(tableNames[i]) + 1, item.length());
			DWORD_PTR ptr = (DWORD_PTR)gm;
			CG::UDataTable* table = *(CG::UDataTable**)(&((char*)gm)[offsets[i]]);
			for (int j = 0; j < table->Data.Num(); ++j)
				if (table->Data[j].Name.GetName() == entry)
				{
					result.datatable = offsets[i];
					result.entry = j;
					if (i == 0)
						_aptitudes.insert(table->Data[j].Name.ComparisonIndex);
					return true;
				}
		}
	}
	return false;
}


void Randomizer::RemoveHasItemCheck()
{
	CG::UFunction* fn = CG::UObject::FindObject<CG::UFunction>("Function Zenith.InventoryComponent.HasItem");
	DWORD_PTR ptr = (DWORD_PTR)(fn->Func);
	void* src = (void*)(ptr + 0x88);
	DWORD curProtection;
	VirtualProtect(src, 5, PAGE_EXECUTE_READWRITE, &curProtection);
	memset(src, 0x90, 5);
	DWORD temp;
	VirtualProtect(src, 5, curProtection, &temp);
}

void Randomizer::ModifySpirits()
{
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
	CG::UDataTable* table = gm->ItemSpiritTable;
	CG::FItemSpiritData* data = (CG::FItemSpiritData*)(table->Data[0].ptr);
	CG::FDataTableRowHandle empty = data->AptitudeToUnlock;

	_starting_weapon = 0;
	auto entry = _replacements.find("starting_weapon");
	if (entry != _replacements.end())
	{
		_starting_weapon = entry->second.entry;
		for (int i = 0; i < 4; i++)
		{
			if (_starting_weapon == passive_weapons[i])
			{
				_has_normal_weapon = false;
				break;
			}
		}
	}

	//auto ksmt = (CG::UKismetTextLibrary*)CG::UKismetTextLibrary::StaticClass();
	for (int i = 0; i < table->Data.Num(); ++i)
	{
		CG::FItemSpiritData* data = (CG::FItemSpiritData*)(table->Data[i].ptr);

		if (_aptitudes.find(data->AptitudeToUnlock.RowName.ComparisonIndex) != _aptitudes.end())
		{
			data->AptitudeToUnlock = empty;
			data->AptitudeToUnlockTutorial = empty;
			//auto d = CG::FString(L"HELLO WORLD")
			//CG::FText text = ksmt->STATIC_Conv_StringToText();
			//data->Description = text;
		}
		if (_aptitudes.find(data->SecondaryAptitudeToUnlock.RowName.ComparisonIndex) != _aptitudes.end())
		{
			data->SecondaryAptitudeToUnlock = empty;
			data->SecondaryAptitudeToUnlockTutorial = empty;
		}
		if (_starting_weapon != 0)
			data->bInitialSpirit = (i == _starting_weapon);
	}

	if (_shuffle_upgrades)
	{
		for (int i = gm->ItemSpiritTable->Data.Num(); i > 2;)
		{
			int k = (rand() % (i - 1)) + 1;
			i--;

			CG::UDataTable* oldTable = ((CG::FItemSpiritData*)(gm->ItemSpiritTable->Data[k].ptr))->SpiritLevelTable;
			CG::UDataTable* newTable = ((CG::FItemSpiritData*)(gm->ItemSpiritTable->Data[i].ptr))->SpiritLevelTable;

			for (int j = 0; j < oldTable->Data.Num(); ++j)
			{
				CG::FSpiritParameterLevelData* oldLevel = (CG::FSpiritParameterLevelData*)oldTable->Data[j].ptr;
				CG::FSpiritParameterLevelData* newLevel = (CG::FSpiritParameterLevelData*)newTable->Data[j].ptr;

				CG::Zenith_ECurrencyType tmpType = oldLevel->CurrencyTypeForLevelUp;
				int tmpCount = oldLevel->NecessaryCurrencyForLevelUp;
				oldLevel->CurrencyTypeForLevelUp = newLevel->CurrencyTypeForLevelUp;
				oldLevel->NecessaryCurrencyForLevelUp = newLevel->NecessaryCurrencyForLevelUp;
				newLevel->CurrencyTypeForLevelUp = tmpType;
				newLevel->NecessaryCurrencyForLevelUp = tmpCount;
#ifdef _DEBUG
				oldLevel->CurrencyTypeForLevelUp = CG::Zenith_ECurrencyType::ECurrencyType__Spirit_Lv1;
				oldLevel->NecessaryCurrencyForLevelUp = 0;
				newLevel->CurrencyTypeForLevelUp = CG::Zenith_ECurrencyType::ECurrencyType__Spirit_Lv1;
				newLevel->NecessaryCurrencyForLevelUp = 0;
#endif
			}
		}
	}
	int k = _starting_weapon;
	if (!_force_ancient_souls)
		k = rand() % gm->ItemSpiritTable->Data.Num();
	if ((_force_ancient_souls || _shuffle_upgrades) && k != 0)
	{
		CG::UDataTable* oldTable = ((CG::FItemSpiritData*)(gm->ItemSpiritTable->Data[0].ptr))->SpiritLevelTable;
		CG::UDataTable* newTable = ((CG::FItemSpiritData*)(gm->ItemSpiritTable->Data[k].ptr))->SpiritLevelTable;

		for (int j = 0; j < oldTable->Data.Num(); ++j)
		{
			CG::FSpiritParameterLevelData* oldLevel = (CG::FSpiritParameterLevelData*)oldTable->Data[j].ptr;
			CG::FSpiritParameterLevelData* newLevel = (CG::FSpiritParameterLevelData*)newTable->Data[j].ptr;

			CG::Zenith_ECurrencyType tmpType = oldLevel->CurrencyTypeForLevelUp;
			int tmpCount = oldLevel->NecessaryCurrencyForLevelUp;
			oldLevel->CurrencyTypeForLevelUp = newLevel->CurrencyTypeForLevelUp;
			oldLevel->NecessaryCurrencyForLevelUp = newLevel->NecessaryCurrencyForLevelUp;
			newLevel->CurrencyTypeForLevelUp = tmpType;
			newLevel->NecessaryCurrencyForLevelUp = tmpCount;
		}
	}
}

void Randomizer::RefreshAptitudes()
{
	auto pc = (CG::AZenithPlayerController*)World()->OwningGameInstance->LocalPlayers[0]->PlayerController;
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;

	pc->UnlockedAptitudes.Empty();
	const CG::TArray<CG::FInventoryBaseItemData>& AptitudeItems = pc->InventoryComponent->ItemAptitudeInventory->GetAllItems();
	for (int i = 0; i < AptitudeItems.Num(); ++i)
		pc->OnAptitudeItemAdded(AptitudeItems[i]);

	for (int i = 0; i < gm->TutorialTable->Data.Num(); ++i)
		pc->MarkTutorialAsSeen(gm->TutorialTable->Data[i].Name);

#ifdef _DEBUG

	pc->UnlockAllAptitudes();

	for (int i = 0; i < gm->InitialCommonSpiritLevel->Data.Num(); ++i)
	{
		CG::FInitialSpiritLevelData* init = (CG::FInitialSpiritLevelData*)gm->InitialCommonSpiritLevel->Data[i].ptr;
		init->InitialLevel = 1;
	}
	for (int i = 0; i < gm->InitialBossSpiritLevel->Data.Num(); ++i)
	{
		CG::FInitialSpiritLevelData* init = (CG::FInitialSpiritLevelData*)gm->InitialBossSpiritLevel->Data[i].ptr;
		init->InitialLevel = 1;
	}

	CG::FDataTableRowHandle handle;
	handle.DataTable = gm->ItemSpiritTable;
	for (int i = 0; i < gm->ItemSpiritTable->Data.Num(); ++i)
	{
		handle.RowName = gm->ItemSpiritTable->Data[i].Name;
		pc->InventoryComponent->AddItem(handle);
	}
	handle.DataTable = gm->ItemPassiveTable;
	for (int i = 0; i < gm->ItemPassiveTable->Data.Num(); ++i)
	{
		handle.RowName = gm->ItemPassiveTable->Data[i].Name;
		pc->InventoryComponent->AddItem(handle);
	}
	pc->SpiritEquipComponent->SetCanChangeEquipment(true);

#endif
}

