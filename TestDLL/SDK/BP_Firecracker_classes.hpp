#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Firecracker

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"
#include "DBDGameplay_classes.hpp"
#include "TheClown_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Firecracker.BP_Firecracker_C
// 0x0030 (0x0450 - 0x0420)
class ABP_Firecracker_C : public AFirecracker
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0420(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_Firecrackers;                                    // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialHelper*                        MaterialHelper;                                    // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Firecrackers_Sparks;                             // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_Opacity_Dissolve_6EDB32D341BC336F3E73B5934DF9FD2B; // 0x0440(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_6EDB32D341BC336F3E73B5934DF9FD2B; // 0x0444(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_445[0x3];                                      // 0x0445(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__Event_dissolve__EventFunc();
	void Switch_Oni_Weapons_To_Normal();
	void Switch_Kanobo_to_Normal_Mode();
	void Switch_Kanobo_To_Demon_Mode();
	void Survivor_BoonRadius_Exit();
	void Survivor_BoonRadius_Enter();
	void Stop_Travelling_PP();
	void Stop_Travelling_Dissolve();
	void Stop_Saliva_VFX();
	void Stop_Pounce_VFX();
	void StartDeathBedRelocateVignette();
	void StartDeathBedDissolve();
	void Start_Travelling_PP();
	void Start_Travelling_Dissolve();
	void Start_Saliva_VFX();
	void Start_Pounce_VFX();
	void SpawnFullScreenBlood();
	void SpawnFakeBullet();
	void ShowSyringe();
	void ShowGunBullet();
	void ShowDemonCosmetic();
	void Show_Oni_Katana();
	void SetPlayerExposedVFX();
	void SetHighlightedVFX();
	void ReturnToDemonMode();
	void ReturnOniToNormal();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void OnFuseBurnUpdate(float DeltaSeconds, float FuseTimeLeftPercent);
	void OnFuseBurnExit();
	void OnFuseBurnEnter();
	void OnExplode_BP();
	void On_Execution();
	void Killer_LungeAttack_Start();
	void Killer_LungeAttack_End();
	void K22_WrongLandingVignette(bool WrongLanding);
	void K22_WrongLanding(bool Wrong_Landing);
	void K22_SpawnWipeVFX();
	void K22_ReleaseBrother();
	void K22_QuickDissolveBrother();
	void K22_MembraneRecovery();
	void K22_MembraneDelete();
	void K22_JumpTrail_Deactivate();
	void K22_JumpTrail_Activate();
	void K22_Jump_Inactive();
	void K22_Jump_Active();
	void K22_IsAttachedLocker(bool IsAttachedLocker);
	void K22_HighlightSuccessfulAttackStop();
	void K22_HighlightSuccessfulAttack();
	void K22_HighlightMissJump_Stop();
	void K22_HighlightMissJump();
	void K22_HighlightDormantMain(bool IsDormantMain_);
	void K22_HighlightDormant(bool IsDormant_);
	void K22_DormantAttachedSlasher();
	void K22_DetachedFromSurvivor_VFX();
	void K22_BrotherDissolveLocker();
	void K22_BabyRespawn();
	void K22_BabyBloodDissolve();
	void K22_AttachedToSurvivor_VFX();
	void K12_Killer_RemoveVignette();
	void K12_Killer_PlaceVignette();
	void K12_Killer_BombSmokeColor();
	void K12_Killer_AntidoteEnd();
	void K12_Killer_AntidoteBegin();
	void K12_GetToxinVignette(EBombType Bomb_Type);
	void K12_GetAntidoteVignette();
	void K05_TrapImpactOff();
	void K05_TrapImpact();
	void K05_SetTrap();
	void K05_BloodDrops();
	void K04_TelekinesisOn();
	void K04_TelekinesisOff();
	void K04_InvisibleOn();
	void K04_InvisibleOff();
	void HideSyringeOnStun();
	void HideSyringe();
	void HideGunBullet();
	void HideDemonCosmetic();
	void Hide_Oni_Katana_TPV();
	void Hide_Oni_Katana();
	void FX_Sparks();
	void FX_OnFuseBurnUpdate(double FuseTimeLeftPercent);
	void FX_OnFuseBurnExit();
	void FX_OnFuseBurnEnter();
	void FX_OnExplode();
	void FireLoudNoise();
	void ExecuteUbergraph_BP_Firecracker(int32 EntryPoint);
	void DisableDemonMode();
	void Destroy_Blood_Orb();
	void DeactivateKnockoutVFX();
	void Camper_AntidoteBoostVignette_Start();
	void Camper_AntidoteBoostVignette_End();
	void Boon_Unbound();
	void AnimateLiquidSyringe();
	void AddBloodDrippingGKMoriMale();
	void ActivateVignetteOnWallCollision();
	void ActivateSacrificeCamBlood();
	void ActivatePounceStateVFX();
	void ActivatePlayerLightningVFX(const class UMaterialInstanceDynamic*& LightningFX, bool Intense);
	void ActivatePlayerGlitchVFX(const class UMaterialInstanceDynamic*& GlitchFX, const bool Face, bool Madness, bool Killer);
	void ActivatePlayerExposedVFX();
	void ActivateLocalPlayerExposedVFX();
	void ActivateKnockoutVFX();
	void ActivateEndGameVignette(bool IsActive);
	void ActivateDissolveItem_1();
	void ActivateAttemptEscapeVFX();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Firecracker_C">();
	}
	static class ABP_Firecracker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Firecracker_C>();
	}
};
static_assert(alignof(ABP_Firecracker_C) == 0x000008, "Wrong alignment on ABP_Firecracker_C");
static_assert(sizeof(ABP_Firecracker_C) == 0x000450, "Wrong size on ABP_Firecracker_C");
static_assert(offsetof(ABP_Firecracker_C, UberGraphFrame) == 0x000420, "Member 'ABP_Firecracker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Firecracker_C, P_Firecrackers) == 0x000428, "Member 'ABP_Firecracker_C::P_Firecrackers' has a wrong offset!");
static_assert(offsetof(ABP_Firecracker_C, MaterialHelper) == 0x000430, "Member 'ABP_Firecracker_C::MaterialHelper' has a wrong offset!");
static_assert(offsetof(ABP_Firecracker_C, P_Firecrackers_Sparks) == 0x000438, "Member 'ABP_Firecracker_C::P_Firecrackers_Sparks' has a wrong offset!");
static_assert(offsetof(ABP_Firecracker_C, Timeline_0_Opacity_Dissolve_6EDB32D341BC336F3E73B5934DF9FD2B) == 0x000440, "Member 'ABP_Firecracker_C::Timeline_0_Opacity_Dissolve_6EDB32D341BC336F3E73B5934DF9FD2B' has a wrong offset!");
static_assert(offsetof(ABP_Firecracker_C, Timeline_0__Direction_6EDB32D341BC336F3E73B5934DF9FD2B) == 0x000444, "Member 'ABP_Firecracker_C::Timeline_0__Direction_6EDB32D341BC336F3E73B5934DF9FD2B' has a wrong offset!");
static_assert(offsetof(ABP_Firecracker_C, Timeline_0) == 0x000448, "Member 'ABP_Firecracker_C::Timeline_0' has a wrong offset!");

}
