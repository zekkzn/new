#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerIsTrapped

#include "Basic.hpp"

#include "Competence_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerIsTrapped.PlayerIsTrapped_C
// 0x0000 (0x0118 - 0x0118)
class UPlayerIsTrapped_C final : public UHasObjectState
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerIsTrapped_C">();
	}
	static class UPlayerIsTrapped_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerIsTrapped_C>();
	}
};
static_assert(alignof(UPlayerIsTrapped_C) == 0x000008, "Wrong alignment on UPlayerIsTrapped_C");
static_assert(sizeof(UPlayerIsTrapped_C) == 0x000118, "Wrong size on UPlayerIsTrapped_C");

}
