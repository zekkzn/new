#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CamperInteractable

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DeadByDaylight_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CamperInteractable.BP_CamperInteractable_C
// 0x0120 (0x05E0 - 0x04C0)
class ABP_CamperInteractable_C final : public ACamperInteractable
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDropByStunningFlashlight_C*            DropByStunningFlashlight;                          // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpherePlayerOverlapComponent*          GlobalInteractionZone;                             // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMendSelf_C*                            MendSelf;                                          // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHealSelfWithMedkit_C*                  SelfHealWithMedkit;                                // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInteractor*                            RecoverInteractor;                                 // 0x04E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInteractor*                            GestureInteractor;                                 // 0x04F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInteractor*                            HealInteractor2;                                   // 0x04F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0500(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          InteractionZoneKill;                               // 0x0508(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMendOther_C*                           MendOther1;                                        // 0x0510(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHealOtherMedkit_C*                     HealOtherMedkit1;                                  // 0x0518(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHealOther_C*                           HealOther1;                                        // 0x0520(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UForceDrop_C*                           ForceDrop;                                         // 0x0528(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDropByStunningPallet_C*                DropByStunningPallet;                              // 0x0530(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMendOther_C*                           MendOther2;                                        // 0x0538(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInteractor*                            SlasherInteractor;                                 // 0x0540(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_EscapeMap_C*                        EscapeMap;                                         // 0x0548(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInteractor*                            KillInteractor;                                    // 0x0550(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGesture04_C*                           Gesture04;                                         // 0x0558(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGesture03_C*                           Gesture03;                                         // 0x0560(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGesture02_C*                           Gesture02;                                         // 0x0568(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGesture01_C*                           Gesture01;                                         // 0x0570(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URecover_C*                             Recover;                                           // 0x0578(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDropBySkillCheck_C*                    DropBySkillCheck;                                  // 0x0580(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDropByStunning_C*                      DropByStunning;                                    // 0x0588(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDropByWiggleFree_C*                    DropByWiggleFree;                                  // 0x0590(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDropManualWiggleFree_C*                DropManualWiggleFree;                              // 0x0598(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDropManual_C*                          DropManual;                                        // 0x05A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPickup_C*                              Pickup;                                            // 0x05A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHealOther_C*                           HealOther2;                                        // 0x05B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHealOtherMedkit_C*                     HealOtherMedkit2;                                  // 0x05B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChargeableComponent*                   CachedHPSlot;                                      // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        StartingChargePercent;                             // 0x05C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADBDPlayer*                             CachedInteractingPlayer;                           // 0x05D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ACamperPlayer*                          OwningCamper;                                      // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AddGestureInteractions();
	void AddInteraction(class UInteractionDefinition* Interaction);
	void ExecuteUbergraph_BP_CamperInteractable(int32 EntryPoint);
	void GetCloseToPlayerSnapPoint(class ADBDPlayer* SnappingPlayer, class ADBDPlayer* SnappedPlayer, struct FTransform* SnapPoint);
	void GetInterrupteeSnapPoint(class ADBDPlayer* Interruptee, class UInterruptionDefinition* CurrentInterruption, struct FTransform* Snap_Point);
	void GetInterruptorSnapPoint(class ADBDPlayer* Interruptor, class ADBDPlayer* Interruptee, class UInterruptionDefinition* CurrentInterruption, struct FTransform* Snap_Point);
	void GetMedkit(class ADBDPlayer* Player, class AMedkit** Medkit);
	void HPSlotChanged(class UChargeableComponent*& NewHPSlot, class ADBDPlayer*& InteractingPlayer, double& OldPercentFilled);
	void InitHealingInteractors();
	void Initialize_Healing_Interactions();
	void InitInteractable(class ADBDPlayer* Player);
	void ReceiveBeginPlay();
	void SkillCheckAestheticResponse();
	void UserConstructionScript();

	class ACamperPlayer* GetCamper() const;
	class UInteractor* GetSlasherInteractor() const;
	bool IsInterruptionPossible(const class ADBDPlayer* Interruptor, const class ADBDPlayer* Interruptee, const class UInteractor* Interactor, const class UInteractionDefinition* Definition, const class UInterruptionDefinition* Interruption) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CamperInteractable_C">();
	}
	static class ABP_CamperInteractable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CamperInteractable_C>();
	}
};
static_assert(alignof(ABP_CamperInteractable_C) == 0x000008, "Wrong alignment on ABP_CamperInteractable_C");
static_assert(sizeof(ABP_CamperInteractable_C) == 0x0005E0, "Wrong size on ABP_CamperInteractable_C");
static_assert(offsetof(ABP_CamperInteractable_C, UberGraphFrame) == 0x0004C0, "Member 'ABP_CamperInteractable_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, DropByStunningFlashlight) == 0x0004C8, "Member 'ABP_CamperInteractable_C::DropByStunningFlashlight' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, GlobalInteractionZone) == 0x0004D0, "Member 'ABP_CamperInteractable_C::GlobalInteractionZone' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, MendSelf) == 0x0004D8, "Member 'ABP_CamperInteractable_C::MendSelf' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, SelfHealWithMedkit) == 0x0004E0, "Member 'ABP_CamperInteractable_C::SelfHealWithMedkit' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, RecoverInteractor) == 0x0004E8, "Member 'ABP_CamperInteractable_C::RecoverInteractor' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, GestureInteractor) == 0x0004F0, "Member 'ABP_CamperInteractable_C::GestureInteractor' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, HealInteractor2) == 0x0004F8, "Member 'ABP_CamperInteractable_C::HealInteractor2' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, Sphere) == 0x000500, "Member 'ABP_CamperInteractable_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, InteractionZoneKill) == 0x000508, "Member 'ABP_CamperInteractable_C::InteractionZoneKill' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, MendOther1) == 0x000510, "Member 'ABP_CamperInteractable_C::MendOther1' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, HealOtherMedkit1) == 0x000518, "Member 'ABP_CamperInteractable_C::HealOtherMedkit1' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, HealOther1) == 0x000520, "Member 'ABP_CamperInteractable_C::HealOther1' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, ForceDrop) == 0x000528, "Member 'ABP_CamperInteractable_C::ForceDrop' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, DropByStunningPallet) == 0x000530, "Member 'ABP_CamperInteractable_C::DropByStunningPallet' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, MendOther2) == 0x000538, "Member 'ABP_CamperInteractable_C::MendOther2' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, SlasherInteractor) == 0x000540, "Member 'ABP_CamperInteractable_C::SlasherInteractor' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, EscapeMap) == 0x000548, "Member 'ABP_CamperInteractable_C::EscapeMap' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, KillInteractor) == 0x000550, "Member 'ABP_CamperInteractable_C::KillInteractor' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, Gesture04) == 0x000558, "Member 'ABP_CamperInteractable_C::Gesture04' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, Gesture03) == 0x000560, "Member 'ABP_CamperInteractable_C::Gesture03' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, Gesture02) == 0x000568, "Member 'ABP_CamperInteractable_C::Gesture02' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, Gesture01) == 0x000570, "Member 'ABP_CamperInteractable_C::Gesture01' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, Recover) == 0x000578, "Member 'ABP_CamperInteractable_C::Recover' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, DropBySkillCheck) == 0x000580, "Member 'ABP_CamperInteractable_C::DropBySkillCheck' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, DropByStunning) == 0x000588, "Member 'ABP_CamperInteractable_C::DropByStunning' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, DropByWiggleFree) == 0x000590, "Member 'ABP_CamperInteractable_C::DropByWiggleFree' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, DropManualWiggleFree) == 0x000598, "Member 'ABP_CamperInteractable_C::DropManualWiggleFree' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, DropManual) == 0x0005A0, "Member 'ABP_CamperInteractable_C::DropManual' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, Pickup) == 0x0005A8, "Member 'ABP_CamperInteractable_C::Pickup' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, HealOther2) == 0x0005B0, "Member 'ABP_CamperInteractable_C::HealOther2' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, HealOtherMedkit2) == 0x0005B8, "Member 'ABP_CamperInteractable_C::HealOtherMedkit2' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, CachedHPSlot) == 0x0005C0, "Member 'ABP_CamperInteractable_C::CachedHPSlot' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, StartingChargePercent) == 0x0005C8, "Member 'ABP_CamperInteractable_C::StartingChargePercent' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, CachedInteractingPlayer) == 0x0005D0, "Member 'ABP_CamperInteractable_C::CachedInteractingPlayer' has a wrong offset!");
static_assert(offsetof(ABP_CamperInteractable_C, OwningCamper) == 0x0005D8, "Member 'ABP_CamperInteractable_C::OwningCamper' has a wrong offset!");

}

