#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheS42

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DeadByDaylight_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function TheS42.S42P01.Authority_OnRepairProgressApplied
// 0x0018 (0x0018 - 0x0000)
struct S42P01_Authority_OnRepairProgressApplied final
{
public:
	float                                         IndividualChargeAmount;                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TotalChargeAmount;                                 // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 ChargeInstigator;                                  // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          WasCoop;                                           // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DeltaTime;                                         // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S42P01_Authority_OnRepairProgressApplied) == 0x000008, "Wrong alignment on S42P01_Authority_OnRepairProgressApplied");
static_assert(sizeof(S42P01_Authority_OnRepairProgressApplied) == 0x000018, "Wrong size on S42P01_Authority_OnRepairProgressApplied");
static_assert(offsetof(S42P01_Authority_OnRepairProgressApplied, IndividualChargeAmount) == 0x000000, "Member 'S42P01_Authority_OnRepairProgressApplied::IndividualChargeAmount' has a wrong offset!");
static_assert(offsetof(S42P01_Authority_OnRepairProgressApplied, TotalChargeAmount) == 0x000004, "Member 'S42P01_Authority_OnRepairProgressApplied::TotalChargeAmount' has a wrong offset!");
static_assert(offsetof(S42P01_Authority_OnRepairProgressApplied, ChargeInstigator) == 0x000008, "Member 'S42P01_Authority_OnRepairProgressApplied::ChargeInstigator' has a wrong offset!");
static_assert(offsetof(S42P01_Authority_OnRepairProgressApplied, WasCoop) == 0x000010, "Member 'S42P01_Authority_OnRepairProgressApplied::WasCoop' has a wrong offset!");
static_assert(offsetof(S42P01_Authority_OnRepairProgressApplied, DeltaTime) == 0x000014, "Member 'S42P01_Authority_OnRepairProgressApplied::DeltaTime' has a wrong offset!");

// Function TheS42.S42P01.GetHuskDurationAtLevel
// 0x0004 (0x0004 - 0x0000)
struct S42P01_GetHuskDurationAtLevel final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S42P01_GetHuskDurationAtLevel) == 0x000004, "Wrong alignment on S42P01_GetHuskDurationAtLevel");
static_assert(sizeof(S42P01_GetHuskDurationAtLevel) == 0x000004, "Wrong size on S42P01_GetHuskDurationAtLevel");
static_assert(offsetof(S42P01_GetHuskDurationAtLevel, ReturnValue) == 0x000000, "Member 'S42P01_GetHuskDurationAtLevel::ReturnValue' has a wrong offset!");

// Function TheS42.S42P01SurvivorHusk.Authority_OnKillerInRangeChanged
// 0x0001 (0x0001 - 0x0000)
struct S42P01SurvivorHusk_Authority_OnKillerInRangeChanged final
{
public:
	bool                                          IsInRange;                                         // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S42P01SurvivorHusk_Authority_OnKillerInRangeChanged) == 0x000001, "Wrong alignment on S42P01SurvivorHusk_Authority_OnKillerInRangeChanged");
static_assert(sizeof(S42P01SurvivorHusk_Authority_OnKillerInRangeChanged) == 0x000001, "Wrong size on S42P01SurvivorHusk_Authority_OnKillerInRangeChanged");
static_assert(offsetof(S42P01SurvivorHusk_Authority_OnKillerInRangeChanged, IsInRange) == 0x000000, "Member 'S42P01SurvivorHusk_Authority_OnKillerInRangeChanged::IsInRange' has a wrong offset!");

// Function TheS42.S42P01SurvivorHusk.Authority_OnSurvivorInRangeChanged
// 0x0010 (0x0010 - 0x0000)
struct S42P01SurvivorHusk_Authority_OnSurvivorInRangeChanged final
{
public:
	class AActor*                                 Survivor;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IsInRange;                                         // 0x0008(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(S42P01SurvivorHusk_Authority_OnSurvivorInRangeChanged) == 0x000008, "Wrong alignment on S42P01SurvivorHusk_Authority_OnSurvivorInRangeChanged");
static_assert(sizeof(S42P01SurvivorHusk_Authority_OnSurvivorInRangeChanged) == 0x000010, "Wrong size on S42P01SurvivorHusk_Authority_OnSurvivorInRangeChanged");
static_assert(offsetof(S42P01SurvivorHusk_Authority_OnSurvivorInRangeChanged, Survivor) == 0x000000, "Member 'S42P01SurvivorHusk_Authority_OnSurvivorInRangeChanged::Survivor' has a wrong offset!");
static_assert(offsetof(S42P01SurvivorHusk_Authority_OnSurvivorInRangeChanged, IsInRange) == 0x000008, "Member 'S42P01SurvivorHusk_Authority_OnSurvivorInRangeChanged::IsInRange' has a wrong offset!");

// Function TheS42.S42P01SurvivorHusk.OnCapsuleBeginOverlap
// 0x0110 (0x0110 - 0x0000)
struct S42P01SurvivorHusk_OnCapsuleBeginOverlap final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00F0)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};
static_assert(alignof(S42P01SurvivorHusk_OnCapsuleBeginOverlap) == 0x000008, "Wrong alignment on S42P01SurvivorHusk_OnCapsuleBeginOverlap");
static_assert(sizeof(S42P01SurvivorHusk_OnCapsuleBeginOverlap) == 0x000110, "Wrong size on S42P01SurvivorHusk_OnCapsuleBeginOverlap");
static_assert(offsetof(S42P01SurvivorHusk_OnCapsuleBeginOverlap, HitComponent) == 0x000000, "Member 'S42P01SurvivorHusk_OnCapsuleBeginOverlap::HitComponent' has a wrong offset!");
static_assert(offsetof(S42P01SurvivorHusk_OnCapsuleBeginOverlap, OtherActor) == 0x000008, "Member 'S42P01SurvivorHusk_OnCapsuleBeginOverlap::OtherActor' has a wrong offset!");
static_assert(offsetof(S42P01SurvivorHusk_OnCapsuleBeginOverlap, OtherComp) == 0x000010, "Member 'S42P01SurvivorHusk_OnCapsuleBeginOverlap::OtherComp' has a wrong offset!");
static_assert(offsetof(S42P01SurvivorHusk_OnCapsuleBeginOverlap, OtherBodyIndex) == 0x000018, "Member 'S42P01SurvivorHusk_OnCapsuleBeginOverlap::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(S42P01SurvivorHusk_OnCapsuleBeginOverlap, bFromSweep) == 0x00001C, "Member 'S42P01SurvivorHusk_OnCapsuleBeginOverlap::bFromSweep' has a wrong offset!");
static_assert(offsetof(S42P01SurvivorHusk_OnCapsuleBeginOverlap, SweepResult) == 0x000020, "Member 'S42P01SurvivorHusk_OnCapsuleBeginOverlap::SweepResult' has a wrong offset!");

// Function TheS42.S42P01SurvivorHusk.OnCapsuleEndOverlap
// 0x0020 (0x0020 - 0x0000)
struct S42P01SurvivorHusk_OnCapsuleEndOverlap final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(S42P01SurvivorHusk_OnCapsuleEndOverlap) == 0x000008, "Wrong alignment on S42P01SurvivorHusk_OnCapsuleEndOverlap");
static_assert(sizeof(S42P01SurvivorHusk_OnCapsuleEndOverlap) == 0x000020, "Wrong size on S42P01SurvivorHusk_OnCapsuleEndOverlap");
static_assert(offsetof(S42P01SurvivorHusk_OnCapsuleEndOverlap, OverlappedComponent) == 0x000000, "Member 'S42P01SurvivorHusk_OnCapsuleEndOverlap::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(S42P01SurvivorHusk_OnCapsuleEndOverlap, OtherActor) == 0x000008, "Member 'S42P01SurvivorHusk_OnCapsuleEndOverlap::OtherActor' has a wrong offset!");
static_assert(offsetof(S42P01SurvivorHusk_OnCapsuleEndOverlap, OtherComp) == 0x000010, "Member 'S42P01SurvivorHusk_OnCapsuleEndOverlap::OtherComp' has a wrong offset!");
static_assert(offsetof(S42P01SurvivorHusk_OnCapsuleEndOverlap, OtherBodyIndex) == 0x000018, "Member 'S42P01SurvivorHusk_OnCapsuleEndOverlap::OtherBodyIndex' has a wrong offset!");

// Function TheS42.S42P01SurvivorHusk.OnRep_PlayersInRange
// 0x0010 (0x0010 - 0x0000)
struct S42P01SurvivorHusk_OnRep_PlayersInRange final
{
public:
	TArray<class ADBDPlayer*>                     PreviousPlayersInRange;                            // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(S42P01SurvivorHusk_OnRep_PlayersInRange) == 0x000008, "Wrong alignment on S42P01SurvivorHusk_OnRep_PlayersInRange");
static_assert(sizeof(S42P01SurvivorHusk_OnRep_PlayersInRange) == 0x000010, "Wrong size on S42P01SurvivorHusk_OnRep_PlayersInRange");
static_assert(offsetof(S42P01SurvivorHusk_OnRep_PlayersInRange, PreviousPlayersInRange) == 0x000000, "Member 'S42P01SurvivorHusk_OnRep_PlayersInRange::PreviousPlayersInRange' has a wrong offset!");

// Function TheS42.S42P01SurvivorHusk.IsAnySurvivorOverlapping
// 0x0001 (0x0001 - 0x0000)
struct S42P01SurvivorHusk_IsAnySurvivorOverlapping final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S42P01SurvivorHusk_IsAnySurvivorOverlapping) == 0x000001, "Wrong alignment on S42P01SurvivorHusk_IsAnySurvivorOverlapping");
static_assert(sizeof(S42P01SurvivorHusk_IsAnySurvivorOverlapping) == 0x000001, "Wrong size on S42P01SurvivorHusk_IsAnySurvivorOverlapping");
static_assert(offsetof(S42P01SurvivorHusk_IsAnySurvivorOverlapping, ReturnValue) == 0x000000, "Member 'S42P01SurvivorHusk_IsAnySurvivorOverlapping::ReturnValue' has a wrong offset!");

// Function TheS42.S42P02.Cosmetic_S42P02PerkLoadedInGame
// 0x0010 (0x0010 - 0x0000)
struct S42P02_Cosmetic_S42P02PerkLoadedInGame final
{
public:
	TArray<class ADBDPlayer*>                     Order;                                             // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(S42P02_Cosmetic_S42P02PerkLoadedInGame) == 0x000008, "Wrong alignment on S42P02_Cosmetic_S42P02PerkLoadedInGame");
static_assert(sizeof(S42P02_Cosmetic_S42P02PerkLoadedInGame) == 0x000010, "Wrong size on S42P02_Cosmetic_S42P02PerkLoadedInGame");
static_assert(offsetof(S42P02_Cosmetic_S42P02PerkLoadedInGame, Order) == 0x000000, "Member 'S42P02_Cosmetic_S42P02PerkLoadedInGame::Order' has a wrong offset!");

// Function TheS42.S42P02.Multicast_OnPlayerScreaming
// 0x0008 (0x0008 - 0x0000)
struct S42P02_Multicast_OnPlayerScreaming final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S42P02_Multicast_OnPlayerScreaming) == 0x000008, "Wrong alignment on S42P02_Multicast_OnPlayerScreaming");
static_assert(sizeof(S42P02_Multicast_OnPlayerScreaming) == 0x000008, "Wrong size on S42P02_Multicast_OnPlayerScreaming");
static_assert(offsetof(S42P02_Multicast_OnPlayerScreaming, Player) == 0x000000, "Member 'S42P02_Multicast_OnPlayerScreaming::Player' has a wrong offset!");

// Function TheS42.S42P02.OnInteractionEntered
// 0x0008 (0x0008 - 0x0000)
struct S42P02_OnInteractionEntered final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S42P02_OnInteractionEntered) == 0x000008, "Wrong alignment on S42P02_OnInteractionEntered");
static_assert(sizeof(S42P02_OnInteractionEntered) == 0x000008, "Wrong size on S42P02_OnInteractionEntered");
static_assert(offsetof(S42P02_OnInteractionEntered, Player) == 0x000000, "Member 'S42P02_OnInteractionEntered::Player' has a wrong offset!");

// Function TheS42.S42P02.GetCooldownDurationAtLevel
// 0x0004 (0x0004 - 0x0000)
struct S42P02_GetCooldownDurationAtLevel final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S42P02_GetCooldownDurationAtLevel) == 0x000004, "Wrong alignment on S42P02_GetCooldownDurationAtLevel");
static_assert(sizeof(S42P02_GetCooldownDurationAtLevel) == 0x000004, "Wrong size on S42P02_GetCooldownDurationAtLevel");
static_assert(offsetof(S42P02_GetCooldownDurationAtLevel, ReturnValue) == 0x000000, "Member 'S42P02_GetCooldownDurationAtLevel::ReturnValue' has a wrong offset!");

// Function TheS42.S42P02Interaction.Cosmetic_OnAnimationStarted
// 0x0008 (0x0008 - 0x0000)
struct S42P02Interaction_Cosmetic_OnAnimationStarted final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S42P02Interaction_Cosmetic_OnAnimationStarted) == 0x000008, "Wrong alignment on S42P02Interaction_Cosmetic_OnAnimationStarted");
static_assert(sizeof(S42P02Interaction_Cosmetic_OnAnimationStarted) == 0x000008, "Wrong size on S42P02Interaction_Cosmetic_OnAnimationStarted");
static_assert(offsetof(S42P02Interaction_Cosmetic_OnAnimationStarted, Player) == 0x000000, "Member 'S42P02Interaction_Cosmetic_OnAnimationStarted::Player' has a wrong offset!");

// Function TheS42.S42P02Interaction.Cosmetic_StopSound
// 0x0008 (0x0008 - 0x0000)
struct S42P02Interaction_Cosmetic_StopSound final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S42P02Interaction_Cosmetic_StopSound) == 0x000008, "Wrong alignment on S42P02Interaction_Cosmetic_StopSound");
static_assert(sizeof(S42P02Interaction_Cosmetic_StopSound) == 0x000008, "Wrong size on S42P02Interaction_Cosmetic_StopSound");
static_assert(offsetof(S42P02Interaction_Cosmetic_StopSound, Player) == 0x000000, "Member 'S42P02Interaction_Cosmetic_StopSound::Player' has a wrong offset!");

// Function TheS42.S42P02InteractionInstrument.Cosmetic_OnHideEvent
// 0x0001 (0x0001 - 0x0000)
struct S42P02InteractionInstrument_Cosmetic_OnHideEvent final
{
public:
	bool                                          IsInteractionCompleted;                            // 0x0000(0x0001)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S42P02InteractionInstrument_Cosmetic_OnHideEvent) == 0x000001, "Wrong alignment on S42P02InteractionInstrument_Cosmetic_OnHideEvent");
static_assert(sizeof(S42P02InteractionInstrument_Cosmetic_OnHideEvent) == 0x000001, "Wrong size on S42P02InteractionInstrument_Cosmetic_OnHideEvent");
static_assert(offsetof(S42P02InteractionInstrument_Cosmetic_OnHideEvent, IsInteractionCompleted) == 0x000000, "Member 'S42P02InteractionInstrument_Cosmetic_OnHideEvent::IsInteractionCompleted' has a wrong offset!");

// Function TheS42.S42P03.OnHealthStateChanged
// 0x0040 (0x0040 - 0x0000)
struct S42P03_OnHealthStateChanged final
{
public:
	struct FGameplayTag                           GameplayTag;                                       // 0x0000(0x000C)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameEventData                         GameEventData;                                     // 0x0010(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(S42P03_OnHealthStateChanged) == 0x000008, "Wrong alignment on S42P03_OnHealthStateChanged");
static_assert(sizeof(S42P03_OnHealthStateChanged) == 0x000040, "Wrong size on S42P03_OnHealthStateChanged");
static_assert(offsetof(S42P03_OnHealthStateChanged, GameplayTag) == 0x000000, "Member 'S42P03_OnHealthStateChanged::GameplayTag' has a wrong offset!");
static_assert(offsetof(S42P03_OnHealthStateChanged, GameEventData) == 0x000010, "Member 'S42P03_OnHealthStateChanged::GameEventData' has a wrong offset!");

}
