#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TL_Fr_16x16_LD04

#include "Basic.hpp"

#include "TileBase01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TL_Fr_16x16_LD04.BP_TL_Fr_16x16_LD04_C
// 0x01F8 (0x07F8 - 0x0600)
class ABP_TL_Fr_16x16_LD04_C final : public ATileBase01_C
{
public:
	class UDBDInstancedFoliageComponent*          InstancedFoliageActor12;                           // 0x0600(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActorSpawner*                          CalamariCageSpawner;                               // 0x0608(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          TrapPlacement;                                     // 0x0610(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  PostProcess1;                                      // 0x0618(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  PostProcess;                                       // 0x0620(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Volume02;                                          // 0x0628(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Volume01;                                          // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        PostProcessVolumes;                                // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNatAudioAmbienceBox*                   AudioAmbBox_Forest;                                // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   NavLinkBridge035;                                  // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   NavLinkFall034;                                    // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   NavLinkFall033;                                    // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   NavLinkFall032;                                    // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   NavLinkFall031;                                    // 0x0668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box1;                                              // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CharacterBlocker;                                  // 0x0678(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Ground;                                            // 0x0680(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_GT_16x16_Indus_Plain01;                         // 0x0688(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        NavLinks1;                                         // 0x0690(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDBDSphereReflectionCaptureSpawnerComponent* DBDSphereReflectionCaptureSpawner;                 // 0x0698(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root_0;                                            // 0x06A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent* Ins_Grass04_2;                                     // 0x06A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent* Ins_Grass01;                                       // 0x06B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent* FieldGrass01;                                      // 0x06B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent* Ins_Grass02;                                       // 0x06C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_COM_Rock09;                                     // 0x06C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_COM_Rock08;                                     // 0x06D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      FX_Falling_Pine_Leaves;                            // 0x06D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_COM_Rock011;                                    // 0x06E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_COM_Rock01;                                     // 0x06E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_COM_Rock05;                                     // 0x06F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_COM_Rock07;                                     // 0x06F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_COM_Rock02;                                     // 0x0700(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_COM_Rock03;                                     // 0x0708(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_COM_Rock06;                                     // 0x0710(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActorSpawner*                          ActorSpawner9;                                     // 0x0718(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActorSpawner*                          ActorSpawner7;                                     // 0x0720(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   NavLinkFall030;                                    // 0x0728(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   NavLinkFall029;                                    // 0x0730(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   NavLinkFall028;                                    // 0x0738(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   NavLinkFall027;                                    // 0x0740(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   NavLinkFall026;                                    // 0x0748(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   NavLinkFall025;                                    // 0x0750(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   NavLinkFall024;                                    // 0x0758(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   NavLinkFall023;                                    // 0x0760(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   NavLinkFall020;                                    // 0x0768(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   NavLinkFall019;                                    // 0x0770(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   NavLinkFall018;                                    // 0x0778(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   NavLinkFall08;                                     // 0x0780(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   NavLinkFall022;                                    // 0x0788(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   NavLinkFall021;                                    // 0x0790(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActorSpawner*                          BP_IND_MediumTree01_05;                            // 0x0798(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActorSpawner*                          BP_IND_BigTree01_05;                               // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActorSpawner*                          BP_IND_BigTree01_04;                               // 0x07A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActorSpawner*                          BP_IND_MediumTree01_04;                            // 0x07B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActorSpawner*                          BP_IND_BigTree01_03;                               // 0x07B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActorSpawner*                          BP_IND_MediumTree01_03;                            // 0x07C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActorSpawner*                          BP_IND_MediumTree01_02;                            // 0x07C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActorSpawner*                          BP_IND_BigTree01_01;                               // 0x07D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UActorSpawner*                          BP_IND_MediumTree01_01;                            // 0x07D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x07E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh2;                                       // 0x07E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh3;                                       // 0x07F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TL_Fr_16x16_LD04_C">();
	}
	static class ABP_TL_Fr_16x16_LD04_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TL_Fr_16x16_LD04_C>();
	}
};
static_assert(alignof(ABP_TL_Fr_16x16_LD04_C) == 0x000008, "Wrong alignment on ABP_TL_Fr_16x16_LD04_C");
static_assert(sizeof(ABP_TL_Fr_16x16_LD04_C) == 0x0007F8, "Wrong size on ABP_TL_Fr_16x16_LD04_C");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, InstancedFoliageActor12) == 0x000600, "Member 'ABP_TL_Fr_16x16_LD04_C::InstancedFoliageActor12' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, CalamariCageSpawner) == 0x000608, "Member 'ABP_TL_Fr_16x16_LD04_C::CalamariCageSpawner' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, TrapPlacement) == 0x000610, "Member 'ABP_TL_Fr_16x16_LD04_C::TrapPlacement' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, PostProcess1) == 0x000618, "Member 'ABP_TL_Fr_16x16_LD04_C::PostProcess1' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, PostProcess) == 0x000620, "Member 'ABP_TL_Fr_16x16_LD04_C::PostProcess' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, Volume02) == 0x000628, "Member 'ABP_TL_Fr_16x16_LD04_C::Volume02' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, Volume01) == 0x000630, "Member 'ABP_TL_Fr_16x16_LD04_C::Volume01' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, PostProcessVolumes) == 0x000638, "Member 'ABP_TL_Fr_16x16_LD04_C::PostProcessVolumes' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, AudioAmbBox_Forest) == 0x000640, "Member 'ABP_TL_Fr_16x16_LD04_C::AudioAmbBox_Forest' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, NavLinkBridge035) == 0x000648, "Member 'ABP_TL_Fr_16x16_LD04_C::NavLinkBridge035' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, NavLinkFall034) == 0x000650, "Member 'ABP_TL_Fr_16x16_LD04_C::NavLinkFall034' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, NavLinkFall033) == 0x000658, "Member 'ABP_TL_Fr_16x16_LD04_C::NavLinkFall033' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, NavLinkFall032) == 0x000660, "Member 'ABP_TL_Fr_16x16_LD04_C::NavLinkFall032' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, NavLinkFall031) == 0x000668, "Member 'ABP_TL_Fr_16x16_LD04_C::NavLinkFall031' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, Box1) == 0x000670, "Member 'ABP_TL_Fr_16x16_LD04_C::Box1' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, CharacterBlocker) == 0x000678, "Member 'ABP_TL_Fr_16x16_LD04_C::CharacterBlocker' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, Ground) == 0x000680, "Member 'ABP_TL_Fr_16x16_LD04_C::Ground' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, SM_GT_16x16_Indus_Plain01) == 0x000688, "Member 'ABP_TL_Fr_16x16_LD04_C::SM_GT_16x16_Indus_Plain01' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, NavLinks1) == 0x000690, "Member 'ABP_TL_Fr_16x16_LD04_C::NavLinks1' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, DBDSphereReflectionCaptureSpawner) == 0x000698, "Member 'ABP_TL_Fr_16x16_LD04_C::DBDSphereReflectionCaptureSpawner' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, Root_0) == 0x0006A0, "Member 'ABP_TL_Fr_16x16_LD04_C::Root_0' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, Ins_Grass04_2) == 0x0006A8, "Member 'ABP_TL_Fr_16x16_LD04_C::Ins_Grass04_2' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, Ins_Grass01) == 0x0006B0, "Member 'ABP_TL_Fr_16x16_LD04_C::Ins_Grass01' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, FieldGrass01) == 0x0006B8, "Member 'ABP_TL_Fr_16x16_LD04_C::FieldGrass01' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, Ins_Grass02) == 0x0006C0, "Member 'ABP_TL_Fr_16x16_LD04_C::Ins_Grass02' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, SM_COM_Rock09) == 0x0006C8, "Member 'ABP_TL_Fr_16x16_LD04_C::SM_COM_Rock09' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, SM_COM_Rock08) == 0x0006D0, "Member 'ABP_TL_Fr_16x16_LD04_C::SM_COM_Rock08' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, FX_Falling_Pine_Leaves) == 0x0006D8, "Member 'ABP_TL_Fr_16x16_LD04_C::FX_Falling_Pine_Leaves' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, SM_COM_Rock011) == 0x0006E0, "Member 'ABP_TL_Fr_16x16_LD04_C::SM_COM_Rock011' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, SM_COM_Rock01) == 0x0006E8, "Member 'ABP_TL_Fr_16x16_LD04_C::SM_COM_Rock01' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, SM_COM_Rock05) == 0x0006F0, "Member 'ABP_TL_Fr_16x16_LD04_C::SM_COM_Rock05' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, SM_COM_Rock07) == 0x0006F8, "Member 'ABP_TL_Fr_16x16_LD04_C::SM_COM_Rock07' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, SM_COM_Rock02) == 0x000700, "Member 'ABP_TL_Fr_16x16_LD04_C::SM_COM_Rock02' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, SM_COM_Rock03) == 0x000708, "Member 'ABP_TL_Fr_16x16_LD04_C::SM_COM_Rock03' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, SM_COM_Rock06) == 0x000710, "Member 'ABP_TL_Fr_16x16_LD04_C::SM_COM_Rock06' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, ActorSpawner9) == 0x000718, "Member 'ABP_TL_Fr_16x16_LD04_C::ActorSpawner9' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, ActorSpawner7) == 0x000720, "Member 'ABP_TL_Fr_16x16_LD04_C::ActorSpawner7' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, NavLinkFall030) == 0x000728, "Member 'ABP_TL_Fr_16x16_LD04_C::NavLinkFall030' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, NavLinkFall029) == 0x000730, "Member 'ABP_TL_Fr_16x16_LD04_C::NavLinkFall029' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, NavLinkFall028) == 0x000738, "Member 'ABP_TL_Fr_16x16_LD04_C::NavLinkFall028' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, NavLinkFall027) == 0x000740, "Member 'ABP_TL_Fr_16x16_LD04_C::NavLinkFall027' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, NavLinkFall026) == 0x000748, "Member 'ABP_TL_Fr_16x16_LD04_C::NavLinkFall026' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, NavLinkFall025) == 0x000750, "Member 'ABP_TL_Fr_16x16_LD04_C::NavLinkFall025' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, NavLinkFall024) == 0x000758, "Member 'ABP_TL_Fr_16x16_LD04_C::NavLinkFall024' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, NavLinkFall023) == 0x000760, "Member 'ABP_TL_Fr_16x16_LD04_C::NavLinkFall023' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, NavLinkFall020) == 0x000768, "Member 'ABP_TL_Fr_16x16_LD04_C::NavLinkFall020' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, NavLinkFall019) == 0x000770, "Member 'ABP_TL_Fr_16x16_LD04_C::NavLinkFall019' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, NavLinkFall018) == 0x000778, "Member 'ABP_TL_Fr_16x16_LD04_C::NavLinkFall018' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, NavLinkFall08) == 0x000780, "Member 'ABP_TL_Fr_16x16_LD04_C::NavLinkFall08' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, NavLinkFall022) == 0x000788, "Member 'ABP_TL_Fr_16x16_LD04_C::NavLinkFall022' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, NavLinkFall021) == 0x000790, "Member 'ABP_TL_Fr_16x16_LD04_C::NavLinkFall021' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, BP_IND_MediumTree01_05) == 0x000798, "Member 'ABP_TL_Fr_16x16_LD04_C::BP_IND_MediumTree01_05' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, BP_IND_BigTree01_05) == 0x0007A0, "Member 'ABP_TL_Fr_16x16_LD04_C::BP_IND_BigTree01_05' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, BP_IND_BigTree01_04) == 0x0007A8, "Member 'ABP_TL_Fr_16x16_LD04_C::BP_IND_BigTree01_04' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, BP_IND_MediumTree01_04) == 0x0007B0, "Member 'ABP_TL_Fr_16x16_LD04_C::BP_IND_MediumTree01_04' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, BP_IND_BigTree01_03) == 0x0007B8, "Member 'ABP_TL_Fr_16x16_LD04_C::BP_IND_BigTree01_03' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, BP_IND_MediumTree01_03) == 0x0007C0, "Member 'ABP_TL_Fr_16x16_LD04_C::BP_IND_MediumTree01_03' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, BP_IND_MediumTree01_02) == 0x0007C8, "Member 'ABP_TL_Fr_16x16_LD04_C::BP_IND_MediumTree01_02' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, BP_IND_BigTree01_01) == 0x0007D0, "Member 'ABP_TL_Fr_16x16_LD04_C::BP_IND_BigTree01_01' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, BP_IND_MediumTree01_01) == 0x0007D8, "Member 'ABP_TL_Fr_16x16_LD04_C::BP_IND_MediumTree01_01' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, Box) == 0x0007E0, "Member 'ABP_TL_Fr_16x16_LD04_C::Box' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, StaticMesh2) == 0x0007E8, "Member 'ABP_TL_Fr_16x16_LD04_C::StaticMesh2' has a wrong offset!");
static_assert(offsetof(ABP_TL_Fr_16x16_LD04_C, StaticMesh3) == 0x0007F0, "Member 'ABP_TL_Fr_16x16_LD04_C::StaticMesh3' has a wrong offset!");

}

