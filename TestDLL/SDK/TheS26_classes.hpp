#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheS26

#include "Basic.hpp"

#include "DeadByDaylight_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "DBDGameplay_classes.hpp"
#include "TheS26_structs.hpp"
#include "Engine_classes.hpp"
#include "SimpleStateMachine_classes.hpp"


namespace SDK
{

// Class TheS26.BlastMineTransition_ExplodeToHidden
// 0x0000 (0x0050 - 0x0050)
class UBlastMineTransition_ExplodeToHidden final : public USimpleStateMachineBaseTransition
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlastMineTransition_ExplodeToHidden">();
	}
	static class UBlastMineTransition_ExplodeToHidden* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlastMineTransition_ExplodeToHidden>();
	}
};
static_assert(alignof(UBlastMineTransition_ExplodeToHidden) == 0x000008, "Wrong alignment on UBlastMineTransition_ExplodeToHidden");
static_assert(sizeof(UBlastMineTransition_ExplodeToHidden) == 0x000050, "Wrong size on UBlastMineTransition_ExplodeToHidden");

// Class TheS26.BlastMine
// 0x0020 (0x04C8 - 0x04A8)
class UBlastMine final : public UGeneratorTrapPerk
{
public:
	TSubclassOf<class UGeneratorBlastMinePlacerComponent> _blastMinePlacerClass;                             // 0x04A8(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class ABlastMineFirecracker>      _blastMineFirecrackerClass;                        // 0x04B0(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ABlastMineFirecracker*                  _blastMine;                                        // 0x04B8(0x0008)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4C0[0x8];                                      // 0x04C0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Client_TrapActivatedLoudNotification(const struct FTransform& Location);
	void ThrowBubbleIndicator_Cosmetic(const struct FTransform& Location);
	void TrapAttachedToGenerator_Cosmetic(class AGenerator* TrappedGenerator);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlastMine">();
	}
	static class UBlastMine* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlastMine>();
	}
};
static_assert(alignof(UBlastMine) == 0x000008, "Wrong alignment on UBlastMine");
static_assert(sizeof(UBlastMine) == 0x0004C8, "Wrong size on UBlastMine");
static_assert(offsetof(UBlastMine, _blastMinePlacerClass) == 0x0004A8, "Member 'UBlastMine::_blastMinePlacerClass' has a wrong offset!");
static_assert(offsetof(UBlastMine, _blastMineFirecrackerClass) == 0x0004B0, "Member 'UBlastMine::_blastMineFirecrackerClass' has a wrong offset!");
static_assert(offsetof(UBlastMine, _blastMine) == 0x0004B8, "Member 'UBlastMine::_blastMine' has a wrong offset!");

// Class TheS26.BlastMineTransition_HiddenToSpawned
// 0x0000 (0x0050 - 0x0050)
class UBlastMineTransition_HiddenToSpawned final : public USimpleStateMachineBaseTransition
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlastMineTransition_HiddenToSpawned">();
	}
	static class UBlastMineTransition_HiddenToSpawned* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlastMineTransition_HiddenToSpawned>();
	}
};
static_assert(alignof(UBlastMineTransition_HiddenToSpawned) == 0x000008, "Wrong alignment on UBlastMineTransition_HiddenToSpawned");
static_assert(sizeof(UBlastMineTransition_HiddenToSpawned) == 0x000050, "Wrong size on UBlastMineTransition_HiddenToSpawned");

// Class TheS26.BlastMineFirecracker
// 0x0080 (0x0498 - 0x0418)
class ABlastMineFirecracker final : public ARangedExplosive
{
public:
	uint8                                         Pad_418[0x30];                                     // 0x0418(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnTrapRemovedBlueprintEvent;                       // 0x0448(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class AGenerator*                             _trappedGenerator;                                 // 0x0458(0x0008)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_460[0x8];                                      // 0x0460(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class USimpleStateMachine*                    _stateMachine;                                     // 0x0468(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlastMineKickSensor*                   _kickSensor;                                       // 0x0470(0x0008)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlastMineVisibilityController*         _visibilityController;                             // 0x0478(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _lifetime;                                         // 0x0480(0x0004)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         _authority_ExplosionCount;                         // 0x0484(0x0004)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                   _authority_CurrentState;                           // 0x0488(0x000C)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_494[0x4];                                      // 0x0494(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_AuthorityCurrentState();
	void OnRep_AuthorityExplosionCount();
	void OnRep_Lifetime();
	void OnTrapRemovedBlueprintEvent__DelegateSignature(EBlastMineRemovedReason RemovedReason);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlastMineFirecracker">();
	}
	static class ABlastMineFirecracker* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABlastMineFirecracker>();
	}
};
static_assert(alignof(ABlastMineFirecracker) == 0x000008, "Wrong alignment on ABlastMineFirecracker");
static_assert(sizeof(ABlastMineFirecracker) == 0x000498, "Wrong size on ABlastMineFirecracker");
static_assert(offsetof(ABlastMineFirecracker, OnTrapRemovedBlueprintEvent) == 0x000448, "Member 'ABlastMineFirecracker::OnTrapRemovedBlueprintEvent' has a wrong offset!");
static_assert(offsetof(ABlastMineFirecracker, _trappedGenerator) == 0x000458, "Member 'ABlastMineFirecracker::_trappedGenerator' has a wrong offset!");
static_assert(offsetof(ABlastMineFirecracker, _stateMachine) == 0x000468, "Member 'ABlastMineFirecracker::_stateMachine' has a wrong offset!");
static_assert(offsetof(ABlastMineFirecracker, _kickSensor) == 0x000470, "Member 'ABlastMineFirecracker::_kickSensor' has a wrong offset!");
static_assert(offsetof(ABlastMineFirecracker, _visibilityController) == 0x000478, "Member 'ABlastMineFirecracker::_visibilityController' has a wrong offset!");
static_assert(offsetof(ABlastMineFirecracker, _lifetime) == 0x000480, "Member 'ABlastMineFirecracker::_lifetime' has a wrong offset!");
static_assert(offsetof(ABlastMineFirecracker, _authority_ExplosionCount) == 0x000484, "Member 'ABlastMineFirecracker::_authority_ExplosionCount' has a wrong offset!");
static_assert(offsetof(ABlastMineFirecracker, _authority_CurrentState) == 0x000488, "Member 'ABlastMineFirecracker::_authority_CurrentState' has a wrong offset!");

// Class TheS26.BlastMineState_Spawned
// 0x0058 (0x00A0 - 0x0048)
class UBlastMineState_Spawned final : public USimpleStateMachineBaseState
{
public:
	uint8                                         Pad_48[0x58];                                      // 0x0048(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlastMineState_Spawned">();
	}
	static class UBlastMineState_Spawned* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlastMineState_Spawned>();
	}
};
static_assert(alignof(UBlastMineState_Spawned) == 0x000008, "Wrong alignment on UBlastMineState_Spawned");
static_assert(sizeof(UBlastMineState_Spawned) == 0x0000A0, "Wrong size on UBlastMineState_Spawned");

// Class TheS26.BlastMineKickSensor
// 0x0058 (0x0100 - 0x00A8)
class UBlastMineKickSensor final : public UActorComponent
{
public:
	uint8                                         Pad_A8[0x18];                                      // 0x00A8(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFloatRange                            _kickChargeTriggerRange;                           // 0x00C0(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ASlasherPlayer*                         _kickingKiller;                                    // 0x00D0(0x0008)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableComponent*                   _kickGeneratorChargeable;                          // 0x00D8(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AGenerator*                             _generator;                                        // 0x00E0(0x0008)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_E8[0x18];                                      // 0x00E8(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Authority_OnKickChargeablePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlastMineKickSensor">();
	}
	static class UBlastMineKickSensor* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlastMineKickSensor>();
	}
};
static_assert(alignof(UBlastMineKickSensor) == 0x000008, "Wrong alignment on UBlastMineKickSensor");
static_assert(sizeof(UBlastMineKickSensor) == 0x000100, "Wrong size on UBlastMineKickSensor");
static_assert(offsetof(UBlastMineKickSensor, _kickChargeTriggerRange) == 0x0000C0, "Member 'UBlastMineKickSensor::_kickChargeTriggerRange' has a wrong offset!");
static_assert(offsetof(UBlastMineKickSensor, _kickingKiller) == 0x0000D0, "Member 'UBlastMineKickSensor::_kickingKiller' has a wrong offset!");
static_assert(offsetof(UBlastMineKickSensor, _kickGeneratorChargeable) == 0x0000D8, "Member 'UBlastMineKickSensor::_kickGeneratorChargeable' has a wrong offset!");
static_assert(offsetof(UBlastMineKickSensor, _generator) == 0x0000E0, "Member 'UBlastMineKickSensor::_generator' has a wrong offset!");

// Class TheS26.BlastMineState_Explode
// 0x0028 (0x0070 - 0x0048)
class UBlastMineState_Explode final : public USimpleStateMachineBaseState
{
public:
	uint8                                         Pad_48[0x28];                                      // 0x0048(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlastMineState_Explode">();
	}
	static class UBlastMineState_Explode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlastMineState_Explode>();
	}
};
static_assert(alignof(UBlastMineState_Explode) == 0x000008, "Wrong alignment on UBlastMineState_Explode");
static_assert(sizeof(UBlastMineState_Explode) == 0x000070, "Wrong size on UBlastMineState_Explode");

// Class TheS26.BlastMineState_Hidden
// 0x0018 (0x0060 - 0x0048)
class UBlastMineState_Hidden final : public USimpleStateMachineBaseState
{
public:
	uint8                                         Pad_48[0x18];                                      // 0x0048(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlastMineState_Hidden">();
	}
	static class UBlastMineState_Hidden* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlastMineState_Hidden>();
	}
};
static_assert(alignof(UBlastMineState_Hidden) == 0x000008, "Wrong alignment on UBlastMineState_Hidden");
static_assert(sizeof(UBlastMineState_Hidden) == 0x000060, "Wrong size on UBlastMineState_Hidden");

// Class TheS26.BlastMineTransition_SpawnedToExplode
// 0x0000 (0x0050 - 0x0050)
class UBlastMineTransition_SpawnedToExplode final : public USimpleStateMachineBaseTransition
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlastMineTransition_SpawnedToExplode">();
	}
	static class UBlastMineTransition_SpawnedToExplode* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlastMineTransition_SpawnedToExplode>();
	}
};
static_assert(alignof(UBlastMineTransition_SpawnedToExplode) == 0x000008, "Wrong alignment on UBlastMineTransition_SpawnedToExplode");
static_assert(sizeof(UBlastMineTransition_SpawnedToExplode) == 0x000050, "Wrong size on UBlastMineTransition_SpawnedToExplode");

// Class TheS26.BlastMineTransition_SpawnedToHidden
// 0x0000 (0x0050 - 0x0050)
class UBlastMineTransition_SpawnedToHidden final : public USimpleStateMachineBaseTransition
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlastMineTransition_SpawnedToHidden">();
	}
	static class UBlastMineTransition_SpawnedToHidden* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlastMineTransition_SpawnedToHidden>();
	}
};
static_assert(alignof(UBlastMineTransition_SpawnedToHidden) == 0x000008, "Wrong alignment on UBlastMineTransition_SpawnedToHidden");
static_assert(sizeof(UBlastMineTransition_SpawnedToHidden) == 0x000050, "Wrong size on UBlastMineTransition_SpawnedToHidden");

// Class TheS26.BlastMineVisibilityController
// 0x0110 (0x01B8 - 0x00A8)
class UBlastMineVisibilityController final : public UActorComponent
{
public:
	uint8                                         Pad_A8[0x68];                                      // 0x00A8(0x0068)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<class UFXSystemComponent*>               _systems;                                          // 0x0110(0x0050)(ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TSet<class UMeshComponent*>                   _meshes;                                           // 0x0160(0x0050)(ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1B0[0x8];                                      // 0x01B0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddFXSystem(class UFXSystemComponent* System);
	void AddMeshComponent(class UMeshComponent* MeshComponent);

	bool IsVisible() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BlastMineVisibilityController">();
	}
	static class UBlastMineVisibilityController* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlastMineVisibilityController>();
	}
};
static_assert(alignof(UBlastMineVisibilityController) == 0x000008, "Wrong alignment on UBlastMineVisibilityController");
static_assert(sizeof(UBlastMineVisibilityController) == 0x0001B8, "Wrong size on UBlastMineVisibilityController");
static_assert(offsetof(UBlastMineVisibilityController, _systems) == 0x000110, "Member 'UBlastMineVisibilityController::_systems' has a wrong offset!");
static_assert(offsetof(UBlastMineVisibilityController, _meshes) == 0x000160, "Member 'UBlastMineVisibilityController::_meshes' has a wrong offset!");

// Class TheS26.Counterforce
// 0x0028 (0x0448 - 0x0420)
class UCounterforce final : public UPerk
{
public:
	uint8                                         Pad_420[0x4];                                      // 0x0420(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         _totemAuraVisibleDuration[0x3];                    // 0x0424(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _startingTotemCleanseSpeedBonus[0x3];              // 0x0430(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _stackableTotemCleanseSpeedBonus[0x3];             // 0x043C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void Multicast_ShowTotemAura(class ATotem* Totem);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Counterforce">();
	}
	static class UCounterforce* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCounterforce>();
	}
};
static_assert(alignof(UCounterforce) == 0x000008, "Wrong alignment on UCounterforce");
static_assert(sizeof(UCounterforce) == 0x000448, "Wrong size on UCounterforce");
static_assert(offsetof(UCounterforce, _totemAuraVisibleDuration) == 0x000424, "Member 'UCounterforce::_totemAuraVisibleDuration' has a wrong offset!");
static_assert(offsetof(UCounterforce, _startingTotemCleanseSpeedBonus) == 0x000430, "Member 'UCounterforce::_startingTotemCleanseSpeedBonus' has a wrong offset!");
static_assert(offsetof(UCounterforce, _stackableTotemCleanseSpeedBonus) == 0x00043C, "Member 'UCounterforce::_stackableTotemCleanseSpeedBonus' has a wrong offset!");

// Class TheS26.GeneratorBlastMinePlacerComponent
// 0x0028 (0x00D0 - 0x00A8)
class UGeneratorBlastMinePlacerComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A8[0x18];                                      // 0x00A8(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         _mineRelativeHeightFromGenerator;                  // 0x00C0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABlastMineFirecracker*                  _blastMine;                                        // 0x00C8(0x0008)(Net, ZeroConstructor, Transient, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void OnRep_BlastMine();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeneratorBlastMinePlacerComponent">();
	}
	static class UGeneratorBlastMinePlacerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeneratorBlastMinePlacerComponent>();
	}
};
static_assert(alignof(UGeneratorBlastMinePlacerComponent) == 0x000008, "Wrong alignment on UGeneratorBlastMinePlacerComponent");
static_assert(sizeof(UGeneratorBlastMinePlacerComponent) == 0x0000D0, "Wrong size on UGeneratorBlastMinePlacerComponent");
static_assert(offsetof(UGeneratorBlastMinePlacerComponent, _mineRelativeHeightFromGenerator) == 0x0000C0, "Member 'UGeneratorBlastMinePlacerComponent::_mineRelativeHeightFromGenerator' has a wrong offset!");
static_assert(offsetof(UGeneratorBlastMinePlacerComponent, _blastMine) == 0x0000C8, "Member 'UGeneratorBlastMinePlacerComponent::_blastMine' has a wrong offset!");

// Class TheS26.Resurgence
// 0x0010 (0x0430 - 0x0420)
class UResurgence final : public UPerk
{
public:
	float                                         _healRegainPercentage[0x3];                        // 0x0420(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_42C[0x4];                                      // 0x042C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Resurgence">();
	}
	static class UResurgence* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResurgence>();
	}
};
static_assert(alignof(UResurgence) == 0x000008, "Wrong alignment on UResurgence");
static_assert(sizeof(UResurgence) == 0x000430, "Wrong size on UResurgence");
static_assert(offsetof(UResurgence, _healRegainPercentage) == 0x000420, "Member 'UResurgence::_healRegainPercentage' has a wrong offset!");

}
