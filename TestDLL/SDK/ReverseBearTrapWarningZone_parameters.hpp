#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ReverseBearTrapWarningZone

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ReverseBearTrapWarningZone.ReverseBearTrapWarningZone_C.ExecuteUbergraph_ReverseBearTrapWarningZone
// 0x0170 (0x0170 - 0x0000)
struct ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACamperPlayer*                          K2Node_DynamicCast_AsCamper_Player;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0058(0x00F0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AReverseBearTrap*                       CallFunc_GetReverseBearTrap_ReturnValue;           // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACamperPlayer*                          K2Node_DynamicCast_AsCamper_Player_1;              // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AReverseBearTrap*                       CallFunc_GetReverseBearTrap_ReturnValue_1;         // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone) == 0x000008, "Wrong alignment on ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone");
static_assert(sizeof(ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone) == 0x000170, "Wrong size on ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone");
static_assert(offsetof(ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone, EntryPoint) == 0x000000, "Member 'ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone::EntryPoint' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone, K2Node_DynamicCast_AsCamper_Player) == 0x000028, "Member 'ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone::K2Node_DynamicCast_AsCamper_Player' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000038, "Member 'ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000040, "Member 'ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000048, "Member 'ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000050, "Member 'ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone, K2Node_ComponentBoundEvent_bFromSweep) == 0x000054, "Member 'ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone, K2Node_ComponentBoundEvent_SweepResult) == 0x000058, "Member 'ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone, CallFunc_GetReverseBearTrap_ReturnValue) == 0x000148, "Member 'ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone::CallFunc_GetReverseBearTrap_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone, K2Node_DynamicCast_AsCamper_Player_1) == 0x000150, "Member 'ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone::K2Node_DynamicCast_AsCamper_Player_1' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone, K2Node_DynamicCast_bSuccess_1) == 0x000158, "Member 'ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone, CallFunc_GetReverseBearTrap_ReturnValue_1) == 0x000160, "Member 'ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone::CallFunc_GetReverseBearTrap_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone, CallFunc_IsValid_ReturnValue) == 0x000168, "Member 'ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone, CallFunc_IsValid_ReturnValue_1) == 0x000169, "Member 'ReverseBearTrapWarningZone_C_ExecuteUbergraph_ReverseBearTrapWarningZone::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function ReverseBearTrapWarningZone.ReverseBearTrapWarningZone_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function ReverseBearTrapWarningZone.ReverseBearTrapWarningZone_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x0110 (0x0110 - 0x0000)
struct ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
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
static_assert(alignof(ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000110, "Wrong size on ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'ReverseBearTrapWarningZone_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

}

