#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheK25

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "DBDAnalytics_structs.hpp"


namespace SDK
{

// Enum TheK25.EK25ChainState
// NumValues: 0x0006
enum class EK25ChainState : uint8
{
	InPool                                   = 0,
	AttachedToProjectile                     = 1,
	AttachedToSurvivorAnchorPoint            = 2,
	ReelingBack                              = 3,
	ReachingSurvivorAnchorPoint              = 4,
	EK25ChainState_MAX                       = 5,
};

// Enum TheK25.EK25ChainCreationStrategy
// NumValues: 0x0003
enum class EK25ChainCreationStrategy : uint8
{
	Spline                                   = 0,
	PassedPoints                             = 1,
	EK25ChainCreationStrategy_MAX            = 2,
};

// Enum TheK25.EChainStrikeCameraViewTarget
// NumValues: 0x0004
enum class EChainStrikeCameraViewTarget : uint8
{
	Killer                                   = 0,
	Gateway                                  = 1,
	ControlledProjectile                     = 2,
	EChainStrikeCameraViewTarget_MAX         = 3,
};

// Enum TheK25.EChainStrikeEndReason
// NumValues: 0x0006
enum class EChainStrikeEndReason : uint8
{
	None                                     = 0,
	AbortedGatewayPlacementState             = 1,
	AbortedGatewayPlacementBecauseOfInvalidPlacementState = 2,
	AbortedGatewayPossession                 = 3,
	ControlledProjectileStopped              = 4,
	EChainStrikeEndReason_MAX                = 5,
};

// Enum TheK25.EK25TeleportLocationStatus
// NumValues: 0x0004
enum class EK25TeleportLocationStatus : uint8
{
	Invalid                                  = 0,
	PassableLocation                         = 1,
	PerfectLocation                          = 2,
	EK25TeleportLocationStatus_MAX           = 3,
};

// Enum TheK25.EK25ProjectileDeactivateReason
// NumValues: 0x0007
enum class EK25ProjectileDeactivateReason : uint8
{
	None                                     = 0,
	WorldCollisionHit                        = 1,
	CharacterHit                             = 2,
	OutOfBounds                              = 3,
	MaximumRangeReached                      = 4,
	ChainStrikeInteractionEnded              = 5,
	EK25ProjectileDeactivateReason_MAX       = 6,
};

// Enum TheK25.EK25ChainAnchorPointDirection
// NumValues: 0x0005
enum class EK25ChainAnchorPointDirection : uint8
{
	Front                                    = 0,
	Left                                     = 1,
	Right                                    = 2,
	Back                                     = 3,
	EK25ChainAnchorPointDirection_MAX        = 4,
};

// Enum TheK25.EK25ChainAttachmentLimbType
// NumValues: 0x0005
enum class EK25ChainAttachmentLimbType : uint8
{
	Hand                                     = 0,
	Shoulder                                 = 1,
	Stomach                                  = 2,
	Back                                     = 3,
	EK25ChainAttachmentLimbType_MAX          = 4,
};

// Enum TheK25.EK25ChainDetachmentReason
// NumValues: 0x0009
enum class EK25ChainDetachmentReason : uint8
{
	CollisionOrMaxLengthReached              = 0,
	KillerAttack                             = 1,
	RemovedByInteraction                     = 2,
	MaxNumberChainsReached                   = 3,
	ForcedRemoved                            = 4,
	SurvivorKO                               = 5,
	EndGameCollapseOver                      = 6,
	SurvivorLeftTheMatch                     = 7,
	EK25ChainDetachmentReason_MAX            = 8,
};

// Enum TheK25.ELamentConfigurationState
// NumValues: 0x0007
enum class ELamentConfigurationState : uint8
{
	SurvivorEscapedWithLamentConfiguration   = 0,
	WaitingToSpawn                           = 1,
	Spawned                                  = 2,
	IsBeingPickedUp                          = 3,
	CarriedBySurvivor                        = 4,
	HoldingSurvivorHostage                   = 5,
	ELamentConfigurationState_MAX            = 6,
};

// Enum TheK25.ELamentConfigurationDropReason
// NumValues: 0x0006
enum class ELamentConfigurationDropReason : uint8
{
	SurvivorSolved                           = 0,
	SurvivorIsNoLongerHostage                = 1,
	SurvivorDowned                           = 2,
	KillerCollect                            = 3,
	Other                                    = 4,
	ELamentConfigurationDropReason_MAX       = 5,
};

// Enum TheK25.EChainHuntState
// NumValues: 0x0004
enum class EChainHuntState : uint8
{
	Inactive                                 = 0,
	Charging                                 = 1,
	Active                                   = 2,
	EChainHuntState_MAX                      = 3,
};

// ScriptStruct TheK25.K25ChainAnchorAnimationData
// 0x0018 (0x0018 - 0x0000)
struct FK25ChainAnchorAnimationData final
{
public:
	float                                         ChainPullAngle;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ChainWeight;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ChainHeight;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HasChainAttached;                                  // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsChainBeingRemoved;                               // 0x000D(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TWeakObjectPtr<class AK25Chain>               AttachedChain;                                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FK25ChainAnchorAnimationData) == 0x000004, "Wrong alignment on FK25ChainAnchorAnimationData");
static_assert(sizeof(FK25ChainAnchorAnimationData) == 0x000018, "Wrong size on FK25ChainAnchorAnimationData");
static_assert(offsetof(FK25ChainAnchorAnimationData, ChainPullAngle) == 0x000000, "Member 'FK25ChainAnchorAnimationData::ChainPullAngle' has a wrong offset!");
static_assert(offsetof(FK25ChainAnchorAnimationData, ChainWeight) == 0x000004, "Member 'FK25ChainAnchorAnimationData::ChainWeight' has a wrong offset!");
static_assert(offsetof(FK25ChainAnchorAnimationData, ChainHeight) == 0x000008, "Member 'FK25ChainAnchorAnimationData::ChainHeight' has a wrong offset!");
static_assert(offsetof(FK25ChainAnchorAnimationData, HasChainAttached) == 0x00000C, "Member 'FK25ChainAnchorAnimationData::HasChainAttached' has a wrong offset!");
static_assert(offsetof(FK25ChainAnchorAnimationData, IsChainBeingRemoved) == 0x00000D, "Member 'FK25ChainAnchorAnimationData::IsChainBeingRemoved' has a wrong offset!");
static_assert(offsetof(FK25ChainAnchorAnimationData, AttachedChain) == 0x000010, "Member 'FK25ChainAnchorAnimationData::AttachedChain' has a wrong offset!");

// ScriptStruct TheK25.K25SurvivorTeleportationData
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FK25SurvivorTeleportationData final
{
public:
	uint8                                         Pad_0[0x18];                                       // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FK25SurvivorTeleportationData) == 0x000008, "Wrong alignment on FK25SurvivorTeleportationData");
static_assert(sizeof(FK25SurvivorTeleportationData) == 0x000018, "Wrong size on FK25SurvivorTeleportationData");

// ScriptStruct TheK25.DBDPlayerTotemPair
// 0x0010 (0x0010 - 0x0000)
struct FDBDPlayerTotemPair final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATotem*                                 Totem;                                             // 0x0008(0x0008)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDBDPlayerTotemPair) == 0x000008, "Wrong alignment on FDBDPlayerTotemPair");
static_assert(sizeof(FDBDPlayerTotemPair) == 0x000010, "Wrong size on FDBDPlayerTotemPair");
static_assert(offsetof(FDBDPlayerTotemPair, Player) == 0x000000, "Member 'FDBDPlayerTotemPair::Player' has a wrong offset!");
static_assert(offsetof(FDBDPlayerTotemPair, Totem) == 0x000008, "Member 'FDBDPlayerTotemPair::Totem' has a wrong offset!");

// ScriptStruct TheK25.K25ProjectileDeactivationData
// 0x0020 (0x0020 - 0x0000)
struct FK25ProjectileDeactivationData final
{
public:
	EK25ProjectileDeactivateReason                DeactivationReason;                                // 0x0000(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   PhysicalSurfaceName;                               // 0x0004(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ShouldReelBackProjectile;                          // 0x0010(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HasAppliedDamage;                                  // 0x0011(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACamperPlayer*                          _survivorHit;                                      // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FK25ProjectileDeactivationData) == 0x000008, "Wrong alignment on FK25ProjectileDeactivationData");
static_assert(sizeof(FK25ProjectileDeactivationData) == 0x000020, "Wrong size on FK25ProjectileDeactivationData");
static_assert(offsetof(FK25ProjectileDeactivationData, DeactivationReason) == 0x000000, "Member 'FK25ProjectileDeactivationData::DeactivationReason' has a wrong offset!");
static_assert(offsetof(FK25ProjectileDeactivationData, PhysicalSurfaceName) == 0x000004, "Member 'FK25ProjectileDeactivationData::PhysicalSurfaceName' has a wrong offset!");
static_assert(offsetof(FK25ProjectileDeactivationData, ShouldReelBackProjectile) == 0x000010, "Member 'FK25ProjectileDeactivationData::ShouldReelBackProjectile' has a wrong offset!");
static_assert(offsetof(FK25ProjectileDeactivationData, HasAppliedDamage) == 0x000011, "Member 'FK25ProjectileDeactivationData::HasAppliedDamage' has a wrong offset!");
static_assert(offsetof(FK25ProjectileDeactivationData, _survivorHit) == 0x000018, "Member 'FK25ProjectileDeactivationData::_survivorHit' has a wrong offset!");

// ScriptStruct TheK25.K25ChainTraceData
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FK25ChainTraceData final
{
public:
	uint8                                         Pad_0[0x18];                                       // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FK25ChainTraceData) == 0x000008, "Wrong alignment on FK25ChainTraceData");
static_assert(sizeof(FK25ChainTraceData) == 0x000018, "Wrong size on FK25ChainTraceData");

// ScriptStruct TheK25.K25SurvivorChainAttachmentData
// 0x0038 (0x0038 - 0x0000)
struct FK25SurvivorChainAttachmentData final
{
public:
	class FName                                   AnchorName;                                        // 0x0000(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EK25ChainAnchorPointDirection                 Direction;                                         // 0x000C(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                RelativeLocation;                                  // 0x0010(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsFlexibleLimb;                                    // 0x0028(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EK25ChainAttachmentLimbType                   LimbType;                                          // 0x0029(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ACamperPlayer*                          _attachedSurvivor;                                 // 0x0030(0x0008)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FK25SurvivorChainAttachmentData) == 0x000008, "Wrong alignment on FK25SurvivorChainAttachmentData");
static_assert(sizeof(FK25SurvivorChainAttachmentData) == 0x000038, "Wrong size on FK25SurvivorChainAttachmentData");
static_assert(offsetof(FK25SurvivorChainAttachmentData, AnchorName) == 0x000000, "Member 'FK25SurvivorChainAttachmentData::AnchorName' has a wrong offset!");
static_assert(offsetof(FK25SurvivorChainAttachmentData, Direction) == 0x00000C, "Member 'FK25SurvivorChainAttachmentData::Direction' has a wrong offset!");
static_assert(offsetof(FK25SurvivorChainAttachmentData, RelativeLocation) == 0x000010, "Member 'FK25SurvivorChainAttachmentData::RelativeLocation' has a wrong offset!");
static_assert(offsetof(FK25SurvivorChainAttachmentData, IsFlexibleLimb) == 0x000028, "Member 'FK25SurvivorChainAttachmentData::IsFlexibleLimb' has a wrong offset!");
static_assert(offsetof(FK25SurvivorChainAttachmentData, LimbType) == 0x000029, "Member 'FK25SurvivorChainAttachmentData::LimbType' has a wrong offset!");
static_assert(offsetof(FK25SurvivorChainAttachmentData, _attachedSurvivor) == 0x000030, "Member 'FK25SurvivorChainAttachmentData::_attachedSurvivor' has a wrong offset!");

// ScriptStruct TheK25.LamentConfigurationPlayerPossessionAnalytics
// 0x0028 (0x00E0 - 0x00B8)
struct FLamentConfigurationPlayerPossessionAnalytics final : public FUniquelyIdentifiedAnalytic
{
public:
	class FString                                 MatchID;                                           // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PickUpElapsedMatchTime;                            // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DropElapsedMatchTime;                              // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Outcome;                                           // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLamentConfigurationPlayerPossessionAnalytics) == 0x000008, "Wrong alignment on FLamentConfigurationPlayerPossessionAnalytics");
static_assert(sizeof(FLamentConfigurationPlayerPossessionAnalytics) == 0x0000E0, "Wrong size on FLamentConfigurationPlayerPossessionAnalytics");
static_assert(offsetof(FLamentConfigurationPlayerPossessionAnalytics, MatchID) == 0x0000B8, "Member 'FLamentConfigurationPlayerPossessionAnalytics::MatchID' has a wrong offset!");
static_assert(offsetof(FLamentConfigurationPlayerPossessionAnalytics, PickUpElapsedMatchTime) == 0x0000C8, "Member 'FLamentConfigurationPlayerPossessionAnalytics::PickUpElapsedMatchTime' has a wrong offset!");
static_assert(offsetof(FLamentConfigurationPlayerPossessionAnalytics, DropElapsedMatchTime) == 0x0000CC, "Member 'FLamentConfigurationPlayerPossessionAnalytics::DropElapsedMatchTime' has a wrong offset!");
static_assert(offsetof(FLamentConfigurationPlayerPossessionAnalytics, Outcome) == 0x0000D0, "Member 'FLamentConfigurationPlayerPossessionAnalytics::Outcome' has a wrong offset!");

// ScriptStruct TheK25.LamentConfigurationPlayerPossessionData
// 0x0018 (0x0018 - 0x0000)
struct FLamentConfigurationPlayerPossessionData final
{
public:
	float                                         PickUpElapsedMatchTime;                            // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DropElapsedMatchTime;                              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Outcome;                                           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLamentConfigurationPlayerPossessionData) == 0x000008, "Wrong alignment on FLamentConfigurationPlayerPossessionData");
static_assert(sizeof(FLamentConfigurationPlayerPossessionData) == 0x000018, "Wrong size on FLamentConfigurationPlayerPossessionData");
static_assert(offsetof(FLamentConfigurationPlayerPossessionData, PickUpElapsedMatchTime) == 0x000000, "Member 'FLamentConfigurationPlayerPossessionData::PickUpElapsedMatchTime' has a wrong offset!");
static_assert(offsetof(FLamentConfigurationPlayerPossessionData, DropElapsedMatchTime) == 0x000004, "Member 'FLamentConfigurationPlayerPossessionData::DropElapsedMatchTime' has a wrong offset!");
static_assert(offsetof(FLamentConfigurationPlayerPossessionData, Outcome) == 0x000008, "Member 'FLamentConfigurationPlayerPossessionData::Outcome' has a wrong offset!");

// ScriptStruct TheK25.ChainHuntStateData
// 0x0010 (0x0010 - 0x0000)
struct FChainHuntStateData final
{
public:
	float                                         CompletionPercentage;                              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EChainHuntState                               ChainHuntState;                                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0xB];                                        // 0x0005(0x000B)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FChainHuntStateData) == 0x000004, "Wrong alignment on FChainHuntStateData");
static_assert(sizeof(FChainHuntStateData) == 0x000010, "Wrong size on FChainHuntStateData");
static_assert(offsetof(FChainHuntStateData, CompletionPercentage) == 0x000000, "Member 'FChainHuntStateData::CompletionPercentage' has a wrong offset!");
static_assert(offsetof(FChainHuntStateData, ChainHuntState) == 0x000004, "Member 'FChainHuntStateData::ChainHuntState' has a wrong offset!");

// ScriptStruct TheK25.LamentConfigurationSpawnInfo
// 0x0010 (0x0010 - 0x0000)
struct FLamentConfigurationSpawnInfo final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UTileSpawnPoint*                        _spawnPoint;                                       // 0x0008(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FLamentConfigurationSpawnInfo) == 0x000008, "Wrong alignment on FLamentConfigurationSpawnInfo");
static_assert(sizeof(FLamentConfigurationSpawnInfo) == 0x000010, "Wrong size on FLamentConfigurationSpawnInfo");
static_assert(offsetof(FLamentConfigurationSpawnInfo, _spawnPoint) == 0x000008, "Member 'FLamentConfigurationSpawnInfo::_spawnPoint' has a wrong offset!");

}
