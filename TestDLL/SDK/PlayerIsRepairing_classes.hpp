#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerIsRepairing

#include "Basic.hpp"

#include "DBDCompetence_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerIsRepairing.PlayerIsRepairing_C
// 0x0000 (0x0120 - 0x0120)
class UPlayerIsRepairing_C final : public UIsPlayerPerformingInteraction
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerIsRepairing_C">();
	}
	static class UPlayerIsRepairing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerIsRepairing_C>();
	}
};
static_assert(alignof(UPlayerIsRepairing_C) == 0x000008, "Wrong alignment on UPlayerIsRepairing_C");
static_assert(sizeof(UPlayerIsRepairing_C) == 0x000120, "Wrong size on UPlayerIsRepairing_C");

}

