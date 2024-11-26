#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReverseBearTrapTriggerZone

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ReverseBearTrapTriggerZone.ReverseBearTrapTriggerZone_C.ExecuteUbergraph_ReverseBearTrapTriggerZone
// 0x0170 (0x0170 - 0x0000)
struct ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x00F0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0118(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0128(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACamperPlayer*                          K2Node_DynamicCast_AsCamper_Player;                // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACamperPlayer*                          K2Node_DynamicCast_AsCamper_Player_1;              // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryInteractionType_ReturnValue;           // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0152(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_153[0x5];                                      // 0x0153(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AReverseBearTrap*                       CallFunc_GetReverseBearTrap_ReturnValue;           // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRBTActivated_ReturnValue;               // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0163(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone) == 0x000008, "Wrong alignment on ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone");
static_assert(sizeof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone) == 0x000170, "Wrong size on ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, EntryPoint) == 0x000000, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::EntryPoint' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000008, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000010, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000018, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000020, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000118, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, K2Node_ComponentBoundEvent_OtherActor) == 0x000120, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, K2Node_ComponentBoundEvent_OtherComp) == 0x000128, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000130, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, K2Node_DynamicCast_AsCamper_Player) == 0x000138, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::K2Node_DynamicCast_AsCamper_Player' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, K2Node_DynamicCast_bSuccess) == 0x000140, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, K2Node_DynamicCast_AsCamper_Player_1) == 0x000148, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::K2Node_DynamicCast_AsCamper_Player_1' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, K2Node_DynamicCast_bSuccess_1) == 0x000150, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, CallFunc_TryInteractionType_ReturnValue) == 0x000151, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::CallFunc_TryInteractionType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, CallFunc_IsLocallyControlled_ReturnValue) == 0x000152, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, CallFunc_GetReverseBearTrap_ReturnValue) == 0x000158, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::CallFunc_GetReverseBearTrap_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, CallFunc_IsValid_ReturnValue) == 0x000160, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, CallFunc_Array_RemoveItem_ReturnValue) == 0x000161, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, CallFunc_IsRBTActivated_ReturnValue) == 0x000162, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::CallFunc_IsRBTActivated_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, CallFunc_BooleanAND_ReturnValue) == 0x000163, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, CallFunc_Array_AddUnique_ReturnValue) == 0x000164, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, CallFunc_Array_Contains_ReturnValue) == 0x000168, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone, CallFunc_Not_PreBool_ReturnValue) == 0x000169, "Member 'ReverseBearTrapTriggerZone_C_ExecuteUbergraph_ReverseBearTrapTriggerZone::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function ReverseBearTrapTriggerZone.ReverseBearTrapTriggerZone_C.BndEvt__OuterBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct ReverseBearTrapTriggerZone_C_BndEvt__OuterBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ReverseBearTrapTriggerZone_C_BndEvt__OuterBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on ReverseBearTrapTriggerZone_C_BndEvt__OuterBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(ReverseBearTrapTriggerZone_C_BndEvt__OuterBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on ReverseBearTrapTriggerZone_C_BndEvt__OuterBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_BndEvt__OuterBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'ReverseBearTrapTriggerZone_C_BndEvt__OuterBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_BndEvt__OuterBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'ReverseBearTrapTriggerZone_C_BndEvt__OuterBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_BndEvt__OuterBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'ReverseBearTrapTriggerZone_C_BndEvt__OuterBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_BndEvt__OuterBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'ReverseBearTrapTriggerZone_C_BndEvt__OuterBox_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function ReverseBearTrapTriggerZone.ReverseBearTrapTriggerZone_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0110 (0x0110 - 0x0000)
struct ReverseBearTrapTriggerZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x00F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(ReverseBearTrapTriggerZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on ReverseBearTrapTriggerZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(ReverseBearTrapTriggerZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000110, "Wrong size on ReverseBearTrapTriggerZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'ReverseBearTrapTriggerZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'ReverseBearTrapTriggerZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'ReverseBearTrapTriggerZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'ReverseBearTrapTriggerZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'ReverseBearTrapTriggerZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapTriggerZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'ReverseBearTrapTriggerZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

}

