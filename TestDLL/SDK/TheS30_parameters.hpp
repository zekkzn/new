#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheS30

#include "Basic.hpp"


namespace SDK::Params
{

// Function TheS30.S30P02.GetHealingOthersBonus
// 0x0004 (0x0004 - 0x0000)
struct S30P02_GetHealingOthersBonus final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S30P02_GetHealingOthersBonus) == 0x000004, "Wrong alignment on S30P02_GetHealingOthersBonus");
static_assert(sizeof(S30P02_GetHealingOthersBonus) == 0x000004, "Wrong size on S30P02_GetHealingOthersBonus");
static_assert(offsetof(S30P02_GetHealingOthersBonus, ReturnValue) == 0x000000, "Member 'S30P02_GetHealingOthersBonus::ReturnValue' has a wrong offset!");

}
