#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TimeUtilities

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class TimeUtilities.DBDTimeUtilities
// 0x0048 (0x0080 - 0x0038)
class UDBDTimeUtilities final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_38[0x48];                                      // 0x0038(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static bool IsDateAfterCurrentDateWithEpsilon(const struct FDateTime& Date);
	static bool IsDateTimeValid(const struct FDateTime& DateTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DBDTimeUtilities">();
	}
	static class UDBDTimeUtilities* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDBDTimeUtilities>();
	}
};
static_assert(alignof(UDBDTimeUtilities) == 0x000008, "Wrong alignment on UDBDTimeUtilities");
static_assert(sizeof(UDBDTimeUtilities) == 0x000080, "Wrong size on UDBDTimeUtilities");

}
