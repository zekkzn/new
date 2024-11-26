#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Objectives_Generator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function WBP_Objectives_Generator.WBP_Objectives_Generator_C.Set Generator Count
// 0x00F8 (0x00F8 - 0x0000)
struct WBP_Objectives_Generator_C_Set_Generator_Count final
{
public:
	int32                                         NbGeneratorsLeft;                                  // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RequiredActivatedGeneratorCount;                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0028(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0050)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0090(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A8(0x0010)(ReferenceParm)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C0(0x0018)()
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActive_ReturnValue;                     // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_1;                           // 0x00E0(0x0018)()
};
static_assert(alignof(WBP_Objectives_Generator_C_Set_Generator_Count) == 0x000008, "Wrong alignment on WBP_Objectives_Generator_C_Set_Generator_Count");
static_assert(sizeof(WBP_Objectives_Generator_C_Set_Generator_Count) == 0x0000F8, "Wrong size on WBP_Objectives_Generator_C_Set_Generator_Count");
static_assert(offsetof(WBP_Objectives_Generator_C_Set_Generator_Count, NbGeneratorsLeft) == 0x000000, "Member 'WBP_Objectives_Generator_C_Set_Generator_Count::NbGeneratorsLeft' has a wrong offset!");
static_assert(offsetof(WBP_Objectives_Generator_C_Set_Generator_Count, RequiredActivatedGeneratorCount) == 0x000004, "Member 'WBP_Objectives_Generator_C_Set_Generator_Count::RequiredActivatedGeneratorCount' has a wrong offset!");
static_assert(offsetof(WBP_Objectives_Generator_C_Set_Generator_Count, Temp_bool_Variable) == 0x000008, "Member 'WBP_Objectives_Generator_C_Set_Generator_Count::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Objectives_Generator_C_Set_Generator_Count, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_Objectives_Generator_C_Set_Generator_Count::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Objectives_Generator_C_Set_Generator_Count, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'WBP_Objectives_Generator_C_Set_Generator_Count::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Objectives_Generator_C_Set_Generator_Count, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000028, "Member 'WBP_Objectives_Generator_C_Set_Generator_Count::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Objectives_Generator_C_Set_Generator_Count, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'WBP_Objectives_Generator_C_Set_Generator_Count::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_Objectives_Generator_C_Set_Generator_Count, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000090, "Member 'WBP_Objectives_Generator_C_Set_Generator_Count::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Objectives_Generator_C_Set_Generator_Count, K2Node_MakeArray_Array) == 0x0000A8, "Member 'WBP_Objectives_Generator_C_Set_Generator_Count::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Objectives_Generator_C_Set_Generator_Count, Temp_byte_Variable) == 0x0000B8, "Member 'WBP_Objectives_Generator_C_Set_Generator_Count::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Objectives_Generator_C_Set_Generator_Count, CallFunc_Format_ReturnValue) == 0x0000C0, "Member 'WBP_Objectives_Generator_C_Set_Generator_Count::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Objectives_Generator_C_Set_Generator_Count, Temp_byte_Variable_1) == 0x0000D8, "Member 'WBP_Objectives_Generator_C_Set_Generator_Count::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Objectives_Generator_C_Set_Generator_Count, Temp_bool_Variable_1) == 0x0000D9, "Member 'WBP_Objectives_Generator_C_Set_Generator_Count::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_Objectives_Generator_C_Set_Generator_Count, CallFunc_IsActive_ReturnValue) == 0x0000DA, "Member 'WBP_Objectives_Generator_C_Set_Generator_Count::CallFunc_IsActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Objectives_Generator_C_Set_Generator_Count, K2Node_Select_Default) == 0x0000DB, "Member 'WBP_Objectives_Generator_C_Set_Generator_Count::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_Objectives_Generator_C_Set_Generator_Count, K2Node_Select_Default_1) == 0x0000E0, "Member 'WBP_Objectives_Generator_C_Set_Generator_Count::K2Node_Select_Default_1' has a wrong offset!");

}

