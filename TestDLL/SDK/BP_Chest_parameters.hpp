#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Chest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function BP_Chest.BP_Chest_C.UserConstructionScript
// 0x0018 (0x0018 - 0x0000)
struct BP_Chest_C_UserConstructionScript final
{
public:
	class UAttachInteractionComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class USceneComponent*>                K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(BP_Chest_C_UserConstructionScript) == 0x000008, "Wrong alignment on BP_Chest_C_UserConstructionScript");
static_assert(sizeof(BP_Chest_C_UserConstructionScript) == 0x000018, "Wrong size on BP_Chest_C_UserConstructionScript");
static_assert(offsetof(BP_Chest_C_UserConstructionScript, CallFunc_GetComponentByClass_ReturnValue) == 0x000000, "Member 'BP_Chest_C_UserConstructionScript::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chest_C_UserConstructionScript, K2Node_MakeArray_Array) == 0x000008, "Member 'BP_Chest_C_UserConstructionScript::K2Node_MakeArray_Array' has a wrong offset!");

// Function BP_Chest.BP_Chest_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_Chest_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Chest_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_Chest_C_ReceiveEndPlay");
static_assert(sizeof(BP_Chest_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_Chest_C_ReceiveEndPlay");
static_assert(offsetof(BP_Chest_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_Chest_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_Chest.BP_Chest_C.ExecuteUbergraph_BP_Chest
// 0x0068 (0x0068 - 0x0000)
struct BP_Chest_C_ExecuteUbergraph_BP_Chest final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EAkResult Result)>             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkResult Result)>             K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAkResult                                     K2Node_CustomEvent_Result_1;                       // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAkResult                                     K2Node_CustomEvent_Result;                         // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             K2Node_Event_player_1;                             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADBDPlayer*                             K2Node_Event_player;                               // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             CallFunc_GetLocallyObservedCharacter_ReturnValue;  // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Chest_C_ExecuteUbergraph_BP_Chest) == 0x000008, "Wrong alignment on BP_Chest_C_ExecuteUbergraph_BP_Chest");
static_assert(sizeof(BP_Chest_C_ExecuteUbergraph_BP_Chest) == 0x000068, "Wrong size on BP_Chest_C_ExecuteUbergraph_BP_Chest");
static_assert(offsetof(BP_Chest_C_ExecuteUbergraph_BP_Chest, EntryPoint) == 0x000000, "Member 'BP_Chest_C_ExecuteUbergraph_BP_Chest::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Chest_C_ExecuteUbergraph_BP_Chest, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_Chest_C_ExecuteUbergraph_BP_Chest::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chest_C_ExecuteUbergraph_BP_Chest, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_Chest_C_ExecuteUbergraph_BP_Chest::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Chest_C_ExecuteUbergraph_BP_Chest, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'BP_Chest_C_ExecuteUbergraph_BP_Chest::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_Chest_C_ExecuteUbergraph_BP_Chest, CallFunc_IsValid_ReturnValue_1) == 0x000030, "Member 'BP_Chest_C_ExecuteUbergraph_BP_Chest::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Chest_C_ExecuteUbergraph_BP_Chest, K2Node_SwitchEnum_CmpSuccess) == 0x000031, "Member 'BP_Chest_C_ExecuteUbergraph_BP_Chest::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Chest_C_ExecuteUbergraph_BP_Chest, K2Node_CustomEvent_Result_1) == 0x000032, "Member 'BP_Chest_C_ExecuteUbergraph_BP_Chest::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(BP_Chest_C_ExecuteUbergraph_BP_Chest, K2Node_Event_EndPlayReason) == 0x000033, "Member 'BP_Chest_C_ExecuteUbergraph_BP_Chest::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_Chest_C_ExecuteUbergraph_BP_Chest, K2Node_CustomEvent_Result) == 0x000034, "Member 'BP_Chest_C_ExecuteUbergraph_BP_Chest::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(BP_Chest_C_ExecuteUbergraph_BP_Chest, K2Node_Event_player_1) == 0x000038, "Member 'BP_Chest_C_ExecuteUbergraph_BP_Chest::K2Node_Event_player_1' has a wrong offset!");
static_assert(offsetof(BP_Chest_C_ExecuteUbergraph_BP_Chest, K2Node_Event_player) == 0x000040, "Member 'BP_Chest_C_ExecuteUbergraph_BP_Chest::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(BP_Chest_C_ExecuteUbergraph_BP_Chest, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000048, "Member 'BP_Chest_C_ExecuteUbergraph_BP_Chest::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chest_C_ExecuteUbergraph_BP_Chest, CallFunc_IsValid_ReturnValue_2) == 0x000050, "Member 'BP_Chest_C_ExecuteUbergraph_BP_Chest::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_Chest_C_ExecuteUbergraph_BP_Chest, CallFunc_GetLocallyObservedCharacter_ReturnValue) == 0x000058, "Member 'BP_Chest_C_ExecuteUbergraph_BP_Chest::CallFunc_GetLocallyObservedCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chest_C_ExecuteUbergraph_BP_Chest, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000060, "Member 'BP_Chest_C_ExecuteUbergraph_BP_Chest::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Chest_C_ExecuteUbergraph_BP_Chest, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000061, "Member 'BP_Chest_C_ExecuteUbergraph_BP_Chest::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");

// Function BP_Chest.BP_Chest_C.CustomEvent_1
// 0x0001 (0x0001 - 0x0000)
struct BP_Chest_C_CustomEvent_1 final
{
public:
	EAkResult                                     Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Chest_C_CustomEvent_1) == 0x000001, "Wrong alignment on BP_Chest_C_CustomEvent_1");
static_assert(sizeof(BP_Chest_C_CustomEvent_1) == 0x000001, "Wrong size on BP_Chest_C_CustomEvent_1");
static_assert(offsetof(BP_Chest_C_CustomEvent_1, Result) == 0x000000, "Member 'BP_Chest_C_CustomEvent_1::Result' has a wrong offset!");

// Function BP_Chest.BP_Chest_C.CustomEvent_0
// 0x0001 (0x0001 - 0x0000)
struct BP_Chest_C_CustomEvent_0 final
{
public:
	EAkResult                                     Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Chest_C_CustomEvent_0) == 0x000001, "Wrong alignment on BP_Chest_C_CustomEvent_0");
static_assert(sizeof(BP_Chest_C_CustomEvent_0) == 0x000001, "Wrong size on BP_Chest_C_CustomEvent_0");
static_assert(offsetof(BP_Chest_C_CustomEvent_0, Result) == 0x000000, "Member 'BP_Chest_C_CustomEvent_0::Result' has a wrong offset!");

// Function BP_Chest.BP_Chest_C.Cosmetic_OnUnblockSearchable
// 0x0008 (0x0008 - 0x0000)
struct BP_Chest_C_Cosmetic_OnUnblockSearchable final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Chest_C_Cosmetic_OnUnblockSearchable) == 0x000008, "Wrong alignment on BP_Chest_C_Cosmetic_OnUnblockSearchable");
static_assert(sizeof(BP_Chest_C_Cosmetic_OnUnblockSearchable) == 0x000008, "Wrong size on BP_Chest_C_Cosmetic_OnUnblockSearchable");
static_assert(offsetof(BP_Chest_C_Cosmetic_OnUnblockSearchable, Player) == 0x000000, "Member 'BP_Chest_C_Cosmetic_OnUnblockSearchable::Player' has a wrong offset!");

// Function BP_Chest.BP_Chest_C.Cosmetic_OnBlockSearchable
// 0x0008 (0x0008 - 0x0000)
struct BP_Chest_C_Cosmetic_OnBlockSearchable final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Chest_C_Cosmetic_OnBlockSearchable) == 0x000008, "Wrong alignment on BP_Chest_C_Cosmetic_OnBlockSearchable");
static_assert(sizeof(BP_Chest_C_Cosmetic_OnBlockSearchable) == 0x000008, "Wrong size on BP_Chest_C_Cosmetic_OnBlockSearchable");
static_assert(offsetof(BP_Chest_C_Cosmetic_OnBlockSearchable, Player) == 0x000000, "Member 'BP_Chest_C_Cosmetic_OnBlockSearchable::Player' has a wrong offset!");

// Function BP_Chest.BP_Chest_C.IsInterruptionPossible
// 0x0030 (0x0030 - 0x0000)
struct BP_Chest_C_IsInterruptionPossible final
{
public:
	const class ADBDPlayer*                       Interruptor;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class ADBDPlayer*                       Interruptee;                                       // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class UInteractor*                      Interactor;                                        // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	const class UInteractionDefinition*           Definition;                                        // 0x0018(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	const class UInterruptionDefinition*          Interruption;                                      // 0x0020(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0028(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Chest_C_IsInterruptionPossible) == 0x000008, "Wrong alignment on BP_Chest_C_IsInterruptionPossible");
static_assert(sizeof(BP_Chest_C_IsInterruptionPossible) == 0x000030, "Wrong size on BP_Chest_C_IsInterruptionPossible");
static_assert(offsetof(BP_Chest_C_IsInterruptionPossible, Interruptor) == 0x000000, "Member 'BP_Chest_C_IsInterruptionPossible::Interruptor' has a wrong offset!");
static_assert(offsetof(BP_Chest_C_IsInterruptionPossible, Interruptee) == 0x000008, "Member 'BP_Chest_C_IsInterruptionPossible::Interruptee' has a wrong offset!");
static_assert(offsetof(BP_Chest_C_IsInterruptionPossible, Interactor) == 0x000010, "Member 'BP_Chest_C_IsInterruptionPossible::Interactor' has a wrong offset!");
static_assert(offsetof(BP_Chest_C_IsInterruptionPossible, Definition) == 0x000018, "Member 'BP_Chest_C_IsInterruptionPossible::Definition' has a wrong offset!");
static_assert(offsetof(BP_Chest_C_IsInterruptionPossible, Interruption) == 0x000020, "Member 'BP_Chest_C_IsInterruptionPossible::Interruption' has a wrong offset!");
static_assert(offsetof(BP_Chest_C_IsInterruptionPossible, ReturnValue) == 0x000028, "Member 'BP_Chest_C_IsInterruptionPossible::ReturnValue' has a wrong offset!");

// Function BP_Chest.BP_Chest_C.GetInteractorPrimitiveComponent
// 0x0008 (0x0008 - 0x0000)
struct BP_Chest_C_GetInteractorPrimitiveComponent final
{
public:
	class UPrimitiveComponent*                    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Chest_C_GetInteractorPrimitiveComponent) == 0x000008, "Wrong alignment on BP_Chest_C_GetInteractorPrimitiveComponent");
static_assert(sizeof(BP_Chest_C_GetInteractorPrimitiveComponent) == 0x000008, "Wrong size on BP_Chest_C_GetInteractorPrimitiveComponent");
static_assert(offsetof(BP_Chest_C_GetInteractorPrimitiveComponent, ReturnValue) == 0x000000, "Member 'BP_Chest_C_GetInteractorPrimitiveComponent::ReturnValue' has a wrong offset!");

// Function BP_Chest.BP_Chest_C.GetInfectedParticles
// 0x0020 (0x0020 - 0x0000)
struct BP_Chest_C_GetInfectedParticles final
{
public:
	TArray<class UParticleSystemComponent*>       InfectedParticleArray;                             // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(BP_Chest_C_GetInfectedParticles) == 0x000008, "Wrong alignment on BP_Chest_C_GetInfectedParticles");
static_assert(sizeof(BP_Chest_C_GetInfectedParticles) == 0x000020, "Wrong size on BP_Chest_C_GetInfectedParticles");
static_assert(offsetof(BP_Chest_C_GetInfectedParticles, InfectedParticleArray) == 0x000000, "Member 'BP_Chest_C_GetInfectedParticles::InfectedParticleArray' has a wrong offset!");
static_assert(offsetof(BP_Chest_C_GetInfectedParticles, K2Node_MakeArray_Array) == 0x000010, "Member 'BP_Chest_C_GetInfectedParticles::K2Node_MakeArray_Array' has a wrong offset!");

// Function BP_Chest.BP_Chest_C.GetInfectedDecals
// 0x0010 (0x0010 - 0x0000)
struct BP_Chest_C_GetInfectedDecals final
{
public:
	TArray<class UDecalComponent*>                InfectedDecals;                                    // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
};
static_assert(alignof(BP_Chest_C_GetInfectedDecals) == 0x000008, "Wrong alignment on BP_Chest_C_GetInfectedDecals");
static_assert(sizeof(BP_Chest_C_GetInfectedDecals) == 0x000010, "Wrong size on BP_Chest_C_GetInfectedDecals");
static_assert(offsetof(BP_Chest_C_GetInfectedDecals, InfectedDecals) == 0x000000, "Member 'BP_Chest_C_GetInfectedDecals::InfectedDecals' has a wrong offset!");

}

