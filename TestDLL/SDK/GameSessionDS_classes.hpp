#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameSessionDS

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class GameSessionDS.GameSessionDS
// 0x0010 (0x0040 - 0x0030)
class UGameSessionDS final : public UObject
{
public:
	uint8                                         Pad_30[0x10];                                      // 0x0030(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GameSessionDS">();
	}
	static class UGameSessionDS* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameSessionDS>();
	}
};
static_assert(alignof(UGameSessionDS) == 0x000008, "Wrong alignment on UGameSessionDS");
static_assert(sizeof(UGameSessionDS) == 0x000040, "Wrong size on UGameSessionDS");

}
