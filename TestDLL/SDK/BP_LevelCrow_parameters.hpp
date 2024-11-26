#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_LevelCrow

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function BP_LevelCrow.BP_LevelCrow_C.OnTriggered_Event_0
// 0x0020 (0x0020 - 0x0000)
struct BP_LevelCrow_C_OnTriggered_Event_0 final
{
public:
	class AActor*                                 Param_Instigator;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LevelCrow_C_OnTriggered_Event_0) == 0x000008, "Wrong alignment on BP_LevelCrow_C_OnTriggered_Event_0");
static_assert(sizeof(BP_LevelCrow_C_OnTriggered_Event_0) == 0x000020, "Wrong size on BP_LevelCrow_C_OnTriggered_Event_0");
static_assert(offsetof(BP_LevelCrow_C_OnTriggered_Event_0, Param_Instigator) == 0x000000, "Member 'BP_LevelCrow_C_OnTriggered_Event_0::Param_Instigator' has a wrong offset!");
static_assert(offsetof(BP_LevelCrow_C_OnTriggered_Event_0, Location) == 0x000008, "Member 'BP_LevelCrow_C_OnTriggered_Event_0::Location' has a wrong offset!");

// Function BP_LevelCrow.BP_LevelCrow_C.GetLandingDuration
// 0x0018 (0x0018 - 0x0000)
struct BP_LevelCrow_C_GetLandingDuration final
{
public:
	double                                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimSequenceLength_ReturnValue;        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LevelCrow_C_GetLandingDuration) == 0x000008, "Wrong alignment on BP_LevelCrow_C_GetLandingDuration");
static_assert(sizeof(BP_LevelCrow_C_GetLandingDuration) == 0x000018, "Wrong size on BP_LevelCrow_C_GetLandingDuration");
static_assert(offsetof(BP_LevelCrow_C_GetLandingDuration, ReturnValue) == 0x000000, "Member 'BP_LevelCrow_C_GetLandingDuration::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelCrow_C_GetLandingDuration, CallFunc_GetAnimSequenceLength_ReturnValue) == 0x000008, "Member 'BP_LevelCrow_C_GetLandingDuration::CallFunc_GetAnimSequenceLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelCrow_C_GetLandingDuration, K2Node_FunctionResult_ReturnValue_ImplicitCast) == 0x000010, "Member 'BP_LevelCrow_C_GetLandingDuration::K2Node_FunctionResult_ReturnValue_ImplicitCast' has a wrong offset!");

// Function BP_LevelCrow.BP_LevelCrow_C.ExecuteUbergraph_BP_LevelCrow
// 0x0098 (0x0098 - 0x0000)
struct BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDBDDesignTunables*                     CallFunc_GetEngineSubsystem_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0010(0x0014)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTunableValue_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTunableValue_ReturnValue_1;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_Instigator;                     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Location;                       // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* Instigator, const struct FVector& Location)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0080(0x0014)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow) == 0x000008, "Wrong alignment on BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow");
static_assert(sizeof(BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow) == 0x000098, "Wrong size on BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow");
static_assert(offsetof(BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow, EntryPoint) == 0x000000, "Member 'BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow, CallFunc_GetEngineSubsystem_ReturnValue) == 0x000008, "Member 'BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow::CallFunc_GetEngineSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow, Temp_delegate_Variable) == 0x000010, "Member 'BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow, CallFunc_GetTunableValue_ReturnValue) == 0x000024, "Member 'BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow::CallFunc_GetTunableValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow, CallFunc_GetTunableValue_ReturnValue_1) == 0x000028, "Member 'BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow::CallFunc_GetTunableValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow, K2Node_CustomEvent_Instigator) == 0x000040, "Member 'BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow::K2Node_CustomEvent_Instigator' has a wrong offset!");
static_assert(offsetof(BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow, K2Node_CustomEvent_Location) == 0x000048, "Member 'BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow::K2Node_CustomEvent_Location' has a wrong offset!");
static_assert(offsetof(BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow, CallFunc_HasAuthority_ReturnValue) == 0x000060, "Member 'BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow, CallFunc_PostAkEvent_ReturnValue) == 0x000064, "Member 'BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000068, "Member 'BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow, K2Node_CreateDelegate_OutputDelegate_1) == 0x000080, "Member 'BP_LevelCrow_C_ExecuteUbergraph_BP_LevelCrow::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

}

