#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheK31

#include "Basic.hpp"

#include "ReversibleActionSystem_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum TheK31.EK31DroneMovementMode
// NumValues: 0x0004
enum class EK31DroneMovementMode : uint8
{
	NORMAL                                   = 0,
	DEPLOY                                   = 1,
	SNAPPING                                 = 2,
	EK31DroneMovementMode_MAX                = 3,
};

// Enum TheK31.EDroneFlyingHeight
// NumValues: 0x0003
enum class EDroneFlyingHeight : uint8
{
	Low                                      = 0,
	High                                     = 1,
	EDroneFlyingHeight_MAX                   = 2,
};

// Enum TheK31.EK31DroneStateID
// NumValues: 0x000C
enum class EK31DroneStateID : uint8
{
	NONE                                     = 0,
	IN_STASH                                 = 1,
	BEING_DEPLOYED                           = 2,
	INITIALIZING                             = 3,
	DISABLED                                 = 4,
	STEALTH                                  = 5,
	SCOUTING                                 = 6,
	ACTIVE                                   = 7,
	BEING_HACKED                             = 8,
	DESTROYED                                = 9,
	RECALLING                                = 10,
	EK31DroneStateID_MAX                     = 11,
};

// Enum TheK31.EK31DroneActionResponse
// NumValues: 0x0003
enum class EK31DroneActionResponse : uint8
{
	AUTHORIZED                               = 0,
	DENIED                                   = 1,
	EK31DroneActionResponse_MAX              = 2,
};

// Enum TheK31.EK31PowerState
// NumValues: 0x0003
enum class EK31PowerState : uint8
{
	Deployment                               = 0,
	Inspection                               = 1,
	EK31PowerState_MAX                       = 2,
};

// ScriptStruct TheK31.DroneDeployDatum
// 0x0048 (0x0048 - 0x0000)
struct FDroneDeployDatum final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               Rotation;                                          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         DeployCount;                                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             DeployingCharacter;                                // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HasReachedDeployLocation;                          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsDeployed;                                        // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDroneDeployDatum) == 0x000008, "Wrong alignment on FDroneDeployDatum");
static_assert(sizeof(FDroneDeployDatum) == 0x000048, "Wrong size on FDroneDeployDatum");
static_assert(offsetof(FDroneDeployDatum, Location) == 0x000000, "Member 'FDroneDeployDatum::Location' has a wrong offset!");
static_assert(offsetof(FDroneDeployDatum, Rotation) == 0x000018, "Member 'FDroneDeployDatum::Rotation' has a wrong offset!");
static_assert(offsetof(FDroneDeployDatum, DeployCount) == 0x000030, "Member 'FDroneDeployDatum::DeployCount' has a wrong offset!");
static_assert(offsetof(FDroneDeployDatum, DeployingCharacter) == 0x000038, "Member 'FDroneDeployDatum::DeployingCharacter' has a wrong offset!");
static_assert(offsetof(FDroneDeployDatum, HasReachedDeployLocation) == 0x000040, "Member 'FDroneDeployDatum::HasReachedDeployLocation' has a wrong offset!");
static_assert(offsetof(FDroneDeployDatum, IsDeployed) == 0x000041, "Member 'FDroneDeployDatum::IsDeployed' has a wrong offset!");

// ScriptStruct TheK31.DroneMovementRotationActivationDatum
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FDroneMovementRotationActivationDatum final
{
public:
	uint8                                         Pad_0[0x20];                                       // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDroneMovementRotationActivationDatum) == 0x000008, "Wrong alignment on FDroneMovementRotationActivationDatum");
static_assert(sizeof(FDroneMovementRotationActivationDatum) == 0x000020, "Wrong size on FDroneMovementRotationActivationDatum");

// ScriptStruct TheK31.K31DroneTimestampedState
// 0x0018 (0x0018 - 0x0000)
struct FK31DroneTimestampedState final
{
public:
	class UK31DroneState*                         State;                                             // 0x0000(0x0008)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        Timestamp;                                         // 0x0008(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_10[0x8];                                       // 0x0010(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FK31DroneTimestampedState) == 0x000008, "Wrong alignment on FK31DroneTimestampedState");
static_assert(sizeof(FK31DroneTimestampedState) == 0x000018, "Wrong size on FK31DroneTimestampedState");
static_assert(offsetof(FK31DroneTimestampedState, State) == 0x000000, "Member 'FK31DroneTimestampedState::State' has a wrong offset!");
static_assert(offsetof(FK31DroneTimestampedState, Timestamp) == 0x000008, "Member 'FK31DroneTimestampedState::Timestamp' has a wrong offset!");

// ScriptStruct TheK31.DroneRepMovement
// 0x0058 (0x0058 - 0x0000)
struct FDroneRepMovement final
{
public:
	bool                                          IsRotating;                                        // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsRotationReversed;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HasReachTarget;                                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               Rotation;                                          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	EDroneFlyingHeight                            FlyingHeight;                                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         HeightAdjustmentMovingTimeOverride;                // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 InteractingActor;                                  // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   InteractingActorAttachSocket;                      // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SnapTime;                                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDroneRepMovement) == 0x000008, "Wrong alignment on FDroneRepMovement");
static_assert(sizeof(FDroneRepMovement) == 0x000058, "Wrong size on FDroneRepMovement");
static_assert(offsetof(FDroneRepMovement, IsRotating) == 0x000000, "Member 'FDroneRepMovement::IsRotating' has a wrong offset!");
static_assert(offsetof(FDroneRepMovement, IsRotationReversed) == 0x000001, "Member 'FDroneRepMovement::IsRotationReversed' has a wrong offset!");
static_assert(offsetof(FDroneRepMovement, HasReachTarget) == 0x000002, "Member 'FDroneRepMovement::HasReachTarget' has a wrong offset!");
static_assert(offsetof(FDroneRepMovement, Location) == 0x000008, "Member 'FDroneRepMovement::Location' has a wrong offset!");
static_assert(offsetof(FDroneRepMovement, Rotation) == 0x000020, "Member 'FDroneRepMovement::Rotation' has a wrong offset!");
static_assert(offsetof(FDroneRepMovement, FlyingHeight) == 0x000038, "Member 'FDroneRepMovement::FlyingHeight' has a wrong offset!");
static_assert(offsetof(FDroneRepMovement, HeightAdjustmentMovingTimeOverride) == 0x00003C, "Member 'FDroneRepMovement::HeightAdjustmentMovingTimeOverride' has a wrong offset!");
static_assert(offsetof(FDroneRepMovement, InteractingActor) == 0x000040, "Member 'FDroneRepMovement::InteractingActor' has a wrong offset!");
static_assert(offsetof(FDroneRepMovement, InteractingActorAttachSocket) == 0x000048, "Member 'FDroneRepMovement::InteractingActorAttachSocket' has a wrong offset!");
static_assert(offsetof(FDroneRepMovement, SnapTime) == 0x000054, "Member 'FDroneRepMovement::SnapTime' has a wrong offset!");

// ScriptStruct TheK31.ActiveZoneOverlapTracker
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FActiveZoneOverlapTracker final
{
public:
	uint8                                         Pad_0[0x18];                                       // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FActiveZoneOverlapTracker) == 0x000008, "Wrong alignment on FActiveZoneOverlapTracker");
static_assert(sizeof(FActiveZoneOverlapTracker) == 0x000018, "Wrong size on FActiveZoneOverlapTracker");

// ScriptStruct TheK31.K31DroneActionRequest
// 0x0018 (0x0018 - 0x0000)
struct FK31DroneActionRequest final
{
public:
	class UK31DroneBaseAction*                    Action;                                            // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AK31Drone*                              Drone;                                             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActionPredictionKey                   PredictionKey;                                     // 0x0010(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FK31DroneActionRequest) == 0x000008, "Wrong alignment on FK31DroneActionRequest");
static_assert(sizeof(FK31DroneActionRequest) == 0x000018, "Wrong size on FK31DroneActionRequest");
static_assert(offsetof(FK31DroneActionRequest, Action) == 0x000000, "Member 'FK31DroneActionRequest::Action' has a wrong offset!");
static_assert(offsetof(FK31DroneActionRequest, Drone) == 0x000008, "Member 'FK31DroneActionRequest::Drone' has a wrong offset!");
static_assert(offsetof(FK31DroneActionRequest, PredictionKey) == 0x000010, "Member 'FK31DroneActionRequest::PredictionKey' has a wrong offset!");

// ScriptStruct TheK31.K31DroneActionResponse
// 0x0020 (0x0020 - 0x0000)
struct FK31DroneActionResponse final
{
public:
	struct FK31DroneActionRequest                 Request;                                           // 0x0000(0x0018)(NoDestructor, NativeAccessSpecifierPublic)
	float                                         Timestamp;                                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EK31DroneActionResponse                       Response;                                          // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FK31DroneActionResponse) == 0x000008, "Wrong alignment on FK31DroneActionResponse");
static_assert(sizeof(FK31DroneActionResponse) == 0x000020, "Wrong size on FK31DroneActionResponse");
static_assert(offsetof(FK31DroneActionResponse, Request) == 0x000000, "Member 'FK31DroneActionResponse::Request' has a wrong offset!");
static_assert(offsetof(FK31DroneActionResponse, Timestamp) == 0x000018, "Member 'FK31DroneActionResponse::Timestamp' has a wrong offset!");
static_assert(offsetof(FK31DroneActionResponse, Response) == 0x00001C, "Member 'FK31DroneActionResponse::Response' has a wrong offset!");

// ScriptStruct TheK31.K31DroneScoutDetectionSphereRaycastStruct
// 0x0008 (0x0008 - 0x0000)
struct FK31DroneScoutDetectionSphereRaycastStruct final
{
public:
	float                                         BottomToTopPercent;                                // 0x0000(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CapsuleRadiusPercent;                              // 0x0004(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FK31DroneScoutDetectionSphereRaycastStruct) == 0x000004, "Wrong alignment on FK31DroneScoutDetectionSphereRaycastStruct");
static_assert(sizeof(FK31DroneScoutDetectionSphereRaycastStruct) == 0x000008, "Wrong size on FK31DroneScoutDetectionSphereRaycastStruct");
static_assert(offsetof(FK31DroneScoutDetectionSphereRaycastStruct, BottomToTopPercent) == 0x000000, "Member 'FK31DroneScoutDetectionSphereRaycastStruct::BottomToTopPercent' has a wrong offset!");
static_assert(offsetof(FK31DroneScoutDetectionSphereRaycastStruct, CapsuleRadiusPercent) == 0x000004, "Member 'FK31DroneScoutDetectionSphereRaycastStruct::CapsuleRadiusPercent' has a wrong offset!");

// ScriptStruct TheK31.K31SurvivorTraceInformationThisFrame
// 0x000C (0x000C - 0x0000)
struct FK31SurvivorTraceInformationThisFrame final
{
public:
	int32                                         TotalTraces;                                       // 0x0000(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CompletedTraces;                                   // 0x0004(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CompletedTracesWithLoS;                            // 0x0008(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FK31SurvivorTraceInformationThisFrame) == 0x000004, "Wrong alignment on FK31SurvivorTraceInformationThisFrame");
static_assert(sizeof(FK31SurvivorTraceInformationThisFrame) == 0x00000C, "Wrong size on FK31SurvivorTraceInformationThisFrame");
static_assert(offsetof(FK31SurvivorTraceInformationThisFrame, TotalTraces) == 0x000000, "Member 'FK31SurvivorTraceInformationThisFrame::TotalTraces' has a wrong offset!");
static_assert(offsetof(FK31SurvivorTraceInformationThisFrame, CompletedTraces) == 0x000004, "Member 'FK31SurvivorTraceInformationThisFrame::CompletedTraces' has a wrong offset!");
static_assert(offsetof(FK31SurvivorTraceInformationThisFrame, CompletedTracesWithLoS) == 0x000008, "Member 'FK31SurvivorTraceInformationThisFrame::CompletedTracesWithLoS' has a wrong offset!");

// ScriptStruct TheK31.SurvivorDroneFrameDatum
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FSurvivorDroneFrameDatum final
{
public:
	uint8                                         Pad_0[0x20];                                       // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSurvivorDroneFrameDatum) == 0x000008, "Wrong alignment on FSurvivorDroneFrameDatum");
static_assert(sizeof(FSurvivorDroneFrameDatum) == 0x000020, "Wrong size on FSurvivorDroneFrameDatum");

// ScriptStruct TheK31.SurvivorDroneInterpState
// 0x0030 (0x0030 - 0x0000)
struct alignas(0x08) FSurvivorDroneInterpState final
{
public:
	uint8                                         Pad_0[0x30];                                       // 0x0000(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSurvivorDroneInterpState) == 0x000008, "Wrong alignment on FSurvivorDroneInterpState");
static_assert(sizeof(FSurvivorDroneInterpState) == 0x000030, "Wrong size on FSurvivorDroneInterpState");

// ScriptStruct TheK31.K31PlayerDroneZoneStruct
// 0x0018 (0x0018 - 0x0000)
struct FK31PlayerDroneZoneStruct final
{
public:
	int32                                         DistanceToDroneXY;                                 // 0x0000(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DistanceToDroneZ;                                  // 0x0004(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsPlayerInZone;                                    // 0x0008(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UK31PlayerZoneStatus*                   PlayerZoneStatus;                                  // 0x0010(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FK31PlayerDroneZoneStruct) == 0x000008, "Wrong alignment on FK31PlayerDroneZoneStruct");
static_assert(sizeof(FK31PlayerDroneZoneStruct) == 0x000018, "Wrong size on FK31PlayerDroneZoneStruct");
static_assert(offsetof(FK31PlayerDroneZoneStruct, DistanceToDroneXY) == 0x000000, "Member 'FK31PlayerDroneZoneStruct::DistanceToDroneXY' has a wrong offset!");
static_assert(offsetof(FK31PlayerDroneZoneStruct, DistanceToDroneZ) == 0x000004, "Member 'FK31PlayerDroneZoneStruct::DistanceToDroneZ' has a wrong offset!");
static_assert(offsetof(FK31PlayerDroneZoneStruct, IsPlayerInZone) == 0x000008, "Member 'FK31PlayerDroneZoneStruct::IsPlayerInZone' has a wrong offset!");
static_assert(offsetof(FK31PlayerDroneZoneStruct, PlayerZoneStatus) == 0x000010, "Member 'FK31PlayerDroneZoneStruct::PlayerZoneStatus' has a wrong offset!");

// ScriptStruct TheK31.K31DroneZoneOverlapDatum
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x04) FK31DroneZoneOverlapDatum final
{
public:
	uint8                                         Pad_0[0x18];                                       // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FK31DroneZoneOverlapDatum) == 0x000004, "Wrong alignment on FK31DroneZoneOverlapDatum");
static_assert(sizeof(FK31DroneZoneOverlapDatum) == 0x000018, "Wrong size on FK31DroneZoneOverlapDatum");

// ScriptStruct TheK31.ClawTrapUntrapDatum
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x04) FClawTrapUntrapDatum final
{
public:
	uint8                                         Pad_0[0x8];                                        // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FClawTrapUntrapDatum) == 0x000004, "Wrong alignment on FClawTrapUntrapDatum");
static_assert(sizeof(FClawTrapUntrapDatum) == 0x000008, "Wrong size on FClawTrapUntrapDatum");

// ScriptStruct TheK31.SurvivorWeakPointScoreDatum
// 0x000C (0x000C - 0x0000)
struct alignas(0x04) FSurvivorWeakPointScoreDatum final
{
public:
	uint8                                         Pad_0[0xC];                                        // 0x0000(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSurvivorWeakPointScoreDatum) == 0x000004, "Wrong alignment on FSurvivorWeakPointScoreDatum");
static_assert(sizeof(FSurvivorWeakPointScoreDatum) == 0x00000C, "Wrong size on FSurvivorWeakPointScoreDatum");

}
