#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CorePingStatus

#include "Basic.hpp"

#include "DBDSharedTypes_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_CorePingStatus.WBP_CorePingStatus_C.UpdateVisibility
// 0x0010 (0x0010 - 0x0000)
struct WBP_CorePingStatus_C_UpdateVisibility final
{
public:
	class UDBDImage*                              Image;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EConnectionQuality                            Status;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCriticalOnly;                                    // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CorePingStatus_C_UpdateVisibility) == 0x000008, "Wrong alignment on WBP_CorePingStatus_C_UpdateVisibility");
static_assert(sizeof(WBP_CorePingStatus_C_UpdateVisibility) == 0x000010, "Wrong size on WBP_CorePingStatus_C_UpdateVisibility");
static_assert(offsetof(WBP_CorePingStatus_C_UpdateVisibility, Image) == 0x000000, "Member 'WBP_CorePingStatus_C_UpdateVisibility::Image' has a wrong offset!");
static_assert(offsetof(WBP_CorePingStatus_C_UpdateVisibility, Status) == 0x000008, "Member 'WBP_CorePingStatus_C_UpdateVisibility::Status' has a wrong offset!");
static_assert(offsetof(WBP_CorePingStatus_C_UpdateVisibility, IsCriticalOnly) == 0x000009, "Member 'WBP_CorePingStatus_C_UpdateVisibility::IsCriticalOnly' has a wrong offset!");
static_assert(offsetof(WBP_CorePingStatus_C_UpdateVisibility, K2Node_SwitchEnum_CmpSuccess) == 0x00000A, "Member 'WBP_CorePingStatus_C_UpdateVisibility::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_CorePingStatus.WBP_CorePingStatus_C.UpdatePing
// 0x0002 (0x0002 - 0x0000)
struct WBP_CorePingStatus_C_UpdatePing final
{
public:
	EConnectionQuality                            Status;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CorePingStatus_C_UpdatePing) == 0x000001, "Wrong alignment on WBP_CorePingStatus_C_UpdatePing");
static_assert(sizeof(WBP_CorePingStatus_C_UpdatePing) == 0x000002, "Wrong size on WBP_CorePingStatus_C_UpdatePing");
static_assert(offsetof(WBP_CorePingStatus_C_UpdatePing, Status) == 0x000000, "Member 'WBP_CorePingStatus_C_UpdatePing::Status' has a wrong offset!");
static_assert(offsetof(WBP_CorePingStatus_C_UpdatePing, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_CorePingStatus_C_UpdatePing::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_CorePingStatus.WBP_CorePingStatus_C.UpdatePacketLoss
// 0x0002 (0x0002 - 0x0000)
struct WBP_CorePingStatus_C_UpdatePacketLoss final
{
public:
	EConnectionQuality                            Status;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CorePingStatus_C_UpdatePacketLoss) == 0x000001, "Wrong alignment on WBP_CorePingStatus_C_UpdatePacketLoss");
static_assert(sizeof(WBP_CorePingStatus_C_UpdatePacketLoss) == 0x000002, "Wrong size on WBP_CorePingStatus_C_UpdatePacketLoss");
static_assert(offsetof(WBP_CorePingStatus_C_UpdatePacketLoss, Status) == 0x000000, "Member 'WBP_CorePingStatus_C_UpdatePacketLoss::Status' has a wrong offset!");
static_assert(offsetof(WBP_CorePingStatus_C_UpdatePacketLoss, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_CorePingStatus_C_UpdatePacketLoss::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_CorePingStatus.WBP_CorePingStatus_C.UpdateKillerPing
// 0x0002 (0x0002 - 0x0000)
struct WBP_CorePingStatus_C_UpdateKillerPing final
{
public:
	EConnectionQuality                            Status;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CorePingStatus_C_UpdateKillerPing) == 0x000001, "Wrong alignment on WBP_CorePingStatus_C_UpdateKillerPing");
static_assert(sizeof(WBP_CorePingStatus_C_UpdateKillerPing) == 0x000002, "Wrong size on WBP_CorePingStatus_C_UpdateKillerPing");
static_assert(offsetof(WBP_CorePingStatus_C_UpdateKillerPing, Status) == 0x000000, "Member 'WBP_CorePingStatus_C_UpdateKillerPing::Status' has a wrong offset!");
static_assert(offsetof(WBP_CorePingStatus_C_UpdateKillerPing, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_CorePingStatus_C_UpdateKillerPing::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_CorePingStatus.WBP_CorePingStatus_C.SetLocalPingStatus
// 0x0001 (0x0001 - 0x0000)
struct WBP_CorePingStatus_C_SetLocalPingStatus final
{
public:
	EConnectionQuality                            LocalPing;                                         // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CorePingStatus_C_SetLocalPingStatus) == 0x000001, "Wrong alignment on WBP_CorePingStatus_C_SetLocalPingStatus");
static_assert(sizeof(WBP_CorePingStatus_C_SetLocalPingStatus) == 0x000001, "Wrong size on WBP_CorePingStatus_C_SetLocalPingStatus");
static_assert(offsetof(WBP_CorePingStatus_C_SetLocalPingStatus, LocalPing) == 0x000000, "Member 'WBP_CorePingStatus_C_SetLocalPingStatus::LocalPing' has a wrong offset!");

// Function WBP_CorePingStatus.WBP_CorePingStatus_C.SetLocalPacketLossStatus
// 0x0001 (0x0001 - 0x0000)
struct WBP_CorePingStatus_C_SetLocalPacketLossStatus final
{
public:
	EConnectionQuality                            LocalPacketLoss;                                   // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CorePingStatus_C_SetLocalPacketLossStatus) == 0x000001, "Wrong alignment on WBP_CorePingStatus_C_SetLocalPacketLossStatus");
static_assert(sizeof(WBP_CorePingStatus_C_SetLocalPacketLossStatus) == 0x000001, "Wrong size on WBP_CorePingStatus_C_SetLocalPacketLossStatus");
static_assert(offsetof(WBP_CorePingStatus_C_SetLocalPacketLossStatus, LocalPacketLoss) == 0x000000, "Member 'WBP_CorePingStatus_C_SetLocalPacketLossStatus::LocalPacketLoss' has a wrong offset!");

// Function WBP_CorePingStatus.WBP_CorePingStatus_C.SetKillerConnectionQualityStatus
// 0x0001 (0x0001 - 0x0000)
struct WBP_CorePingStatus_C_SetKillerConnectionQualityStatus final
{
public:
	EConnectionQuality                            KillerConnectionQuality;                           // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CorePingStatus_C_SetKillerConnectionQualityStatus) == 0x000001, "Wrong alignment on WBP_CorePingStatus_C_SetKillerConnectionQualityStatus");
static_assert(sizeof(WBP_CorePingStatus_C_SetKillerConnectionQualityStatus) == 0x000001, "Wrong size on WBP_CorePingStatus_C_SetKillerConnectionQualityStatus");
static_assert(offsetof(WBP_CorePingStatus_C_SetKillerConnectionQualityStatus, KillerConnectionQuality) == 0x000000, "Member 'WBP_CorePingStatus_C_SetKillerConnectionQualityStatus::KillerConnectionQuality' has a wrong offset!");

// Function WBP_CorePingStatus.WBP_CorePingStatus_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_CorePingStatus_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CorePingStatus_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_CorePingStatus_C_PreConstruct");
static_assert(sizeof(WBP_CorePingStatus_C_PreConstruct) == 0x000001, "Wrong size on WBP_CorePingStatus_C_PreConstruct");
static_assert(offsetof(WBP_CorePingStatus_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_CorePingStatus_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_CorePingStatus.WBP_CorePingStatus_C.InitPingStatus
// 0x0004 (0x0004 - 0x0000)
struct WBP_CorePingStatus_C_InitPingStatus final
{
public:
	int32                                         NumberOfSurvivors;                                 // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CorePingStatus_C_InitPingStatus) == 0x000004, "Wrong alignment on WBP_CorePingStatus_C_InitPingStatus");
static_assert(sizeof(WBP_CorePingStatus_C_InitPingStatus) == 0x000004, "Wrong size on WBP_CorePingStatus_C_InitPingStatus");
static_assert(offsetof(WBP_CorePingStatus_C_InitPingStatus, NumberOfSurvivors) == 0x000000, "Member 'WBP_CorePingStatus_C_InitPingStatus::NumberOfSurvivors' has a wrong offset!");

// Function WBP_CorePingStatus.WBP_CorePingStatus_C.ExecuteUbergraph_WBP_CorePingStatus
// 0x0070 (0x0070 - 0x0000)
struct WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_2;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EConnectionQuality                            K2Node_Event_localPing;                            // 0x0020(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConnectionQuality                            K2Node_Event_localPacketLoss;                      // 0x0021(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EConnectionQuality                            K2Node_Event_killerConnectionQuality;              // 0x0022(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23[0x1];                                       // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_numberOfSurvivors;                    // 0x0024(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus) == 0x000008, "Wrong alignment on WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus");
static_assert(sizeof(WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus) == 0x000070, "Wrong size on WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus");
static_assert(offsetof(WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus, EntryPoint) == 0x000000, "Member 'WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x000010, "Member 'WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus, CallFunc_GetDynamicMaterial_ReturnValue_2) == 0x000018, "Member 'WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus::CallFunc_GetDynamicMaterial_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus, K2Node_Event_localPing) == 0x000020, "Member 'WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus::K2Node_Event_localPing' has a wrong offset!");
static_assert(offsetof(WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus, K2Node_Event_localPacketLoss) == 0x000021, "Member 'WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus::K2Node_Event_localPacketLoss' has a wrong offset!");
static_assert(offsetof(WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus, K2Node_Event_killerConnectionQuality) == 0x000022, "Member 'WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus::K2Node_Event_killerConnectionQuality' has a wrong offset!");
static_assert(offsetof(WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus, K2Node_Event_numberOfSurvivors) == 0x000024, "Member 'WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus::K2Node_Event_numberOfSurvivors' has a wrong offset!");
static_assert(offsetof(WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000028, "Member 'WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000030, "Member 'WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus, CallFunc_SelectFloat_ReturnValue) == 0x000038, "Member 'WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus, CallFunc_GetPosition_ReturnValue) == 0x000040, "Member 'WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus, CallFunc_BreakVector2D_X) == 0x000050, "Member 'WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus, CallFunc_BreakVector2D_Y) == 0x000058, "Member 'WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus, CallFunc_MakeVector2D_ReturnValue) == 0x000060, "Member 'WBP_CorePingStatus_C_ExecuteUbergraph_WBP_CorePingStatus::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

}
