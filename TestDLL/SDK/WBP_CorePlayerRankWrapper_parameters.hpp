#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CorePlayerRankWrapper

#include "Basic.hpp"

#include "DBDUIViewInterfaces_structs.hpp"


namespace SDK::Params
{

// Function WBP_CorePlayerRankWrapper.WBP_CorePlayerRankWrapper_C.ExecuteUbergraph_WBP_CorePlayerRankWrapper
// 0x0030 (0x0030 - 0x0000)
struct WBP_CorePlayerRankWrapper_C_ExecuteUbergraph_WBP_CorePlayerRankWrapper final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRankViewData                          K2Node_Event_data;                                 // 0x0008(0x0028)(ConstParm)
};
static_assert(alignof(WBP_CorePlayerRankWrapper_C_ExecuteUbergraph_WBP_CorePlayerRankWrapper) == 0x000008, "Wrong alignment on WBP_CorePlayerRankWrapper_C_ExecuteUbergraph_WBP_CorePlayerRankWrapper");
static_assert(sizeof(WBP_CorePlayerRankWrapper_C_ExecuteUbergraph_WBP_CorePlayerRankWrapper) == 0x000030, "Wrong size on WBP_CorePlayerRankWrapper_C_ExecuteUbergraph_WBP_CorePlayerRankWrapper");
static_assert(offsetof(WBP_CorePlayerRankWrapper_C_ExecuteUbergraph_WBP_CorePlayerRankWrapper, EntryPoint) == 0x000000, "Member 'WBP_CorePlayerRankWrapper_C_ExecuteUbergraph_WBP_CorePlayerRankWrapper::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_CorePlayerRankWrapper_C_ExecuteUbergraph_WBP_CorePlayerRankWrapper, K2Node_Event_data) == 0x000008, "Member 'WBP_CorePlayerRankWrapper_C_ExecuteUbergraph_WBP_CorePlayerRankWrapper::K2Node_Event_data' has a wrong offset!");

// Function WBP_CorePlayerRankWrapper.WBP_CorePlayerRankWrapper_C.Set Background Image
// 0x0038 (0x0038 - 0x0000)
struct WBP_CorePlayerRankWrapper_C_Set_Background_Image final
{
public:
	TSoftObjectPtr<class UTexture2D>              Texture;                                           // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CorePlayerRankWrapper_C_Set_Background_Image) == 0x000008, "Wrong alignment on WBP_CorePlayerRankWrapper_C_Set_Background_Image");
static_assert(sizeof(WBP_CorePlayerRankWrapper_C_Set_Background_Image) == 0x000038, "Wrong size on WBP_CorePlayerRankWrapper_C_Set_Background_Image");
static_assert(offsetof(WBP_CorePlayerRankWrapper_C_Set_Background_Image, Texture) == 0x000000, "Member 'WBP_CorePlayerRankWrapper_C_Set_Background_Image::Texture' has a wrong offset!");

// Function WBP_CorePlayerRankWrapper.WBP_CorePlayerRankWrapper_C.SetData
// 0x0028 (0x0028 - 0x0000)
struct WBP_CorePlayerRankWrapper_C_SetData final
{
public:
	struct FRankViewData                          Data;                                              // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_CorePlayerRankWrapper_C_SetData) == 0x000008, "Wrong alignment on WBP_CorePlayerRankWrapper_C_SetData");
static_assert(sizeof(WBP_CorePlayerRankWrapper_C_SetData) == 0x000028, "Wrong size on WBP_CorePlayerRankWrapper_C_SetData");
static_assert(offsetof(WBP_CorePlayerRankWrapper_C_SetData, Data) == 0x000000, "Member 'WBP_CorePlayerRankWrapper_C_SetData::Data' has a wrong offset!");

}
