#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HemorrhageEffect

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function HemorrhageEffect.HemorrhageEffect_C.OnStoppedHealing
// 0x0010 (0x0010 - 0x0000)
struct HemorrhageEffect_C_OnStoppedHealing final
{
public:
	const class ADBDPlayer*                       Instigator;                                        // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class ADBDPlayer*                       Target;                                            // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HemorrhageEffect_C_OnStoppedHealing) == 0x000008, "Wrong alignment on HemorrhageEffect_C_OnStoppedHealing");
static_assert(sizeof(HemorrhageEffect_C_OnStoppedHealing) == 0x000010, "Wrong size on HemorrhageEffect_C_OnStoppedHealing");
static_assert(offsetof(HemorrhageEffect_C_OnStoppedHealing, Instigator) == 0x000000, "Member 'HemorrhageEffect_C_OnStoppedHealing::Instigator' has a wrong offset!");
static_assert(offsetof(HemorrhageEffect_C_OnStoppedHealing, Target) == 0x000008, "Member 'HemorrhageEffect_C_OnStoppedHealing::Target' has a wrong offset!");

// Function HemorrhageEffect.HemorrhageEffect_C.ExecuteUbergraph_HemorrhageEffect
// 0x00B0 (0x00B0 - 0x0000)
struct HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameplayModifierContainer*             CallFunc_GetOriginatingEffect_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetModifierValue_ReturnValue;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasModifierOfType_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Audio_Survivor_Grunt_Hurt_Light_Return_Value; // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class ADBDPlayer*                       K2Node_Event_instigator;                           // 0x0028(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	const class ADBDPlayer*                       K2Node_Event_target;                               // 0x0030(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_GetSocketRotation_ReturnValue;            // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0088(0x0014)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetModifierValue_GameplayModifierValue_ImplicitCast; // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect) == 0x000008, "Wrong alignment on HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect");
static_assert(sizeof(HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect) == 0x0000B0, "Wrong size on HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect");
static_assert(offsetof(HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect, EntryPoint) == 0x000000, "Member 'HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect::EntryPoint' has a wrong offset!");
static_assert(offsetof(HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect, CallFunc_GetOriginatingEffect_ReturnValue) == 0x000008, "Member 'HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect::CallFunc_GetOriginatingEffect_ReturnValue' has a wrong offset!");
static_assert(offsetof(HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect, CallFunc_GetModifierValue_ReturnValue) == 0x000010, "Member 'HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect::CallFunc_GetModifierValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect, CallFunc_HasModifierOfType_ReturnValue) == 0x000014, "Member 'HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect::CallFunc_HasModifierOfType_ReturnValue' has a wrong offset!");
static_assert(offsetof(HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect, CallFunc_Audio_Survivor_Grunt_Hurt_Light_Return_Value) == 0x000020, "Member 'HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect::CallFunc_Audio_Survivor_Grunt_Hurt_Light_Return_Value' has a wrong offset!");
static_assert(offsetof(HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect, K2Node_Event_instigator) == 0x000028, "Member 'HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect::K2Node_Event_instigator' has a wrong offset!");
static_assert(offsetof(HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect, K2Node_Event_target) == 0x000030, "Member 'HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect::K2Node_Event_target' has a wrong offset!");
static_assert(offsetof(HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect, CallFunc_GetSocketLocation_ReturnValue) == 0x000038, "Member 'HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000050, "Member 'HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect, CallFunc_Add_VectorVector_ReturnValue) == 0x000058, "Member 'HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect, CallFunc_GetSocketRotation_ReturnValue) == 0x000070, "Member 'HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect::CallFunc_GetSocketRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect, Temp_delegate_Variable) == 0x000088, "Member 'HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x0000A0, "Member 'HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect, CallFunc_PostEvent_ReturnValue) == 0x0000A8, "Member 'HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect, CallFunc_SetModifierValue_GameplayModifierValue_ImplicitCast) == 0x0000AC, "Member 'HemorrhageEffect_C_ExecuteUbergraph_HemorrhageEffect::CallFunc_SetModifierValue_GameplayModifierValue_ImplicitCast' has a wrong offset!");

}
