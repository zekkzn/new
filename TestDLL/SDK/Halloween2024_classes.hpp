#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Halloween2024

#include "Basic.hpp"

#include "DBDInteraction_classes.hpp"
#include "DataTableUtilities_structs.hpp"
#include "DeadByDaylight_classes.hpp"
#include "Halloween_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "DBDGameplay_classes.hpp"


namespace SDK
{

// Class Halloween2024.CollectVoidBombInteraction
// 0x0070 (0x0990 - 0x0920)
class UCollectVoidBombInteraction final : public UBasicChargeableInteraction
{
public:
	TSubclassOf<class ACollectable>               _voidBombCollectable;                              // 0x0920(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _playerCraftedPriorityDuration;                    // 0x0928(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                         Pad_950[0x40];                                     // 0x0950(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CollectVoidBombInteraction">();
	}
	static class UCollectVoidBombInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCollectVoidBombInteraction>();
	}
};
static_assert(alignof(UCollectVoidBombInteraction) == 0x000010, "Wrong alignment on UCollectVoidBombInteraction");
static_assert(sizeof(UCollectVoidBombInteraction) == 0x000990, "Wrong size on UCollectVoidBombInteraction");
static_assert(offsetof(UCollectVoidBombInteraction, _voidBombCollectable) == 0x000920, "Member 'UCollectVoidBombInteraction::_voidBombCollectable' has a wrong offset!");
static_assert(offsetof(UCollectVoidBombInteraction, _playerCraftedPriorityDuration) == 0x000928, "Member 'UCollectVoidBombInteraction::_playerCraftedPriorityDuration' has a wrong offset!");

// Class Halloween2024.EscapeChaseAfterVoidBombQEEvaluator
// 0x0008 (0x00B0 - 0x00A8)
class UEscapeChaseAfterVoidBombQEEvaluator final : public UQuestEventEvaluatorBase
{
public:
	float                                         _timeChaseShouldEndAfterDrop;                      // 0x00A8(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnChaseEnd(const struct FGameplayTag& GameEventType, const struct FGameEventData& GameEventData);
	void OnVoidBombDropped(const struct FGameplayTag& GameEventType, const struct FGameEventData& GameEventData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EscapeChaseAfterVoidBombQEEvaluator">();
	}
	static class UEscapeChaseAfterVoidBombQEEvaluator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEscapeChaseAfterVoidBombQEEvaluator>();
	}
};
static_assert(alignof(UEscapeChaseAfterVoidBombQEEvaluator) == 0x000008, "Wrong alignment on UEscapeChaseAfterVoidBombQEEvaluator");
static_assert(sizeof(UEscapeChaseAfterVoidBombQEEvaluator) == 0x0000B0, "Wrong size on UEscapeChaseAfterVoidBombQEEvaluator");
static_assert(offsetof(UEscapeChaseAfterVoidBombQEEvaluator, _timeChaseShouldEndAfterDrop) == 0x0000A8, "Member 'UEscapeChaseAfterVoidBombQEEvaluator::_timeChaseShouldEndAfterDrop' has a wrong offset!");

// Class Halloween2024.Halloween2024EventCheatComponent
// 0x0000 (0x00A8 - 0x00A8)
class UHalloween2024EventCheatComponent final : public UActorComponent
{
public:
	void DBD_SetVoidBombCrafted(bool Crafted);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Halloween2024EventCheatComponent">();
	}
	static class UHalloween2024EventCheatComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHalloween2024EventCheatComponent>();
	}
};
static_assert(alignof(UHalloween2024EventCheatComponent) == 0x000008, "Wrong alignment on UHalloween2024EventCheatComponent");
static_assert(sizeof(UHalloween2024EventCheatComponent) == 0x0000A8, "Wrong size on UHalloween2024EventCheatComponent");

// Class Halloween2024.VoidBomb
// 0x0258 (0x0678 - 0x0420)
class AVoidBomb final : public AFirecracker
{
public:
	class UItemModifier*                          _itemModifier;                                     // 0x0420(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USphereComponent*                       _smokeCloudArea;                                   // 0x0428(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USphereComponent*                       _scratchMarkPreventionArea;                        // 0x0430(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                   _smokeCloudAreaRadius;                             // 0x0438(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                   _secondsToExpand;                                  // 0x0460(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                   _secondsAtMaxSize;                                 // 0x0488(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                   _secondsToDisappear;                               // 0x04B0(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                   _scratchMarkPreventionAreaMinRadius;               // 0x04D8(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _scratchMarkPreventionAreaMaxRadius;               // 0x0500(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TSubclassOf<class UStatusEffect>              _scratchMarkPreventionStatusEffect;                // 0x0528(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FCollisionProfileName                  _playerDetectorCollisionProfileName;               // 0x0530(0x000C)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_53C[0x4];                                      // 0x053C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<TWeakObjectPtr<class ADBDPlayer>>        _local_smokeBombOverlappingPlayers;                // 0x0540(0x0050)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<TWeakObjectPtr<class ACamperPlayer>, class UStatusEffect*> _authority_noScratchMarkAreaOverlappingEffects;    // 0x0590(0x0050)(ExportObject, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class ULocalPlayerTrackerComponent*           _localPlayerTracker;                               // 0x05E0(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_5E8[0x90];                                     // 0x05E8(0x0090)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Authority_OnScratchMarkAreaOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Authority_OnScratchMarkAreaOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void Cosmetic_OnLocallyObservedChanged(const class ADBDPlayer* LocallyObservedPlayer, bool IsOverlapping);
	void Cosmetic_OnLocallyObservedCharacterBeginOverlap(class ADBDPlayer* LocallyObservedPlayer);
	void Cosmetic_OnLocallyObservedCharacterEndOverlap(class ADBDPlayer* LocallyObservedPlayer);
	void Local_OnSmokeCloudAreaOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Local_OnSmokeCloudAreaOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnLocallyObservedChanged();
	void OnSmokeAreaDisappeared();
	void OnSmokeAreaStartedToShrink();

	bool GetStartedExplosion() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VoidBomb">();
	}
	static class AVoidBomb* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVoidBomb>();
	}
};
static_assert(alignof(AVoidBomb) == 0x000008, "Wrong alignment on AVoidBomb");
static_assert(sizeof(AVoidBomb) == 0x000678, "Wrong size on AVoidBomb");
static_assert(offsetof(AVoidBomb, _itemModifier) == 0x000420, "Member 'AVoidBomb::_itemModifier' has a wrong offset!");
static_assert(offsetof(AVoidBomb, _smokeCloudArea) == 0x000428, "Member 'AVoidBomb::_smokeCloudArea' has a wrong offset!");
static_assert(offsetof(AVoidBomb, _scratchMarkPreventionArea) == 0x000430, "Member 'AVoidBomb::_scratchMarkPreventionArea' has a wrong offset!");
static_assert(offsetof(AVoidBomb, _smokeCloudAreaRadius) == 0x000438, "Member 'AVoidBomb::_smokeCloudAreaRadius' has a wrong offset!");
static_assert(offsetof(AVoidBomb, _secondsToExpand) == 0x000460, "Member 'AVoidBomb::_secondsToExpand' has a wrong offset!");
static_assert(offsetof(AVoidBomb, _secondsAtMaxSize) == 0x000488, "Member 'AVoidBomb::_secondsAtMaxSize' has a wrong offset!");
static_assert(offsetof(AVoidBomb, _secondsToDisappear) == 0x0004B0, "Member 'AVoidBomb::_secondsToDisappear' has a wrong offset!");
static_assert(offsetof(AVoidBomb, _scratchMarkPreventionAreaMinRadius) == 0x0004D8, "Member 'AVoidBomb::_scratchMarkPreventionAreaMinRadius' has a wrong offset!");
static_assert(offsetof(AVoidBomb, _scratchMarkPreventionAreaMaxRadius) == 0x000500, "Member 'AVoidBomb::_scratchMarkPreventionAreaMaxRadius' has a wrong offset!");
static_assert(offsetof(AVoidBomb, _scratchMarkPreventionStatusEffect) == 0x000528, "Member 'AVoidBomb::_scratchMarkPreventionStatusEffect' has a wrong offset!");
static_assert(offsetof(AVoidBomb, _playerDetectorCollisionProfileName) == 0x000530, "Member 'AVoidBomb::_playerDetectorCollisionProfileName' has a wrong offset!");
static_assert(offsetof(AVoidBomb, _local_smokeBombOverlappingPlayers) == 0x000540, "Member 'AVoidBomb::_local_smokeBombOverlappingPlayers' has a wrong offset!");
static_assert(offsetof(AVoidBomb, _authority_noScratchMarkAreaOverlappingEffects) == 0x000590, "Member 'AVoidBomb::_authority_noScratchMarkAreaOverlappingEffects' has a wrong offset!");
static_assert(offsetof(AVoidBomb, _localPlayerTracker) == 0x0005E0, "Member 'AVoidBomb::_localPlayerTracker' has a wrong offset!");

// Class Halloween2024.VoidEmpowermentWidgetComponent
// 0x0118 (0x01C0 - 0x00A8)
class UVoidEmpowermentWidgetComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A8[0x118];                                     // 0x00A8(0x0118)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnHudPresenterReady();
	void OnInteractorLockChangedEvent(bool Interacting, class ADBDPlayer* InteractingPlayer);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VoidEmpowermentWidgetComponent">();
	}
	static class UVoidEmpowermentWidgetComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoidEmpowermentWidgetComponent>();
	}
};
static_assert(alignof(UVoidEmpowermentWidgetComponent) == 0x000008, "Wrong alignment on UVoidEmpowermentWidgetComponent");
static_assert(sizeof(UVoidEmpowermentWidgetComponent) == 0x0001C0, "Wrong size on UVoidEmpowermentWidgetComponent");

// Class Halloween2024.VoidStation
// 0x00B0 (0x0458 - 0x03A8)
class AVoidStation final : public AInteractable
{
public:
	uint8                                         Pad_3A8[0x18];                                     // 0x03A8(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   _voidBombMesh;                                     // 0x03C0(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                   _voidStationMesh;                                  // 0x03C8(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInteractor*                            _interactor;                                       // 0x03D0(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPrimitiveComponent*                    _interactionZone;                                  // 0x03D8(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCollectVoidBombInteraction*            _collectVoidBombInteraction;                       // 0x03E0(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UChargeableComponent*                   _collectVoidBombChargeable;                        // 0x03E8(0x0008)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _collectVoidBombDuration;                          // 0x03F0(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TSubclassOf<class UVoidStationEnergyInteraction> _depositVoidEnergyKillerTemplate;                  // 0x0418(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UVoidStationEnergyInteraction> _depositVoidEnergySurvivorTemplate;                // 0x0420(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDBDOutlineComponent*                   _voidStationOutline;                               // 0x0428(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UVoidStationOutlineStrategy*            _outlineStrategy;                                  // 0x0430(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class ADBDPlayer>              _playerCraftedVoidBomb;                            // 0x0438(0x0008)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULocalPlayerTrackerComponent*           _localPlayerTracker;                               // 0x0440(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_448[0x10];                                     // 0x0448(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Cosmetic_OnItemCrafted(bool ItemCrafted, bool KillerItem);
	void Cosmetic_OnPlayerDepositingEnergyChanged(bool IsInteracting);
	void OnLocallyObservedChanged();
	void OnRep_PlayerCraftedVoidBomb();

	bool GetIsVoidBombSpawned() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VoidStation">();
	}
	static class AVoidStation* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVoidStation>();
	}
};
static_assert(alignof(AVoidStation) == 0x000008, "Wrong alignment on AVoidStation");
static_assert(sizeof(AVoidStation) == 0x000458, "Wrong size on AVoidStation");
static_assert(offsetof(AVoidStation, _voidBombMesh) == 0x0003C0, "Member 'AVoidStation::_voidBombMesh' has a wrong offset!");
static_assert(offsetof(AVoidStation, _voidStationMesh) == 0x0003C8, "Member 'AVoidStation::_voidStationMesh' has a wrong offset!");
static_assert(offsetof(AVoidStation, _interactor) == 0x0003D0, "Member 'AVoidStation::_interactor' has a wrong offset!");
static_assert(offsetof(AVoidStation, _interactionZone) == 0x0003D8, "Member 'AVoidStation::_interactionZone' has a wrong offset!");
static_assert(offsetof(AVoidStation, _collectVoidBombInteraction) == 0x0003E0, "Member 'AVoidStation::_collectVoidBombInteraction' has a wrong offset!");
static_assert(offsetof(AVoidStation, _collectVoidBombChargeable) == 0x0003E8, "Member 'AVoidStation::_collectVoidBombChargeable' has a wrong offset!");
static_assert(offsetof(AVoidStation, _collectVoidBombDuration) == 0x0003F0, "Member 'AVoidStation::_collectVoidBombDuration' has a wrong offset!");
static_assert(offsetof(AVoidStation, _depositVoidEnergyKillerTemplate) == 0x000418, "Member 'AVoidStation::_depositVoidEnergyKillerTemplate' has a wrong offset!");
static_assert(offsetof(AVoidStation, _depositVoidEnergySurvivorTemplate) == 0x000420, "Member 'AVoidStation::_depositVoidEnergySurvivorTemplate' has a wrong offset!");
static_assert(offsetof(AVoidStation, _voidStationOutline) == 0x000428, "Member 'AVoidStation::_voidStationOutline' has a wrong offset!");
static_assert(offsetof(AVoidStation, _outlineStrategy) == 0x000430, "Member 'AVoidStation::_outlineStrategy' has a wrong offset!");
static_assert(offsetof(AVoidStation, _playerCraftedVoidBomb) == 0x000438, "Member 'AVoidStation::_playerCraftedVoidBomb' has a wrong offset!");
static_assert(offsetof(AVoidStation, _localPlayerTracker) == 0x000440, "Member 'AVoidStation::_localPlayerTracker' has a wrong offset!");

// Class Halloween2024.VoidStationEnergyInteraction
// 0x0040 (0x09A0 - 0x0960)
class UVoidStationEnergyInteraction final : public UDepositVoidEnergyInteraction
{
public:
	class UChargeableComponent*                   _spawnedChargeable;                                // 0x0960(0x0008)(ExportObject, Net, ZeroConstructor, InstancedReference, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDBDTunableRowHandle                   _voidEnergyNeeded;                                 // 0x0968(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class ADBDPlayer>              _correspondingPlayer;                              // 0x0990(0x0008)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_998[0x8];                                      // 0x0998(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_SpawnedChargeable();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VoidStationEnergyInteraction">();
	}
	static class UVoidStationEnergyInteraction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoidStationEnergyInteraction>();
	}
};
static_assert(alignof(UVoidStationEnergyInteraction) == 0x000010, "Wrong alignment on UVoidStationEnergyInteraction");
static_assert(sizeof(UVoidStationEnergyInteraction) == 0x0009A0, "Wrong size on UVoidStationEnergyInteraction");
static_assert(offsetof(UVoidStationEnergyInteraction, _spawnedChargeable) == 0x000960, "Member 'UVoidStationEnergyInteraction::_spawnedChargeable' has a wrong offset!");
static_assert(offsetof(UVoidStationEnergyInteraction, _voidEnergyNeeded) == 0x000968, "Member 'UVoidStationEnergyInteraction::_voidEnergyNeeded' has a wrong offset!");
static_assert(offsetof(UVoidStationEnergyInteraction, _correspondingPlayer) == 0x000990, "Member 'UVoidStationEnergyInteraction::_correspondingPlayer' has a wrong offset!");

// Class Halloween2024.VoidStationOutlineStrategy
// 0x0018 (0x0160 - 0x0148)
class UVoidStationOutlineStrategy final : public USourceBasedOutlineUpdateStrategy
{
public:
	struct FLinearColor                           _displayColor;                                     // 0x0148(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_158[0x8];                                      // 0x0158(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"VoidStationOutlineStrategy">();
	}
	static class UVoidStationOutlineStrategy* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoidStationOutlineStrategy>();
	}
};
static_assert(alignof(UVoidStationOutlineStrategy) == 0x000008, "Wrong alignment on UVoidStationOutlineStrategy");
static_assert(sizeof(UVoidStationOutlineStrategy) == 0x000160, "Wrong size on UVoidStationOutlineStrategy");
static_assert(offsetof(UVoidStationOutlineStrategy, _displayColor) == 0x000148, "Member 'UVoidStationOutlineStrategy::_displayColor' has a wrong offset!");

}
