#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheClown

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "TheClown_structs.hpp"
#include "DBDBots_classes.hpp"
#include "DeadByDaylight_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "DataTableUtilities_structs.hpp"
#include "Projectile_classes.hpp"
#include "DBDAnimation_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class TheClown.BaseGasCloudProjectile
// 0x0230 (0x0558 - 0x0328)
class ABaseGasCloudProjectile : public APhysicsBasedProjectile
{
public:
	EBombType                                     _gasType;                                          // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_329[0x7];                                      // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPoolableProjectileComponent*           _poolableProjectile;                               // 0x0330(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                   _gasCloudDuration;                                 // 0x0338(0x0028)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                   _gasCloudGravityScale;                             // 0x0360(0x0028)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                   _gasCloudBounciness;                               // 0x0388(0x0028)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                   _gasCloudFriction;                                 // 0x03B0(0x0028)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                   _dissipateGasCloudTime;                            // 0x03D8(0x0028)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                   _gasCloudMinimumLifetime;                          // 0x0400(0x0028)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                   _gasCloudSimpleCollisionRadius;                    // 0x0428(0x0028)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                   _gasCloudComplexCollisionRadius;                   // 0x0450(0x0028)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                   _gasCloudSurvivorDetectionRadius;                  // 0x0478(0x0028)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                   _gasCloudDetectionDelay;                           // 0x04A0(0x0028)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct FDBDTunableRowHandle                   _gasCloudCosmeticFadeDuration;                     // 0x04C8(0x0028)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	float                                         _overlappingTime;                                  // 0x04F0(0x0004)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          _dissipating;                                      // 0x04F4(0x0001)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4F5[0x3];                                      // 0x04F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ACamperPlayer*>                  _overlappingSurvivors;                             // 0x04F8(0x0010)(BlueprintVisible, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class UParticleSystemComponent*               _gasParticleSystem;                                // 0x0508(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USphereComponent*                       _simpleCollider;                                   // 0x0510(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USphereComponent*                       _complexCollider;                                  // 0x0518(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpherePlayerOverlapComponent*          _survivorDetector;                                 // 0x0520(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActiveGasCloudTrackerComponent*        _activeGasCloudTracker;                            // 0x0528(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTag                           _cloudSizeModifierTag;                             // 0x0530(0x000C)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_53C[0x4];                                      // 0x053C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         _cumulativeLifetime;                               // 0x0540(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_544[0x14];                                     // 0x0544(0x0014)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ActivateCosmetic_BP();
	void Authority_SetCumulativeLifetime(const float Value);
	void DissipateGasCloud();
	EBombType GetGasType();
	bool IsDissipating();
	bool IsSurvivorDetectionEnabled();
	void Multicast_DissipateGasCloud();
	void OnAcquiredChanged(bool Acquired);
	void OnDelayedActivationStart(float Delay);
	void OnOverlapBegin(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnOverlapEnd(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
	void SetGasAudioActive(bool Activated);
	void SetIgnoredActors();
	void SetIsDissipating(bool IsDissipating);

	float Authority_GetCumulativeLifetime() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BaseGasCloudProjectile">();
	}
	static class ABaseGasCloudProjectile* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABaseGasCloudProjectile>();
	}
};
static_assert(alignof(ABaseGasCloudProjectile) == 0x000008, "Wrong alignment on ABaseGasCloudProjectile");
static_assert(sizeof(ABaseGasCloudProjectile) == 0x000558, "Wrong size on ABaseGasCloudProjectile");
static_assert(offsetof(ABaseGasCloudProjectile, _gasType) == 0x000328, "Member 'ABaseGasCloudProjectile::_gasType' has a wrong offset!");
static_assert(offsetof(ABaseGasCloudProjectile, _poolableProjectile) == 0x000330, "Member 'ABaseGasCloudProjectile::_poolableProjectile' has a wrong offset!");
static_assert(offsetof(ABaseGasCloudProjectile, _gasCloudDuration) == 0x000338, "Member 'ABaseGasCloudProjectile::_gasCloudDuration' has a wrong offset!");
static_assert(offsetof(ABaseGasCloudProjectile, _gasCloudGravityScale) == 0x000360, "Member 'ABaseGasCloudProjectile::_gasCloudGravityScale' has a wrong offset!");
static_assert(offsetof(ABaseGasCloudProjectile, _gasCloudBounciness) == 0x000388, "Member 'ABaseGasCloudProjectile::_gasCloudBounciness' has a wrong offset!");
static_assert(offsetof(ABaseGasCloudProjectile, _gasCloudFriction) == 0x0003B0, "Member 'ABaseGasCloudProjectile::_gasCloudFriction' has a wrong offset!");
static_assert(offsetof(ABaseGasCloudProjectile, _dissipateGasCloudTime) == 0x0003D8, "Member 'ABaseGasCloudProjectile::_dissipateGasCloudTime' has a wrong offset!");
static_assert(offsetof(ABaseGasCloudProjectile, _gasCloudMinimumLifetime) == 0x000400, "Member 'ABaseGasCloudProjectile::_gasCloudMinimumLifetime' has a wrong offset!");
static_assert(offsetof(ABaseGasCloudProjectile, _gasCloudSimpleCollisionRadius) == 0x000428, "Member 'ABaseGasCloudProjectile::_gasCloudSimpleCollisionRadius' has a wrong offset!");
static_assert(offsetof(ABaseGasCloudProjectile, _gasCloudComplexCollisionRadius) == 0x000450, "Member 'ABaseGasCloudProjectile::_gasCloudComplexCollisionRadius' has a wrong offset!");
static_assert(offsetof(ABaseGasCloudProjectile, _gasCloudSurvivorDetectionRadius) == 0x000478, "Member 'ABaseGasCloudProjectile::_gasCloudSurvivorDetectionRadius' has a wrong offset!");
static_assert(offsetof(ABaseGasCloudProjectile, _gasCloudDetectionDelay) == 0x0004A0, "Member 'ABaseGasCloudProjectile::_gasCloudDetectionDelay' has a wrong offset!");
static_assert(offsetof(ABaseGasCloudProjectile, _gasCloudCosmeticFadeDuration) == 0x0004C8, "Member 'ABaseGasCloudProjectile::_gasCloudCosmeticFadeDuration' has a wrong offset!");
static_assert(offsetof(ABaseGasCloudProjectile, _overlappingTime) == 0x0004F0, "Member 'ABaseGasCloudProjectile::_overlappingTime' has a wrong offset!");
static_assert(offsetof(ABaseGasCloudProjectile, _dissipating) == 0x0004F4, "Member 'ABaseGasCloudProjectile::_dissipating' has a wrong offset!");
static_assert(offsetof(ABaseGasCloudProjectile, _overlappingSurvivors) == 0x0004F8, "Member 'ABaseGasCloudProjectile::_overlappingSurvivors' has a wrong offset!");
static_assert(offsetof(ABaseGasCloudProjectile, _gasParticleSystem) == 0x000508, "Member 'ABaseGasCloudProjectile::_gasParticleSystem' has a wrong offset!");
static_assert(offsetof(ABaseGasCloudProjectile, _simpleCollider) == 0x000510, "Member 'ABaseGasCloudProjectile::_simpleCollider' has a wrong offset!");
static_assert(offsetof(ABaseGasCloudProjectile, _complexCollider) == 0x000518, "Member 'ABaseGasCloudProjectile::_complexCollider' has a wrong offset!");
static_assert(offsetof(ABaseGasCloudProjectile, _survivorDetector) == 0x000520, "Member 'ABaseGasCloudProjectile::_survivorDetector' has a wrong offset!");
static_assert(offsetof(ABaseGasCloudProjectile, _activeGasCloudTracker) == 0x000528, "Member 'ABaseGasCloudProjectile::_activeGasCloudTracker' has a wrong offset!");
static_assert(offsetof(ABaseGasCloudProjectile, _cloudSizeModifierTag) == 0x000530, "Member 'ABaseGasCloudProjectile::_cloudSizeModifierTag' has a wrong offset!");
static_assert(offsetof(ABaseGasCloudProjectile, _cumulativeLifetime) == 0x000540, "Member 'ABaseGasCloudProjectile::_cumulativeLifetime' has a wrong offset!");

// Class TheClown.ActiveGasCloudTrackerComponent
// 0x0020 (0x00C8 - 0x00A8)
class UActiveGasCloudTrackerComponent final : public UActorComponent
{
public:
	TArray<class ABaseGasCloudProjectile*>        _activeToxinClouds;                                // 0x00A8(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class ABaseGasCloudProjectile*>        _activeAntidoteClouds;                             // 0x00B8(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ActiveGasCloudTrackerComponent">();
	}
	static class UActiveGasCloudTrackerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActiveGasCloudTrackerComponent>();
	}
};
static_assert(alignof(UActiveGasCloudTrackerComponent) == 0x000008, "Wrong alignment on UActiveGasCloudTrackerComponent");
static_assert(sizeof(UActiveGasCloudTrackerComponent) == 0x0000C8, "Wrong size on UActiveGasCloudTrackerComponent");
static_assert(offsetof(UActiveGasCloudTrackerComponent, _activeToxinClouds) == 0x0000A8, "Member 'UActiveGasCloudTrackerComponent::_activeToxinClouds' has a wrong offset!");
static_assert(offsetof(UActiveGasCloudTrackerComponent, _activeAntidoteClouds) == 0x0000B8, "Member 'UActiveGasCloudTrackerComponent::_activeAntidoteClouds' has a wrong offset!");

// Class TheClown.AISkill_InteractionTarget_ThrowAntidote
// 0x0010 (0x0440 - 0x0430)
class UAISkill_InteractionTarget_ThrowAntidote final : public UAISkill_InteractionTarget_Throw
{
public:
	float                                         _minPathLengthForThrow;                            // 0x0430(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         _minThrowDistance;                                 // 0x0434(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         _cooldownTime;                                     // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_43C[0x4];                                      // 0x043C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnPathUpdated();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISkill_InteractionTarget_ThrowAntidote">();
	}
	static class UAISkill_InteractionTarget_ThrowAntidote* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISkill_InteractionTarget_ThrowAntidote>();
	}
};
static_assert(alignof(UAISkill_InteractionTarget_ThrowAntidote) == 0x000008, "Wrong alignment on UAISkill_InteractionTarget_ThrowAntidote");
static_assert(sizeof(UAISkill_InteractionTarget_ThrowAntidote) == 0x000440, "Wrong size on UAISkill_InteractionTarget_ThrowAntidote");
static_assert(offsetof(UAISkill_InteractionTarget_ThrowAntidote, _minPathLengthForThrow) == 0x000430, "Member 'UAISkill_InteractionTarget_ThrowAntidote::_minPathLengthForThrow' has a wrong offset!");
static_assert(offsetof(UAISkill_InteractionTarget_ThrowAntidote, _minThrowDistance) == 0x000434, "Member 'UAISkill_InteractionTarget_ThrowAntidote::_minThrowDistance' has a wrong offset!");
static_assert(offsetof(UAISkill_InteractionTarget_ThrowAntidote, _cooldownTime) == 0x000438, "Member 'UAISkill_InteractionTarget_ThrowAntidote::_cooldownTime' has a wrong offset!");

// Class TheClown.AISkill_InteractionTarget_ThrowToxin
// 0x0000 (0x0430 - 0x0430)
class UAISkill_InteractionTarget_ThrowToxin final : public UAISkill_InteractionTarget_Throw
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISkill_InteractionTarget_ThrowToxin">();
	}
	static class UAISkill_InteractionTarget_ThrowToxin* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISkill_InteractionTarget_ThrowToxin>();
	}
};
static_assert(alignof(UAISkill_InteractionTarget_ThrowToxin) == 0x000008, "Wrong alignment on UAISkill_InteractionTarget_ThrowToxin");
static_assert(sizeof(UAISkill_InteractionTarget_ThrowToxin) == 0x000430, "Wrong size on UAISkill_InteractionTarget_ThrowToxin");

// Class TheClown.AISkill_Interaction_ReloadClown
// 0x0000 (0x0280 - 0x0280)
class UAISkill_Interaction_ReloadClown final : public UAISkill_Interaction
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISkill_Interaction_ReloadClown">();
	}
	static class UAISkill_Interaction_ReloadClown* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISkill_Interaction_ReloadClown>();
	}
};
static_assert(alignof(UAISkill_Interaction_ReloadClown) == 0x000008, "Wrong alignment on UAISkill_Interaction_ReloadClown");
static_assert(sizeof(UAISkill_Interaction_ReloadClown) == 0x000280, "Wrong size on UAISkill_Interaction_ReloadClown");

// Class TheClown.AISkill_Interaction_SwapToAntidote
// 0x0000 (0x0280 - 0x0280)
class UAISkill_Interaction_SwapToAntidote final : public UAISkill_Interaction
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISkill_Interaction_SwapToAntidote">();
	}
	static class UAISkill_Interaction_SwapToAntidote* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISkill_Interaction_SwapToAntidote>();
	}
};
static_assert(alignof(UAISkill_Interaction_SwapToAntidote) == 0x000008, "Wrong alignment on UAISkill_Interaction_SwapToAntidote");
static_assert(sizeof(UAISkill_Interaction_SwapToAntidote) == 0x000280, "Wrong size on UAISkill_Interaction_SwapToAntidote");

// Class TheClown.AISkill_Interaction_SwapToToxin
// 0x0000 (0x0280 - 0x0280)
class UAISkill_Interaction_SwapToToxin final : public UAISkill_Interaction
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AISkill_Interaction_SwapToToxin">();
	}
	static class UAISkill_Interaction_SwapToToxin* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAISkill_Interaction_SwapToToxin>();
	}
};
static_assert(alignof(UAISkill_Interaction_SwapToToxin) == 0x000008, "Wrong alignment on UAISkill_Interaction_SwapToToxin");
static_assert(sizeof(UAISkill_Interaction_SwapToToxin) == 0x000280, "Wrong size on UAISkill_Interaction_SwapToToxin");

// Class TheClown.AntidoteCloudProjectile
// 0x0000 (0x0558 - 0x0558)
class AAntidoteCloudProjectile final : public ABaseGasCloudProjectile
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AntidoteCloudProjectile">();
	}
	static class AAntidoteCloudProjectile* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAntidoteCloudProjectile>();
	}
};
static_assert(alignof(AAntidoteCloudProjectile) == 0x000008, "Wrong alignment on AAntidoteCloudProjectile");
static_assert(sizeof(AAntidoteCloudProjectile) == 0x000558, "Wrong size on AAntidoteCloudProjectile");

// Class TheClown.Bamboozle
// 0x0020 (0x0440 - 0x0420)
class UBamboozle final : public UPerk
{
public:
	uint8                                         Pad_420[0x8];                                      // 0x0420(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         _windowBlockDurations[0x3];                        // 0x0428(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _windowVaultSpeed[0x3];                            // 0x0434(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Bamboozle">();
	}
	static class UBamboozle* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBamboozle>();
	}
};
static_assert(alignof(UBamboozle) == 0x000008, "Wrong alignment on UBamboozle");
static_assert(sizeof(UBamboozle) == 0x000440, "Wrong size on UBamboozle");
static_assert(offsetof(UBamboozle, _windowBlockDurations) == 0x000428, "Member 'UBamboozle::_windowBlockDurations' has a wrong offset!");
static_assert(offsetof(UBamboozle, _windowVaultSpeed) == 0x000434, "Member 'UBamboozle::_windowVaultSpeed' has a wrong offset!");

// Class TheClown.BombLauncher
// 0x0018 (0x01B0 - 0x0198)
class UBombLauncher final : public UKillerProjectileLauncher
{
public:
	class UCurveFloat*                            _speedCurve;                                       // 0x0198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveFloat*                            _pitchCurve;                                       // 0x01A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	EBombType                                     _currentBombType;                                  // 0x01A8(0x0001)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Local_SwitchBombType();
	void LocalLaunch(float PercentThrowStrength);
	void Server_SwitchBombType();
	void SetPercentThrowStrength(float ThrowStrength);
	void SetProjectilePitchCurve(class UCurveFloat* NewProjectilePitchCurve);
	void SetProjectileSpeedCurve(class UCurveFloat* NewProjectileSpeedCurve);

	EBombType GetCurrentBombType() const;
	float GetPercentThrowStrenght() const;
	bool IsBombFullyCharged() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BombLauncher">();
	}
	static class UBombLauncher* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBombLauncher>();
	}
};
static_assert(alignof(UBombLauncher) == 0x000008, "Wrong alignment on UBombLauncher");
static_assert(sizeof(UBombLauncher) == 0x0001B0, "Wrong size on UBombLauncher");
static_assert(offsetof(UBombLauncher, _speedCurve) == 0x000198, "Member 'UBombLauncher::_speedCurve' has a wrong offset!");
static_assert(offsetof(UBombLauncher, _pitchCurve) == 0x0001A0, "Member 'UBombLauncher::_pitchCurve' has a wrong offset!");
static_assert(offsetof(UBombLauncher, _currentBombType) == 0x0001A8, "Member 'UBombLauncher::_currentBombType' has a wrong offset!");

// Class TheClown.ClownFingersAnimInstance
// 0x0010 (0x0360 - 0x0350)
class UClownFingersAnimInstance final : public UAnimInstance
{
public:
	bool                                          _isObservedCharacterSlasher;                       // 0x0350(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_351[0xF];                                      // 0x0351(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ClownFingersAnimInstance">();
	}
	static class UClownFingersAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UClownFingersAnimInstance>();
	}
};
static_assert(alignof(UClownFingersAnimInstance) == 0x000010, "Wrong alignment on UClownFingersAnimInstance");
static_assert(sizeof(UClownFingersAnimInstance) == 0x000360, "Wrong size on UClownFingersAnimInstance");
static_assert(offsetof(UClownFingersAnimInstance, _isObservedCharacterSlasher) == 0x000350, "Member 'UClownFingersAnimInstance::_isObservedCharacterSlasher' has a wrong offset!");

// Class TheClown.GasDizzyCosmeticEffect
// 0x0070 (0x0310 - 0x02A0)
class AGasDizzyCosmeticEffect final : public AActor
{
public:
	class UPostProcessComponent*                  _dizzyPostProcess;                                 // 0x02A0(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_2A8[0x68];                                     // 0x02A8(0x0068)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Cosmetic_SetDizzyEffectActive(bool IsActive);
	void SetWantsDizzyEffectActive(bool IsActive);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GasDizzyCosmeticEffect">();
	}
	static class AGasDizzyCosmeticEffect* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGasDizzyCosmeticEffect>();
	}
};
static_assert(alignof(AGasDizzyCosmeticEffect) == 0x000008, "Wrong alignment on AGasDizzyCosmeticEffect");
static_assert(sizeof(AGasDizzyCosmeticEffect) == 0x000310, "Wrong size on AGasDizzyCosmeticEffect");
static_assert(offsetof(AGasDizzyCosmeticEffect, _dizzyPostProcess) == 0x0002A0, "Member 'AGasDizzyCosmeticEffect::_dizzyPostProcess' has a wrong offset!");

// Class TheClown.GassedStatusEffect
// 0x00B8 (0x0438 - 0x0380)
class UGassedStatusEffect : public UStatusEffect
{
public:
	bool                                          _isInCloud;                                        // 0x0380(0x0001)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          _isInAntidoteCloud;                                // 0x0381(0x0001)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_382[0x6];                                      // 0x0382(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<class ABaseGasCloudProjectile*>          _overlappingClouds;                                // 0x0388(0x0050)(Transient, NativeAccessSpecifierPrivate)
	TSet<class ABaseGasCloudProjectile*>          _overlappingAntidoteClouds;                        // 0x03D8(0x0050)(Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_428[0x8];                                      // 0x0428(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	uint16                                        _totalTimesEnteringToxicClouds;                    // 0x0430(0x0002)(Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_432[0x6];                                      // 0x0432(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Authority_AddOverlappingCloud(class ABaseGasCloudProjectile* Cloud);
	void Authority_RemoveOverlappingCloud(class ABaseGasCloudProjectile* Cloud);
	void Authority_SetIsInAntidoteCloud(const bool Value);
	void Authority_SetIsInCloud(const bool Value);
	void OnAntidoteEffectBegin(float EffectDuration);
	void OnAntidoteEffectEnd(float DurationSkipped);
	void OnDirectBottleHit(EBombType bottleType);
	void OnRep_IsInAntidoteCloud();
	void OnRep_TotalTimesEnteringToxicClouds();
	void OnToxinCured();
	void OnToxinEffectBegin(float EffectDuration);
	void OnToxinEffectEnd(float DurationSkipped);
	void SetRemainingAntidoteDuration(const float Value);
	void SetRemainingDuration(const float Value);
	void UpdateAntidoteEffectVFX(float DurationRemaining);

	float GetAntidoteCloudEffectDuration() const;
	float GetCloudEffectDuration() const;
	float GetRemainingAntidoteDuration() const;
	float GetRemainingDuration() const;
	bool IsInAntidoteCloud() const;
	bool IsInCloud() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GassedStatusEffect">();
	}
	static class UGassedStatusEffect* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGassedStatusEffect>();
	}
};
static_assert(alignof(UGassedStatusEffect) == 0x000008, "Wrong alignment on UGassedStatusEffect");
static_assert(sizeof(UGassedStatusEffect) == 0x000438, "Wrong size on UGassedStatusEffect");
static_assert(offsetof(UGassedStatusEffect, _isInCloud) == 0x000380, "Member 'UGassedStatusEffect::_isInCloud' has a wrong offset!");
static_assert(offsetof(UGassedStatusEffect, _isInAntidoteCloud) == 0x000381, "Member 'UGassedStatusEffect::_isInAntidoteCloud' has a wrong offset!");
static_assert(offsetof(UGassedStatusEffect, _overlappingClouds) == 0x000388, "Member 'UGassedStatusEffect::_overlappingClouds' has a wrong offset!");
static_assert(offsetof(UGassedStatusEffect, _overlappingAntidoteClouds) == 0x0003D8, "Member 'UGassedStatusEffect::_overlappingAntidoteClouds' has a wrong offset!");
static_assert(offsetof(UGassedStatusEffect, _totalTimesEnteringToxicClouds) == 0x000430, "Member 'UGassedStatusEffect::_totalTimesEnteringToxicClouds' has a wrong offset!");

// Class TheClown.GassedSurvivorSubAnimInstance
// 0x0010 (0x05F0 - 0x05E0)
class UGassedSurvivorSubAnimInstance final : public UBaseSurvivorAnimInstance
{
public:
	uint8                                         Pad_5E0[0x8];                                      // 0x05E0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          _isGassed;                                         // 0x05E8(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          _isIdle;                                           // 0x05E9(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          _isCrouched;                                       // 0x05EA(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          _isCrawling;                                       // 0x05EB(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_5EC[0x4];                                      // 0x05EC(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GassedSurvivorSubAnimInstance">();
	}
	static class UGassedSurvivorSubAnimInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGassedSurvivorSubAnimInstance>();
	}
};
static_assert(alignof(UGassedSurvivorSubAnimInstance) == 0x000010, "Wrong alignment on UGassedSurvivorSubAnimInstance");
static_assert(sizeof(UGassedSurvivorSubAnimInstance) == 0x0005F0, "Wrong size on UGassedSurvivorSubAnimInstance");
static_assert(offsetof(UGassedSurvivorSubAnimInstance, _isGassed) == 0x0005E8, "Member 'UGassedSurvivorSubAnimInstance::_isGassed' has a wrong offset!");
static_assert(offsetof(UGassedSurvivorSubAnimInstance, _isIdle) == 0x0005E9, "Member 'UGassedSurvivorSubAnimInstance::_isIdle' has a wrong offset!");
static_assert(offsetof(UGassedSurvivorSubAnimInstance, _isCrouched) == 0x0005EA, "Member 'UGassedSurvivorSubAnimInstance::_isCrouched' has a wrong offset!");
static_assert(offsetof(UGassedSurvivorSubAnimInstance, _isCrawling) == 0x0005EB, "Member 'UGassedSurvivorSubAnimInstance::_isCrawling' has a wrong offset!");

// Class TheClown.PopGoesTheWeasel
// 0x0010 (0x0430 - 0x0420)
class UPopGoesTheWeasel final : public UPerk
{
public:
	float                                         _activePerkDuration[0x3];                          // 0x0420(0x0004)(Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_42C[0x4];                                      // 0x042C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetActivePerkDurationAtLevel() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PopGoesTheWeasel">();
	}
	static class UPopGoesTheWeasel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPopGoesTheWeasel>();
	}
};
static_assert(alignof(UPopGoesTheWeasel) == 0x000008, "Wrong alignment on UPopGoesTheWeasel");
static_assert(sizeof(UPopGoesTheWeasel) == 0x000430, "Wrong size on UPopGoesTheWeasel");
static_assert(offsetof(UPopGoesTheWeasel, _activePerkDuration) == 0x000420, "Member 'UPopGoesTheWeasel::_activePerkDuration' has a wrong offset!");

// Class TheClown.SurvivorGasCloudEffect
// 0x0078 (0x04B0 - 0x0438)
class USurvivorGasCloudEffect final : public UGassedStatusEffect
{
public:
	class AGasDizzyCosmeticEffect*                _dizzyCosmeticEffect;                              // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class AGasDizzyCosmeticEffect>    _gasDizzyCosmeticEffectClass;                      // 0x0440(0x0008)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_448[0x8];                                      // 0x0448(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             _dizzyEffectRelativeTransform;                     // 0x0450(0x0060)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SurvivorGasCloudEffect">();
	}
	static class USurvivorGasCloudEffect* GetDefaultObj()
	{
		return GetDefaultObjImpl<USurvivorGasCloudEffect>();
	}
};
static_assert(alignof(USurvivorGasCloudEffect) == 0x000010, "Wrong alignment on USurvivorGasCloudEffect");
static_assert(sizeof(USurvivorGasCloudEffect) == 0x0004B0, "Wrong size on USurvivorGasCloudEffect");
static_assert(offsetof(USurvivorGasCloudEffect, _dizzyCosmeticEffect) == 0x000438, "Member 'USurvivorGasCloudEffect::_dizzyCosmeticEffect' has a wrong offset!");
static_assert(offsetof(USurvivorGasCloudEffect, _gasDizzyCosmeticEffectClass) == 0x000440, "Member 'USurvivorGasCloudEffect::_gasDizzyCosmeticEffectClass' has a wrong offset!");
static_assert(offsetof(USurvivorGasCloudEffect, _dizzyEffectRelativeTransform) == 0x000450, "Member 'USurvivorGasCloudEffect::_dizzyEffectRelativeTransform' has a wrong offset!");

// Class TheClown.TheClownUtilities
// 0x0000 (0x0030 - 0x0030)
class UTheClownUtilities final : public UBlueprintFunctionLibrary
{
public:
	static bool CanBeGassed(const class ADBDPlayer* Player);
	static class UActiveGasCloudTrackerComponent* GetActiveGasCloudTrackerComponent(const class UObject* WorldContextObject);
	static class UGassedStatusEffect* GetGassedStatusEffect(const class ADBDPlayer* Player);
	static bool IsAffectedByAntidote(const class ADBDPlayer* Player);
	static bool IsGassed(const class ADBDPlayer* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TheClownUtilities">();
	}
	static class UTheClownUtilities* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTheClownUtilities>();
	}
};
static_assert(alignof(UTheClownUtilities) == 0x000008, "Wrong alignment on UTheClownUtilities");
static_assert(sizeof(UTheClownUtilities) == 0x000030, "Wrong size on UTheClownUtilities");

}
