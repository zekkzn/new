#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CoreMemory

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CoreMemory.CoreMemoryController.Authority_CreatePlayerSpecificController
// 0x0008 (0x0008 - 0x0000)
struct CoreMemoryController_Authority_CreatePlayerSpecificController final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CoreMemoryController_Authority_CreatePlayerSpecificController) == 0x000008, "Wrong alignment on CoreMemoryController_Authority_CreatePlayerSpecificController");
static_assert(sizeof(CoreMemoryController_Authority_CreatePlayerSpecificController) == 0x000008, "Wrong size on CoreMemoryController_Authority_CreatePlayerSpecificController");
static_assert(offsetof(CoreMemoryController_Authority_CreatePlayerSpecificController, Player) == 0x000000, "Member 'CoreMemoryController_Authority_CreatePlayerSpecificController::Player' has a wrong offset!");

// Function CoreMemory.CoreMemoryController.Authority_OnCharacterAdded
// 0x0008 (0x0008 - 0x0000)
struct CoreMemoryController_Authority_OnCharacterAdded final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CoreMemoryController_Authority_OnCharacterAdded) == 0x000008, "Wrong alignment on CoreMemoryController_Authority_OnCharacterAdded");
static_assert(sizeof(CoreMemoryController_Authority_OnCharacterAdded) == 0x000008, "Wrong size on CoreMemoryController_Authority_OnCharacterAdded");
static_assert(offsetof(CoreMemoryController_Authority_OnCharacterAdded, Player) == 0x000000, "Member 'CoreMemoryController_Authority_OnCharacterAdded::Player' has a wrong offset!");

// Function CoreMemory.CoreMemoryDefaultCollectBehaviour.OnCollectZoneEntered
// 0x0110 (0x0110 - 0x0000)
struct CoreMemoryDefaultCollectBehaviour_OnCollectZoneEntered final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00F0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(CoreMemoryDefaultCollectBehaviour_OnCollectZoneEntered) == 0x000008, "Wrong alignment on CoreMemoryDefaultCollectBehaviour_OnCollectZoneEntered");
static_assert(sizeof(CoreMemoryDefaultCollectBehaviour_OnCollectZoneEntered) == 0x000110, "Wrong size on CoreMemoryDefaultCollectBehaviour_OnCollectZoneEntered");
static_assert(offsetof(CoreMemoryDefaultCollectBehaviour_OnCollectZoneEntered, HitComponent) == 0x000000, "Member 'CoreMemoryDefaultCollectBehaviour_OnCollectZoneEntered::HitComponent' has a wrong offset!");
static_assert(offsetof(CoreMemoryDefaultCollectBehaviour_OnCollectZoneEntered, OtherActor) == 0x000008, "Member 'CoreMemoryDefaultCollectBehaviour_OnCollectZoneEntered::OtherActor' has a wrong offset!");
static_assert(offsetof(CoreMemoryDefaultCollectBehaviour_OnCollectZoneEntered, OtherComp) == 0x000010, "Member 'CoreMemoryDefaultCollectBehaviour_OnCollectZoneEntered::OtherComp' has a wrong offset!");
static_assert(offsetof(CoreMemoryDefaultCollectBehaviour_OnCollectZoneEntered, OtherBodyIndex) == 0x000018, "Member 'CoreMemoryDefaultCollectBehaviour_OnCollectZoneEntered::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(CoreMemoryDefaultCollectBehaviour_OnCollectZoneEntered, bFromSweep) == 0x00001C, "Member 'CoreMemoryDefaultCollectBehaviour_OnCollectZoneEntered::bFromSweep' has a wrong offset!");
static_assert(offsetof(CoreMemoryDefaultCollectBehaviour_OnCollectZoneEntered, SweepResult) == 0x000020, "Member 'CoreMemoryDefaultCollectBehaviour_OnCollectZoneEntered::SweepResult' has a wrong offset!");

// Function CoreMemory.CoreMemoryDefaultTriggerBehaviour.Authority_CheckLineOfSight
// 0x0008 (0x0008 - 0x0000)
struct CoreMemoryDefaultTriggerBehaviour_Authority_CheckLineOfSight final
{
public:
	const class ACoreMemoryFragment*              Fragment;                                          // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CoreMemoryDefaultTriggerBehaviour_Authority_CheckLineOfSight) == 0x000008, "Wrong alignment on CoreMemoryDefaultTriggerBehaviour_Authority_CheckLineOfSight");
static_assert(sizeof(CoreMemoryDefaultTriggerBehaviour_Authority_CheckLineOfSight) == 0x000008, "Wrong size on CoreMemoryDefaultTriggerBehaviour_Authority_CheckLineOfSight");
static_assert(offsetof(CoreMemoryDefaultTriggerBehaviour_Authority_CheckLineOfSight, Fragment) == 0x000000, "Member 'CoreMemoryDefaultTriggerBehaviour_Authority_CheckLineOfSight::Fragment' has a wrong offset!");

// Function CoreMemory.CoreMemoryDefaultTriggerBehaviour.Authority_OnTriggerZoneEntered
// 0x0110 (0x0110 - 0x0000)
struct CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneEntered final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00F0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneEntered) == 0x000008, "Wrong alignment on CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneEntered");
static_assert(sizeof(CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneEntered) == 0x000110, "Wrong size on CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneEntered");
static_assert(offsetof(CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneEntered, HitComponent) == 0x000000, "Member 'CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneEntered::HitComponent' has a wrong offset!");
static_assert(offsetof(CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneEntered, OtherActor) == 0x000008, "Member 'CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneEntered::OtherActor' has a wrong offset!");
static_assert(offsetof(CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneEntered, OtherComp) == 0x000010, "Member 'CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneEntered::OtherComp' has a wrong offset!");
static_assert(offsetof(CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneEntered, OtherBodyIndex) == 0x000018, "Member 'CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneEntered::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneEntered, bFromSweep) == 0x00001C, "Member 'CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneEntered::bFromSweep' has a wrong offset!");
static_assert(offsetof(CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneEntered, SweepResult) == 0x000020, "Member 'CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneEntered::SweepResult' has a wrong offset!");

// Function CoreMemory.CoreMemoryDefaultTriggerBehaviour.Authority_OnTriggerZoneExited
// 0x0020 (0x0020 - 0x0000)
struct CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneExited final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneExited) == 0x000008, "Wrong alignment on CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneExited");
static_assert(sizeof(CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneExited) == 0x000020, "Wrong size on CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneExited");
static_assert(offsetof(CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneExited, OverlappedComponent) == 0x000000, "Member 'CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneExited::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneExited, OtherActor) == 0x000008, "Member 'CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneExited::OtherActor' has a wrong offset!");
static_assert(offsetof(CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneExited, OtherComp) == 0x000010, "Member 'CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneExited::OtherComp' has a wrong offset!");
static_assert(offsetof(CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneExited, OtherBodyIndex) == 0x000018, "Member 'CoreMemoryDefaultTriggerBehaviour_Authority_OnTriggerZoneExited::OtherBodyIndex' has a wrong offset!");

// Function CoreMemory.CoreMemoryFragment.OnRep_SpawnLocation
// 0x0018 (0x0018 - 0x0000)
struct CoreMemoryFragment_OnRep_SpawnLocation final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CoreMemoryFragment_OnRep_SpawnLocation) == 0x000008, "Wrong alignment on CoreMemoryFragment_OnRep_SpawnLocation");
static_assert(sizeof(CoreMemoryFragment_OnRep_SpawnLocation) == 0x000018, "Wrong size on CoreMemoryFragment_OnRep_SpawnLocation");
static_assert(offsetof(CoreMemoryFragment_OnRep_SpawnLocation, Location) == 0x000000, "Member 'CoreMemoryFragment_OnRep_SpawnLocation::Location' has a wrong offset!");

// Function CoreMemory.CoreMemoryFragment.OnRep_SpawnRotation
// 0x0018 (0x0018 - 0x0000)
struct CoreMemoryFragment_OnRep_SpawnRotation final
{
public:
	struct FRotator                               Rotation;                                          // 0x0000(0x0018)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(CoreMemoryFragment_OnRep_SpawnRotation) == 0x000008, "Wrong alignment on CoreMemoryFragment_OnRep_SpawnRotation");
static_assert(sizeof(CoreMemoryFragment_OnRep_SpawnRotation) == 0x000018, "Wrong size on CoreMemoryFragment_OnRep_SpawnRotation");
static_assert(offsetof(CoreMemoryFragment_OnRep_SpawnRotation, Rotation) == 0x000000, "Member 'CoreMemoryFragment_OnRep_SpawnRotation::Rotation' has a wrong offset!");

// Function CoreMemory.CoreMemoryFragmentComponent.OnLocallyObservedChanged
// 0x0001 (0x0001 - 0x0000)
struct CoreMemoryFragmentComponent_OnLocallyObservedChanged final
{
public:
	bool                                          IsLocallyObserved;                                 // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CoreMemoryFragmentComponent_OnLocallyObservedChanged) == 0x000001, "Wrong alignment on CoreMemoryFragmentComponent_OnLocallyObservedChanged");
static_assert(sizeof(CoreMemoryFragmentComponent_OnLocallyObservedChanged) == 0x000001, "Wrong size on CoreMemoryFragmentComponent_OnLocallyObservedChanged");
static_assert(offsetof(CoreMemoryFragmentComponent_OnLocallyObservedChanged, IsLocallyObserved) == 0x000000, "Member 'CoreMemoryFragmentComponent_OnLocallyObservedChanged::IsLocallyObserved' has a wrong offset!");

// Function CoreMemory.CoreMemoryFragmentComponent.Multicast_FragmentDespawnCountdown
// 0x0004 (0x0004 - 0x0000)
struct CoreMemoryFragmentComponent_Multicast_FragmentDespawnCountdown final
{
public:
	float                                         FloatVal;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CoreMemoryFragmentComponent_Multicast_FragmentDespawnCountdown) == 0x000004, "Wrong alignment on CoreMemoryFragmentComponent_Multicast_FragmentDespawnCountdown");
static_assert(sizeof(CoreMemoryFragmentComponent_Multicast_FragmentDespawnCountdown) == 0x000004, "Wrong size on CoreMemoryFragmentComponent_Multicast_FragmentDespawnCountdown");
static_assert(offsetof(CoreMemoryFragmentComponent_Multicast_FragmentDespawnCountdown, FloatVal) == 0x000000, "Member 'CoreMemoryFragmentComponent_Multicast_FragmentDespawnCountdown::FloatVal' has a wrong offset!");

// Function CoreMemory.CoreMemoryPortal.OnInteractionStarted
// 0x0008 (0x0008 - 0x0000)
struct CoreMemoryPortal_OnInteractionStarted final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CoreMemoryPortal_OnInteractionStarted) == 0x000008, "Wrong alignment on CoreMemoryPortal_OnInteractionStarted");
static_assert(sizeof(CoreMemoryPortal_OnInteractionStarted) == 0x000008, "Wrong size on CoreMemoryPortal_OnInteractionStarted");
static_assert(offsetof(CoreMemoryPortal_OnInteractionStarted, Player) == 0x000000, "Member 'CoreMemoryPortal_OnInteractionStarted::Player' has a wrong offset!");

// Function CoreMemory.CoreMemoryPortalComponent.GetPlayersWithActivePortal
// 0x0010 (0x0010 - 0x0000)
struct CoreMemoryPortalComponent_GetPlayersWithActivePortal final
{
public:
	TArray<class ADBDPlayer*>                     ReturnValue;                                       // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(CoreMemoryPortalComponent_GetPlayersWithActivePortal) == 0x000008, "Wrong alignment on CoreMemoryPortalComponent_GetPlayersWithActivePortal");
static_assert(sizeof(CoreMemoryPortalComponent_GetPlayersWithActivePortal) == 0x000010, "Wrong size on CoreMemoryPortalComponent_GetPlayersWithActivePortal");
static_assert(offsetof(CoreMemoryPortalComponent_GetPlayersWithActivePortal, ReturnValue) == 0x000000, "Member 'CoreMemoryPortalComponent_GetPlayersWithActivePortal::ReturnValue' has a wrong offset!");

// Function CoreMemory.CoreMemoryScreamBehaviour.Cosmetic_Scream
// 0x0008 (0x0008 - 0x0000)
struct CoreMemoryScreamBehaviour_Cosmetic_Scream final
{
public:
	class ACamperPlayer*                          Camper;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CoreMemoryScreamBehaviour_Cosmetic_Scream) == 0x000008, "Wrong alignment on CoreMemoryScreamBehaviour_Cosmetic_Scream");
static_assert(sizeof(CoreMemoryScreamBehaviour_Cosmetic_Scream) == 0x000008, "Wrong size on CoreMemoryScreamBehaviour_Cosmetic_Scream");
static_assert(offsetof(CoreMemoryScreamBehaviour_Cosmetic_Scream, Camper) == 0x000000, "Member 'CoreMemoryScreamBehaviour_Cosmetic_Scream::Camper' has a wrong offset!");

// Function CoreMemory.CoreMemorySpawnedStatusEffectTrackerComponent.Authority_AddSpawnedStatusEffect
// 0x0010 (0x0010 - 0x0000)
struct CoreMemorySpawnedStatusEffectTrackerComponent_Authority_AddSpawnedStatusEffect final
{
public:
	class UStatusEffect*                          StatusEffect;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ACoreMemoryChallengePlayerSpecificController* PlayerController;                                  // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CoreMemorySpawnedStatusEffectTrackerComponent_Authority_AddSpawnedStatusEffect) == 0x000008, "Wrong alignment on CoreMemorySpawnedStatusEffectTrackerComponent_Authority_AddSpawnedStatusEffect");
static_assert(sizeof(CoreMemorySpawnedStatusEffectTrackerComponent_Authority_AddSpawnedStatusEffect) == 0x000010, "Wrong size on CoreMemorySpawnedStatusEffectTrackerComponent_Authority_AddSpawnedStatusEffect");
static_assert(offsetof(CoreMemorySpawnedStatusEffectTrackerComponent_Authority_AddSpawnedStatusEffect, StatusEffect) == 0x000000, "Member 'CoreMemorySpawnedStatusEffectTrackerComponent_Authority_AddSpawnedStatusEffect::StatusEffect' has a wrong offset!");
static_assert(offsetof(CoreMemorySpawnedStatusEffectTrackerComponent_Authority_AddSpawnedStatusEffect, PlayerController) == 0x000008, "Member 'CoreMemorySpawnedStatusEffectTrackerComponent_Authority_AddSpawnedStatusEffect::PlayerController' has a wrong offset!");

}
