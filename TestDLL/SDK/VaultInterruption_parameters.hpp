#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VaultInterruption

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function VaultInterruption.VaultInterruption_C.IsInterruptionPossible
// 0x00D0 (0x00D0 - 0x0000)
struct VaultInterruption_C_IsInterruptionPossible final
{
public:
	const class ADBDPlayer*                       Interruptor;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class ADBDPlayer*                       Interruptee;                                       // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACamperPlayer*                          K2Node_DynamicCast_AsCamper_Player;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCamperHealthComponent*                 CallFunc_GetHealthComponent_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInterruptionPossible_ReturnValue;       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInjured_ReturnValue;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_32[0x6];                                       // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetVaultingObject_Window;                 // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_DynamicCast_AsActor;                        // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UInteractionDefinition*                 CallFunc_GetInteractionDefinition_ReturnValue;     // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Dot_VectorVector_ReturnValue;             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C6[0x2];                                       // 0x00C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Greater_FloatFloat_A_ImplicitCast;        // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultInterruption_C_IsInterruptionPossible) == 0x000008, "Wrong alignment on VaultInterruption_C_IsInterruptionPossible");
static_assert(sizeof(VaultInterruption_C_IsInterruptionPossible) == 0x0000D0, "Wrong size on VaultInterruption_C_IsInterruptionPossible");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, Interruptor) == 0x000000, "Member 'VaultInterruption_C_IsInterruptionPossible::Interruptor' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, Interruptee) == 0x000008, "Member 'VaultInterruption_C_IsInterruptionPossible::Interruptee' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, ReturnValue) == 0x000010, "Member 'VaultInterruption_C_IsInterruptionPossible::ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, K2Node_DynamicCast_AsCamper_Player) == 0x000018, "Member 'VaultInterruption_C_IsInterruptionPossible::K2Node_DynamicCast_AsCamper_Player' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'VaultInterruption_C_IsInterruptionPossible::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, CallFunc_Not_PreBool_ReturnValue) == 0x000021, "Member 'VaultInterruption_C_IsInterruptionPossible::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, CallFunc_GetHealthComponent_ReturnValue) == 0x000028, "Member 'VaultInterruption_C_IsInterruptionPossible::CallFunc_GetHealthComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, CallFunc_IsInterruptionPossible_ReturnValue) == 0x000030, "Member 'VaultInterruption_C_IsInterruptionPossible::CallFunc_IsInterruptionPossible_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, CallFunc_IsInjured_ReturnValue) == 0x000031, "Member 'VaultInterruption_C_IsInterruptionPossible::CallFunc_IsInjured_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000038, "Member 'VaultInterruption_C_IsInterruptionPossible::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, CallFunc_GetVaultingObject_Window) == 0x000050, "Member 'VaultInterruption_C_IsInterruptionPossible::CallFunc_GetVaultingObject_Window' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, K2Node_DynamicCast_AsActor) == 0x000058, "Member 'VaultInterruption_C_IsInterruptionPossible::K2Node_DynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'VaultInterruption_C_IsInterruptionPossible::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, CallFunc_GetInteractionDefinition_ReturnValue) == 0x000068, "Member 'VaultInterruption_C_IsInterruptionPossible::CallFunc_GetInteractionDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000070, "Member 'VaultInterruption_C_IsInterruptionPossible::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, CallFunc_GetForwardVector_ReturnValue) == 0x000088, "Member 'VaultInterruption_C_IsInterruptionPossible::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000A0, "Member 'VaultInterruption_C_IsInterruptionPossible::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, CallFunc_Dot_VectorVector_ReturnValue) == 0x0000B8, "Member 'VaultInterruption_C_IsInterruptionPossible::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0000C0, "Member 'VaultInterruption_C_IsInterruptionPossible::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000C1, "Member 'VaultInterruption_C_IsInterruptionPossible::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, CallFunc_BooleanAND_ReturnValue) == 0x0000C2, "Member 'VaultInterruption_C_IsInterruptionPossible::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, CallFunc_BooleanAND_ReturnValue_1) == 0x0000C3, "Member 'VaultInterruption_C_IsInterruptionPossible::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, CallFunc_BooleanOR_ReturnValue) == 0x0000C4, "Member 'VaultInterruption_C_IsInterruptionPossible::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, CallFunc_BooleanAND_ReturnValue_2) == 0x0000C5, "Member 'VaultInterruption_C_IsInterruptionPossible::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_IsInterruptionPossible, CallFunc_Greater_FloatFloat_A_ImplicitCast) == 0x0000C8, "Member 'VaultInterruption_C_IsInterruptionPossible::CallFunc_Greater_FloatFloat_A_ImplicitCast' has a wrong offset!");

// Function VaultInterruption.VaultInterruption_C.GetVaultingObject
// 0x0010 (0x0010 - 0x0000)
struct VaultInterruption_C_GetVaultingObject final
{
public:
	class UObject*                                Window;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AInteractable*                          CallFunc_GetInteractable_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultInterruption_C_GetVaultingObject) == 0x000008, "Wrong alignment on VaultInterruption_C_GetVaultingObject");
static_assert(sizeof(VaultInterruption_C_GetVaultingObject) == 0x000010, "Wrong size on VaultInterruption_C_GetVaultingObject");
static_assert(offsetof(VaultInterruption_C_GetVaultingObject, Window) == 0x000000, "Member 'VaultInterruption_C_GetVaultingObject::Window' has a wrong offset!");
static_assert(offsetof(VaultInterruption_C_GetVaultingObject, CallFunc_GetInteractable_ReturnValue) == 0x000008, "Member 'VaultInterruption_C_GetVaultingObject::CallFunc_GetInteractable_ReturnValue' has a wrong offset!");

}
