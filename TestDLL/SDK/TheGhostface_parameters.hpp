#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheGhostface

#include "Basic.hpp"

#include "DBDSharedTypes_structs.hpp"
#include "DeadByDaylight_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "TheGhostface_structs.hpp"


namespace SDK::Params
{

// Function TheGhostface.GhostStalkedComponent.Authority_OnStalkedChargeFull
// 0x0018 (0x0018 - 0x0000)
struct GhostStalkedComponent_Authority_OnStalkedChargeFull final
{
public:
	bool                                          COMPLETED;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         InstigatorsForCompletion;                          // 0x0008(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStalkedComponent_Authority_OnStalkedChargeFull) == 0x000008, "Wrong alignment on GhostStalkedComponent_Authority_OnStalkedChargeFull");
static_assert(sizeof(GhostStalkedComponent_Authority_OnStalkedChargeFull) == 0x000018, "Wrong size on GhostStalkedComponent_Authority_OnStalkedChargeFull");
static_assert(offsetof(GhostStalkedComponent_Authority_OnStalkedChargeFull, COMPLETED) == 0x000000, "Member 'GhostStalkedComponent_Authority_OnStalkedChargeFull::COMPLETED' has a wrong offset!");
static_assert(offsetof(GhostStalkedComponent_Authority_OnStalkedChargeFull, InstigatorsForCompletion) == 0x000008, "Member 'GhostStalkedComponent_Authority_OnStalkedChargeFull::InstigatorsForCompletion' has a wrong offset!");

// Function TheGhostface.GhostStalkedComponent.DBD_DebugGhost
// 0x0001 (0x0001 - 0x0000)
struct GhostStalkedComponent_DBD_DebugGhost final
{
public:
	bool                                          Debug;                                             // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStalkedComponent_DBD_DebugGhost) == 0x000001, "Wrong alignment on GhostStalkedComponent_DBD_DebugGhost");
static_assert(sizeof(GhostStalkedComponent_DBD_DebugGhost) == 0x000001, "Wrong size on GhostStalkedComponent_DBD_DebugGhost");
static_assert(offsetof(GhostStalkedComponent_DBD_DebugGhost, Debug) == 0x000000, "Member 'GhostStalkedComponent_DBD_DebugGhost::Debug' has a wrong offset!");

// Function TheGhostface.GhostStalkedComponent.Initialize
// 0x0008 (0x0008 - 0x0000)
struct GhostStalkedComponent_Initialize final
{
public:
	class ASlasherPlayer*                         Killer;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStalkedComponent_Initialize) == 0x000008, "Wrong alignment on GhostStalkedComponent_Initialize");
static_assert(sizeof(GhostStalkedComponent_Initialize) == 0x000008, "Wrong size on GhostStalkedComponent_Initialize");
static_assert(offsetof(GhostStalkedComponent_Initialize, Killer) == 0x000000, "Member 'GhostStalkedComponent_Initialize::Killer' has a wrong offset!");

// DelegateFunction TheGhostface.GhostStalkedComponent.OnIsMarkedChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GhostStalkedComponent_OnIsMarkedChanged__DelegateSignature final
{
public:
	bool                                          IsMarked;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStalkedComponent_OnIsMarkedChanged__DelegateSignature) == 0x000001, "Wrong alignment on GhostStalkedComponent_OnIsMarkedChanged__DelegateSignature");
static_assert(sizeof(GhostStalkedComponent_OnIsMarkedChanged__DelegateSignature) == 0x000001, "Wrong size on GhostStalkedComponent_OnIsMarkedChanged__DelegateSignature");
static_assert(offsetof(GhostStalkedComponent_OnIsMarkedChanged__DelegateSignature, IsMarked) == 0x000000, "Member 'GhostStalkedComponent_OnIsMarkedChanged__DelegateSignature::IsMarked' has a wrong offset!");

// DelegateFunction TheGhostface.GhostStalkedComponent.OnIsSpottingKiller__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GhostStalkedComponent_OnIsSpottingKiller__DelegateSignature final
{
public:
	bool                                          IsSpotting;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStalkedComponent_OnIsSpottingKiller__DelegateSignature) == 0x000001, "Wrong alignment on GhostStalkedComponent_OnIsSpottingKiller__DelegateSignature");
static_assert(sizeof(GhostStalkedComponent_OnIsSpottingKiller__DelegateSignature) == 0x000001, "Wrong size on GhostStalkedComponent_OnIsSpottingKiller__DelegateSignature");
static_assert(offsetof(GhostStalkedComponent_OnIsSpottingKiller__DelegateSignature, IsSpotting) == 0x000000, "Member 'GhostStalkedComponent_OnIsSpottingKiller__DelegateSignature::IsSpotting' has a wrong offset!");

// Function TheGhostface.GhostStalkedComponent.OnKillerSpottedChanged
// 0x0010 (0x0010 - 0x0000)
struct GhostStalkedComponent_OnKillerSpottedChanged final
{
public:
	class ADBDPlayer*                             Spotter;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          Spotted;                                           // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GhostStalkedComponent_OnKillerSpottedChanged) == 0x000008, "Wrong alignment on GhostStalkedComponent_OnKillerSpottedChanged");
static_assert(sizeof(GhostStalkedComponent_OnKillerSpottedChanged) == 0x000010, "Wrong size on GhostStalkedComponent_OnKillerSpottedChanged");
static_assert(offsetof(GhostStalkedComponent_OnKillerSpottedChanged, Spotter) == 0x000000, "Member 'GhostStalkedComponent_OnKillerSpottedChanged::Spotter' has a wrong offset!");
static_assert(offsetof(GhostStalkedComponent_OnKillerSpottedChanged, Spotted) == 0x000008, "Member 'GhostStalkedComponent_OnKillerSpottedChanged::Spotted' has a wrong offset!");

// Function TheGhostface.GhostStalkedComponent.OnLocallyObservedChanged
// 0x0008 (0x0008 - 0x0000)
struct GhostStalkedComponent_OnLocallyObservedChanged final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStalkedComponent_OnLocallyObservedChanged) == 0x000008, "Wrong alignment on GhostStalkedComponent_OnLocallyObservedChanged");
static_assert(sizeof(GhostStalkedComponent_OnLocallyObservedChanged) == 0x000008, "Wrong size on GhostStalkedComponent_OnLocallyObservedChanged");
static_assert(offsetof(GhostStalkedComponent_OnLocallyObservedChanged, Player) == 0x000000, "Member 'GhostStalkedComponent_OnLocallyObservedChanged::Player' has a wrong offset!");

// Function TheGhostface.GhostStalkedComponent.GetMeterPercentage
// 0x0004 (0x0004 - 0x0000)
struct GhostStalkedComponent_GetMeterPercentage final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStalkedComponent_GetMeterPercentage) == 0x000004, "Wrong alignment on GhostStalkedComponent_GetMeterPercentage");
static_assert(sizeof(GhostStalkedComponent_GetMeterPercentage) == 0x000004, "Wrong size on GhostStalkedComponent_GetMeterPercentage");
static_assert(offsetof(GhostStalkedComponent_GetMeterPercentage, ReturnValue) == 0x000000, "Member 'GhostStalkedComponent_GetMeterPercentage::ReturnValue' has a wrong offset!");

// Function TheGhostface.GhostStalkedComponent.IsMarked
// 0x0001 (0x0001 - 0x0000)
struct GhostStalkedComponent_IsMarked final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStalkedComponent_IsMarked) == 0x000001, "Wrong alignment on GhostStalkedComponent_IsMarked");
static_assert(sizeof(GhostStalkedComponent_IsMarked) == 0x000001, "Wrong size on GhostStalkedComponent_IsMarked");
static_assert(offsetof(GhostStalkedComponent_IsMarked, ReturnValue) == 0x000000, "Member 'GhostStalkedComponent_IsMarked::ReturnValue' has a wrong offset!");

// Function TheGhostface.GhostChargeStalkModeInteraction.GetStealthComponent
// 0x0008 (0x0008 - 0x0000)
struct GhostChargeStalkModeInteraction_GetStealthComponent final
{
public:
	class UGhostStealthComponent*                 ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostChargeStalkModeInteraction_GetStealthComponent) == 0x000008, "Wrong alignment on GhostChargeStalkModeInteraction_GetStealthComponent");
static_assert(sizeof(GhostChargeStalkModeInteraction_GetStealthComponent) == 0x000008, "Wrong size on GhostChargeStalkModeInteraction_GetStealthComponent");
static_assert(offsetof(GhostChargeStalkModeInteraction_GetStealthComponent, ReturnValue) == 0x000000, "Member 'GhostChargeStalkModeInteraction_GetStealthComponent::ReturnValue' has a wrong offset!");

// Function TheGhostface.GhostKillerAnalyticsComponent.Authority_OnPreAttackSuccess
// 0x0040 (0x0040 - 0x0000)
struct GhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess final
{
public:
	struct FGameplayTag                           GameplayTag;                                       // 0x0000(0x000C)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameEventData                         GameEventData;                                     // 0x0010(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess) == 0x000008, "Wrong alignment on GhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess");
static_assert(sizeof(GhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess) == 0x000040, "Wrong size on GhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess");
static_assert(offsetof(GhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess, GameplayTag) == 0x000000, "Member 'GhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess::GameplayTag' has a wrong offset!");
static_assert(offsetof(GhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess, GameEventData) == 0x000010, "Member 'GhostKillerAnalyticsComponent_Authority_OnPreAttackSuccess::GameEventData' has a wrong offset!");

// Function TheGhostface.GhostKillerAnalyticsComponent.Authority_OnStalkChargePercentChanged
// 0x0010 (0x0010 - 0x0000)
struct GhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged final
{
public:
	class UChargeableComponent*                   ChargeableComponent;                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PercentCompletionChange;                           // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TotalPercentComplete;                              // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged) == 0x000008, "Wrong alignment on GhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged");
static_assert(sizeof(GhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged) == 0x000010, "Wrong size on GhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged");
static_assert(offsetof(GhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged, ChargeableComponent) == 0x000000, "Member 'GhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged::ChargeableComponent' has a wrong offset!");
static_assert(offsetof(GhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged, PercentCompletionChange) == 0x000008, "Member 'GhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged::PercentCompletionChange' has a wrong offset!");
static_assert(offsetof(GhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged, TotalPercentComplete) == 0x00000C, "Member 'GhostKillerAnalyticsComponent_Authority_OnStalkChargePercentChanged::TotalPercentComplete' has a wrong offset!");

// Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnIsStealthChanged
// 0x0001 (0x0001 - 0x0000)
struct GhostKillerAnalyticsComponent_Local_OnIsStealthChanged final
{
public:
	bool                                          IsStealth;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostKillerAnalyticsComponent_Local_OnIsStealthChanged) == 0x000001, "Wrong alignment on GhostKillerAnalyticsComponent_Local_OnIsStealthChanged");
static_assert(sizeof(GhostKillerAnalyticsComponent_Local_OnIsStealthChanged) == 0x000001, "Wrong size on GhostKillerAnalyticsComponent_Local_OnIsStealthChanged");
static_assert(offsetof(GhostKillerAnalyticsComponent_Local_OnIsStealthChanged, IsStealth) == 0x000000, "Member 'GhostKillerAnalyticsComponent_Local_OnIsStealthChanged::IsStealth' has a wrong offset!");

// Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnLeanStateChanged
// 0x0001 (0x0001 - 0x0000)
struct GhostKillerAnalyticsComponent_Local_OnLeanStateChanged final
{
public:
	ELeanState                                    LeanState;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostKillerAnalyticsComponent_Local_OnLeanStateChanged) == 0x000001, "Wrong alignment on GhostKillerAnalyticsComponent_Local_OnLeanStateChanged");
static_assert(sizeof(GhostKillerAnalyticsComponent_Local_OnLeanStateChanged) == 0x000001, "Wrong size on GhostKillerAnalyticsComponent_Local_OnLeanStateChanged");
static_assert(offsetof(GhostKillerAnalyticsComponent_Local_OnLeanStateChanged, LeanState) == 0x000000, "Member 'GhostKillerAnalyticsComponent_Local_OnLeanStateChanged::LeanState' has a wrong offset!");

// Function TheGhostface.GhostKillerAnalyticsComponent.Local_OnStalkModeChanged
// 0x0001 (0x0001 - 0x0000)
struct GhostKillerAnalyticsComponent_Local_OnStalkModeChanged final
{
public:
	bool                                          IsInStalkMode;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostKillerAnalyticsComponent_Local_OnStalkModeChanged) == 0x000001, "Wrong alignment on GhostKillerAnalyticsComponent_Local_OnStalkModeChanged");
static_assert(sizeof(GhostKillerAnalyticsComponent_Local_OnStalkModeChanged) == 0x000001, "Wrong size on GhostKillerAnalyticsComponent_Local_OnStalkModeChanged");
static_assert(offsetof(GhostKillerAnalyticsComponent_Local_OnStalkModeChanged, IsInStalkMode) == 0x000000, "Member 'GhostKillerAnalyticsComponent_Local_OnStalkModeChanged::IsInStalkMode' has a wrong offset!");

// Function TheGhostface.GhostStalkPowerComponent.Authority_OnIsCrouchedChanged
// 0x0001 (0x0001 - 0x0000)
struct GhostStalkPowerComponent_Authority_OnIsCrouchedChanged final
{
public:
	bool                                          IsCrouched;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStalkPowerComponent_Authority_OnIsCrouchedChanged) == 0x000001, "Wrong alignment on GhostStalkPowerComponent_Authority_OnIsCrouchedChanged");
static_assert(sizeof(GhostStalkPowerComponent_Authority_OnIsCrouchedChanged) == 0x000001, "Wrong size on GhostStalkPowerComponent_Authority_OnIsCrouchedChanged");
static_assert(offsetof(GhostStalkPowerComponent_Authority_OnIsCrouchedChanged, IsCrouched) == 0x000000, "Member 'GhostStalkPowerComponent_Authority_OnIsCrouchedChanged::IsCrouched' has a wrong offset!");

// Function TheGhostface.GhostStalkPowerComponent.Authority_OnStalkModeChanged
// 0x0001 (0x0001 - 0x0000)
struct GhostStalkPowerComponent_Authority_OnStalkModeChanged final
{
public:
	bool                                          IsInStalkMode;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStalkPowerComponent_Authority_OnStalkModeChanged) == 0x000001, "Wrong alignment on GhostStalkPowerComponent_Authority_OnStalkModeChanged");
static_assert(sizeof(GhostStalkPowerComponent_Authority_OnStalkModeChanged) == 0x000001, "Wrong size on GhostStalkPowerComponent_Authority_OnStalkModeChanged");
static_assert(offsetof(GhostStalkPowerComponent_Authority_OnStalkModeChanged, IsInStalkMode) == 0x000000, "Member 'GhostStalkPowerComponent_Authority_OnStalkModeChanged::IsInStalkMode' has a wrong offset!");

// Function TheGhostface.GhostStalkPowerComponent.OnLeanStateChanged
// 0x0001 (0x0001 - 0x0000)
struct GhostStalkPowerComponent_OnLeanStateChanged final
{
public:
	ELeanState                                    LeanState;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStalkPowerComponent_OnLeanStateChanged) == 0x000001, "Wrong alignment on GhostStalkPowerComponent_OnLeanStateChanged");
static_assert(sizeof(GhostStalkPowerComponent_OnLeanStateChanged) == 0x000001, "Wrong size on GhostStalkPowerComponent_OnLeanStateChanged");
static_assert(offsetof(GhostStalkPowerComponent_OnLeanStateChanged, LeanState) == 0x000000, "Member 'GhostStalkPowerComponent_OnLeanStateChanged::LeanState' has a wrong offset!");

// Function TheGhostface.GhostStealthComponent.Client_SpawnMarkerOnCharacter
// 0x0008 (0x0008 - 0x0000)
struct GhostStealthComponent_Client_SpawnMarkerOnCharacter final
{
public:
	class ACharacter*                             Revealer;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStealthComponent_Client_SpawnMarkerOnCharacter) == 0x000008, "Wrong alignment on GhostStealthComponent_Client_SpawnMarkerOnCharacter");
static_assert(sizeof(GhostStealthComponent_Client_SpawnMarkerOnCharacter) == 0x000008, "Wrong size on GhostStealthComponent_Client_SpawnMarkerOnCharacter");
static_assert(offsetof(GhostStealthComponent_Client_SpawnMarkerOnCharacter, Revealer) == 0x000000, "Member 'GhostStealthComponent_Client_SpawnMarkerOnCharacter::Revealer' has a wrong offset!");

// Function TheGhostface.GhostStealthComponent.Multicast_BroadcastOnSuccessfulAttackInStealth
// 0x0008 (0x0008 - 0x0000)
struct GhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth final
{
public:
	class ADBDPlayer*                             Target;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth) == 0x000008, "Wrong alignment on GhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth");
static_assert(sizeof(GhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth) == 0x000008, "Wrong size on GhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth");
static_assert(offsetof(GhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth, Target) == 0x000000, "Member 'GhostStealthComponent_Multicast_BroadcastOnSuccessfulAttackInStealth::Target' has a wrong offset!");

// Function TheGhostface.GhostStealthComponent.Multicast_OnIsBeingSpottedChanged
// 0x0010 (0x0010 - 0x0000)
struct GhostStealthComponent_Multicast_OnIsBeingSpottedChanged final
{
public:
	class ADBDPlayer*                             Spotter;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsBeingSpotted;                                    // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          OnlyUpdateSurvivor;                                // 0x0009(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GhostStealthComponent_Multicast_OnIsBeingSpottedChanged) == 0x000008, "Wrong alignment on GhostStealthComponent_Multicast_OnIsBeingSpottedChanged");
static_assert(sizeof(GhostStealthComponent_Multicast_OnIsBeingSpottedChanged) == 0x000010, "Wrong size on GhostStealthComponent_Multicast_OnIsBeingSpottedChanged");
static_assert(offsetof(GhostStealthComponent_Multicast_OnIsBeingSpottedChanged, Spotter) == 0x000000, "Member 'GhostStealthComponent_Multicast_OnIsBeingSpottedChanged::Spotter' has a wrong offset!");
static_assert(offsetof(GhostStealthComponent_Multicast_OnIsBeingSpottedChanged, IsBeingSpotted) == 0x000008, "Member 'GhostStealthComponent_Multicast_OnIsBeingSpottedChanged::IsBeingSpotted' has a wrong offset!");
static_assert(offsetof(GhostStealthComponent_Multicast_OnIsBeingSpottedChanged, OnlyUpdateSurvivor) == 0x000009, "Member 'GhostStealthComponent_Multicast_OnIsBeingSpottedChanged::OnlyUpdateSurvivor' has a wrong offset!");

// Function TheGhostface.GhostStealthComponent.Multicast_OnPlayerSpottedKiller
// 0x0008 (0x0008 - 0x0000)
struct GhostStealthComponent_Multicast_OnPlayerSpottedKiller final
{
public:
	class ADBDPlayer*                             Spotter;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStealthComponent_Multicast_OnPlayerSpottedKiller) == 0x000008, "Wrong alignment on GhostStealthComponent_Multicast_OnPlayerSpottedKiller");
static_assert(sizeof(GhostStealthComponent_Multicast_OnPlayerSpottedKiller) == 0x000008, "Wrong size on GhostStealthComponent_Multicast_OnPlayerSpottedKiller");
static_assert(offsetof(GhostStealthComponent_Multicast_OnPlayerSpottedKiller, Spotter) == 0x000000, "Member 'GhostStealthComponent_Multicast_OnPlayerSpottedKiller::Spotter' has a wrong offset!");

// DelegateFunction TheGhostface.GhostStealthComponent.OnIsBeingSpotChanged__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct GhostStealthComponent_OnIsBeingSpotChanged__DelegateSignature final
{
public:
	class ADBDPlayer*                             Spotter;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsBeingSpot;                                       // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GhostStealthComponent_OnIsBeingSpotChanged__DelegateSignature) == 0x000008, "Wrong alignment on GhostStealthComponent_OnIsBeingSpotChanged__DelegateSignature");
static_assert(sizeof(GhostStealthComponent_OnIsBeingSpotChanged__DelegateSignature) == 0x000010, "Wrong size on GhostStealthComponent_OnIsBeingSpotChanged__DelegateSignature");
static_assert(offsetof(GhostStealthComponent_OnIsBeingSpotChanged__DelegateSignature, Spotter) == 0x000000, "Member 'GhostStealthComponent_OnIsBeingSpotChanged__DelegateSignature::Spotter' has a wrong offset!");
static_assert(offsetof(GhostStealthComponent_OnIsBeingSpotChanged__DelegateSignature, IsBeingSpot) == 0x000008, "Member 'GhostStealthComponent_OnIsBeingSpotChanged__DelegateSignature::IsBeingSpot' has a wrong offset!");

// DelegateFunction TheGhostface.GhostStealthComponent.OnIsStealthChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GhostStealthComponent_OnIsStealthChanged__DelegateSignature final
{
public:
	bool                                          IsStealth;                                         // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStealthComponent_OnIsStealthChanged__DelegateSignature) == 0x000001, "Wrong alignment on GhostStealthComponent_OnIsStealthChanged__DelegateSignature");
static_assert(sizeof(GhostStealthComponent_OnIsStealthChanged__DelegateSignature) == 0x000001, "Wrong size on GhostStealthComponent_OnIsStealthChanged__DelegateSignature");
static_assert(offsetof(GhostStealthComponent_OnIsStealthChanged__DelegateSignature, IsStealth) == 0x000000, "Member 'GhostStealthComponent_OnIsStealthChanged__DelegateSignature::IsStealth' has a wrong offset!");

// Function TheGhostface.GhostStealthComponent.OnRep_StealthState
// 0x0001 (0x0001 - 0x0000)
struct GhostStealthComponent_OnRep_StealthState final
{
public:
	EGhostStealthState                            PreviousState;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStealthComponent_OnRep_StealthState) == 0x000001, "Wrong alignment on GhostStealthComponent_OnRep_StealthState");
static_assert(sizeof(GhostStealthComponent_OnRep_StealthState) == 0x000001, "Wrong size on GhostStealthComponent_OnRep_StealthState");
static_assert(offsetof(GhostStealthComponent_OnRep_StealthState, PreviousState) == 0x000000, "Member 'GhostStealthComponent_OnRep_StealthState::PreviousState' has a wrong offset!");

// DelegateFunction TheGhostface.GhostStealthComponent.OnStealthCancelledByPlayer__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct GhostStealthComponent_OnStealthCancelledByPlayer__DelegateSignature final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStealthComponent_OnStealthCancelledByPlayer__DelegateSignature) == 0x000008, "Wrong alignment on GhostStealthComponent_OnStealthCancelledByPlayer__DelegateSignature");
static_assert(sizeof(GhostStealthComponent_OnStealthCancelledByPlayer__DelegateSignature) == 0x000008, "Wrong size on GhostStealthComponent_OnStealthCancelledByPlayer__DelegateSignature");
static_assert(offsetof(GhostStealthComponent_OnStealthCancelledByPlayer__DelegateSignature, Player) == 0x000000, "Member 'GhostStealthComponent_OnStealthCancelledByPlayer__DelegateSignature::Player' has a wrong offset!");

// DelegateFunction TheGhostface.GhostStealthComponent.OnStealthStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct GhostStealthComponent_OnStealthStateChanged__DelegateSignature final
{
public:
	EGhostStealthState                            StealthState;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStealthComponent_OnStealthStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on GhostStealthComponent_OnStealthStateChanged__DelegateSignature");
static_assert(sizeof(GhostStealthComponent_OnStealthStateChanged__DelegateSignature) == 0x000001, "Wrong size on GhostStealthComponent_OnStealthStateChanged__DelegateSignature");
static_assert(offsetof(GhostStealthComponent_OnStealthStateChanged__DelegateSignature, StealthState) == 0x000000, "Member 'GhostStealthComponent_OnStealthStateChanged__DelegateSignature::StealthState' has a wrong offset!");

// DelegateFunction TheGhostface.GhostStealthComponent.OnSuccessfulAttackInStealth__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct GhostStealthComponent_OnSuccessfulAttackInStealth__DelegateSignature final
{
public:
	class ADBDPlayer*                             Target;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStealthComponent_OnSuccessfulAttackInStealth__DelegateSignature) == 0x000008, "Wrong alignment on GhostStealthComponent_OnSuccessfulAttackInStealth__DelegateSignature");
static_assert(sizeof(GhostStealthComponent_OnSuccessfulAttackInStealth__DelegateSignature) == 0x000008, "Wrong size on GhostStealthComponent_OnSuccessfulAttackInStealth__DelegateSignature");
static_assert(offsetof(GhostStealthComponent_OnSuccessfulAttackInStealth__DelegateSignature, Target) == 0x000000, "Member 'GhostStealthComponent_OnSuccessfulAttackInStealth__DelegateSignature::Target' has a wrong offset!");

// Function TheGhostface.GhostStealthComponent.GetStealthChargePercent
// 0x0004 (0x0004 - 0x0000)
struct GhostStealthComponent_GetStealthChargePercent final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStealthComponent_GetStealthChargePercent) == 0x000004, "Wrong alignment on GhostStealthComponent_GetStealthChargePercent");
static_assert(sizeof(GhostStealthComponent_GetStealthChargePercent) == 0x000004, "Wrong size on GhostStealthComponent_GetStealthChargePercent");
static_assert(offsetof(GhostStealthComponent_GetStealthChargePercent, ReturnValue) == 0x000000, "Member 'GhostStealthComponent_GetStealthChargePercent::ReturnValue' has a wrong offset!");

// Function TheGhostface.GhostStealthComponent.GetStealthState
// 0x0001 (0x0001 - 0x0000)
struct GhostStealthComponent_GetStealthState final
{
public:
	EGhostStealthState                            ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStealthComponent_GetStealthState) == 0x000001, "Wrong alignment on GhostStealthComponent_GetStealthState");
static_assert(sizeof(GhostStealthComponent_GetStealthState) == 0x000001, "Wrong size on GhostStealthComponent_GetStealthState");
static_assert(offsetof(GhostStealthComponent_GetStealthState, ReturnValue) == 0x000000, "Member 'GhostStealthComponent_GetStealthState::ReturnValue' has a wrong offset!");

// Function TheGhostface.GhostStealthComponent.IsStealth
// 0x0001 (0x0001 - 0x0000)
struct GhostStealthComponent_IsStealth final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStealthComponent_IsStealth) == 0x000001, "Wrong alignment on GhostStealthComponent_IsStealth");
static_assert(sizeof(GhostStealthComponent_IsStealth) == 0x000001, "Wrong size on GhostStealthComponent_IsStealth");
static_assert(offsetof(GhostStealthComponent_IsStealth, ReturnValue) == 0x000000, "Member 'GhostStealthComponent_IsStealth::ReturnValue' has a wrong offset!");

// Function TheGhostface.GhostStealthComponent.IsStealthReadyToActivate
// 0x0001 (0x0001 - 0x0000)
struct GhostStealthComponent_IsStealthReadyToActivate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStealthComponent_IsStealthReadyToActivate) == 0x000001, "Wrong alignment on GhostStealthComponent_IsStealthReadyToActivate");
static_assert(sizeof(GhostStealthComponent_IsStealthReadyToActivate) == 0x000001, "Wrong size on GhostStealthComponent_IsStealthReadyToActivate");
static_assert(offsetof(GhostStealthComponent_IsStealthReadyToActivate, ReturnValue) == 0x000000, "Member 'GhostStealthComponent_IsStealthReadyToActivate::ReturnValue' has a wrong offset!");

// Function TheGhostface.GhostStealthComponent.SetRedStainVisibility
// 0x0001 (0x0001 - 0x0000)
struct GhostStealthComponent_SetRedStainVisibility final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GhostStealthComponent_SetRedStainVisibility) == 0x000001, "Wrong alignment on GhostStealthComponent_SetRedStainVisibility");
static_assert(sizeof(GhostStealthComponent_SetRedStainVisibility) == 0x000001, "Wrong size on GhostStealthComponent_SetRedStainVisibility");
static_assert(offsetof(GhostStealthComponent_SetRedStainVisibility, Visible) == 0x000000, "Member 'GhostStealthComponent_SetRedStainVisibility::Visible' has a wrong offset!");

// Function TheGhostface.TheGhostUtilities.IsKillerStealth
// 0x0010 (0x0010 - 0x0000)
struct TheGhostUtilities_IsKillerStealth final
{
public:
	class AActor*                                 Killer;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TheGhostUtilities_IsKillerStealth) == 0x000008, "Wrong alignment on TheGhostUtilities_IsKillerStealth");
static_assert(sizeof(TheGhostUtilities_IsKillerStealth) == 0x000010, "Wrong size on TheGhostUtilities_IsKillerStealth");
static_assert(offsetof(TheGhostUtilities_IsKillerStealth, Killer) == 0x000000, "Member 'TheGhostUtilities_IsKillerStealth::Killer' has a wrong offset!");
static_assert(offsetof(TheGhostUtilities_IsKillerStealth, ReturnValue) == 0x000008, "Member 'TheGhostUtilities_IsKillerStealth::ReturnValue' has a wrong offset!");

}

