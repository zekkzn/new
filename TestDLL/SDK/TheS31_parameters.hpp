#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheS31

#include "Basic.hpp"


namespace SDK::Params
{

// Function TheS31.S31P01.GetKillerAuraRevealDuration
// 0x0004 (0x0004 - 0x0000)
struct S31P01_GetKillerAuraRevealDuration final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S31P01_GetKillerAuraRevealDuration) == 0x000004, "Wrong alignment on S31P01_GetKillerAuraRevealDuration");
static_assert(sizeof(S31P01_GetKillerAuraRevealDuration) == 0x000004, "Wrong size on S31P01_GetKillerAuraRevealDuration");
static_assert(offsetof(S31P01_GetKillerAuraRevealDuration, ReturnValue) == 0x000000, "Member 'S31P01_GetKillerAuraRevealDuration::ReturnValue' has a wrong offset!");

}
