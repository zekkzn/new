#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AB_Entity

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct AB_Entity.AB_Entity_C.AnimBlueprintGeneratedMutableData
// 0x0007 (0x0008 - 0x0001)
struct AB_Entity::FAnimBlueprintGeneratedMutableData final : public FAnimBlueprintMutableData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty;                                   // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_Entity::FAnimBlueprintGeneratedMutableData) == 0x000004, "Wrong alignment on AB_Entity::FAnimBlueprintGeneratedMutableData");
static_assert(sizeof(AB_Entity::FAnimBlueprintGeneratedMutableData) == 0x000008, "Wrong size on AB_Entity::FAnimBlueprintGeneratedMutableData");
static_assert(offsetof(AB_Entity::FAnimBlueprintGeneratedMutableData, __FloatProperty) == 0x000004, "Member 'AB_Entity::FAnimBlueprintGeneratedMutableData::__FloatProperty' has a wrong offset!");

// ScriptStruct AB_Entity.AB_Entity_C.AnimBlueprintGeneratedConstantData
// 0x0137 (0x0138 - 0x0001)
struct AB_Entity::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_67;                                 // 0x0004(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_68;                                 // 0x0010(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_69;                                  // 0x001C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputScaleBiasClampConstants          __StructProperty_70;                               // 0x0020(0x002C)(BlueprintVisible, NoDestructor)
	bool                                          __BoolProperty_71;                                 // 0x004C(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         __FloatProperty_72;                                // 0x0050(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __FloatProperty_73;                                // 0x0054(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __BoolProperty_74;                                 // 0x0058(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimSyncMethod                               __EnumProperty_75;                                 // 0x0059(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAnimGroupRole                                __ByteProperty_76;                                 // 0x005A(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5B[0x1];                                       // 0x005B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_77;                                 // 0x005C(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_78;                                 // 0x0068(0x000C)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __IntProperty_79;                                  // 0x0074(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimNodeFunctionRef                   __StructProperty_80;                               // 0x0078(0x0028)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x00A0(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x0120(0x0018)()
};
static_assert(alignof(AB_Entity::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on AB_Entity::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(AB_Entity::FAnimBlueprintGeneratedConstantData) == 0x000138, "Wrong size on AB_Entity::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(AB_Entity::FAnimBlueprintGeneratedConstantData, __NameProperty_67) == 0x000004, "Member 'AB_Entity::FAnimBlueprintGeneratedConstantData::__NameProperty_67' has a wrong offset!");
static_assert(offsetof(AB_Entity::FAnimBlueprintGeneratedConstantData, __NameProperty_68) == 0x000010, "Member 'AB_Entity::FAnimBlueprintGeneratedConstantData::__NameProperty_68' has a wrong offset!");
static_assert(offsetof(AB_Entity::FAnimBlueprintGeneratedConstantData, __IntProperty_69) == 0x00001C, "Member 'AB_Entity::FAnimBlueprintGeneratedConstantData::__IntProperty_69' has a wrong offset!");
static_assert(offsetof(AB_Entity::FAnimBlueprintGeneratedConstantData, __StructProperty_70) == 0x000020, "Member 'AB_Entity::FAnimBlueprintGeneratedConstantData::__StructProperty_70' has a wrong offset!");
static_assert(offsetof(AB_Entity::FAnimBlueprintGeneratedConstantData, __BoolProperty_71) == 0x00004C, "Member 'AB_Entity::FAnimBlueprintGeneratedConstantData::__BoolProperty_71' has a wrong offset!");
static_assert(offsetof(AB_Entity::FAnimBlueprintGeneratedConstantData, __FloatProperty_72) == 0x000050, "Member 'AB_Entity::FAnimBlueprintGeneratedConstantData::__FloatProperty_72' has a wrong offset!");
static_assert(offsetof(AB_Entity::FAnimBlueprintGeneratedConstantData, __FloatProperty_73) == 0x000054, "Member 'AB_Entity::FAnimBlueprintGeneratedConstantData::__FloatProperty_73' has a wrong offset!");
static_assert(offsetof(AB_Entity::FAnimBlueprintGeneratedConstantData, __BoolProperty_74) == 0x000058, "Member 'AB_Entity::FAnimBlueprintGeneratedConstantData::__BoolProperty_74' has a wrong offset!");
static_assert(offsetof(AB_Entity::FAnimBlueprintGeneratedConstantData, __EnumProperty_75) == 0x000059, "Member 'AB_Entity::FAnimBlueprintGeneratedConstantData::__EnumProperty_75' has a wrong offset!");
static_assert(offsetof(AB_Entity::FAnimBlueprintGeneratedConstantData, __ByteProperty_76) == 0x00005A, "Member 'AB_Entity::FAnimBlueprintGeneratedConstantData::__ByteProperty_76' has a wrong offset!");
static_assert(offsetof(AB_Entity::FAnimBlueprintGeneratedConstantData, __NameProperty_77) == 0x00005C, "Member 'AB_Entity::FAnimBlueprintGeneratedConstantData::__NameProperty_77' has a wrong offset!");
static_assert(offsetof(AB_Entity::FAnimBlueprintGeneratedConstantData, __NameProperty_78) == 0x000068, "Member 'AB_Entity::FAnimBlueprintGeneratedConstantData::__NameProperty_78' has a wrong offset!");
static_assert(offsetof(AB_Entity::FAnimBlueprintGeneratedConstantData, __IntProperty_79) == 0x000074, "Member 'AB_Entity::FAnimBlueprintGeneratedConstantData::__IntProperty_79' has a wrong offset!");
static_assert(offsetof(AB_Entity::FAnimBlueprintGeneratedConstantData, __StructProperty_80) == 0x000078, "Member 'AB_Entity::FAnimBlueprintGeneratedConstantData::__StructProperty_80' has a wrong offset!");
static_assert(offsetof(AB_Entity::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x0000A0, "Member 'AB_Entity::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(AB_Entity::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x000120, "Member 'AB_Entity::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}

