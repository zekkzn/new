#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Effect_Nightmare_Survivor

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_Effect_Nightmare_Survivor.BPI_Effect_Nightmare_Survivor_C.HandleDreamStateChangedVFX
// 0x0002 (0x0002 - 0x0000)
struct BPI_Effect_Nightmare_Survivor_C_HandleDreamStateChangedVFX final
{
public:
	bool                                          IsInDreamworld;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocallyObservedChanged;                            // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_Effect_Nightmare_Survivor_C_HandleDreamStateChangedVFX) == 0x000001, "Wrong alignment on BPI_Effect_Nightmare_Survivor_C_HandleDreamStateChangedVFX");
static_assert(sizeof(BPI_Effect_Nightmare_Survivor_C_HandleDreamStateChangedVFX) == 0x000002, "Wrong size on BPI_Effect_Nightmare_Survivor_C_HandleDreamStateChangedVFX");
static_assert(offsetof(BPI_Effect_Nightmare_Survivor_C_HandleDreamStateChangedVFX, IsInDreamworld) == 0x000000, "Member 'BPI_Effect_Nightmare_Survivor_C_HandleDreamStateChangedVFX::IsInDreamworld' has a wrong offset!");
static_assert(offsetof(BPI_Effect_Nightmare_Survivor_C_HandleDreamStateChangedVFX, LocallyObservedChanged) == 0x000001, "Member 'BPI_Effect_Nightmare_Survivor_C_HandleDreamStateChangedVFX::LocallyObservedChanged' has a wrong offset!");

}
