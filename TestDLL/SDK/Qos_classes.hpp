#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Qos

#include "Basic.hpp"

#include "OnlineSubsystemUtils_classes.hpp"
#include "Qos_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class Qos.QosBeaconClient
// 0x0038 (0x0370 - 0x0338)
class AQosBeaconClient final : public AOnlineBeaconClient
{
public:
	uint8                                         Pad_338[0x38];                                     // 0x0338(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ClientQosResponse(EQosResponseType Response);
	void ServerQosRequest(const class FString& InSessionId);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"QosBeaconClient">();
	}
	static class AQosBeaconClient* GetDefaultObj()
	{
		return GetDefaultObjImpl<AQosBeaconClient>();
	}
};
static_assert(alignof(AQosBeaconClient) == 0x000008, "Wrong alignment on AQosBeaconClient");
static_assert(sizeof(AQosBeaconClient) == 0x000370, "Wrong size on AQosBeaconClient");

// Class Qos.QosBeaconHost
// 0x0010 (0x02D8 - 0x02C8)
class AQosBeaconHost final : public AOnlineBeaconHostObject
{
public:
	uint8                                         Pad_2C8[0x10];                                     // 0x02C8(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"QosBeaconHost">();
	}
	static class AQosBeaconHost* GetDefaultObj()
	{
		return GetDefaultObjImpl<AQosBeaconHost>();
	}
};
static_assert(alignof(AQosBeaconHost) == 0x000008, "Wrong alignment on AQosBeaconHost");
static_assert(sizeof(AQosBeaconHost) == 0x0002D8, "Wrong size on AQosBeaconHost");

// Class Qos.QosEvaluator
// 0x0058 (0x0088 - 0x0030)
class UQosEvaluator final : public UObject
{
public:
	uint8                                         Pad_30[0x20];                                      // 0x0030(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bInProgress;                                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bCancelOperation;                                  // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDatacenterQosInstance>         Datacenters;                                       // 0x0058(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_68[0x20];                                      // 0x0068(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"QosEvaluator">();
	}
	static class UQosEvaluator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQosEvaluator>();
	}
};
static_assert(alignof(UQosEvaluator) == 0x000008, "Wrong alignment on UQosEvaluator");
static_assert(sizeof(UQosEvaluator) == 0x000088, "Wrong size on UQosEvaluator");
static_assert(offsetof(UQosEvaluator, bInProgress) == 0x000050, "Member 'UQosEvaluator::bInProgress' has a wrong offset!");
static_assert(offsetof(UQosEvaluator, bCancelOperation) == 0x000051, "Member 'UQosEvaluator::bCancelOperation' has a wrong offset!");
static_assert(offsetof(UQosEvaluator, Datacenters) == 0x000058, "Member 'UQosEvaluator::Datacenters' has a wrong offset!");

// Class Qos.QosRegionManager
// 0x00D0 (0x0100 - 0x0030)
class UQosRegionManager final : public UObject
{
public:
	int32                                         NumTestsPerRegion;                                 // 0x0030(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         PingTimeout;                                       // 0x0034(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bEnableSubspaceBiasOrder;                          // 0x0038(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SubspaceDelimiter;                                 // 0x0040(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FQosRegionInfo>                 RegionDefinitions;                                 // 0x0050(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<struct FQosDatacenterInfo>             DatacenterDefinitions;                             // 0x0060(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	struct FDateTime                              LastCheckTimestamp;                                // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UQosEvaluator*                          Evaluator;                                         // 0x0078(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	EQosCompletionResult                          QosEvalResult;                                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRegionQosInstance>             RegionOptions;                                     // 0x0088(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                 ForceRegionId;                                     // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bRegionForcedViaCommandline;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SelectedRegionId;                                  // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_C0[0x40];                                      // 0x00C0(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"QosRegionManager">();
	}
	static class UQosRegionManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQosRegionManager>();
	}
};
static_assert(alignof(UQosRegionManager) == 0x000008, "Wrong alignment on UQosRegionManager");
static_assert(sizeof(UQosRegionManager) == 0x000100, "Wrong size on UQosRegionManager");
static_assert(offsetof(UQosRegionManager, NumTestsPerRegion) == 0x000030, "Member 'UQosRegionManager::NumTestsPerRegion' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, PingTimeout) == 0x000034, "Member 'UQosRegionManager::PingTimeout' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, bEnableSubspaceBiasOrder) == 0x000038, "Member 'UQosRegionManager::bEnableSubspaceBiasOrder' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, SubspaceDelimiter) == 0x000040, "Member 'UQosRegionManager::SubspaceDelimiter' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, RegionDefinitions) == 0x000050, "Member 'UQosRegionManager::RegionDefinitions' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, DatacenterDefinitions) == 0x000060, "Member 'UQosRegionManager::DatacenterDefinitions' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, LastCheckTimestamp) == 0x000070, "Member 'UQosRegionManager::LastCheckTimestamp' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, Evaluator) == 0x000078, "Member 'UQosRegionManager::Evaluator' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, QosEvalResult) == 0x000080, "Member 'UQosRegionManager::QosEvalResult' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, RegionOptions) == 0x000088, "Member 'UQosRegionManager::RegionOptions' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, ForceRegionId) == 0x000098, "Member 'UQosRegionManager::ForceRegionId' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, bRegionForcedViaCommandline) == 0x0000A8, "Member 'UQosRegionManager::bRegionForcedViaCommandline' has a wrong offset!");
static_assert(offsetof(UQosRegionManager, SelectedRegionId) == 0x0000B0, "Member 'UQosRegionManager::SelectedRegionId' has a wrong offset!");

}
