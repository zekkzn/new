#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Gesture03

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Gesture03.Gesture03_C.DestroyChair
// 0x0001 (0x0001 - 0x0000)
struct Gesture03_C_DestroyChair final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Gesture03_C_DestroyChair) == 0x000001, "Wrong alignment on Gesture03_C_DestroyChair");
static_assert(sizeof(Gesture03_C_DestroyChair) == 0x000001, "Wrong size on Gesture03_C_DestroyChair");
static_assert(offsetof(Gesture03_C_DestroyChair, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'Gesture03_C_DestroyChair::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function Gesture03.Gesture03_C.ExecuteUbergraph_Gesture03
// 0x01C0 (0x01C0 - 0x0000)
struct Gesture03_C_ExecuteUbergraph_Gesture03 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             K2Node_Event_player_4;                             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_actualSnapTime;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0xC];                                       // 0x0014(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADBDPlayer*                             K2Node_Event_player_3;                             // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TransformLocation_ReturnValue;            // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ADBDPlayer*                             K2Node_Event_player_2;                             // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInterruptionDefinition*                K2Node_Event_currentInterruption;                  // 0x0118(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ADBDPlayer*                             K2Node_Event_interruptingPlayer;                   // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_128[0x8];                                      // 0x0128(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0130(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADBDPlayer*                             K2Node_Event_player_1;                             // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADBDPlayer*                             K2Node_Event_player;                               // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_hasInteractionStarted;                // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASkeletalMeshActor*                     CallFunc_FinishSpawningActor_ReturnValue;          // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Gesture03_C_ExecuteUbergraph_Gesture03) == 0x000010, "Wrong alignment on Gesture03_C_ExecuteUbergraph_Gesture03");
static_assert(sizeof(Gesture03_C_ExecuteUbergraph_Gesture03) == 0x0001C0, "Wrong size on Gesture03_C_ExecuteUbergraph_Gesture03");
static_assert(offsetof(Gesture03_C_ExecuteUbergraph_Gesture03, EntryPoint) == 0x000000, "Member 'Gesture03_C_ExecuteUbergraph_Gesture03::EntryPoint' has a wrong offset!");
static_assert(offsetof(Gesture03_C_ExecuteUbergraph_Gesture03, K2Node_Event_player_4) == 0x000008, "Member 'Gesture03_C_ExecuteUbergraph_Gesture03::K2Node_Event_player_4' has a wrong offset!");
static_assert(offsetof(Gesture03_C_ExecuteUbergraph_Gesture03, K2Node_Event_actualSnapTime) == 0x000010, "Member 'Gesture03_C_ExecuteUbergraph_Gesture03::K2Node_Event_actualSnapTime' has a wrong offset!");
static_assert(offsetof(Gesture03_C_ExecuteUbergraph_Gesture03, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'Gesture03_C_ExecuteUbergraph_Gesture03::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gesture03_C_ExecuteUbergraph_Gesture03, K2Node_Event_player_3) == 0x000080, "Member 'Gesture03_C_ExecuteUbergraph_Gesture03::K2Node_Event_player_3' has a wrong offset!");
static_assert(offsetof(Gesture03_C_ExecuteUbergraph_Gesture03, CallFunc_TransformLocation_ReturnValue) == 0x000088, "Member 'Gesture03_C_ExecuteUbergraph_Gesture03::CallFunc_TransformLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gesture03_C_ExecuteUbergraph_Gesture03, CallFunc_BreakTransform_Location) == 0x0000A0, "Member 'Gesture03_C_ExecuteUbergraph_Gesture03::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(Gesture03_C_ExecuteUbergraph_Gesture03, CallFunc_BreakTransform_Rotation) == 0x0000B8, "Member 'Gesture03_C_ExecuteUbergraph_Gesture03::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(Gesture03_C_ExecuteUbergraph_Gesture03, CallFunc_BreakTransform_Scale) == 0x0000D0, "Member 'Gesture03_C_ExecuteUbergraph_Gesture03::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(Gesture03_C_ExecuteUbergraph_Gesture03, CallFunc_BreakRotator_Roll) == 0x0000E8, "Member 'Gesture03_C_ExecuteUbergraph_Gesture03::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(Gesture03_C_ExecuteUbergraph_Gesture03, CallFunc_BreakRotator_Pitch) == 0x0000EC, "Member 'Gesture03_C_ExecuteUbergraph_Gesture03::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(Gesture03_C_ExecuteUbergraph_Gesture03, CallFunc_BreakRotator_Yaw) == 0x0000F0, "Member 'Gesture03_C_ExecuteUbergraph_Gesture03::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(Gesture03_C_ExecuteUbergraph_Gesture03, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000F4, "Member 'Gesture03_C_ExecuteUbergraph_Gesture03::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gesture03_C_ExecuteUbergraph_Gesture03, CallFunc_MakeRotator_ReturnValue) == 0x0000F8, "Member 'Gesture03_C_ExecuteUbergraph_Gesture03::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gesture03_C_ExecuteUbergraph_Gesture03, K2Node_Event_player_2) == 0x000110, "Member 'Gesture03_C_ExecuteUbergraph_Gesture03::K2Node_Event_player_2' has a wrong offset!");
static_assert(offsetof(Gesture03_C_ExecuteUbergraph_Gesture03, K2Node_Event_currentInterruption) == 0x000118, "Member 'Gesture03_C_ExecuteUbergraph_Gesture03::K2Node_Event_currentInterruption' has a wrong offset!");
static_assert(offsetof(Gesture03_C_ExecuteUbergraph_Gesture03, K2Node_Event_interruptingPlayer) == 0x000120, "Member 'Gesture03_C_ExecuteUbergraph_Gesture03::K2Node_Event_interruptingPlayer' has a wrong offset!");
static_assert(offsetof(Gesture03_C_ExecuteUbergraph_Gesture03, CallFunc_MakeTransform_ReturnValue) == 0x000130, "Member 'Gesture03_C_ExecuteUbergraph_Gesture03::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gesture03_C_ExecuteUbergraph_Gesture03, K2Node_Event_player_1) == 0x000190, "Member 'Gesture03_C_ExecuteUbergraph_Gesture03::K2Node_Event_player_1' has a wrong offset!");
static_assert(offsetof(Gesture03_C_ExecuteUbergraph_Gesture03, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000198, "Member 'Gesture03_C_ExecuteUbergraph_Gesture03::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Gesture03_C_ExecuteUbergraph_Gesture03, K2Node_Event_player) == 0x0001A0, "Member 'Gesture03_C_ExecuteUbergraph_Gesture03::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Gesture03_C_ExecuteUbergraph_Gesture03, K2Node_Event_hasInteractionStarted) == 0x0001A8, "Member 'Gesture03_C_ExecuteUbergraph_Gesture03::K2Node_Event_hasInteractionStarted' has a wrong offset!");
static_assert(offsetof(Gesture03_C_ExecuteUbergraph_Gesture03, CallFunc_FinishSpawningActor_ReturnValue) == 0x0001B0, "Member 'Gesture03_C_ExecuteUbergraph_Gesture03::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function Gesture03.Gesture03_C.OnInteractionCancelled
// 0x0008 (0x0008 - 0x0000)
struct Gesture03_C_OnInteractionCancelled final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Gesture03_C_OnInteractionCancelled) == 0x000008, "Wrong alignment on Gesture03_C_OnInteractionCancelled");
static_assert(sizeof(Gesture03_C_OnInteractionCancelled) == 0x000008, "Wrong size on Gesture03_C_OnInteractionCancelled");
static_assert(offsetof(Gesture03_C_OnInteractionCancelled, Player) == 0x000000, "Member 'Gesture03_C_OnInteractionCancelled::Player' has a wrong offset!");

// Function Gesture03.Gesture03_C.OnInteractionEnterStart
// 0x0010 (0x0010 - 0x0000)
struct Gesture03_C_OnInteractionEnterStart final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         ActualSnapTime;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Gesture03_C_OnInteractionEnterStart) == 0x000008, "Wrong alignment on Gesture03_C_OnInteractionEnterStart");
static_assert(sizeof(Gesture03_C_OnInteractionEnterStart) == 0x000010, "Wrong size on Gesture03_C_OnInteractionEnterStart");
static_assert(offsetof(Gesture03_C_OnInteractionEnterStart, Player) == 0x000000, "Member 'Gesture03_C_OnInteractionEnterStart::Player' has a wrong offset!");
static_assert(offsetof(Gesture03_C_OnInteractionEnterStart, ActualSnapTime) == 0x000008, "Member 'Gesture03_C_OnInteractionEnterStart::ActualSnapTime' has a wrong offset!");

// Function Gesture03.Gesture03_C.OnInteractionExitEnd
// 0x0008 (0x0008 - 0x0000)
struct Gesture03_C_OnInteractionExitEnd final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Gesture03_C_OnInteractionExitEnd) == 0x000008, "Wrong alignment on Gesture03_C_OnInteractionExitEnd");
static_assert(sizeof(Gesture03_C_OnInteractionExitEnd) == 0x000008, "Wrong size on Gesture03_C_OnInteractionExitEnd");
static_assert(offsetof(Gesture03_C_OnInteractionExitEnd, Player) == 0x000000, "Member 'Gesture03_C_OnInteractionExitEnd::Player' has a wrong offset!");

// Function Gesture03.Gesture03_C.OnInteractionFinished
// 0x0010 (0x0010 - 0x0000)
struct Gesture03_C_OnInteractionFinished final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          HasInteractionStarted;                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Gesture03_C_OnInteractionFinished) == 0x000008, "Wrong alignment on Gesture03_C_OnInteractionFinished");
static_assert(sizeof(Gesture03_C_OnInteractionFinished) == 0x000010, "Wrong size on Gesture03_C_OnInteractionFinished");
static_assert(offsetof(Gesture03_C_OnInteractionFinished, Player) == 0x000000, "Member 'Gesture03_C_OnInteractionFinished::Player' has a wrong offset!");
static_assert(offsetof(Gesture03_C_OnInteractionFinished, HasInteractionStarted) == 0x000008, "Member 'Gesture03_C_OnInteractionFinished::HasInteractionStarted' has a wrong offset!");

// Function Gesture03.Gesture03_C.OnInteractionInterruptStart
// 0x0018 (0x0018 - 0x0000)
struct Gesture03_C_OnInteractionInterruptStart final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInterruptionDefinition*                CurrentInterruption;                               // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ADBDPlayer*                             InterruptingPlayer;                                // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Gesture03_C_OnInteractionInterruptStart) == 0x000008, "Wrong alignment on Gesture03_C_OnInteractionInterruptStart");
static_assert(sizeof(Gesture03_C_OnInteractionInterruptStart) == 0x000018, "Wrong size on Gesture03_C_OnInteractionInterruptStart");
static_assert(offsetof(Gesture03_C_OnInteractionInterruptStart, Player) == 0x000000, "Member 'Gesture03_C_OnInteractionInterruptStart::Player' has a wrong offset!");
static_assert(offsetof(Gesture03_C_OnInteractionInterruptStart, CurrentInterruption) == 0x000008, "Member 'Gesture03_C_OnInteractionInterruptStart::CurrentInterruption' has a wrong offset!");
static_assert(offsetof(Gesture03_C_OnInteractionInterruptStart, InterruptingPlayer) == 0x000010, "Member 'Gesture03_C_OnInteractionInterruptStart::InterruptingPlayer' has a wrong offset!");

}
