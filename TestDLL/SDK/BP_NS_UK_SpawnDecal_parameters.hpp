#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NS_UK_SpawnDecal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_NS_UK_SpawnDecal.BP_NS_UK_SpawnDecal_C.Received_NotifyTick
// 0x0168 (0x0168 - 0x0000)
struct BP_NS_UK_SpawnDecal_C_Received_NotifyTick final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         FrameDeltaTime;                                    // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0018(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue;                         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue_1;          // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UDBDGameInstance*                       CallFunc_GetDBDGameInstance_ReturnValue;           // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDecalSpawnerCollection*                CallFunc_GetDecalSpawnerCollection_ReturnValue;    // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDecalSpawnerCollection*                CallFunc_GetDecalSpawnerCollection_ReturnValue_1;  // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue_1;                       // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Lerp_ReturnValue_2;                       // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0120(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDBDDecalComponent*                     CallFunc_SpawnDecalAtLocation_ReturnValue;         // 0x0150(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UDBDDecalComponent*                     CallFunc_SpawnDecalAtLocation_ReturnValue_1;       // 0x0158(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_A_ImplicitCast;            // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_A_ImplicitCast_1;          // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick) == 0x000008, "Wrong alignment on BP_NS_UK_SpawnDecal_C_Received_NotifyTick");
static_assert(sizeof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick) == 0x000168, "Wrong size on BP_NS_UK_SpawnDecal_C_Received_NotifyTick");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, MeshComp) == 0x000000, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::MeshComp' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, Animation) == 0x000008, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::Animation' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, FrameDeltaTime) == 0x000010, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::FrameDeltaTime' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, EventReference) == 0x000018, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::EventReference' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, ReturnValue) == 0x000040, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_RandomFloatInRange_ReturnValue) == 0x000048, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_GetSocketLocation_ReturnValue) == 0x000050, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_Lerp_ReturnValue) == 0x000068, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_GetSocketLocation_ReturnValue_1) == 0x000070, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_GetSocketLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x000088, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_GetDBDGameInstance_ReturnValue) == 0x0000A0, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_GetDBDGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_BreakRotator_Roll) == 0x0000A8, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_BreakRotator_Pitch) == 0x0000AC, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_BreakRotator_Yaw) == 0x0000B0, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_GetDecalSpawnerCollection_ReturnValue) == 0x0000B8, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_GetDecalSpawnerCollection_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000C0, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_GetDecalSpawnerCollection_ReturnValue_1) == 0x0000C8, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_GetDecalSpawnerCollection_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_MakeRotator_ReturnValue) == 0x0000D0, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x0000E8, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_Lerp_ReturnValue_1) == 0x0000F0, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_Lerp_ReturnValue_2) == 0x0000F8, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_Lerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000100, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_MakeVector_ReturnValue) == 0x000108, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_MakeRotator_ReturnValue_1) == 0x000120, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_MakeVector_ReturnValue_1) == 0x000138, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_SpawnDecalAtLocation_ReturnValue) == 0x000150, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_SpawnDecalAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_SpawnDecalAtLocation_ReturnValue_1) == 0x000158, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_SpawnDecalAtLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_Add_FloatFloat_A_ImplicitCast) == 0x000160, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_Add_FloatFloat_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_NS_UK_SpawnDecal_C_Received_NotifyTick, CallFunc_Add_FloatFloat_A_ImplicitCast_1) == 0x000164, "Member 'BP_NS_UK_SpawnDecal_C_Received_NotifyTick::CallFunc_Add_FloatFloat_A_ImplicitCast_1' has a wrong offset!");

}

