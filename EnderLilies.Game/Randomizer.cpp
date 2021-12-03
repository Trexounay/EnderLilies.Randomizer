#include "pch.h"
#include "SDK.h"
#include "Randomizer.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>


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
	for (CG::FNameEntry* name = CG::FName::GetGlobalNames().GetNext(lastFNameAddress);
		name != nullptr && lastFNameAddress != 0;
		name = CG::FName::GetGlobalNames().GetNext(lastFNameAddress))
	{
		auto str = name->GetAnsiName();
		if (str == "BP_Character_Boss_Base_C")
			_bosses_name = name;
		else if (str == "BP_Interactable_Item_C")
			_pickups_name = name;
		else if (str == "BP_Interactable_Treasure_C")
			_chests_name = name;
		else if (str == "BP_WorldTravelVolume_C")
			_transitions_volumes_name = name;
		else if (str == "BP_Interactable_WorldTravel_C")
			_transitions_trigger_name = name;
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

void Randomizer::NewGame()
{
	_new_game = false;
	std::cout << "NEWGAME" << std::endl;
	FindNames();
	RemoveHasItemCheck();
	ReadSeedFile(_path + "/EnderLiliesSeed.txt");
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
	_bosses = nullptr;
	_pickups = nullptr;
	_chests = nullptr;
	_transitions_volumes = nullptr;
	_transitions_trigger = nullptr;

	for (int i = 0; i < CG::UObject::GetGlobalObjects().Num(); ++i)
	{
		auto object = CG::UObject::GetGlobalObjects().GetByIndex(i);
		if (object == nullptr || object->Name.ComparisonIndex == 0)
			continue;
		auto id = CG::FName::GetGlobalNames().GetById(object->Name.ComparisonIndex);
		if (id == _bosses_name)
			_bosses = static_cast<CG::UClass*>(object);
		else if (id == _pickups_name)
			_pickups = static_cast<CG::UClass*>(object);
		else if (id == _chests_name)
			_chests = static_cast<CG::UClass*>(object);
		/*
		else if (id == _transitions_volumes_name)
			_transitions_volumes = static_cast<CG::UClass*>(object);
		else if (id == _transitions_trigger_name)
			_transitions_trigger = static_cast<CG::UClass*>(object);
		*/
	}
	if (_skin_override >= 0)
	{
		auto parameter = ((CG::AZenithPlayerController*)World()->OwningGameInstance->LocalPlayers[0]->PlayerController)->ParameterPlayerComponent;
		if (parameter != nullptr)
			parameter->SetSkinLevelOverride(_skin_override, true);
	}
}

void Randomizer::Update()
{
	FindItems(_bosses);
	FindItems(_pickups);
	FindItems(_chests);
	//FindItems(_transitions_volumes);
	//FindItems(_transitions_trigger);
}


void Randomizer::FindItems(CG::UClass* type)
{
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
		if (type == _bosses)
			ItemFound(out[i], &((CG::ABP_Character_Boss_Base_C*)out[i])->Item);
		else if (type == _pickups)
			ItemFound(out[i], &((CG::ABP_Interactable_Item_C*)out[i])->Item);
		else if (type == _chests)
			ItemFound(out[i], &((CG::ABP_Interactable_Treasure_C*)out[i])->UniqueItem);
/*		else if (type == _transitions_volumes)
			TransitionFound(&((CG::ABP_WorldTravelVolume_C*)out[i])->GameMapToLoad, &((CG::ABP_WorldTravelVolume_C*)out[i])->PlayerStartTag);
		else if (type == _transitions_trigger)
			TransitionFound(&((CG::ABP_Interactable_WorldTravel_C*)out[i])->GameMapToLoad, &((CG::ABP_Interactable_WorldTravel_C*)out[i])->PlayerStartTag);
*/
	}
}

void Randomizer::TransitionFound(CG::FDataTableRowHandle *handle, CG::FName *PlayerStartTag)
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
	for (int i = table->Data.Num(); i > 1; --i)
	{
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
	std::fstream file(path, std::ios::in);
	_force_ancient_souls = false;
	_shuffle_relics = false;
	_shuffle_rooms = false;
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
				srand(atoi(item.c_str()));
			else if (location == "SETTINGS")
			{
				if (item == "shuffle_slots")
					_shuffle_relics = true;
				else if (item == "shuffle_rooms")
					_shuffle_rooms = true;
				else if (item == "NG+")
					gm->NewGamePlusGeneration = 1;
				else if (item == "force_ancient_souls")
					_force_ancient_souls = true;
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
					std::string token = item.substr(index+1, item.length());
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

bool Randomizer::FindTableRow(std::string item, FTableRowProxy& result)
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

	int starting_weapon = 0;
	auto entry = _replacements.find("starting_weapon");
	if (entry != _replacements.end())
		starting_weapon = entry->second.entry;

	for (int i = 0; i < table->Data.Num(); ++i)
	{
		CG::FItemSpiritData* data = (CG::FItemSpiritData*)(table->Data[i].ptr);
		data->AptitudeToUnlock = empty;
		data->AptitudeToUnlockTutorial = empty;
		data->SecondaryAptitudeToUnlock = empty;
		data->SecondaryAptitudeToUnlockTutorial = empty;
		if (starting_weapon != 0)
			data->bInitialSpirit = (i == starting_weapon);
	}

	if (starting_weapon != 0 && _force_ancient_souls)
	{
		CG::UDataTable* oldTable = ((CG::FItemSpiritData*)(gm->ItemSpiritTable->Data[0].ptr))->SpiritLevelTable;
		CG::UDataTable* newTable = ((CG::FItemSpiritData*)(gm->ItemSpiritTable->Data[starting_weapon].ptr))->SpiritLevelTable;

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
	/*
	pc->InventoryComponent->ItemSpiritInventory->Clear();
	CG::FDataTableRowHandle handle;
	handle.DataTable = gm->ItemSpiritTable;
	handle.RowName = gm->ItemSpiritTable->Data[4].Name;
	pc->InventoryComponent->AddItem(handle);*/
	/*
	pc->UnlockAllAptitudes();

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
	*/
#endif
}

