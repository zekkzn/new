#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BHVRAnalytics

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct BHVRAnalytics.BaseSingleStructIndexAnalytics
// 0x0018 (0x0018 - 0x0000)
struct FBaseSingleStructIndexAnalytics
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SessionGuid;                                       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FBaseSingleStructIndexAnalytics) == 0x000008, "Wrong alignment on FBaseSingleStructIndexAnalytics");
static_assert(sizeof(FBaseSingleStructIndexAnalytics) == 0x000018, "Wrong size on FBaseSingleStructIndexAnalytics");
static_assert(offsetof(FBaseSingleStructIndexAnalytics, SessionGuid) == 0x000008, "Member 'FBaseSingleStructIndexAnalytics::SessionGuid' has a wrong offset!");

}
