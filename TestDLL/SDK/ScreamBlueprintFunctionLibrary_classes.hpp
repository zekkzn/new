#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScreamBlueprintFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ScreamBlueprintFunctionLibrary.ScreamBlueprintFunctionLibrary_C
// 0x0000 (0x0030 - 0x0030)
class UScreamBlueprintFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void ScreamRevealSurvivor(class ADBDPlayer* SurvivorPlayer, double ScreamRevealDuration, bool SpawnBubbleIndicator, class UObject* __WorldContext);
	static void ScreamRevealSurvivor3D(class ACamperPlayer* Camper, double ScreamRevealDuration, bool SpawnBubbleIndicator, class UObject* __WorldContext);
	static void TriggerScreamAnimation(class ACamperPlayer* SurvivorPlayer, double ScreamRevealDuration, bool SpawnBubbleIndicator, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ScreamBlueprintFunctionLibrary_C">();
	}
	static class UScreamBlueprintFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScreamBlueprintFunctionLibrary_C>();
	}
};
static_assert(alignof(UScreamBlueprintFunctionLibrary_C) == 0x000008, "Wrong alignment on UScreamBlueprintFunctionLibrary_C");
static_assert(sizeof(UScreamBlueprintFunctionLibrary_C) == 0x000030, "Wrong size on UScreamBlueprintFunctionLibrary_C");

}
