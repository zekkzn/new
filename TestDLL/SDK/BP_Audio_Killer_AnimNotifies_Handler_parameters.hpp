#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Audio_Killer_AnimNotifies_Handler

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Audio_Killer_AnimNotifies_Handler.BP_Audio_Killer_AnimNotifies_Handler_C.HandleAnimNotify
// 0x0050 (0x0050 - 0x0000)
struct BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify final
{
public:
	class AActor*                                 Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   NotifyName;                                        // 0x0008(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess_1;                    // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_17[0x1];                                       // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class ASlasherPlayer*                         K2Node_DynamicCast_AsSlasher_Player;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDBasePlayer*                         K2Node_DynamicCast_AsDBDBase_Player;               // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IObjectStateProvider>  CallFunc_HasStateTag_objectStateProvider_CastInput; // 0x0038(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_HasStateTag_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify) == 0x000008, "Wrong alignment on BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify");
static_assert(sizeof(BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify) == 0x000050, "Wrong size on BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify");
static_assert(offsetof(BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify, Player) == 0x000000, "Member 'BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify::Player' has a wrong offset!");
static_assert(offsetof(BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify, NotifyName) == 0x000008, "Member 'BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify::NotifyName' has a wrong offset!");
static_assert(offsetof(BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify, ReturnValue) == 0x000014, "Member 'BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify, K2Node_SwitchName_CmpSuccess) == 0x000015, "Member 'BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify, K2Node_SwitchName_CmpSuccess_1) == 0x000016, "Member 'BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify::K2Node_SwitchName_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify, K2Node_DynamicCast_AsSlasher_Player) == 0x000018, "Member 'BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify::K2Node_DynamicCast_AsSlasher_Player' has a wrong offset!");
static_assert(offsetof(BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify, K2Node_DynamicCast_AsDBDBase_Player) == 0x000028, "Member 'BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify::K2Node_DynamicCast_AsDBDBase_Player' has a wrong offset!");
static_assert(offsetof(BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify, CallFunc_HasStateTag_objectStateProvider_CastInput) == 0x000038, "Member 'BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify::CallFunc_HasStateTag_objectStateProvider_CastInput' has a wrong offset!");
static_assert(offsetof(BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify, CallFunc_HasStateTag_ReturnValue) == 0x000048, "Member 'BP_Audio_Killer_AnimNotifies_Handler_C_HandleAnimNotify::CallFunc_HasStateTag_ReturnValue' has a wrong offset!");

}
