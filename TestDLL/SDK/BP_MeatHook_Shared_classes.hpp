#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MeatHook_Shared

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DeadByDaylight_structs.hpp"
#include "DeadByDaylight_classes.hpp"
#include "DBDSharedTypes_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MeatHook_Shared.BP_MeatHook_Shared_C
// 0x0130 (0x07F0 - 0x06C0)
class ABP_MeatHook_Shared_C : public AMeatHook
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_AntiCampSelfUnhook_C*               AntiCampEscape;                                    // 0x06C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      ConditionalSlasherBlocker;                         // 0x06D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      SlasherBlocker;                                    // 0x06D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      CharacterCollision;                                // 0x06E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDBDCharacterPusherComponent*           DBDCharacterPusher;                                // 0x06E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USidePushStrategyComponent*             SidePushStrategy;                                  // 0x06F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      CharacterDetector;                                 // 0x06F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharmSpawnerComponent*                 CharmSpawner;                                      // 0x0700(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_SelfUnhook_C*                       Escape;                                            // 0x0708(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMeatHookOutlineUpdateStrategy*         MeatHookOutlineUpdateStrategy;                     // 0x0710(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          TrapBlocker1;                                      // 0x0718(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUnhook_C*                              Unhook;                                            // 0x0720(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        HookPoint;                                         // 0x0728(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMontagePlayer*                         MontagePlayer;                                     // 0x0730(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMeatHookStateMachine*                  MeatHookStateMachine;                              // 0x0738(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        UnhookFocalPoint;                                  // 0x0740(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USacrificeSurvivor_C*                   SacrificeSurvivor;                                 // 0x0748(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_HookSurvivor_C*                     HangSurvivor;                                      // 0x0750(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInteractor*                            MainInteractor;                                    // 0x0758(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           Ak_Audio_Meathook;                                 // 0x0760(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CamperHookedSnapTransform;                         // 0x0768(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          NoWiggleZone;                                      // 0x0770(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FxMesh_MeatHook;                                   // 0x0778(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBPC_MeatHookEffect_C*                  BPC_MeatHookEffect;                                // 0x0780(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDBDOutlineComponent*                   DBDOutline;                                        // 0x0788(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          InteractorZone;                                    // 0x0790(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0798(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChargeableComponent*                   EscapeChargeable;                                  // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChargeableComponent*                   HookChargeable;                                    // 0x07A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChargeableComponent*                   UnhookChargeable;                                  // 0x07B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugSacrifice;                                    // 0x07B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B9[0x7];                                      // 0x07B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DrainTimerTolerance;                               // 0x07C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            DrainTimeVsKillerDistance;                         // 0x07C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug;                                             // 0x07D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D1[0x3];                                      // 0x07D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SurvivorAttachSocket;                              // 0x07D4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   KillerAttachSocket;                                // 0x07E0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanBreak;                                          // 0x07EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void UpdateStrugglePercent();
	void UpdateIK();
	void SurvivorHooking();
	void SetIsStrugglingAnims(bool Value);
	void SetCamperCameraMode(EDBDCameraSocketID SocketId, bool HideVignette, bool HideVignetteHook);
	void ReceiveBeginPlay();
	void OnTickStruggle(float DeltaTime);
	void OnSurvivorHookingFXStart();
	void OnStruggleExit();
	void OnStruggleEnter();
	void OnSacrificeOut();
	void OnSacrificeIn();
	void OnReactionIn();
	void OnReaction();
	void OnHookingExit();
	void OnHookingEnter();
	void OnHookedSurvivorChanged(class ACamperPlayer* before, class ACamperPlayer* After);
	void OnHookedExit();
	void OnHookedEnter();
	void ExecuteUbergraph_BP_MeatHook_Shared(int32 EntryPoint);

	bool IsInterruptionPossible(const class ADBDPlayer* Interruptor, const class ADBDPlayer* Interruptee, const class UInteractor* Interactor, const class UInteractionDefinition* Definition, const class UInterruptionDefinition* Interruption) const;
	bool IsInteractionPossibleInternal(class ADBDPlayer* Player, const class UInteractor* Interactor, const class UInteractionDefinition* Definition, EInputInteractionType InteractionType) const;
	bool IsHookedCamperHooked() const;
	bool IsBroken() const;
	class UChargeableInteractionDefinition* GetUnhookInteraction() const;
	double GetPercentDrainTimer() const;
	class UAkComponent* GetMeatHookAkAudioComponent() const;
	class UInteractor* GetMainInteractor() const;
	class USphereComponent* GetKickSlasherDetectionZone() const;
	class UPrimitiveComponent* GetInteractorPrimitiveComponent() const;
	struct FVector GetHookPosition() const;
	class ACamperPlayer* GetHookedCamper() const;
	class ABP_Camper_Character_C* GetHookedBPCamper() const;
	class UChargeableInteractionDefinition* GetEscapeHookInteraction() const;
	class AEntity* GetEntity() const;
	class USceneComponent* GetCamperUnkookFocalPointTransform() const;
	class USceneComponent* GetCamperHookedSnapTransform() const;
	class UAnimInstance* GetAnimInstance() const;
	bool BeingUnhooked() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MeatHook_Shared_C">();
	}
	static class ABP_MeatHook_Shared_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MeatHook_Shared_C>();
	}
};
static_assert(alignof(ABP_MeatHook_Shared_C) == 0x000008, "Wrong alignment on ABP_MeatHook_Shared_C");
static_assert(sizeof(ABP_MeatHook_Shared_C) == 0x0007F0, "Wrong size on ABP_MeatHook_Shared_C");
static_assert(offsetof(ABP_MeatHook_Shared_C, UberGraphFrame) == 0x0006C0, "Member 'ABP_MeatHook_Shared_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, AntiCampEscape) == 0x0006C8, "Member 'ABP_MeatHook_Shared_C::AntiCampEscape' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, ConditionalSlasherBlocker) == 0x0006D0, "Member 'ABP_MeatHook_Shared_C::ConditionalSlasherBlocker' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, SlasherBlocker) == 0x0006D8, "Member 'ABP_MeatHook_Shared_C::SlasherBlocker' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, CharacterCollision) == 0x0006E0, "Member 'ABP_MeatHook_Shared_C::CharacterCollision' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, DBDCharacterPusher) == 0x0006E8, "Member 'ABP_MeatHook_Shared_C::DBDCharacterPusher' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, SidePushStrategy) == 0x0006F0, "Member 'ABP_MeatHook_Shared_C::SidePushStrategy' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, CharacterDetector) == 0x0006F8, "Member 'ABP_MeatHook_Shared_C::CharacterDetector' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, CharmSpawner) == 0x000700, "Member 'ABP_MeatHook_Shared_C::CharmSpawner' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, Escape) == 0x000708, "Member 'ABP_MeatHook_Shared_C::Escape' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, MeatHookOutlineUpdateStrategy) == 0x000710, "Member 'ABP_MeatHook_Shared_C::MeatHookOutlineUpdateStrategy' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, TrapBlocker1) == 0x000718, "Member 'ABP_MeatHook_Shared_C::TrapBlocker1' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, Unhook) == 0x000720, "Member 'ABP_MeatHook_Shared_C::Unhook' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, HookPoint) == 0x000728, "Member 'ABP_MeatHook_Shared_C::HookPoint' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, MontagePlayer) == 0x000730, "Member 'ABP_MeatHook_Shared_C::MontagePlayer' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, MeatHookStateMachine) == 0x000738, "Member 'ABP_MeatHook_Shared_C::MeatHookStateMachine' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, UnhookFocalPoint) == 0x000740, "Member 'ABP_MeatHook_Shared_C::UnhookFocalPoint' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, SacrificeSurvivor) == 0x000748, "Member 'ABP_MeatHook_Shared_C::SacrificeSurvivor' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, HangSurvivor) == 0x000750, "Member 'ABP_MeatHook_Shared_C::HangSurvivor' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, MainInteractor) == 0x000758, "Member 'ABP_MeatHook_Shared_C::MainInteractor' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, Ak_Audio_Meathook) == 0x000760, "Member 'ABP_MeatHook_Shared_C::Ak_Audio_Meathook' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, CamperHookedSnapTransform) == 0x000768, "Member 'ABP_MeatHook_Shared_C::CamperHookedSnapTransform' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, NoWiggleZone) == 0x000770, "Member 'ABP_MeatHook_Shared_C::NoWiggleZone' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, FxMesh_MeatHook) == 0x000778, "Member 'ABP_MeatHook_Shared_C::FxMesh_MeatHook' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, BPC_MeatHookEffect) == 0x000780, "Member 'ABP_MeatHook_Shared_C::BPC_MeatHookEffect' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, DBDOutline) == 0x000788, "Member 'ABP_MeatHook_Shared_C::DBDOutline' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, InteractorZone) == 0x000790, "Member 'ABP_MeatHook_Shared_C::InteractorZone' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, Root) == 0x000798, "Member 'ABP_MeatHook_Shared_C::Root' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, EscapeChargeable) == 0x0007A0, "Member 'ABP_MeatHook_Shared_C::EscapeChargeable' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, HookChargeable) == 0x0007A8, "Member 'ABP_MeatHook_Shared_C::HookChargeable' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, UnhookChargeable) == 0x0007B0, "Member 'ABP_MeatHook_Shared_C::UnhookChargeable' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, DebugSacrifice) == 0x0007B8, "Member 'ABP_MeatHook_Shared_C::DebugSacrifice' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, DrainTimerTolerance) == 0x0007C0, "Member 'ABP_MeatHook_Shared_C::DrainTimerTolerance' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, DrainTimeVsKillerDistance) == 0x0007C8, "Member 'ABP_MeatHook_Shared_C::DrainTimeVsKillerDistance' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, Debug) == 0x0007D0, "Member 'ABP_MeatHook_Shared_C::Debug' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, SurvivorAttachSocket) == 0x0007D4, "Member 'ABP_MeatHook_Shared_C::SurvivorAttachSocket' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, KillerAttachSocket) == 0x0007E0, "Member 'ABP_MeatHook_Shared_C::KillerAttachSocket' has a wrong offset!");
static_assert(offsetof(ABP_MeatHook_Shared_C, CanBreak) == 0x0007EC, "Member 'ABP_MeatHook_Shared_C::CanBreak' has a wrong offset!");

}
