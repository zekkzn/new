#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheS43

#include "Basic.hpp"

#include "DeadByDaylight_structs.hpp"


namespace SDK::Params
{

// Function TheS43.S43P01.Authority_OnDamageStateChanged
// 0x0002 (0x0002 - 0x0000)
struct S43P01_Authority_OnDamageStateChanged final
{
public:
	ECamperDamageState                            OldDamageState;                                    // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECamperDamageState                            CurrentDamageState;                                // 0x0001(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S43P01_Authority_OnDamageStateChanged) == 0x000001, "Wrong alignment on S43P01_Authority_OnDamageStateChanged");
static_assert(sizeof(S43P01_Authority_OnDamageStateChanged) == 0x000002, "Wrong size on S43P01_Authority_OnDamageStateChanged");
static_assert(offsetof(S43P01_Authority_OnDamageStateChanged, OldDamageState) == 0x000000, "Member 'S43P01_Authority_OnDamageStateChanged::OldDamageState' has a wrong offset!");
static_assert(offsetof(S43P01_Authority_OnDamageStateChanged, CurrentDamageState) == 0x000001, "Member 'S43P01_Authority_OnDamageStateChanged::CurrentDamageState' has a wrong offset!");

}

