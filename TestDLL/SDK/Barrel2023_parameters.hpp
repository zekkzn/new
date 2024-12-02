#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Barrel2023

#include "Basic.hpp"

#include "Barrel2023_structs.hpp"


namespace SDK::Params
{

// Function Barrel2023.Barrel.Cosmetic_OnBarrelDespawn
// 0x0001 (0x0001 - 0x0000)
struct Barrel_Cosmetic_OnBarrelDespawn final
{
public:
	bool                                          WasInteractionCompleted;                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Barrel_Cosmetic_OnBarrelDespawn) == 0x000001, "Wrong alignment on Barrel_Cosmetic_OnBarrelDespawn");
static_assert(sizeof(Barrel_Cosmetic_OnBarrelDespawn) == 0x000001, "Wrong size on Barrel_Cosmetic_OnBarrelDespawn");
static_assert(offsetof(Barrel_Cosmetic_OnBarrelDespawn, WasInteractionCompleted) == 0x000000, "Member 'Barrel_Cosmetic_OnBarrelDespawn::WasInteractionCompleted' has a wrong offset!");

// Function Barrel2023.Barrel.Cosmetic_OnInteractionCompleted
// 0x0008 (0x0008 - 0x0000)
struct Barrel_Cosmetic_OnInteractionCompleted final
{
public:
	class ADBDPlayer*                             InteractingPlayer;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Barrel_Cosmetic_OnInteractionCompleted) == 0x000008, "Wrong alignment on Barrel_Cosmetic_OnInteractionCompleted");
static_assert(sizeof(Barrel_Cosmetic_OnInteractionCompleted) == 0x000008, "Wrong size on Barrel_Cosmetic_OnInteractionCompleted");
static_assert(offsetof(Barrel_Cosmetic_OnInteractionCompleted, InteractingPlayer) == 0x000000, "Member 'Barrel_Cosmetic_OnInteractionCompleted::InteractingPlayer' has a wrong offset!");

// Function Barrel2023.Barrel.Cosmetic_OnStartedInteracting
// 0x0010 (0x0010 - 0x0000)
struct Barrel_Cosmetic_OnStartedInteracting final
{
public:
	class ADBDPlayer*                             InteractingPlayer;                                 // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InteractionDuration;                               // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(Barrel_Cosmetic_OnStartedInteracting) == 0x000008, "Wrong alignment on Barrel_Cosmetic_OnStartedInteracting");
static_assert(sizeof(Barrel_Cosmetic_OnStartedInteracting) == 0x000010, "Wrong size on Barrel_Cosmetic_OnStartedInteracting");
static_assert(offsetof(Barrel_Cosmetic_OnStartedInteracting, InteractingPlayer) == 0x000000, "Member 'Barrel_Cosmetic_OnStartedInteracting::InteractingPlayer' has a wrong offset!");
static_assert(offsetof(Barrel_Cosmetic_OnStartedInteracting, InteractionDuration) == 0x000008, "Member 'Barrel_Cosmetic_OnStartedInteracting::InteractionDuration' has a wrong offset!");

// Function Barrel2023.Barrel.SetDissolveStarted
// 0x0001 (0x0001 - 0x0000)
struct Barrel_SetDissolveStarted final
{
public:
	bool                                          IsDissolveStarted;                                 // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Barrel_SetDissolveStarted) == 0x000001, "Wrong alignment on Barrel_SetDissolveStarted");
static_assert(sizeof(Barrel_SetDissolveStarted) == 0x000001, "Wrong size on Barrel_SetDissolveStarted");
static_assert(offsetof(Barrel_SetDissolveStarted, IsDissolveStarted) == 0x000000, "Member 'Barrel_SetDissolveStarted::IsDissolveStarted' has a wrong offset!");

// Function Barrel2023.BarrelEventComponent.Authority_OnBarrelInteractionChanged
// 0x0010 (0x0010 - 0x0000)
struct BarrelEventComponent_Authority_OnBarrelInteractionChanged final
{
public:
	class ARespawnableInteractable*               RespawnableInteractable;                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsInteracting;                                     // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BarrelEventComponent_Authority_OnBarrelInteractionChanged) == 0x000008, "Wrong alignment on BarrelEventComponent_Authority_OnBarrelInteractionChanged");
static_assert(sizeof(BarrelEventComponent_Authority_OnBarrelInteractionChanged) == 0x000010, "Wrong size on BarrelEventComponent_Authority_OnBarrelInteractionChanged");
static_assert(offsetof(BarrelEventComponent_Authority_OnBarrelInteractionChanged, RespawnableInteractable) == 0x000000, "Member 'BarrelEventComponent_Authority_OnBarrelInteractionChanged::RespawnableInteractable' has a wrong offset!");
static_assert(offsetof(BarrelEventComponent_Authority_OnBarrelInteractionChanged, IsInteracting) == 0x000008, "Member 'BarrelEventComponent_Authority_OnBarrelInteractionChanged::IsInteracting' has a wrong offset!");

// Function Barrel2023.BarrelEventComponent.Authority_OnBarrelTimerDone
// 0x0008 (0x0008 - 0x0000)
struct BarrelEventComponent_Authority_OnBarrelTimerDone final
{
public:
	class ARespawnableInteractable*               RespawnableInteractable;                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BarrelEventComponent_Authority_OnBarrelTimerDone) == 0x000008, "Wrong alignment on BarrelEventComponent_Authority_OnBarrelTimerDone");
static_assert(sizeof(BarrelEventComponent_Authority_OnBarrelTimerDone) == 0x000008, "Wrong size on BarrelEventComponent_Authority_OnBarrelTimerDone");
static_assert(offsetof(BarrelEventComponent_Authority_OnBarrelTimerDone, RespawnableInteractable) == 0x000000, "Member 'BarrelEventComponent_Authority_OnBarrelTimerDone::RespawnableInteractable' has a wrong offset!");

// Function Barrel2023.BarrelEventComponent.DBD_BarrelPauseAllTimers
// 0x0001 (0x0001 - 0x0000)
struct BarrelEventComponent_DBD_BarrelPauseAllTimers final
{
public:
	bool                                          ShouldPause;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BarrelEventComponent_DBD_BarrelPauseAllTimers) == 0x000001, "Wrong alignment on BarrelEventComponent_DBD_BarrelPauseAllTimers");
static_assert(sizeof(BarrelEventComponent_DBD_BarrelPauseAllTimers) == 0x000001, "Wrong size on BarrelEventComponent_DBD_BarrelPauseAllTimers");
static_assert(offsetof(BarrelEventComponent_DBD_BarrelPauseAllTimers, ShouldPause) == 0x000000, "Member 'BarrelEventComponent_DBD_BarrelPauseAllTimers::ShouldPause' has a wrong offset!");

// Function Barrel2023.BarrelEventComponent.DBD_BarrelDebugBarrelSpawnPositions
// 0x0004 (0x0004 - 0x0000)
struct BarrelEventComponent_DBD_BarrelDebugBarrelSpawnPositions final
{
public:
	float                                         Duration;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BarrelEventComponent_DBD_BarrelDebugBarrelSpawnPositions) == 0x000004, "Wrong alignment on BarrelEventComponent_DBD_BarrelDebugBarrelSpawnPositions");
static_assert(sizeof(BarrelEventComponent_DBD_BarrelDebugBarrelSpawnPositions) == 0x000004, "Wrong size on BarrelEventComponent_DBD_BarrelDebugBarrelSpawnPositions");
static_assert(offsetof(BarrelEventComponent_DBD_BarrelDebugBarrelSpawnPositions, Duration) == 0x000000, "Member 'BarrelEventComponent_DBD_BarrelDebugBarrelSpawnPositions::Duration' has a wrong offset!");

// Function Barrel2023.BarrelPlayerComponent.Cosmetic_TriggerPlayerVignette
// 0x0010 (0x0010 - 0x0000)
struct BarrelPlayerComponent_Cosmetic_TriggerPlayerVignette final
{
public:
	const class ADBDPlayer*                       Player;                                            // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EBarrelType                                   BarrelType;                                        // 0x0008(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BarrelPlayerComponent_Cosmetic_TriggerPlayerVignette) == 0x000008, "Wrong alignment on BarrelPlayerComponent_Cosmetic_TriggerPlayerVignette");
static_assert(sizeof(BarrelPlayerComponent_Cosmetic_TriggerPlayerVignette) == 0x000010, "Wrong size on BarrelPlayerComponent_Cosmetic_TriggerPlayerVignette");
static_assert(offsetof(BarrelPlayerComponent_Cosmetic_TriggerPlayerVignette, Player) == 0x000000, "Member 'BarrelPlayerComponent_Cosmetic_TriggerPlayerVignette::Player' has a wrong offset!");
static_assert(offsetof(BarrelPlayerComponent_Cosmetic_TriggerPlayerVignette, BarrelType) == 0x000008, "Member 'BarrelPlayerComponent_Cosmetic_TriggerPlayerVignette::BarrelType' has a wrong offset!");

// Function Barrel2023.BarrelPlayerComponent.GetInteractedBarrels
// 0x0010 (0x0010 - 0x0000)
struct BarrelPlayerComponent_GetInteractedBarrels final
{
public:
	TArray<EBarrelType>                           ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(BarrelPlayerComponent_GetInteractedBarrels) == 0x000008, "Wrong alignment on BarrelPlayerComponent_GetInteractedBarrels");
static_assert(sizeof(BarrelPlayerComponent_GetInteractedBarrels) == 0x000010, "Wrong size on BarrelPlayerComponent_GetInteractedBarrels");
static_assert(offsetof(BarrelPlayerComponent_GetInteractedBarrels, ReturnValue) == 0x000000, "Member 'BarrelPlayerComponent_GetInteractedBarrels::ReturnValue' has a wrong offset!");

// Function Barrel2023.BarrelPlayerComponent.Server_SetCharmInfo
// 0x0003 (0x0003 - 0x0000)
struct BarrelPlayerComponent_Server_SetCharmInfo final
{
public:
	bool                                          IsRedUnlocked;                                     // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsGreenUnlocked;                                   // 0x0001(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsBlueUnlocked;                                    // 0x0002(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BarrelPlayerComponent_Server_SetCharmInfo) == 0x000001, "Wrong alignment on BarrelPlayerComponent_Server_SetCharmInfo");
static_assert(sizeof(BarrelPlayerComponent_Server_SetCharmInfo) == 0x000003, "Wrong size on BarrelPlayerComponent_Server_SetCharmInfo");
static_assert(offsetof(BarrelPlayerComponent_Server_SetCharmInfo, IsRedUnlocked) == 0x000000, "Member 'BarrelPlayerComponent_Server_SetCharmInfo::IsRedUnlocked' has a wrong offset!");
static_assert(offsetof(BarrelPlayerComponent_Server_SetCharmInfo, IsGreenUnlocked) == 0x000001, "Member 'BarrelPlayerComponent_Server_SetCharmInfo::IsGreenUnlocked' has a wrong offset!");
static_assert(offsetof(BarrelPlayerComponent_Server_SetCharmInfo, IsBlueUnlocked) == 0x000002, "Member 'BarrelPlayerComponent_Server_SetCharmInfo::IsBlueUnlocked' has a wrong offset!");

}

