#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerNames

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class PlayerNames.PlayerNameFacade
// 0x0018 (0x0050 - 0x0038)
class UPlayerNameFacade final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_38[0x18];                                      // 0x0038(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PlayerNameFacade">();
	}
	static class UPlayerNameFacade* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerNameFacade>();
	}
};
static_assert(alignof(UPlayerNameFacade) == 0x000008, "Wrong alignment on UPlayerNameFacade");
static_assert(sizeof(UPlayerNameFacade) == 0x000050, "Wrong size on UPlayerNameFacade");

}
