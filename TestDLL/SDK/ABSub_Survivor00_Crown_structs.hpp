#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABSub_Survivor00_Crown

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// ScriptStruct ABSub_Survivor00_Crown.ABSub_Survivor00_Crown_C.AnimBlueprintGeneratedConstantData
// 0x018F (0x0190 - 0x0001)
struct ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_143;                                // 0x0004(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_144;                                // 0x0010(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_145;                                 // 0x001C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_146;                                // 0x0020(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_147;                                 // 0x002C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendProfile*                          __BlendProfile_148;                                // 0x0030(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                            __CurveFloat_149;                                  // 0x0038(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EAlphaBlendOption                             __EnumProperty_150;                                // 0x0040(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBlendListTransitionType                      __EnumProperty_151;                                // 0x0041(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 __ArrayProperty_152;                               // 0x0048(0x0010)(BlueprintVisible, EditFixedSize)
	bool                                          __BoolProperty_153;                                // 0x0058(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_154;                               // 0x005C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_155;                              // 0x0060(0x002C)(BlueprintVisible, NoDestructor)
	float                                         __FloatProperty_156;                               // 0x008C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_157;                                // 0x0090(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_158;                                // 0x0091(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_159;                                // 0x0092(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93[0x1];                                       // 0x0093(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_160;                                // 0x0094(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_161;                                 // 0x00A0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_162;                                // 0x00A4(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_163;                                 // 0x00B0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_164;                                // 0x00B4(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_165;                                // 0x00C0(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CC[0x4];                                       // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_166;                              // 0x00D0(0x0028)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00F8(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0178(0x0018)()
};
static_assert(alignof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData) == 0x000190, "Wrong size on ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __NameProperty_143) == 0x000004, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__NameProperty_143' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __NameProperty_144) == 0x000010, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__NameProperty_144' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __IntProperty_145) == 0x00001C, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__IntProperty_145' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __NameProperty_146) == 0x000020, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__NameProperty_146' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __IntProperty_147) == 0x00002C, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__IntProperty_147' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __BlendProfile_148) == 0x000030, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__BlendProfile_148' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __CurveFloat_149) == 0x000038, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__CurveFloat_149' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __EnumProperty_150) == 0x000040, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__EnumProperty_150' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __EnumProperty_151) == 0x000041, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__EnumProperty_151' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __ArrayProperty_152) == 0x000048, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__ArrayProperty_152' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __BoolProperty_153) == 0x000058, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__BoolProperty_153' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __FloatProperty_154) == 0x00005C, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__FloatProperty_154' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __StructProperty_155) == 0x000060, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__StructProperty_155' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __FloatProperty_156) == 0x00008C, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__FloatProperty_156' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __BoolProperty_157) == 0x000090, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__BoolProperty_157' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __EnumProperty_158) == 0x000091, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__EnumProperty_158' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __ByteProperty_159) == 0x000092, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__ByteProperty_159' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __NameProperty_160) == 0x000094, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__NameProperty_160' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __IntProperty_161) == 0x0000A0, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__IntProperty_161' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __NameProperty_162) == 0x0000A4, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__NameProperty_162' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __IntProperty_163) == 0x0000B0, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__IntProperty_163' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __NameProperty_164) == 0x0000B4, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__NameProperty_164' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __NameProperty_165) == 0x0000C0, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__NameProperty_165' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, __StructProperty_166) == 0x0000D0, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::__StructProperty_166' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000F8, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000178, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

// ScriptStruct ABSub_Survivor00_Crown.ABSub_Survivor00_Crown_C.AnimBlueprintGeneratedMutableData
// 0x001F (0x0020 - 0x0001)
struct ABSub_Survivor00_Crown::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty;                                   // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_0;                                  // 0x0008(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_1;                                 // 0x000C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_2;                                  // 0x0010(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_3;                                 // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_4;                                 // 0x0018(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_5;                                  // 0x001C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on ABSub_Survivor00_Crown::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedMutableData) == 0x000020, "Wrong size on ABSub_Survivor00_Crown::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedMutableData, __FloatProperty) == 0x000004, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedMutableData::__FloatProperty' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedMutableData, __BoolProperty_0) == 0x000008, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedMutableData::__BoolProperty_0' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedMutableData, __FloatProperty_1) == 0x00000C, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedMutableData::__FloatProperty_1' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedMutableData, __BoolProperty_2) == 0x000010, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedMutableData::__BoolProperty_2' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedMutableData, __FloatProperty_3) == 0x000014, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedMutableData::__FloatProperty_3' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedMutableData, __FloatProperty_4) == 0x000018, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedMutableData::__FloatProperty_4' has a wrong offset!");
static_assert(offsetof(ABSub_Survivor00_Crown::FAnimBlueprintGeneratedMutableData, __BoolProperty_5) == 0x00001C, "Member 'ABSub_Survivor00_Crown::FAnimBlueprintGeneratedMutableData::__BoolProperty_5' has a wrong offset!");

}

