#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheHag

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function TheHag.HagScoreComponent.Authority_OnActorEndPlay
// 0x0010 (0x0010 - 0x0000)
struct HagScoreComponent_Authority_OnActorEndPlay final
{
public:
	class AActor*                                 Actor;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EEndPlayReason                                EndPlayReason;                                     // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(HagScoreComponent_Authority_OnActorEndPlay) == 0x000008, "Wrong alignment on HagScoreComponent_Authority_OnActorEndPlay");
static_assert(sizeof(HagScoreComponent_Authority_OnActorEndPlay) == 0x000010, "Wrong size on HagScoreComponent_Authority_OnActorEndPlay");
static_assert(offsetof(HagScoreComponent_Authority_OnActorEndPlay, Actor) == 0x000000, "Member 'HagScoreComponent_Authority_OnActorEndPlay::Actor' has a wrong offset!");
static_assert(offsetof(HagScoreComponent_Authority_OnActorEndPlay, EndPlayReason) == 0x000008, "Member 'HagScoreComponent_Authority_OnActorEndPlay::EndPlayReason' has a wrong offset!");

// Function TheHag.PhantomTrap.ActivateSlasher
// 0x0008 (0x0008 - 0x0000)
struct PhantomTrap_ActivateSlasher final
{
public:
	class ASlasherPlayer*                         Slasher;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PhantomTrap_ActivateSlasher) == 0x000008, "Wrong alignment on PhantomTrap_ActivateSlasher");
static_assert(sizeof(PhantomTrap_ActivateSlasher) == 0x000008, "Wrong size on PhantomTrap_ActivateSlasher");
static_assert(offsetof(PhantomTrap_ActivateSlasher, Slasher) == 0x000000, "Member 'PhantomTrap_ActivateSlasher::Slasher' has a wrong offset!");

// Function TheHag.PhantomTrap.Authority_OnTriggerZoneBeginOverlap
// 0x0110 (0x0110 - 0x0000)
struct PhantomTrap_Authority_OnTriggerZoneBeginOverlap final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00F0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(PhantomTrap_Authority_OnTriggerZoneBeginOverlap) == 0x000008, "Wrong alignment on PhantomTrap_Authority_OnTriggerZoneBeginOverlap");
static_assert(sizeof(PhantomTrap_Authority_OnTriggerZoneBeginOverlap) == 0x000110, "Wrong size on PhantomTrap_Authority_OnTriggerZoneBeginOverlap");
static_assert(offsetof(PhantomTrap_Authority_OnTriggerZoneBeginOverlap, OverlappedComponent) == 0x000000, "Member 'PhantomTrap_Authority_OnTriggerZoneBeginOverlap::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(PhantomTrap_Authority_OnTriggerZoneBeginOverlap, OtherActor) == 0x000008, "Member 'PhantomTrap_Authority_OnTriggerZoneBeginOverlap::OtherActor' has a wrong offset!");
static_assert(offsetof(PhantomTrap_Authority_OnTriggerZoneBeginOverlap, OtherComp) == 0x000010, "Member 'PhantomTrap_Authority_OnTriggerZoneBeginOverlap::OtherComp' has a wrong offset!");
static_assert(offsetof(PhantomTrap_Authority_OnTriggerZoneBeginOverlap, OtherBodyIndex) == 0x000018, "Member 'PhantomTrap_Authority_OnTriggerZoneBeginOverlap::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(PhantomTrap_Authority_OnTriggerZoneBeginOverlap, bFromSweep) == 0x00001C, "Member 'PhantomTrap_Authority_OnTriggerZoneBeginOverlap::bFromSweep' has a wrong offset!");
static_assert(offsetof(PhantomTrap_Authority_OnTriggerZoneBeginOverlap, SweepResult) == 0x000020, "Member 'PhantomTrap_Authority_OnTriggerZoneBeginOverlap::SweepResult' has a wrong offset!");

// Function TheHag.PhantomTrap.Authority_OnTriggerZoneEndOverlap
// 0x0020 (0x0020 - 0x0000)
struct PhantomTrap_Authority_OnTriggerZoneEndOverlap final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PhantomTrap_Authority_OnTriggerZoneEndOverlap) == 0x000008, "Wrong alignment on PhantomTrap_Authority_OnTriggerZoneEndOverlap");
static_assert(sizeof(PhantomTrap_Authority_OnTriggerZoneEndOverlap) == 0x000020, "Wrong size on PhantomTrap_Authority_OnTriggerZoneEndOverlap");
static_assert(offsetof(PhantomTrap_Authority_OnTriggerZoneEndOverlap, OverlappedComponent) == 0x000000, "Member 'PhantomTrap_Authority_OnTriggerZoneEndOverlap::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(PhantomTrap_Authority_OnTriggerZoneEndOverlap, OtherActor) == 0x000008, "Member 'PhantomTrap_Authority_OnTriggerZoneEndOverlap::OtherActor' has a wrong offset!");
static_assert(offsetof(PhantomTrap_Authority_OnTriggerZoneEndOverlap, OtherComp) == 0x000010, "Member 'PhantomTrap_Authority_OnTriggerZoneEndOverlap::OtherComp' has a wrong offset!");
static_assert(offsetof(PhantomTrap_Authority_OnTriggerZoneEndOverlap, OtherBodyIndex) == 0x000018, "Member 'PhantomTrap_Authority_OnTriggerZoneEndOverlap::OtherBodyIndex' has a wrong offset!");

// Function TheHag.PhantomTrap.BP_OnTrapActivate
// 0x0008 (0x0008 - 0x0000)
struct PhantomTrap_BP_OnTrapActivate final
{
public:
	class ACamperPlayer*                          Triggerer;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PhantomTrap_BP_OnTrapActivate) == 0x000008, "Wrong alignment on PhantomTrap_BP_OnTrapActivate");
static_assert(sizeof(PhantomTrap_BP_OnTrapActivate) == 0x000008, "Wrong size on PhantomTrap_BP_OnTrapActivate");
static_assert(offsetof(PhantomTrap_BP_OnTrapActivate, Triggerer) == 0x000000, "Member 'PhantomTrap_BP_OnTrapActivate::Triggerer' has a wrong offset!");

// Function TheHag.PhantomTrap.BP_OnTrapDestroyed
// 0x0008 (0x0008 - 0x0000)
struct PhantomTrap_BP_OnTrapDestroyed final
{
public:
	class ACamperPlayer*                          PlayerDestroyingTrap;                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PhantomTrap_BP_OnTrapDestroyed) == 0x000008, "Wrong alignment on PhantomTrap_BP_OnTrapDestroyed");
static_assert(sizeof(PhantomTrap_BP_OnTrapDestroyed) == 0x000008, "Wrong size on PhantomTrap_BP_OnTrapDestroyed");
static_assert(offsetof(PhantomTrap_BP_OnTrapDestroyed, PlayerDestroyingTrap) == 0x000000, "Member 'PhantomTrap_BP_OnTrapDestroyed::PlayerDestroyingTrap' has a wrong offset!");

// Function TheHag.PhantomTrap.CanActivateTrap
// 0x0010 (0x0010 - 0x0000)
struct PhantomTrap_CanActivateTrap final
{
public:
	class ACamperPlayer*                          Camper;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsInUse;                                           // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PhantomTrap_CanActivateTrap) == 0x000008, "Wrong alignment on PhantomTrap_CanActivateTrap");
static_assert(sizeof(PhantomTrap_CanActivateTrap) == 0x000010, "Wrong size on PhantomTrap_CanActivateTrap");
static_assert(offsetof(PhantomTrap_CanActivateTrap, Camper) == 0x000000, "Member 'PhantomTrap_CanActivateTrap::Camper' has a wrong offset!");
static_assert(offsetof(PhantomTrap_CanActivateTrap, IsInUse) == 0x000008, "Member 'PhantomTrap_CanActivateTrap::IsInUse' has a wrong offset!");
static_assert(offsetof(PhantomTrap_CanActivateTrap, ReturnValue) == 0x000009, "Member 'PhantomTrap_CanActivateTrap::ReturnValue' has a wrong offset!");

// Function TheHag.PhantomTrap.InitializeTerrorRadiusEmitter
// 0x0008 (0x0008 - 0x0000)
struct PhantomTrap_InitializeTerrorRadiusEmitter final
{
public:
	class ASlasherPlayer*                         OwningSlasher;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PhantomTrap_InitializeTerrorRadiusEmitter) == 0x000008, "Wrong alignment on PhantomTrap_InitializeTerrorRadiusEmitter");
static_assert(sizeof(PhantomTrap_InitializeTerrorRadiusEmitter) == 0x000008, "Wrong size on PhantomTrap_InitializeTerrorRadiusEmitter");
static_assert(offsetof(PhantomTrap_InitializeTerrorRadiusEmitter, OwningSlasher) == 0x000000, "Member 'PhantomTrap_InitializeTerrorRadiusEmitter::OwningSlasher' has a wrong offset!");

// Function TheHag.PhantomTrap.Multicast_DestroyTrap
// 0x0008 (0x0008 - 0x0000)
struct PhantomTrap_Multicast_DestroyTrap final
{
public:
	class ACamperPlayer*                          PlayerDestroyingTrap;                              // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PhantomTrap_Multicast_DestroyTrap) == 0x000008, "Wrong alignment on PhantomTrap_Multicast_DestroyTrap");
static_assert(sizeof(PhantomTrap_Multicast_DestroyTrap) == 0x000008, "Wrong size on PhantomTrap_Multicast_DestroyTrap");
static_assert(offsetof(PhantomTrap_Multicast_DestroyTrap, PlayerDestroyingTrap) == 0x000000, "Member 'PhantomTrap_Multicast_DestroyTrap::PlayerDestroyingTrap' has a wrong offset!");

// Function TheHag.PhantomTrap.RetrievePerkFlags
// 0x0018 (0x0018 - 0x0000)
struct PhantomTrap_RetrievePerkFlags final
{
public:
	struct FGameplayTag                           SilentTrapTag;                                     // 0x0000(0x000C)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                           PhantomCollisionTag;                               // 0x000C(0x000C)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PhantomTrap_RetrievePerkFlags) == 0x000004, "Wrong alignment on PhantomTrap_RetrievePerkFlags");
static_assert(sizeof(PhantomTrap_RetrievePerkFlags) == 0x000018, "Wrong size on PhantomTrap_RetrievePerkFlags");
static_assert(offsetof(PhantomTrap_RetrievePerkFlags, SilentTrapTag) == 0x000000, "Member 'PhantomTrap_RetrievePerkFlags::SilentTrapTag' has a wrong offset!");
static_assert(offsetof(PhantomTrap_RetrievePerkFlags, PhantomCollisionTag) == 0x00000C, "Member 'PhantomTrap_RetrievePerkFlags::PhantomCollisionTag' has a wrong offset!");

// Function TheHag.PhantomTrap.SetIsInUse
// 0x0001 (0x0001 - 0x0000)
struct PhantomTrap_SetIsInUse final
{
public:
	bool                                          InUse;                                             // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PhantomTrap_SetIsInUse) == 0x000001, "Wrong alignment on PhantomTrap_SetIsInUse");
static_assert(sizeof(PhantomTrap_SetIsInUse) == 0x000001, "Wrong size on PhantomTrap_SetIsInUse");
static_assert(offsetof(PhantomTrap_SetIsInUse, InUse) == 0x000000, "Member 'PhantomTrap_SetIsInUse::InUse' has a wrong offset!");

// Function TheHag.PhantomTrap.GetMesh
// 0x0008 (0x0008 - 0x0000)
struct PhantomTrap_GetMesh final
{
public:
	class USkeletalMeshComponent*                 ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PhantomTrap_GetMesh) == 0x000008, "Wrong alignment on PhantomTrap_GetMesh");
static_assert(sizeof(PhantomTrap_GetMesh) == 0x000008, "Wrong size on PhantomTrap_GetMesh");
static_assert(offsetof(PhantomTrap_GetMesh, ReturnValue) == 0x000000, "Member 'PhantomTrap_GetMesh::ReturnValue' has a wrong offset!");

// Function TheHag.PhantomTrap.GetPhantomTransform
// 0x0008 (0x0008 - 0x0000)
struct PhantomTrap_GetPhantomTransform final
{
public:
	class USceneComponent*                        ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PhantomTrap_GetPhantomTransform) == 0x000008, "Wrong alignment on PhantomTrap_GetPhantomTransform");
static_assert(sizeof(PhantomTrap_GetPhantomTransform) == 0x000008, "Wrong size on PhantomTrap_GetPhantomTransform");
static_assert(offsetof(PhantomTrap_GetPhantomTransform, ReturnValue) == 0x000000, "Member 'PhantomTrap_GetPhantomTransform::ReturnValue' has a wrong offset!");

// Function TheHag.PhantomTrap.HasKillerTeleported
// 0x0001 (0x0001 - 0x0000)
struct PhantomTrap_HasKillerTeleported final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PhantomTrap_HasKillerTeleported) == 0x000001, "Wrong alignment on PhantomTrap_HasKillerTeleported");
static_assert(sizeof(PhantomTrap_HasKillerTeleported) == 0x000001, "Wrong size on PhantomTrap_HasKillerTeleported");
static_assert(offsetof(PhantomTrap_HasKillerTeleported, ReturnValue) == 0x000000, "Member 'PhantomTrap_HasKillerTeleported::ReturnValue' has a wrong offset!");

// Function TheHag.PhantomTrap.IsSilentTrigger
// 0x0001 (0x0001 - 0x0000)
struct PhantomTrap_IsSilentTrigger final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PhantomTrap_IsSilentTrigger) == 0x000001, "Wrong alignment on PhantomTrap_IsSilentTrigger");
static_assert(sizeof(PhantomTrap_IsSilentTrigger) == 0x000001, "Wrong size on PhantomTrap_IsSilentTrigger");
static_assert(offsetof(PhantomTrap_IsSilentTrigger, ReturnValue) == 0x000000, "Member 'PhantomTrap_IsSilentTrigger::ReturnValue' has a wrong offset!");

// Function TheHag.PhantomTrap.IsTrapActive
// 0x0001 (0x0001 - 0x0000)
struct PhantomTrap_IsTrapActive final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PhantomTrap_IsTrapActive) == 0x000001, "Wrong alignment on PhantomTrap_IsTrapActive");
static_assert(sizeof(PhantomTrap_IsTrapActive) == 0x000001, "Wrong size on PhantomTrap_IsTrapActive");
static_assert(offsetof(PhantomTrap_IsTrapActive, ReturnValue) == 0x000000, "Member 'PhantomTrap_IsTrapActive::ReturnValue' has a wrong offset!");

// Function TheHag.PhantomTrap.IsTrapDeactivating
// 0x0001 (0x0001 - 0x0000)
struct PhantomTrap_IsTrapDeactivating final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PhantomTrap_IsTrapDeactivating) == 0x000001, "Wrong alignment on PhantomTrap_IsTrapDeactivating");
static_assert(sizeof(PhantomTrap_IsTrapDeactivating) == 0x000001, "Wrong size on PhantomTrap_IsTrapDeactivating");
static_assert(offsetof(PhantomTrap_IsTrapDeactivating, ReturnValue) == 0x000000, "Member 'PhantomTrap_IsTrapDeactivating::ReturnValue' has a wrong offset!");

// Function TheHag.PhantomTrap.IsTrapSet
// 0x0001 (0x0001 - 0x0000)
struct PhantomTrap_IsTrapSet final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PhantomTrap_IsTrapSet) == 0x000001, "Wrong alignment on PhantomTrap_IsTrapSet");
static_assert(sizeof(PhantomTrap_IsTrapSet) == 0x000001, "Wrong size on PhantomTrap_IsTrapSet");
static_assert(offsetof(PhantomTrap_IsTrapSet, ReturnValue) == 0x000000, "Member 'PhantomTrap_IsTrapSet::ReturnValue' has a wrong offset!");

// Function TheHag.TeleportToPhantomTrap.BP_OnTeleport
// 0x0010 (0x0010 - 0x0000)
struct TeleportToPhantomTrap_BP_OnTeleport final
{
public:
	class ASlasherPlayer*                         Slasher;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APhantomTrap*                           Trap;                                              // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TeleportToPhantomTrap_BP_OnTeleport) == 0x000008, "Wrong alignment on TeleportToPhantomTrap_BP_OnTeleport");
static_assert(sizeof(TeleportToPhantomTrap_BP_OnTeleport) == 0x000010, "Wrong size on TeleportToPhantomTrap_BP_OnTeleport");
static_assert(offsetof(TeleportToPhantomTrap_BP_OnTeleport, Slasher) == 0x000000, "Member 'TeleportToPhantomTrap_BP_OnTeleport::Slasher' has a wrong offset!");
static_assert(offsetof(TeleportToPhantomTrap_BP_OnTeleport, Trap) == 0x000008, "Member 'TeleportToPhantomTrap_BP_OnTeleport::Trap' has a wrong offset!");

// Function TheHag.TeleportToPhantomTrap.Cosmetic_OnInteractionFinished
// 0x0010 (0x0010 - 0x0000)
struct TeleportToPhantomTrap_Cosmetic_OnInteractionFinished final
{
public:
	class ADBDPlayer*                             Slasher;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HasInteractionStarted;                             // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TeleportToPhantomTrap_Cosmetic_OnInteractionFinished) == 0x000008, "Wrong alignment on TeleportToPhantomTrap_Cosmetic_OnInteractionFinished");
static_assert(sizeof(TeleportToPhantomTrap_Cosmetic_OnInteractionFinished) == 0x000010, "Wrong size on TeleportToPhantomTrap_Cosmetic_OnInteractionFinished");
static_assert(offsetof(TeleportToPhantomTrap_Cosmetic_OnInteractionFinished, Slasher) == 0x000000, "Member 'TeleportToPhantomTrap_Cosmetic_OnInteractionFinished::Slasher' has a wrong offset!");
static_assert(offsetof(TeleportToPhantomTrap_Cosmetic_OnInteractionFinished, HasInteractionStarted) == 0x000008, "Member 'TeleportToPhantomTrap_Cosmetic_OnInteractionFinished::HasInteractionStarted' has a wrong offset!");

// Function TheHag.TeleportToPhantomTrap.Cosmetic_OnTeleport
// 0x0010 (0x0010 - 0x0000)
struct TeleportToPhantomTrap_Cosmetic_OnTeleport final
{
public:
	class ASlasherPlayer*                         Slasher;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APhantomTrap*                           Trap;                                              // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TeleportToPhantomTrap_Cosmetic_OnTeleport) == 0x000008, "Wrong alignment on TeleportToPhantomTrap_Cosmetic_OnTeleport");
static_assert(sizeof(TeleportToPhantomTrap_Cosmetic_OnTeleport) == 0x000010, "Wrong size on TeleportToPhantomTrap_Cosmetic_OnTeleport");
static_assert(offsetof(TeleportToPhantomTrap_Cosmetic_OnTeleport, Slasher) == 0x000000, "Member 'TeleportToPhantomTrap_Cosmetic_OnTeleport::Slasher' has a wrong offset!");
static_assert(offsetof(TeleportToPhantomTrap_Cosmetic_OnTeleport, Trap) == 0x000008, "Member 'TeleportToPhantomTrap_Cosmetic_OnTeleport::Trap' has a wrong offset!");

// Function TheHag.TeleportToPhantomTrap.GetPhantomTrap
// 0x0008 (0x0008 - 0x0000)
struct TeleportToPhantomTrap_GetPhantomTrap final
{
public:
	class APhantomTrap*                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(TeleportToPhantomTrap_GetPhantomTrap) == 0x000008, "Wrong alignment on TeleportToPhantomTrap_GetPhantomTrap");
static_assert(sizeof(TeleportToPhantomTrap_GetPhantomTrap) == 0x000008, "Wrong size on TeleportToPhantomTrap_GetPhantomTrap");
static_assert(offsetof(TeleportToPhantomTrap_GetPhantomTrap, ReturnValue) == 0x000000, "Member 'TeleportToPhantomTrap_GetPhantomTrap::ReturnValue' has a wrong offset!");

// Function TheHag.TeleportToPhantomTrap.GetTeleportMaxDistance
// 0x0010 (0x0010 - 0x0000)
struct TeleportToPhantomTrap_GetTeleportMaxDistance final
{
public:
	class ASlasherPlayer*                         Slasher;                                           // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TeleportToPhantomTrap_GetTeleportMaxDistance) == 0x000008, "Wrong alignment on TeleportToPhantomTrap_GetTeleportMaxDistance");
static_assert(sizeof(TeleportToPhantomTrap_GetTeleportMaxDistance) == 0x000010, "Wrong size on TeleportToPhantomTrap_GetTeleportMaxDistance");
static_assert(offsetof(TeleportToPhantomTrap_GetTeleportMaxDistance, Slasher) == 0x000000, "Member 'TeleportToPhantomTrap_GetTeleportMaxDistance::Slasher' has a wrong offset!");
static_assert(offsetof(TeleportToPhantomTrap_GetTeleportMaxDistance, ReturnValue) == 0x000008, "Member 'TeleportToPhantomTrap_GetTeleportMaxDistance::ReturnValue' has a wrong offset!");

// Function TheHag.TeleportToPhantomTrap.IsTeleportationPossible
// 0x0010 (0x0010 - 0x0000)
struct TeleportToPhantomTrap_IsTeleportationPossible final
{
public:
	const class ADBDPlayer*                       Player;                                            // 0x0000(0x0008)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(TeleportToPhantomTrap_IsTeleportationPossible) == 0x000008, "Wrong alignment on TeleportToPhantomTrap_IsTeleportationPossible");
static_assert(sizeof(TeleportToPhantomTrap_IsTeleportationPossible) == 0x000010, "Wrong size on TeleportToPhantomTrap_IsTeleportationPossible");
static_assert(offsetof(TeleportToPhantomTrap_IsTeleportationPossible, Player) == 0x000000, "Member 'TeleportToPhantomTrap_IsTeleportationPossible::Player' has a wrong offset!");
static_assert(offsetof(TeleportToPhantomTrap_IsTeleportationPossible, ReturnValue) == 0x000008, "Member 'TeleportToPhantomTrap_IsTeleportationPossible::ReturnValue' has a wrong offset!");

// Function TheHag.WipeAwayPhantomTrapInteraction.CancelInteraction
// 0x0008 (0x0008 - 0x0000)
struct WipeAwayPhantomTrapInteraction_CancelInteraction final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WipeAwayPhantomTrapInteraction_CancelInteraction) == 0x000008, "Wrong alignment on WipeAwayPhantomTrapInteraction_CancelInteraction");
static_assert(sizeof(WipeAwayPhantomTrapInteraction_CancelInteraction) == 0x000008, "Wrong size on WipeAwayPhantomTrapInteraction_CancelInteraction");
static_assert(offsetof(WipeAwayPhantomTrapInteraction_CancelInteraction, Player) == 0x000000, "Member 'WipeAwayPhantomTrapInteraction_CancelInteraction::Player' has a wrong offset!");

}
