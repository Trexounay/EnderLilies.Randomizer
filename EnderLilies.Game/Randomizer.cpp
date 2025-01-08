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

	lastDefaultRespite.GameMapID.ComparisonIndex = 0;
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
		if (str == "BlueprintGeneratedClass")
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
	if (_starting_weapon < 5)
	{
		_weapon_can_break_doors = true;
		_weapon_can_break_lantern = true;
		return;
	}
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
	CG::FName spiritID = gm->ItemSpiritTable->Data[_starting_weapon].Name;
	
	if (!_weapon_can_break_doors)
	{
		_weapon_can_break_doors = true;
		for (int i : weapons_special_doors)
		{
			if (params->SpiritData.SpiritID == gm->ItemSpiritTable->Data[i].Name)
			{
				_weapon_can_break_doors = false;
				break;
			}
		}
	}
	if (!_weapon_can_break_lantern)
	{
		_weapon_can_break_lantern = true;
		for (int i : weapons_special_lanterns)
		{
			if (params->SpiritData.SpiritID == gm->ItemSpiritTable->Data[i].Name)
			{
				_weapon_can_break_lantern = false;
				break;
			}
		}
	}
	if (params->SpiritData.SpiritID != spiritID)
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
			}
			else if (object->IsA(CG::UCommandActionComboSummon::StaticClass()))
			{
				auto cas = ((CG::UCommandActionComboSummon*)object);
				cas->SettingsSummonCastLimit.CastLimitType = CG::Zenith_ECommandSummonLimitType::ECommandSummonLimitType__None;
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
	std::cout << "NEWGAME" << std::endl;

	ReadSeedFile(_path + "/EnderLiliesSeed.txt");
	ModifySpirits();
	FindNames();
	std::cout << _seed << std::endl;

	if (_starting_room > 0)
		ChangeStartingRoom(_starting_room);
	if (_shuffle_bgm)
		ShuffleMusic();
	if (_shuffle_relics)
		ShuffleRelicSlots();

	_completedChecks.clear();
	_receivedItems.clear();
	_game_memory->Clear();
	_remote_memory->Clear();
	_completedChecks.insert("starting_weapon");
	data_to_send = "starting_weapon\n";
	SendData();

	auto intent = ((CG::UGameInstanceZenith_C*)World()->OwningGameInstance)->GetLaunchGameIntent();
	if (intent == CG::Zenith_ELaunchGameIntent::ELaunchGameIntent__NewGame)
		_need_ap_refresh = true;
}


void Randomizer::GameDataReady()
{
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
	_new_data = false;
	std::cout << "NEWDATA" << std::endl;
	RefreshAptitudes();

	gm->MaxDifficultyLevel = _max_chapter;
	if (gm->DifficultyLevel > _max_chapter)
		gm->SetDifficultyLevel(_max_chapter);
	else if (gm->DifficultyLevel < _min_chapter)
		gm->SetDifficultyLevel(_min_chapter);

	auto spawn_point = gm->GameMapTable->GetValue<CG::FGameMapData>(0);
	spawn_point->bContainsRestPoint = true;
}


void Randomizer::CreateOutsetRespite()
{
	auto pc = ((CG::AZenithPlayerController*)World()->OwningGameInstance->LocalPlayers[0]->PlayerController);
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;

	//auto spawn_point = gm->GameMapTable->GetValue<CG::FGameMapData>(0);

	if (pc == nullptr || gm == nullptr || gm->GameMapTable == nullptr)
		return;

	CG::UWorldLoaderSubsystem* loader = (CG::UWorldLoaderSubsystem*)World()->OwningGameInstance->SubSystems[0x1F];
	//CG::FRespawnPointData data = pc->GetRespawnPointData();

	if (loader->CurrentGameMapID == gm->GameMapTable->GetName(0))
	{
		auto new_class = World()->LoadObject<CG::UClass>(nullptr, L"Blueprint'/Game/_Zenith/Gameplay/Interactables/BP_Interactable_RestingPoint.BP_Interactable_RestingPoint_C'");

		CG::UGameplayStatics* statics = (CG::UGameplayStatics*)CG::UGameplayStatics::StaticClass();
		CG::TArray<CG::AActor*> out;
		statics->STATIC_GetAllActorsOfClass(World(), CG::APlayerStart::StaticClass(), &out);
		CG::APlayerStart* target = (CG::APlayerStart*)out[0];
		for (int i = 0; i < out.Num(); ++i)
			if (out[i]->Name.GetName() == "PlayerStart2")
				target = (CG::APlayerStart*)out[i];
		auto translate = target->GetTransform().Translation;
		translate.Z -= 100;
		auto a = (CG::ABP_Interactable_RestingPoint_C*)World()->SpawnActor(new_class, target, &translate, nullptr);
		a->PlayerStart = target;
		CG::FHitResult result;
		a->PlayerStartLocation->K2_AddLocalOffset(CG::FVector(0, 0, -100), false, &result, false);
		a->SpiritLocation_2->K2_AddLocalOffset(CG::FVector(-10, 0, -100), false, &result, false);
		a->SpiritLocation_3->K2_AddLocalOffset(CG::FVector(-10, 0, -100), false, &result, false);
		a->SpiritLocation_4->K2_AddLocalOffset(CG::FVector(-10, 0, -100), false, &result, false);
	}
}

void Randomizer::PreventReturnToOutset()
{
	auto pc = ((CG::AZenithPlayerController*)World()->OwningGameInstance->LocalPlayers[0]->PlayerController);
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;

	//auto spawn_point = gm->GameMapTable->GetValue<CG::FGameMapData>(0);

	if (pc == nullptr || gm == nullptr || gm->GameMapTable == nullptr)
		return;

	CG::FRespawnPointData data = pc->GetRespawnPointData();
	if (data.GameMapID == gm->GameMapTable->GetName(0) && lastDefaultRespite.GameMapID.ComparisonIndex != 0)
	{
		pc->RespawnPointData.GameMapID = lastDefaultRespite.GameMapID;
		pc->RespawnPointData.PlayerStartTag = lastDefaultRespite.PlayerStartTag;
	}
	else
		lastDefaultRespite = data;
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

	ModifyEnemyTables();
	ModifySpawnPoints();
	CreateOutsetRespite();

	RemoveBreakable();
}

CG::UClass* GetCharacterClass(const wchar_t *name)
{
	CG::FAssetData data;
	wchar_t buffer[128];

	_swprintf(buffer, L"/Game/_Zenith/Characters/%s/BP_%s", name, name);
	data.PackageName = Unreal::FName::ConstructorInternal(buffer, Unreal::EFindName::FNAME_Add);

	_swprintf(buffer, L"/Game/_Zenith/Characters/%s", name, name);
	data.PackagePath = Unreal::FName::ConstructorInternal(buffer, Unreal::EFindName::FNAME_Add);

	_swprintf(buffer, L"/Game/_Zenith/Characters/%s/BP_%s.BP_%s_C", name, name, name);
	data.ObjectPath = Unreal::FName::ConstructorInternal(buffer, Unreal::EFindName::FNAME_Add);

	_swprintf(buffer, L"BP_%s_C", name);
	data.AssetClass = Unreal::FName::ConstructorInternal(buffer, Unreal::EFindName::FNAME_Add);

	_swprintf(buffer, L"BP_%s", name);
	data.AssetName = Unreal::FName::ConstructorInternal(name, Unreal::EFindName::FNAME_Add);

	auto RegistryHelper = (CG::UAssetRegistryHelpers*)CG::UAssetRegistryHelpers::StaticClass();

	auto result = RegistryHelper->STATIC_GetAsset(data);
	return (CG::UClass *)result;
}

void Randomizer::RemoveBreakable()
{
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
	CG::UGameplayStatics* statics = (CG::UGameplayStatics*)CG::UGameplayStatics::StaticClass();

	auto pc = (CG::AZenithPlayerController*)World()->OwningGameInstance->LocalPlayers[0]->PlayerController;

	if (!_weapon_can_break_doors)
	{
		CG::UClass* type = _bp_classes["BP_Breakable_Base_C"];
		if (type != nullptr)
		{
			CG::TArray<CG::AActor*> out;
			statics->STATIC_GetAllActorsOfClass(World(), type, &out);
			for (int i = 0; i < out.Num(); ++i)
			{
				CG::ABP_Breakable_Base_C* door = (CG::ABP_Breakable_Base_C*)out[i];
				if (door->bMarkClearedOnDeath)
					door->OnBreak();
				else
					door->HPComponent->DoDamage(nullptr, 1000, false, false);
			}
		}
	}

	if (!_weapon_can_break_lantern)
	{
		CG::UClass* type = _bp_classes["BP_SwitchHitbox_Door_C"];
		if (type != nullptr)
		{
			CG::TArray<CG::AActor*> out;
			statics->STATIC_GetAllActorsOfClass(World(), type, &out);
			for (int i = 0; i < out.Num(); ++i)
			{
				CG::ABP_SwitchHitbox_Door_C* door = (CG::ABP_SwitchHitbox_Door_C*)out[i];
				if (!door->IsActivated && door->Door != nullptr)
				{
					if (!door->Door->IsOpen)
						door->Clearable->MarkCleared();
				}
			}
		}
	}
	if (_starting_room == 68)
	{
		CG::UWorldLoaderSubsystem* loader = (CG::UWorldLoaderSubsystem*)World()->OwningGameInstance->SubSystems[0x1F];
		if (loader->CurrentGameMapID != gm->GameMapTable->GetName(68))
			return;
		CG::UClass* type = _bp_classes["BP_Interactable_Base_C"];
		if (type != nullptr)
		{
			CG::TArray<CG::AActor*> out;
			statics->STATIC_GetAllActorsOfClass(World(), type, &out);
			for (int i = 0; i < out.Num(); ++i)
			{
				CG::ABP_Interactable_Base_C* door = (CG::ABP_Interactable_Base_C*)out[i];
				if (!door->ClearableComponent->bCleared && door->Name.GetName() == "BP_Interactable_Switch_Door_Unique3")
				{
					std::cout << door->Name.GetName() << std::endl;
					door->ClearableComponent->MarkCleared();
				}
			}
		}
	}
}

void Randomizer::ModifyEnemyTables()
{
	if (!_rebalance_enemies)
		return;

	auto parameters = CG::UObject::FindObjects<CG::UParameterEnemyComponent>();
	for (auto parameter : parameters)
		FixChapterProgression(parameter);
}

bool IsChapterLocked(const CG::TArray<CG::FDataTableData>& data)
{
	auto chapter1 = (CG::FEnemyParameterLevelData*)data[0].ptr;
	auto chapter2 = (CG::FEnemyParameterLevelData*)data[1].ptr;
	return chapter1->HP == chapter2->HP;
}

void Randomizer::FixChapterProgression(CG::UParameterEnemyComponent* parameterEnemyComponent)
{
	if (parameterEnemyComponent->LevelTable == nullptr || !IsChapterLocked(parameterEnemyComponent->LevelTable->Data))
		return;
	const CG::TArray<CG::FDataTableData>& data = parameterEnemyComponent->LevelTable->Data;

	auto maxChapter = 9;
	for (int i = 0; i < maxChapter; ++i)
	{
		auto chapter = (CG::FEnemyParameterLevelData*)data[i].ptr;
		if (((CG::FEnemyParameterLevelData*)data[i + 1].ptr)->HP != chapter->HP)
		{
			maxChapter = i;
			break;
		}
	}
	auto maxChapterData = (CG::FEnemyParameterLevelData*)data[maxChapter].ptr;
	std::cout << parameterEnemyComponent->LevelTable->GetFullName() << std::endl;
	for (int i = 0; i < maxChapter; ++i)
	{
		auto chapter = (CG::FEnemyParameterLevelData*)data[i].ptr;
		chapter->HP = int((maxChapterData->HP / (maxChapter + 1.0)) * pow(maxChapterData->HP / (maxChapterData->HP / (maxChapter + 1.0)), i / double(maxChapter)));
		chapter->Attack = int(lerp(0, maxChapterData->Attack, (i + 1.0) / (maxChapter + 1.0)));
		chapter->DropExperience = int(lerp(0, maxChapterData->DropExperience, (i + 1.0) / (maxChapter + 1.0)));
	}

#ifdef _DEBUG
	for (int i = 0; i < 10; ++i)
	{
		auto chapter = (CG::FEnemyParameterLevelData*)data[i].ptr;
		std::cout << i + 1 << "->" << chapter->HP << ":" << chapter->Attack << ":" << chapter->DropExperience << std::endl;
	}
#endif
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
			
			//auto new_class = World()->LoadObject<CG::UClass>(nullptr, L"Blueprint'/Game/_Zenith/Characters/e2180_Shadow/BP_e2180_Shadow.BP_e2180_Shadow_C'");
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


				spawn1->bShouldActivateByDefault = true;
				auto a = (CG::ABP_Character_Enemy_Base_C*)spawn1->CharacterToSpawn->CreateDefaultObject();
				a->KillOnSwim = false;

				const auto from = 0x0268;
				const auto s = 0x03D9 - 0x0268;

				byte data[s];
				memcpy(data, ((char*)spawn1) + from, s);
				memcpy(((char*)spawn1) + from, ((char*)spawn2) + from, s);
				memcpy(((char*)spawn2) + from, data, s);
			}
			/*
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
			}*/
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
	//PreventReturnToOutset();
	if (count == 10)
	{
		UpdateItems();
		SendData();
		count = 0;
	}

	count++;
	// Testing custom relic effect
	static auto name = CG::FName("i_passive_stamina_up");

	auto pc = (CG::AZenithPlayerController*)World()->OwningGameInstance->LocalPlayers[0]->PlayerController;
	if (pc->ZenithCharacter->CharacterMovement->Buoyancy > 0.5f && pc->PassiveEquipComponent->IsPassiveEquipped(name))
	{
		pc->ZenithCharacter->CharacterMovement->Buoyancy = 0.3f;
	}

#ifdef _DEBUG
	if (!_kbhit())
		wait = false;
	else if (!wait)
	{
		if (wait)
			return;

		auto pc = (CG::AZenithPlayerController*)World()->OwningGameInstance->LocalPlayers[0]->PlayerController;
		int frame = pc->ZenithCharacter->CommandQueueComponent->GetNextFrameID();
		std::cout << "Key struck was " << _getch() << std::endl;

		done = !done;
	}
#endif
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
			CG::ABP_EnemySpawnPoint_Boss_C* spawn = (CG::ABP_EnemySpawnPoint_Boss_C*)boss->SourceSpawnPoint;
			auto replacement = ItemFound(out[i], &(boss)->Item, spawn->ClearableComponent);
		}
		else if (type_name == "BP_Interactable_Item_C")
		{
			CG::ABP_Interactable_Item_C* item = (CG::ABP_Interactable_Item_C*)out[i];
			auto replacement = ItemFound(out[i], &(item)->Item, item->ClearableComponent);

		}
		else if (type_name == "BP_Interactable_Treasure_C")
		{
			CG::ABP_Interactable_Treasure_C* item = (CG::ABP_Interactable_Treasure_C*)out[i];
			auto replacement = ItemFound(out[i], &(item)->UniqueItem, item->ClearableComponent);
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

FTableRowProxy Randomizer::ItemFound(CG::AActor* actor, CG::FDataTableRowHandle* itemhandle, CG::UClearableComponent* clearable)
{
	FTableRowProxy replacement;
	if (itemhandle == nullptr)
		return replacement;
	auto result = _done.find(itemhandle);
	if (result != _done.end())
		return replacement;
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
		replacement = entry->second;
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
	return replacement;
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
	_rebalance_enemies = false;
	_starting_room = 0;
	_cheat = false;
	_weapon_can_break_doors = false;
	_weapon_can_break_lantern = false;
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
			{
				// limit a seed to 19 characters
				item = item.substr(0, 19);

				unsigned long long seed;
				std::stringstream(item) >> seed;
				_seed = seed % INT_MAX;
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
				else if (item == "balance_enemies")
					_rebalance_enemies = true;
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

void Randomizer::QueueTipNotification(const std::string& item, const FTableRowProxy& result)
{
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
	auto pc = (CG::APC_Base_C*)World()->OwningGameInstance->LocalPlayers[0]->PlayerController;
	auto datatable = *(CG::UDataTable**)(&((char*)gm)[result.datatable]);
	auto data = datatable->GetValue<CG::FBaseItemData>(result.entry);

	CG::FString str = CG::UKismetTextLibrary::STATIC_Conv_TextToString(data->Name);
	auto wstr = str.ToWString() + L" was received from Archipelago";

	CG::FText text = pc->PlayerUI->WBP_TipNotification->TipText->Text;
	text.SetFromString(CG::FString(wstr.c_str()));
	pc->PlayerUI->WBP_TipNotification->LaunchNewTipAnim();
	pc->PlayerUI->WBP_TipNotification->TipText->SetText(text);
}

int Randomizer::AddAPItem(const std::string& item)
{
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
	CG::UDataTable* table = gm->ItemTipTable;
	auto tip = table->GetValue<CG::FItemTipData>(0);
	CG::FItemTipData new_tip;
	memcpy(&new_tip, tip, sizeof(CG::FItemTipData));

	CG::FName name;
	name.ComparisonIndex = table->Name.ComparisonIndex;
	name.Number = table->Data.Num();
	auto switch_set = gm->ItemAptitudeTable->GetValue<CG::FItemAptitudeData>(13);

	size_t first = item.find('|', 3);
	size_t second = item.find('|', first + 1);
	std::string player = item.substr(3, first - 3);
	std::string game = item.substr(first + 1, second - first - 1);
	std::string obj = item.substr(second + 1);

	std::wstring wgame = std::wstring(game.begin(), game.end());
	std::wstring wplayer = std::wstring(player.begin(), player.end());

	new_tip.ItemType = CG::Zenith_EItemType::EItemType__EItemType_MAX;
	memcpy(new_tip.Icon, switch_set->Icon, 0x28);

	new_tip.Name = std::wstring(obj.begin(), obj.end()).c_str();
	new_tip.ShortExplanation = L"Archipelago Item";
	new_tip.Description = (std::wstring(L"This item belongs to ") + wplayer + L" in " + wgame + L".").c_str();
	new_tip.AddToInventory = false;

	table->AddRow(name, new_tip);
	return name.Number;
	//result.tag = item.substr(3, item.length());
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
	if (item.starts_with("AP."))
	{
		result.datatable = offsets[5];
		result.entry = AddAPItem(item);
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
			CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
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


// Custom Relics
void ModifyRelics(const CG::UWorld* world)
{
	auto gm = (CG::AGameModeZenithBase*)world->AuthorityGameMode;
	CG::UDataTable* passiveTable = gm->ItemPassiveTable;
	//auto achievementTable = world->OwningGameInstance->GetGameInstanceSubsystem<CG::UAchievementsSubsystem>()->GetAchievementDataTable();
	//		CG::FAchievementData* from = achievementTable->GetValue<CG::FAchievementData>(relic[1]);
	//		memcpy(to->Icon, from->LockedIcon, 0x28);

	std::vector<std::pair<std::wstring, int> > relics = {
		{ L"Unused Royal Aegis Crest", 2 },
		{ L"Unused Giant's Ring", 8 },
		{ L"Unused Ancient Dragon Claw", 10 },
		{ L"Unused Aura's Ring", 18 },
		{ L"Unused Calivia's Ring", 21 },
		{ L"Heavy Boulder", 33 },
	};

	std::map<int, int> replace_icons = { {2, 1}, {8, 7}, {18, 17}, {18, 17}, {21, 20}, {21, 20}, {33, 3} };

	for (auto relic : relics)
	{
		CG::FBaseItemData* to = passiveTable->GetValue<CG::FBaseItemData>(relic.second);
		to->Name = relic.first.c_str();
		if (replace_icons.contains(relic.second))
		{
			CG::FBaseItemData* from = passiveTable->GetValue<CG::FBaseItemData>(replace_icons[relic.second]);
			memcpy(to->Icon, from->Icon, 0x28);
		}
	}
	CG::FBaseItemData* to = passiveTable->GetValue<CG::FBaseItemData>(33);
	to->ShortExplanation.SetFromString(CG::FString(L"Stops Lily from floating into water"));
	to->Description.SetFromString(CG::FString(L"Custom relic"));
}

void Randomizer::ModifySpirits()
{
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;
	CG::UDataTable* table = gm->ItemSpiritTable;
	CG::FItemSpiritData* data = (CG::FItemSpiritData*)(table->Data[0].ptr);
	CG::FDataTableRowHandle empty = data->AptitudeToUnlock;
	ModifyRelics(World());
	_starting_weapon = 0;

	auto entry = _replacements.find("starting_weapon");
	if (entry != _replacements.end())
		_starting_weapon = entry->second.entry;

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
		if (notif_visible)
			return;
		QueueTipNotification(item, result);
		notif_visible = true;
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
				if (entry != _replacements.end() && entry->second.datatable == 0)
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
	char* str;
	if (!_remote_memory->Read(str))
	{
		std::stringstream ss(str);
		std::string item;
		DWORD i = 0;
		while (std::getline(ss, item))
		{
			if (i >= _receivedItems.size())
			{
				_receivedItems.push_back(item);
				if (_need_ap_refresh || i >= _remote_memory->GetHeader())
					AddItem(item);
			}
			i++;
		}
		notif_visible = false;
		_need_ap_refresh = false;
	}
}

void Randomizer::OnSave()
{
	_remote_memory->SetHeader(_receivedItems.size());
}

void Randomizer::OnEndingReached()
{
	//CG::UGameInstanceZenithBase* GameInstance = (CG::UGameInstanceZenithBase*)(World()->OwningGameInstance);
	CG::AGameModeZenithBase* gm = (CG::AGameModeZenithBase*)World()->AuthorityGameMode;

	const char* endings[3] = {
		"Ending_A\n",
		"Ending_B\n",
		"Ending_C\n"
	};

	int ending = 0;
	if (gm->DidReachGameEnding(CG::Zenith_EGameEndingType::EGameEndingType__EndingC, false))
		ending = 2;
	else if (gm->DidReachGameEnding(CG::Zenith_EGameEndingType::EGameEndingType__EndingB, false))
		ending = 1;

	data_to_send += endings[ending];
	SendData();
}
