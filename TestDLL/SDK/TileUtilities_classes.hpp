#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TileUtilities

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TileUtilities.TileUtilities_C
// 0x0000 (0x0030 - 0x0030)
class UTileUtilities_C final : public UBlueprintFunctionLibrary
{
public:
	static void CallForSpawn(class UActorSpawner* ActorSpawner, class UObject* __WorldContext);
	static void CheckBasement(class UTileSpawnPoint* SpawnPoint, class AActor* SpawnedObject, class UObject* __WorldContext);
	static void CheckGenerator(class UTileSpawnPoint* SpawnPoint, class AActor* SpawnedObject, class UObject* __WorldContext);
	static void InitAsOpen_ISlidingDoor(class UChildActorComponent* ChildActorComponent, class UObject* __WorldContext);
	static void InitAsOpen_Qatar(class UChildActorComponent* ChildActorComponent, class UObject* __WorldContext);
	static void SelectSpawner(TArray<class UActorSpawner*>& Spawners, const struct FRandomStream& Stream, class UObject* __WorldContext);
	static void SelectSpawners(TArray<class UActorSpawner*>& Spawners, int32 MinCount, int32 MaxCount, const struct FRandomStream& Stream, class UObject* __WorldContext);
	static void SelectSpawnPoint(TArray<class UTileSpawnPoint*>& SpawnPoints, const struct FRandomStream& Stream, class UObject* __WorldContext);
	static void SetGeneratorDrivenScoreEvent(TArray<class AActor*>& Generators, class UObject* __WorldContext);
	static void SetupGeneratorDrivenElements(TArray<class UChildActorComponent*>& SpawnPoints, class AActor* GeneratorSpawnPoint, int32 GeneratorId, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TileUtilities_C">();
	}
	static class UTileUtilities_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTileUtilities_C>();
	}
};
static_assert(alignof(UTileUtilities_C) == 0x000008, "Wrong alignment on UTileUtilities_C");
static_assert(sizeof(UTileUtilities_C) == 0x000030, "Wrong size on UTileUtilities_C");

}
