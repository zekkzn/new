#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheHuntress

#include "Basic.hpp"


namespace SDK::Params
{

// Function TheHuntress.HatchetThrow.GetOwningHatchetSpawner
// 0x0008 (0x0008 - 0x0000)
struct HatchetThrow_GetOwningHatchetSpawner final
{
public:
	class ATheHuntressPower*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(HatchetThrow_GetOwningHatchetSpawner) == 0x000008, "Wrong alignment on HatchetThrow_GetOwningHatchetSpawner");
static_assert(sizeof(HatchetThrow_GetOwningHatchetSpawner) == 0x000008, "Wrong size on HatchetThrow_GetOwningHatchetSpawner");
static_assert(offsetof(HatchetThrow_GetOwningHatchetSpawner, ReturnValue) == 0x000000, "Member 'HatchetThrow_GetOwningHatchetSpawner::ReturnValue' has a wrong offset!");

// Function TheHuntress.HatchetLauncher.IsLaunchedHatchetFullyCharged
// 0x0001 (0x0001 - 0x0000)
struct HatchetLauncher_IsLaunchedHatchetFullyCharged final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(HatchetLauncher_IsLaunchedHatchetFullyCharged) == 0x000001, "Wrong alignment on HatchetLauncher_IsLaunchedHatchetFullyCharged");
static_assert(sizeof(HatchetLauncher_IsLaunchedHatchetFullyCharged) == 0x000001, "Wrong size on HatchetLauncher_IsLaunchedHatchetFullyCharged");
static_assert(offsetof(HatchetLauncher_IsLaunchedHatchetFullyCharged, ReturnValue) == 0x000000, "Member 'HatchetLauncher_IsLaunchedHatchetFullyCharged::ReturnValue' has a wrong offset!");

// Function TheHuntress.HatchetRack.SetMovableHatchetVisibility
// 0x0001 (0x0001 - 0x0000)
struct HatchetRack_SetMovableHatchetVisibility final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(HatchetRack_SetMovableHatchetVisibility) == 0x000001, "Wrong alignment on HatchetRack_SetMovableHatchetVisibility");
static_assert(sizeof(HatchetRack_SetMovableHatchetVisibility) == 0x000001, "Wrong size on HatchetRack_SetMovableHatchetVisibility");
static_assert(offsetof(HatchetRack_SetMovableHatchetVisibility, Visible) == 0x000000, "Member 'HatchetRack_SetMovableHatchetVisibility::Visible' has a wrong offset!");

// Function TheHuntress.ReloadHatchet.IsInteractionPossible_Shared
// 0x0010 (0x0010 - 0x0000)
struct ReloadHatchet_IsInteractionPossible_Shared final
{
public:
	const class ADBDPlayer*                       Player;                                            // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(ReloadHatchet_IsInteractionPossible_Shared) == 0x000008, "Wrong alignment on ReloadHatchet_IsInteractionPossible_Shared");
static_assert(sizeof(ReloadHatchet_IsInteractionPossible_Shared) == 0x000010, "Wrong size on ReloadHatchet_IsInteractionPossible_Shared");
static_assert(offsetof(ReloadHatchet_IsInteractionPossible_Shared, Player) == 0x000000, "Member 'ReloadHatchet_IsInteractionPossible_Shared::Player' has a wrong offset!");
static_assert(offsetof(ReloadHatchet_IsInteractionPossible_Shared, ReturnValue) == 0x000008, "Member 'ReloadHatchet_IsInteractionPossible_Shared::ReturnValue' has a wrong offset!");

// Function TheHuntress.TerritorialImperative.Multicast_OnPerkTriggered
// 0x0008 (0x0008 - 0x0000)
struct TerritorialImperative_Multicast_OnPerkTriggered final
{
public:
	class ADBDPlayer*                             Triggerer;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TerritorialImperative_Multicast_OnPerkTriggered) == 0x000008, "Wrong alignment on TerritorialImperative_Multicast_OnPerkTriggered");
static_assert(sizeof(TerritorialImperative_Multicast_OnPerkTriggered) == 0x000008, "Wrong size on TerritorialImperative_Multicast_OnPerkTriggered");
static_assert(offsetof(TerritorialImperative_Multicast_OnPerkTriggered, Triggerer) == 0x000000, "Member 'TerritorialImperative_Multicast_OnPerkTriggered::Triggerer' has a wrong offset!");

// Function TheHuntress.TheHuntressPower.SetHatchetVisible
// 0x0001 (0x0001 - 0x0000)
struct TheHuntressPower_SetHatchetVisible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TheHuntressPower_SetHatchetVisible) == 0x000001, "Wrong alignment on TheHuntressPower_SetHatchetVisible");
static_assert(sizeof(TheHuntressPower_SetHatchetVisible) == 0x000001, "Wrong size on TheHuntressPower_SetHatchetVisible");
static_assert(offsetof(TheHuntressPower_SetHatchetVisible, Visible) == 0x000000, "Member 'TheHuntressPower_SetHatchetVisible::Visible' has a wrong offset!");

// Function TheHuntress.TheHuntressPower.SetPercentThrowStrength
// 0x0004 (0x0004 - 0x0000)
struct TheHuntressPower_SetPercentThrowStrength final
{
public:
	float                                         PercentStrength;                                   // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TheHuntressPower_SetPercentThrowStrength) == 0x000004, "Wrong alignment on TheHuntressPower_SetPercentThrowStrength");
static_assert(sizeof(TheHuntressPower_SetPercentThrowStrength) == 0x000004, "Wrong size on TheHuntressPower_SetPercentThrowStrength");
static_assert(offsetof(TheHuntressPower_SetPercentThrowStrength, PercentStrength) == 0x000000, "Member 'TheHuntressPower_SetPercentThrowStrength::PercentStrength' has a wrong offset!");

// Function TheHuntress.TheHuntressPower.GetAkAudioHatchetSpawner
// 0x0008 (0x0008 - 0x0000)
struct TheHuntressPower_GetAkAudioHatchetSpawner final
{
public:
	class UAkComponent*                           ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TheHuntressPower_GetAkAudioHatchetSpawner) == 0x000008, "Wrong alignment on TheHuntressPower_GetAkAudioHatchetSpawner");
static_assert(sizeof(TheHuntressPower_GetAkAudioHatchetSpawner) == 0x000008, "Wrong size on TheHuntressPower_GetAkAudioHatchetSpawner");
static_assert(offsetof(TheHuntressPower_GetAkAudioHatchetSpawner, ReturnValue) == 0x000000, "Member 'TheHuntressPower_GetAkAudioHatchetSpawner::ReturnValue' has a wrong offset!");

// Function TheHuntress.TheHuntressPower.GetHatchetCooldown
// 0x0008 (0x0008 - 0x0000)
struct TheHuntressPower_GetHatchetCooldown final
{
public:
	class UHatchetCooldown*                       ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TheHuntressPower_GetHatchetCooldown) == 0x000008, "Wrong alignment on TheHuntressPower_GetHatchetCooldown");
static_assert(sizeof(TheHuntressPower_GetHatchetCooldown) == 0x000008, "Wrong size on TheHuntressPower_GetHatchetCooldown");
static_assert(offsetof(TheHuntressPower_GetHatchetCooldown, ReturnValue) == 0x000000, "Member 'TheHuntressPower_GetHatchetCooldown::ReturnValue' has a wrong offset!");

// Function TheHuntress.TheHuntressPower.GetHatchetProjectileLauncher
// 0x0008 (0x0008 - 0x0000)
struct TheHuntressPower_GetHatchetProjectileLauncher final
{
public:
	class UBaseProjectileLauncher*                ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TheHuntressPower_GetHatchetProjectileLauncher) == 0x000008, "Wrong alignment on TheHuntressPower_GetHatchetProjectileLauncher");
static_assert(sizeof(TheHuntressPower_GetHatchetProjectileLauncher) == 0x000008, "Wrong size on TheHuntressPower_GetHatchetProjectileLauncher");
static_assert(offsetof(TheHuntressPower_GetHatchetProjectileLauncher, ReturnValue) == 0x000000, "Member 'TheHuntressPower_GetHatchetProjectileLauncher::ReturnValue' has a wrong offset!");

// Function TheHuntress.TheHuntressPower.GetOwningKiller
// 0x0008 (0x0008 - 0x0000)
struct TheHuntressPower_GetOwningKiller final
{
public:
	class ASlasherPlayer*                         ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TheHuntressPower_GetOwningKiller) == 0x000008, "Wrong alignment on TheHuntressPower_GetOwningKiller");
static_assert(sizeof(TheHuntressPower_GetOwningKiller) == 0x000008, "Wrong size on TheHuntressPower_GetOwningKiller");
static_assert(offsetof(TheHuntressPower_GetOwningKiller, ReturnValue) == 0x000000, "Member 'TheHuntressPower_GetOwningKiller::ReturnValue' has a wrong offset!");

// Function TheHuntress.TheHuntressPower.HasHatchet
// 0x0001 (0x0001 - 0x0000)
struct TheHuntressPower_HasHatchet final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TheHuntressPower_HasHatchet) == 0x000001, "Wrong alignment on TheHuntressPower_HasHatchet");
static_assert(sizeof(TheHuntressPower_HasHatchet) == 0x000001, "Wrong size on TheHuntressPower_HasHatchet");
static_assert(offsetof(TheHuntressPower_HasHatchet, ReturnValue) == 0x000000, "Member 'TheHuntressPower_HasHatchet::ReturnValue' has a wrong offset!");

// Function TheHuntress.TheHuntressPower.IsHatchetThrowFullyCharged
// 0x0001 (0x0001 - 0x0000)
struct TheHuntressPower_IsHatchetThrowFullyCharged final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TheHuntressPower_IsHatchetThrowFullyCharged) == 0x000001, "Wrong alignment on TheHuntressPower_IsHatchetThrowFullyCharged");
static_assert(sizeof(TheHuntressPower_IsHatchetThrowFullyCharged) == 0x000001, "Wrong size on TheHuntressPower_IsHatchetThrowFullyCharged");
static_assert(offsetof(TheHuntressPower_IsHatchetThrowFullyCharged, ReturnValue) == 0x000000, "Member 'TheHuntressPower_IsHatchetThrowFullyCharged::ReturnValue' has a wrong offset!");

}
