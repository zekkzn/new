#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TotalPlaytimeAchievementBP

#include "Basic.hpp"

#include "Achievements_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TotalPlaytimeAchievementBP.TotalPlaytimeAchievementBP_C
// 0x0000 (0x0040 - 0x0040)
class UTotalPlaytimeAchievementBP_C final : public UTotalPlaytimeAchievement
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TotalPlaytimeAchievementBP_C">();
	}
	static class UTotalPlaytimeAchievementBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTotalPlaytimeAchievementBP_C>();
	}
};
static_assert(alignof(UTotalPlaytimeAchievementBP_C) == 0x000008, "Wrong alignment on UTotalPlaytimeAchievementBP_C");
static_assert(sizeof(UTotalPlaytimeAchievementBP_C) == 0x000040, "Wrong size on UTotalPlaytimeAchievementBP_C");

}
