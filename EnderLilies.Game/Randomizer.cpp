#include "pch.h"
#include "SDK.h"
#include "Randomizer.h"
#include "UnrealFunctions.hpp"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>

std::unordered_map<std::string, CG::UClass*>	Randomizer::_bp_classes;


Randomizer::Randomizer(std::string path)
{
	_path = path;
	_game_memory = new SharedMemory(TEXT("EnderLilies.Game.SharedMemory"));
	_remote_memory = new SharedMemory(TEXT("EnderLilies.Randomizer.SharedMemory"));
}

Randomizer::~Randomizer()
{
	delete _game_memory;
	delete _remote_memory;
}

void Randomizer::FindNames()
{
	std::cout << "INIT" << std::endl;
	uintptr_t lastFNameAddress = NULL;
	int32_t nextFNameComparisonId = -1;
	CG::FNamePool pool = CG::FName::GetGlobalNames();
	BlueprintGeneratedClassIndex = -1;
	const char* music = "/Game/FMOD/Events/Music/";
	const char* evt = "EVT_";
	FunctionIndex = -1;
	for (CG::FNameEntry* name = pool.GetNext(lastFNameAddress, nextFNameComparisonId);
		name != nullptr && lastFNameAddress != 0;
		name = pool.GetNext(lastFNameAddress, nextFNameComparisonId))
	{
		auto str = name->GetAnsiName();
		if ( str == "BlueprintGeneratedClass")
			BlueprintGeneratedClassIndex = nextFNameComparisonId;
		else if (str == "Function")
			FunctionIndex = nextFNameComparisonId;
		else if (_shuffle_bgm && !strncmp(str.c_str(), music, strlen(music)) && str.find('.', strlen(music)) != std::string::npos)
			_musics.insert(nextFNameComparisonId);
		else if (str == "RestPoint")
			RestPointTag = nextFNameComparisonId;
		else if (!strncmp(str.c_str(), evt, strlen(evt)))
			_events[str] = nextFNameComparisonId;
//		else if (_player_start_tags.find(str) != _player_start_tags.end())
//			_player_start_tags[str] = nextFNameComparisonId;

	}

	for (auto k : _player_start_tags)
	{
		if (k.second == -1)
		{
			auto s = k.first;
			CG::FName name = Unreal::FName::ConstructorInternal(std::wstring(s.begin(), s.end()).c_str(), Unreal::EFindName::FNAME_Add);
			CG::FString str;
			Unreal::FName::ToStringInternal(&name, str);
			std::cout << "tag unknown:" << k.first << ":" << str.ToString() << std::endl;
		}
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

void  Randomizer::OnInteract(CG::UObject* obj, CG::ABP_Interactable_Item_C_OnInteract_Params* params)
{
	std::cout << params->Controller->Name.GetAnsiName() << " INTERACTED WITH " << obj->Name.GetAnsiName() << std::endl;
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


void Randomizer::ChangeStartingRoom(int room)
{
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
	CG::UDataTable* table = gm->GameMapTable;
	CG::FDataTableRowHandle handle;
	handle.DataTable = table;
	handle.RowName = handle.DataTable->Data[room].Name;
	auto pc = ((CG::AZenithPlayerController*)World()->OwningGameInstance->LocalPlayers[0]->PlayerController);
	pc->DefaultGameMap = handle;
	pc->DefaultPlayerStartTag = CG::FName(RestPointTag);
}


void Randomizer::NewGame()
{
	_new_game = false;
	std::cout << "NEWGAME" <<std::endl;

	ReadSeedFile(_path + "/EnderLiliesSeed.txt");
	ModifySpirits();
	FindNames();
	RemoveHasItemCheck();
	std::cout << _seed << std::endl;

	if (_starting_room > 0)
		ChangeStartingRoom(_starting_room);
	if (_shuffle_bgm)
		ShuffleMusic();
	if (_shuffle_rooms)
		ShuffleRooms();
	if (_shuffle_relics)
		ShuffleRelicSlots();

	_completedChecks.clear();
	_receivedItems.clear();
	data_to_send = "\n";
	SendData();
}

void Randomizer::GameDataReady()
{
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
	_new_data = false;
	std::cout << "NEWDATA" << std::endl;
	RefreshAptitudes();

	if (gm->DifficultyLevel > _max_chapter)
	{
		gm->MaxDifficultyLevel = _max_chapter;
		gm->SetDifficultyLevel(_max_chapter);
	}
	else if (gm->DifficultyLevel < _min_chapter)
		gm->SetDifficultyLevel(_min_chapter);
}

void Randomizer::NewMap()
{
	_new_map = false;
	std::cout << "NEWMAP" << std::endl;
	_done.clear();
	_bp_classes.clear();
	_mapChecks.clear();
	CG::UObject::ClearFunctions();

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
				CG::UObject::CacheFunction(object->Outer->Name.GetAnsiName() + "." + object->Name.GetAnsiName(), static_cast<CG::UFunction*>(object));
		}
	}

	if (_skin_override >= 0)
	{
		auto pc = ((CG::AZenithPlayerController*)World()->OwningGameInstance->LocalPlayers[0]->PlayerController);
		auto parameter = pc->ParameterPlayerComponent;
		if (parameter != nullptr)
			parameter->SetSkinLevelOverride(_skin_override, true);
	}

	{
		auto pc = ((CG::AZenithPlayerController*)World()->OwningGameInstance->LocalPlayers[0]->PlayerController);

		//"EVT_ev02"
		//pc->MarkTutorialAsSeen(CG::FName(_events["EVT_ev02"]))
		bool has_fast_travel = true;
		for (int i = 0; i < pc->PlayedEvents.Num(); ++i)
		{
			has_fast_travel = false;
			if (pc->PlayedEvents[i].ComparisonIndex == _events["EVT_ev02"])
			{
				has_fast_travel = true;
				break;
			}
		}
		if (!has_fast_travel)
			pc->PlayedEvents[0].ComparisonIndex = _events["EVT_ev02"];
	}


#ifdef _DEBUG
	std::fstream file("dataout.txt", std::ios_base::app);
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
	for (int i = 0; i < gm->GameMapTable->Data.Num(); ++i)
		file << i << "\t" << gm->GameMapTable->Data[i].Name.GetNameA() << std::endl;
	file.close();
#endif

	ModifySpawnPoints();

	if (!_has_normal_weapon)
		RemoveBreakable();
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
			//sound->StopBGM();
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



bool done = false;
bool wait = false;
int count = 0;

void Randomizer::Update()
{
	FindItems("BP_Character_Boss_Base_C");
	FindItems("BP_Interactable_Item_C");
	FindItems("BP_Interactable_Treasure_C");
	FindItems("BP_WorldTravelVolume_C");
	FindItems("BP_Interactable_WorldTravel_C");

	UpdateChecks();
	if (count == 10)
	{
		UpdateItems();
		SendData();
		count = 0;
	}
	count++;
#ifdef _DEBUG
	if (!_kbhit())
		wait = false;
	else if (!wait)
	{
		if (wait)
			return;
		std::cout << "Key struck was " << _getch() << std::endl;
		done = !done;
		wait = true;
	}
#endif
}


/* double boss
CG::FRotator r = spawn1->K2_GetActorRotation();
CG::FTransform t = spawn1->GetTransform();
t.Translation.Y += 200;
CG::FActorSpawnParameters spawn_params;
spawn_params.ObjectFlags = (CG::EObjectFlags)0x48;
spawn_params.OverrideLevel = (CG::ULevel*)spawn1->Outer;
spawn_params.Owner = spawn1;
spawn_params.SpawnCollisionHandlingOverride = CG::Engine_ESpawnActorCollisionHandlingMethod::ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButDontSpawnIfColliding;
auto a = World()->SpawnActor<CG::APawn>(spawn1->CharacterToSpawn, &t.Translation, &r, spawn_params);
if (a != nullptr)
{
	a->SetActorScale3D(CG::FVector(2, 2, 2));
	a->SpawnDefaultController();
}
*/

/* double boss
CG::ABP_EnemySpawnPoint_Boss_C* spawn = (CG::ABP_EnemySpawnPoint_Boss_C*)boss->SourceSpawnPoint;
auto c = boss->Controller;
if (out.Num() == 1 && c != nullptr && boss->IsActivated())
{
	CG::FRotator r = boss->K2_GetActorRotation();
	CG::FTransform t = boss->GetTransform();
	t.Translation.Y += 200;
	CG::FActorSpawnParameters spawn_params;
	spawn_params.ObjectFlags = (CG::EObjectFlags)0x48;
	spawn_params.OverrideLevel = (CG::ULevel*)spawn->Outer;
	spawn_params.Owner = spawn;
	spawn_params.SpawnCollisionHandlingOverride = CG::Engine_ESpawnActorCollisionHandlingMethod::ESpawnActorCollisionHandlingMethod__AdjustIfPossibleButDontSpawnIfColliding;
	auto a = World()->SpawnActor<CG::APawn>(boss->Class, &t.Translation, &r, spawn_params);
	if (a != nullptr)
		a->SpawnDefaultController();
}*/

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
			CG::ABP_EnemySpawnPoint_Boss_C* spawn = (CG::ABP_EnemySpawnPoint_Boss_C*)boss->SourceSpawnPoint;
			ItemFound(out[i], &(boss)->Item, spawn->ClearableComponent);
		}
		else if (type_name == "BP_Interactable_Item_C")
		{
			CG::ABP_Interactable_Item_C* item = (CG::ABP_Interactable_Item_C*)out[i];
			ItemFound(out[i], &(item)->Item, item->ClearableComponent);
			if (item->Item.RowName.ComparisonIndex == 0)
				item->InteractionText = World()->AuthorityGameMode->DefaultPlayerName;
		}
		else if (type_name == "BP_Interactable_Treasure_C")
		{
			CG::ABP_Interactable_Treasure_C* item = (CG::ABP_Interactable_Treasure_C*)out[i];
			ItemFound(out[i], &(item)->UniqueItem, item->ClearableComponent);
			if (item->UniqueItem.RowName.ComparisonIndex == 0)
				item->InteractionText = World()->AuthorityGameMode->DefaultPlayerName;
		}
		else if (type_name == "BP_WorldTravelVolume_C")
			TransitionFound(out[i], &((CG::ABP_WorldTravelVolume_C*)out[i])->GameMapToLoad, &((CG::ABP_WorldTravelVolume_C*)out[i])->PlayerStartTag, true);
		else if (type_name == "BP_Interactable_WorldTravel_C")
			TransitionFound(out[i], &((CG::ABP_Interactable_WorldTravel_C*)out[i])->GameMapToLoad, &((CG::ABP_Interactable_WorldTravel_C*)out[i])->PlayerStartTag, false);

	}
}

void Randomizer::TransitionFound(CG::AActor* actor, CG::FDataTableRowHandle* handle, CG::FName* PlayerStartTag, bool test)
{
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
	if (_done.find(handle) != _done.end())
		return;

	if (handle == nullptr || PlayerStartTag == nullptr)
		return;
	auto result = _done.find(handle);
	if (result != _done.end())
		return;

	auto map = actor->Outer->Outer->GetName();
	auto name = actor->GetName();
	if (name.find("_C") != std::string::npos)
	{
		name = actor->Class->GetName();
		name.erase(name.length() - 2, 2);
	}

	name = map + "." + name;
	std::cout << name << "\t" << handle->RowName.GetName() << "." << Unreal::FNameToString(PlayerStartTag) << std::endl;

#ifdef _DEBUG
	//std::fstream file("dataout.txt", std::ios_base::app);
	//file << name << "\t" << handle->RowName.GetName() << "." << PlayerStartTag->GetName() << std::endl;
	//file.close();
#endif

	auto entry = _replacements.find(name);
	if (entry != _replacements.end())
	{
		FTableRowProxy replacement = entry->second;
		handle->DataTable = *(CG::UDataTable**)(&((char*)gm)[replacement.datatable]);
		handle->RowName = handle->DataTable->Data[replacement.entry].Name;

		CG::FName name = Unreal::FName::ConstructorInternal(std::wstring(replacement.tag.begin(), replacement.tag.end()).c_str(), Unreal::EFindName::FNAME_Add);
		PlayerStartTag->ComparisonIndex = name.ComparisonIndex;
		PlayerStartTag->Number = name.Number;
		if (replacement.progress == nullptr)
			_done.insert(handle);
	}
	else
		_done.insert(handle);
}

void Randomizer::ItemFound(CG::AActor* actor, CG::FDataTableRowHandle* itemhandle, CG::UClearableComponent *clearable)
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
		if (replacement.datatable != 0)
		{
			itemhandle->DataTable = *(CG::UDataTable**)(&((char*)gm)[replacement.datatable]);
			itemhandle->RowName = itemhandle->DataTable->Data[replacement.entry].Name;
		}
		else
		{
			itemhandle->RowName.ComparisonIndex = 0;
			itemhandle->RowName.Number = 0;
		}
		if (replacement.progress == nullptr)
			_done.insert(itemhandle);
	}
	else
		_done.insert(itemhandle);
	AddClearableCheck(name, clearable);
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
	srand(_seed);
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
	srand(_seed);
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
	CG::UDataTable* table = gm->GameMapTable;

	std::unordered_set<int> room_bgm;
	for (int i = table->Data.Num(); i > 0;)
	{
		i--;
		CG::FGameMapData* map = (CG::FGameMapData*)table->Data[i].ptr;
		if (map->BGMEvent.ObjectID.AssetPathName.ComparisonIndex != 0)
			room_bgm.insert(map->BGMEvent.ObjectID.AssetPathName.ComparisonIndex);
	}
	std::vector<int> musics(_musics.begin(), _musics.end());
	for (auto e : room_bgm)
		musics.push_back(e);
	for (int i = table->Data.Num(); i > 0;)
	{
		i--;
		CG::FGameMapData* map = (CG::FGameMapData*)table->Data[i].ptr;
		map->BGMEvent.ObjectID.AssetPathName = CG::FName(musics[rand() % musics.size()]);
	}
}

void Randomizer::ShuffleRooms()
{
	srand(_seed);
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
	_starting_room = 0;
	_cheat = false;
	_has_normal_weapon = true;
	_minibosses_chapter = false;
	_skin_override = -1;
	_min_chapter = 0;
	_max_chapter = 10;
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
				_seed = atoi(item.c_str());
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
				else if (item.find("starting_room") != std::string::npos)
					_starting_room = atoi(item.substr(sizeof("starting_room"), item.length()).c_str());
				else if (item.find("start_chapter") != std::string::npos)
					_min_chapter = atoi(item.substr(sizeof("start_chapter"), item.length()).c_str());
				else if (item.find("max_chapter") != std::string::npos)
					_max_chapter = atoi(item.substr(sizeof("max_chapter"), item.length()).c_str());
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

int charDiff(char c1, char c2)
{
	if (tolower(c1) < tolower(c2)) return -1;
	if (tolower(c1) == tolower(c2)) return 0;
	return 1;
}

int stringCompare(const std::string& str1, const std::string& str2)
{
	int diff = 0;
	int size = min(str1.size(), str2.size());
	for (size_t idx = 0; idx < size && diff == 0; ++idx)
	{
		diff += charDiff(str1[idx], str2[idx]);
	}
	if (diff != 0) return diff;

	if (str2.length() == str1.length()) return 0;
	if (str2.length() > str1.length()) return 1;
	return -1;
}


bool Randomizer::FindTableRow(const std::string& item, FTableRowProxy& result)
{
	const int table_count = 7;
	static bool toto = false;

	const char* tableNames[table_count] = {
		"Aptitude",
		"Generic",
		"Parameter",
		"Passive",
		"Spirit",
		"Tip",
		"Map",
	};
	int offsets[table_count] = {
		0x338,
		0x328,
		0x330,
		0x348,
		0x340,
		0x350,
		0x320,
	};
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
	if (item.starts_with("AP."))
	{
		result.datatable = 0;
		result.entry = 0;
		return true;
	}
	for (char i = 0; i < table_count; ++i)
	{
		if (item.compare(0, strlen(tableNames[i]), tableNames[i]) == 0)
		{
			auto entry = item.substr(strlen(tableNames[i]) + 1, item.length());

			auto sep = entry.find(".");
			if (sep > 0)
			{
				result.tag = entry.substr(sep + 1, entry.length());
				entry = entry.substr(0, sep);
			}
			DWORD_PTR ptr = (DWORD_PTR)gm;
			CG::UDataTable* table = *(CG::UDataTable**)(&((char*)gm)[offsets[i]]);
			for (int j = 0; j < table->Data.Num(); ++j)
			{
				std::string row = table->Data[j].Name.GetName();

				if (stringCompare(row, entry) == 0)
				{
					result.datatable = offsets[i];
					result.entry = j;
					if (i == 6)
						_player_start_tags[result.tag] = -1;
					return true;
				}
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

	for (int i = 0; i < table->Data.Num(); ++i)
	{
		CG::FItemSpiritData* data = (CG::FItemSpiritData*)(table->Data[i].ptr);

		data->AptitudeToUnlock = empty;
		data->AptitudeToUnlockTutorial = empty;

		data->SecondaryAptitudeToUnlock = empty;
		data->SecondaryAptitudeToUnlockTutorial = empty;

		if (_starting_weapon != 0)
			data->bInitialSpirit = (i == _starting_weapon);
	}

	srand(_seed);
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

	return;
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

void Randomizer::AddItem(const std::string& item)
{
	auto pc = (CG::AZenithPlayerController*)World()->OwningGameInstance->LocalPlayers[0]->PlayerController;
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;

	FTableRowProxy result;
	if (FindTableRow(item, result))
	{
		CG::FDataTableRowHandle handle;
		handle.DataTable = *(CG::UDataTable**)(&((char*)gm)[result.datatable]);
		handle.RowName = handle.DataTable->Data[result.entry].Name;
		pc->InventoryComponent->AddItem(handle);
	}
}

void Randomizer::RemoveItem(const std::string& item)
{
	auto pc = (CG::AZenithPlayerController*)World()->OwningGameInstance->LocalPlayers[0]->PlayerController;
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;

	FTableRowProxy result;
	if (FindTableRow(item, result))
	{
		CG::FDataTableRowHandle handle;
		handle.DataTable = *(CG::UDataTable**)(&((char*)gm)[result.datatable]);
		handle.RowName = handle.DataTable->Data[result.entry].Name;
		CG::UBaseInventory* inventory;

		switch (result.datatable)
		{
		case 0x338: // Aptitude
			inventory = pc->InventoryComponent->GetItemAptitudeInventory();
			break;
		case 0x328: // Generic
			inventory = pc->InventoryComponent->GetItemGenericInventory();
			break;
		case 0x330: // Parameter
			inventory = pc->InventoryComponent->GetItemParameterInventory();
			break;
		case 0x348: // Passive
			inventory = pc->InventoryComponent->GetItemPassiveInventory();
			break;
		case 0x340: // Spirit
			inventory = pc->InventoryComponent->GetItemSpiritInventory();
			break;
		case 0x350: // Tip
			inventory = pc->InventoryComponent->GetItemTipInventory();
			break;
		//case 0x320: // Map
		//  break;
		default:
			return;
		}
		inventory->RemoveItem(handle);
	}
}

void Randomizer::SendData()
{
	if (data_to_send.length() <= 0)
		return;
	if (!_game_memory->Write(data_to_send.c_str()))
		data_to_send.clear();
}

void Randomizer::AddClearableCheck(std::string name, CG::UClearableComponent* comp)
{
	if (!_completedChecks.contains(name))
		_mapChecks[comp] = name;
}

void Randomizer::UpdateChecks()
{
	bool cleared = false;

	for (auto it = _mapChecks.begin(); it != _mapChecks.end();)
	{
		if (it->first->bCleared)
		{
			_completedChecks.insert(it->second);

			if (!it->first->IsBeingDestroyed())
			{
				auto entry = _replacements.find(it->second);
				if (entry->second.datatable == 0)
					it->first->GetOwner()->SetActorEnableCollision(false);
			}
			it = _mapChecks.erase(it);
			cleared = true;
		}
		else
			it++;
	}
	if (cleared)
		for (auto elem : _completedChecks)
			data_to_send += elem + "\n";
}

void Randomizer::UpdateItems()
{
	std::string str;
	if (!_remote_memory->Read(str))
	{
		std::stringstream ss(str);
		std::string item;
		int i = 0;
		while (std::getline(ss, item))
		{
			i++;
			if (_receivedItems.size() < i)
			{
				_receivedItems.push_back(item);
				AddItem(item);
			}
		}
	}
}
