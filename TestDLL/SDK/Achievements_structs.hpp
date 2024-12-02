#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Achievements

#include "Basic.hpp"

#include "DeadByDaylight_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// ScriptStruct Achievements.GameEventSimpleAchievementInfo
// 0x0020 (0x0020 - 0x0000)
struct FGameEventSimpleAchievementInfo final
{
public:
	TArray<struct FGameplayTag>                   GameEvents;                                        // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                           ProfileStats;                                      // 0x0010(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameEventSimpleAchievementInfo) == 0x000008, "Wrong alignment on FGameEventSimpleAchievementInfo");
static_assert(sizeof(FGameEventSimpleAchievementInfo) == 0x000020, "Wrong size on FGameEventSimpleAchievementInfo");
static_assert(offsetof(FGameEventSimpleAchievementInfo, GameEvents) == 0x000000, "Member 'FGameEventSimpleAchievementInfo::GameEvents' has a wrong offset!");
static_assert(offsetof(FGameEventSimpleAchievementInfo, ProfileStats) == 0x000010, "Member 'FGameEventSimpleAchievementInfo::ProfileStats' has a wrong offset!");

// ScriptStruct Achievements.ScoreEventSimpleAchievementInfo
// 0x0020 (0x0020 - 0x0000)
struct FScoreEventSimpleAchievementInfo final
{
public:
	TArray<EDBDScoreTypes>                        ScoreTypes;                                        // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                           ProfileStats;                                      // 0x0010(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FScoreEventSimpleAchievementInfo) == 0x000008, "Wrong alignment on FScoreEventSimpleAchievementInfo");
static_assert(sizeof(FScoreEventSimpleAchievementInfo) == 0x000020, "Wrong size on FScoreEventSimpleAchievementInfo");
static_assert(offsetof(FScoreEventSimpleAchievementInfo, ScoreTypes) == 0x000000, "Member 'FScoreEventSimpleAchievementInfo::ScoreTypes' has a wrong offset!");
static_assert(offsetof(FScoreEventSimpleAchievementInfo, ProfileStats) == 0x000010, "Member 'FScoreEventSimpleAchievementInfo::ProfileStats' has a wrong offset!");

// ScriptStruct Achievements.GameEventClassAchievementInfo
// 0x0008 (0x0008 - 0x0000)
struct FGameEventClassAchievementInfo final
{
public:
	TSubclassOf<class UOnGameEventAchievement>    Achievement;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameEventClassAchievementInfo) == 0x000008, "Wrong alignment on FGameEventClassAchievementInfo");
static_assert(sizeof(FGameEventClassAchievementInfo) == 0x000008, "Wrong size on FGameEventClassAchievementInfo");
static_assert(offsetof(FGameEventClassAchievementInfo, Achievement) == 0x000000, "Member 'FGameEventClassAchievementInfo::Achievement' has a wrong offset!");

// ScriptStruct Achievements.CustomAchievementInfo
// 0x0008 (0x0008 - 0x0000)
struct FCustomAchievementInfo final
{
public:
	TSubclassOf<class UAchievementBase>           Achievement;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCustomAchievementInfo) == 0x000008, "Wrong alignment on FCustomAchievementInfo");
static_assert(sizeof(FCustomAchievementInfo) == 0x000008, "Wrong size on FCustomAchievementInfo");
static_assert(offsetof(FCustomAchievementInfo, Achievement) == 0x000000, "Member 'FCustomAchievementInfo::Achievement' has a wrong offset!");

}

