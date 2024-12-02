#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InterruptAtInterrupteeLocation

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function InterruptAtInterrupteeLocation.InterruptAtInterrupteeLocation_C.GetInterruptionSnapPointRotationForInterruptor
// 0x0070 (0x0070 - 0x0000)
struct InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointRotationForInterruptor final
{
public:
	const class ADBDPlayer*                       Interruptor;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class ADBDPlayer*                       Interruptee;                                       // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ReturnValue;                                       // 0x0010(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetFeetPosition_ReturnValue;              // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetFeetPosition_ReturnValue_1;            // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointRotationForInterruptor) == 0x000008, "Wrong alignment on InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointRotationForInterruptor");
static_assert(sizeof(InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointRotationForInterruptor) == 0x000070, "Wrong size on InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointRotationForInterruptor");
static_assert(offsetof(InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointRotationForInterruptor, Interruptor) == 0x000000, "Member 'InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointRotationForInterruptor::Interruptor' has a wrong offset!");
static_assert(offsetof(InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointRotationForInterruptor, Interruptee) == 0x000008, "Member 'InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointRotationForInterruptor::Interruptee' has a wrong offset!");
static_assert(offsetof(InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointRotationForInterruptor, ReturnValue) == 0x000010, "Member 'InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointRotationForInterruptor::ReturnValue' has a wrong offset!");
static_assert(offsetof(InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointRotationForInterruptor, CallFunc_GetFeetPosition_ReturnValue) == 0x000028, "Member 'InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointRotationForInterruptor::CallFunc_GetFeetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointRotationForInterruptor, CallFunc_GetFeetPosition_ReturnValue_1) == 0x000040, "Member 'InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointRotationForInterruptor::CallFunc_GetFeetPosition_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointRotationForInterruptor, CallFunc_FindLookAtRotation_ReturnValue) == 0x000058, "Member 'InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointRotationForInterruptor::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");

// Function InterruptAtInterrupteeLocation.InterruptAtInterrupteeLocation_C.GetInterruptionSnapPointPositionForInterruptor
// 0x0078 (0x0078 - 0x0000)
struct InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointPositionForInterruptor final
{
public:
	const class ADBDPlayer*                       Interruptor;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class ADBDPlayer*                       Interruptee;                                       // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ReturnValue;                                       // 0x0010(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetFeetPosition_ReturnValue;              // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetFeetPosition_ReturnValue_1;            // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetClosestPointOnOrbit_ReturnValue;       // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetClosestPointOnOrbit_distance_ImplicitCast; // 0x0070(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointPositionForInterruptor) == 0x000008, "Wrong alignment on InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointPositionForInterruptor");
static_assert(sizeof(InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointPositionForInterruptor) == 0x000078, "Wrong size on InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointPositionForInterruptor");
static_assert(offsetof(InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointPositionForInterruptor, Interruptor) == 0x000000, "Member 'InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointPositionForInterruptor::Interruptor' has a wrong offset!");
static_assert(offsetof(InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointPositionForInterruptor, Interruptee) == 0x000008, "Member 'InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointPositionForInterruptor::Interruptee' has a wrong offset!");
static_assert(offsetof(InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointPositionForInterruptor, ReturnValue) == 0x000010, "Member 'InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointPositionForInterruptor::ReturnValue' has a wrong offset!");
static_assert(offsetof(InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointPositionForInterruptor, CallFunc_GetFeetPosition_ReturnValue) == 0x000028, "Member 'InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointPositionForInterruptor::CallFunc_GetFeetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointPositionForInterruptor, CallFunc_GetFeetPosition_ReturnValue_1) == 0x000040, "Member 'InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointPositionForInterruptor::CallFunc_GetFeetPosition_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointPositionForInterruptor, CallFunc_GetClosestPointOnOrbit_ReturnValue) == 0x000058, "Member 'InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointPositionForInterruptor::CallFunc_GetClosestPointOnOrbit_ReturnValue' has a wrong offset!");
static_assert(offsetof(InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointPositionForInterruptor, CallFunc_GetClosestPointOnOrbit_distance_ImplicitCast) == 0x000070, "Member 'InterruptAtInterrupteeLocation_C_GetInterruptionSnapPointPositionForInterruptor::CallFunc_GetClosestPointOnOrbit_distance_ImplicitCast' has a wrong offset!");

}

