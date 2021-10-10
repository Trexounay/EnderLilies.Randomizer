#include "pch.h"
#include "SDK.h"
#include "Randomizer.h"
#include <iostream>
#include <fstream>


Randomizer::Randomizer(std::string path, CG::UWorld** pworld)
{
	_path = path;
	_pworld = pworld;
}


Randomizer::~Randomizer()
{

}

void Randomizer::Init()
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
	}
	_need_init = false;
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
	CG::UWorldLoaderSubsystem* loader = (CG::UWorldLoaderSubsystem*)GameInstance->SubSystems[0x1F];
	if (loader == nullptr || !gm->bGameDataReady || loader->bProcessingLoad)
	{
		_new_map = true;
		return false;
	}
	return true;
}

void Randomizer::NewGame()
{
	if (_need_init)
		Init();
	std::cout << "NEWGAME" << std::endl;
	RemoveHasItemCheck();
	EraseSpirits();
	RefreshAptitudes();
	ReadSeedFile(_path + "/EnderLiliesSeed.txt");
	_new_game = false;
}

void Randomizer::NewMap()
{
	std::cout << "NEWMAP" << std::endl;
	_done.clear();
	_bosses = nullptr;
	_pickups = nullptr;
	_chests = nullptr;

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
	}

	_new_map = false;
}

void Randomizer::Update()
{
	if (!this->IsReady())
		return;
	if (_new_game)
		this->NewGame();
	if (_new_map)
		this->NewMap();
	FindItems(_bosses);
	FindItems(_pickups);
	FindItems(_chests);
}

void Randomizer::FindItems(CG::UClass *type)
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
	}
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

	std::string og = itemhandle->RowName.GetName();
	if (itemhandle->DataTable == gm->ItemAptitudeTable)
		og = "Aptitude." + og;
	else if (itemhandle->DataTable == gm->ItemGenericTable)
		og = "Generic." + og;
	else if (itemhandle->DataTable == gm->ItemParameterTable)
		og = "Parameter." + og;
	else if (itemhandle->DataTable == gm->ItemPassiveTable)
		og = "Passive." + og;
	else if (itemhandle->DataTable == gm->ItemSpiritTable)
		og = "Spirit." + og;
	else if (itemhandle->DataTable == gm->ItemTipTable)
		og = "Tip." + og;

	if (entry != _replacements.end())
	{
		itemhandle->DataTable = *(CG::UDataTable**)(&((char*)gm)[entry->second.datatable]);
		itemhandle->RowName = itemhandle->DataTable->Data[entry->second.entry].Name;
		std::cout << "(" << actor->RootComponent->RelativeLocation.Y << ":" << actor->RootComponent->RelativeLocation.Z << ")\t" << name << "\t" << og << "->" << itemhandle->RowName.GetName() << std::endl;
	}
	else
	{
		std::cout << "UNKNOWN LOCATION:" << "(" << actor->RootComponent->RelativeLocation.Y << ":" << actor->RootComponent->RelativeLocation.Z << ")\t" << name << "\t" << og << std::endl;
	}
	_done.insert(itemhandle);
}

void Randomizer::ReadSeedFile(std::string path)
{
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
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
	_replacements.clear();
	std::fstream file(path, std::ios::in);
	if (file.is_open())
	{
		std::string line;
		while (std::getline(file, line))
		{
			auto sep = line.find(":");
			std::string location = line.substr(0, sep);
			std::string item = line.substr(sep + 1, line.length());
			trim(location);
			trim(item);
			bool found = false;
			for (char i = 0; i < 6; ++i) {
				if (item.compare(0, strlen(tableNames[i]), tableNames[i]) == 0)
				{
					auto entry = item.substr(strlen(tableNames[i]) + 1, item.length());
					DWORD_PTR ptr = (DWORD_PTR)gm;
					CG::UDataTable* table = *(CG::UDataTable**)(&((char*)gm)[offsets[i]]);
					for (int j = 0; j < table->Data.Num(); ++j)
						if (table->Data[j].Name.GetName() == entry)
						{
							FTableRowProxy proxy;
							proxy.datatable = offsets[i];
							proxy.entry = j;
							_replacements[location] = proxy;
							found = true;
							break;
						}
				}
			}
			if (!found)
				std::cout << "unknown item:\t" << item << std::endl;
		}
		if (file.is_open())
			file.close();
	}
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

void Randomizer::EraseSpirits()
{
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
	CG::UDataTable* table = gm->ItemSpiritTable;
	CG::FSpiritData* data = (CG::FSpiritData*)(table->Data[0].ptr);
	CG::FDataTableRowHandle empty = data->ItemSpiritData.AptitudeToUnlock;
	for (int i = 0; i < table->Data.Num(); ++i)
	{
		CG::FSpiritData* data = (CG::FSpiritData*)(table->Data[i].ptr);
		data->ItemSpiritData.AptitudeToUnlock = empty;
		data->ItemSpiritData.AptitudeToUnlockTutorial = empty;
		data->ItemSpiritData.SecondaryAptitudeToUnlock = empty;
		data->ItemSpiritData.SecondaryAptitudeToUnlockTutorial = empty;
	}
}

void Randomizer::RefreshAptitudes()
{
	auto pc = (CG::AZenithPlayerController*)World()->OwningGameInstance->LocalPlayers[0]->PlayerController;
	pc->UnlockedAptitudes.Empty();
	const CG::TArray<CG::FInventoryBaseItemData>& AptitudeItems = pc->InventoryComponent->ItemAptitudeInventory->GetAllItems();
	for (int i = 0; i < AptitudeItems.Num(); ++i)
		pc->OnAptitudeItemAdded(AptitudeItems[i]);

	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
	for (int i = 0; i < gm->TutorialTable->Data.Num(); ++i)
		pc->MarkTutorialAsSeen(gm->TutorialTable->Data[i].Name);
#ifdef _DEBUG
	pc->SpiritEquipComponent->SetCanChangeEquipment(true);
#endif
}

