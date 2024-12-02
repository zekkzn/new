#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AuraReading

#include "Basic.hpp"

#include "DBDSharedTypes_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function AuraReading.AuraReading_C.PostAkEventOnPlayer
// 0x0048 (0x0048 - 0x0000)
struct AuraReading_C_PostAkEventOnPlayer final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          AkEvent;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0010(0x0014)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACamperPlayer*                          K2Node_DynamicCast_AsCamper_Player;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           CallFunc_GetAudioComponent_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AuraReading_C_PostAkEventOnPlayer) == 0x000008, "Wrong alignment on AuraReading_C_PostAkEventOnPlayer");
static_assert(sizeof(AuraReading_C_PostAkEventOnPlayer) == 0x000048, "Wrong size on AuraReading_C_PostAkEventOnPlayer");
static_assert(offsetof(AuraReading_C_PostAkEventOnPlayer, Player) == 0x000000, "Member 'AuraReading_C_PostAkEventOnPlayer::Player' has a wrong offset!");
static_assert(offsetof(AuraReading_C_PostAkEventOnPlayer, AkEvent) == 0x000008, "Member 'AuraReading_C_PostAkEventOnPlayer::AkEvent' has a wrong offset!");
static_assert(offsetof(AuraReading_C_PostAkEventOnPlayer, Temp_delegate_Variable) == 0x000010, "Member 'AuraReading_C_PostAkEventOnPlayer::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(AuraReading_C_PostAkEventOnPlayer, K2Node_DynamicCast_AsCamper_Player) == 0x000028, "Member 'AuraReading_C_PostAkEventOnPlayer::K2Node_DynamicCast_AsCamper_Player' has a wrong offset!");
static_assert(offsetof(AuraReading_C_PostAkEventOnPlayer, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'AuraReading_C_PostAkEventOnPlayer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AuraReading_C_PostAkEventOnPlayer, CallFunc_GetAudioComponent_ReturnValue) == 0x000038, "Member 'AuraReading_C_PostAkEventOnPlayer::CallFunc_GetAudioComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_PostAkEventOnPlayer, CallFunc_PostAkEvent_ReturnValue) == 0x000040, "Member 'AuraReading_C_PostAkEventOnPlayer::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");

// Function AuraReading.AuraReading_C.OnInteractionUpdateTick
// 0x0010 (0x0010 - 0x0000)
struct AuraReading_C_OnInteractionUpdateTick final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaTime;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AuraReading_C_OnInteractionUpdateTick) == 0x000008, "Wrong alignment on AuraReading_C_OnInteractionUpdateTick");
static_assert(sizeof(AuraReading_C_OnInteractionUpdateTick) == 0x000010, "Wrong size on AuraReading_C_OnInteractionUpdateTick");
static_assert(offsetof(AuraReading_C_OnInteractionUpdateTick, Player) == 0x000000, "Member 'AuraReading_C_OnInteractionUpdateTick::Player' has a wrong offset!");
static_assert(offsetof(AuraReading_C_OnInteractionUpdateTick, DeltaTime) == 0x000008, "Member 'AuraReading_C_OnInteractionUpdateTick::DeltaTime' has a wrong offset!");

// Function AuraReading.AuraReading_C.OnInteractionFinished
// 0x0010 (0x0010 - 0x0000)
struct AuraReading_C_OnInteractionFinished final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          HasInteractionStarted;                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AuraReading_C_OnInteractionFinished) == 0x000008, "Wrong alignment on AuraReading_C_OnInteractionFinished");
static_assert(sizeof(AuraReading_C_OnInteractionFinished) == 0x000010, "Wrong size on AuraReading_C_OnInteractionFinished");
static_assert(offsetof(AuraReading_C_OnInteractionFinished, Player) == 0x000000, "Member 'AuraReading_C_OnInteractionFinished::Player' has a wrong offset!");
static_assert(offsetof(AuraReading_C_OnInteractionFinished, HasInteractionStarted) == 0x000008, "Member 'AuraReading_C_OnInteractionFinished::HasInteractionStarted' has a wrong offset!");

// Function AuraReading.AuraReading_C.OnInteractionEnterStart
// 0x0010 (0x0010 - 0x0000)
struct AuraReading_C_OnInteractionEnterStart final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         ActualSnapTime;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AuraReading_C_OnInteractionEnterStart) == 0x000008, "Wrong alignment on AuraReading_C_OnInteractionEnterStart");
static_assert(sizeof(AuraReading_C_OnInteractionEnterStart) == 0x000010, "Wrong size on AuraReading_C_OnInteractionEnterStart");
static_assert(offsetof(AuraReading_C_OnInteractionEnterStart, Player) == 0x000000, "Member 'AuraReading_C_OnInteractionEnterStart::Player' has a wrong offset!");
static_assert(offsetof(AuraReading_C_OnInteractionEnterStart, ActualSnapTime) == 0x000008, "Member 'AuraReading_C_OnInteractionEnterStart::ActualSnapTime' has a wrong offset!");

// Function AuraReading.AuraReading_C.OnInteractionCompletionStateChanged
// 0x0010 (0x0010 - 0x0000)
struct AuraReading_C_OnInteractionCompletionStateChanged final
{
public:
	class ADBDPlayer*                             Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Complete;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AuraReading_C_OnInteractionCompletionStateChanged) == 0x000008, "Wrong alignment on AuraReading_C_OnInteractionCompletionStateChanged");
static_assert(sizeof(AuraReading_C_OnInteractionCompletionStateChanged) == 0x000010, "Wrong size on AuraReading_C_OnInteractionCompletionStateChanged");
static_assert(offsetof(AuraReading_C_OnInteractionCompletionStateChanged, Player) == 0x000000, "Member 'AuraReading_C_OnInteractionCompletionStateChanged::Player' has a wrong offset!");
static_assert(offsetof(AuraReading_C_OnInteractionCompletionStateChanged, Complete) == 0x000008, "Member 'AuraReading_C_OnInteractionCompletionStateChanged::Complete' has a wrong offset!");

// Function AuraReading.AuraReading_C.GetIsCharged
// 0x0001 (0x0001 - 0x0000)
struct AuraReading_C_GetIsCharged final
{
public:
	bool                                          Param_IsCharged;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AuraReading_C_GetIsCharged) == 0x000001, "Wrong alignment on AuraReading_C_GetIsCharged");
static_assert(sizeof(AuraReading_C_GetIsCharged) == 0x000001, "Wrong size on AuraReading_C_GetIsCharged");
static_assert(offsetof(AuraReading_C_GetIsCharged, Param_IsCharged) == 0x000000, "Member 'AuraReading_C_GetIsCharged::Param_IsCharged' has a wrong offset!");

// Function AuraReading.AuraReading_C.ExecuteUbergraph_AuraReading
// 0x0088 (0x0088 - 0x0000)
struct AuraReading_C_ExecuteUbergraph_AuraReading final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             K2Node_Event_player_3;                             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_hasInteractionStarted;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             K2Node_Event_player_1;                             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_actualSnapTime;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyObserved_ReturnValue;            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IObjectStateProvider>  CallFunc_RemoveStateTag_objectStateProvider_CastInput; // 0x0028(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ADBDPlayer*                             K2Node_Event_player_2;                             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_complete;                             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IObjectStateProvider>  CallFunc_AddStateTag_objectStateProvider_CastInput; // 0x0048(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyObserved_ReturnValue_1;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Key_C*                              CallFunc_GetKey_ReturnValue;                       // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADBDPlayer*                             K2Node_Event_player;                               // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_deltaTime;                            // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChargeableComponent*                   CallFunc_GetChargeableComponent_ReturnValue;       // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Authority_UseCharge_ChargeToUse_ImplicitCast; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AuraReading_C_ExecuteUbergraph_AuraReading) == 0x000008, "Wrong alignment on AuraReading_C_ExecuteUbergraph_AuraReading");
static_assert(sizeof(AuraReading_C_ExecuteUbergraph_AuraReading) == 0x000088, "Wrong size on AuraReading_C_ExecuteUbergraph_AuraReading");
static_assert(offsetof(AuraReading_C_ExecuteUbergraph_AuraReading, EntryPoint) == 0x000000, "Member 'AuraReading_C_ExecuteUbergraph_AuraReading::EntryPoint' has a wrong offset!");
static_assert(offsetof(AuraReading_C_ExecuteUbergraph_AuraReading, K2Node_Event_player_3) == 0x000008, "Member 'AuraReading_C_ExecuteUbergraph_AuraReading::K2Node_Event_player_3' has a wrong offset!");
static_assert(offsetof(AuraReading_C_ExecuteUbergraph_AuraReading, K2Node_Event_hasInteractionStarted) == 0x000010, "Member 'AuraReading_C_ExecuteUbergraph_AuraReading::K2Node_Event_hasInteractionStarted' has a wrong offset!");
static_assert(offsetof(AuraReading_C_ExecuteUbergraph_AuraReading, K2Node_Event_player_1) == 0x000018, "Member 'AuraReading_C_ExecuteUbergraph_AuraReading::K2Node_Event_player_1' has a wrong offset!");
static_assert(offsetof(AuraReading_C_ExecuteUbergraph_AuraReading, K2Node_Event_actualSnapTime) == 0x000020, "Member 'AuraReading_C_ExecuteUbergraph_AuraReading::K2Node_Event_actualSnapTime' has a wrong offset!");
static_assert(offsetof(AuraReading_C_ExecuteUbergraph_AuraReading, CallFunc_IsLocallyObserved_ReturnValue) == 0x000024, "Member 'AuraReading_C_ExecuteUbergraph_AuraReading::CallFunc_IsLocallyObserved_ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_ExecuteUbergraph_AuraReading, CallFunc_RemoveStateTag_objectStateProvider_CastInput) == 0x000028, "Member 'AuraReading_C_ExecuteUbergraph_AuraReading::CallFunc_RemoveStateTag_objectStateProvider_CastInput' has a wrong offset!");
static_assert(offsetof(AuraReading_C_ExecuteUbergraph_AuraReading, K2Node_Event_player_2) == 0x000038, "Member 'AuraReading_C_ExecuteUbergraph_AuraReading::K2Node_Event_player_2' has a wrong offset!");
static_assert(offsetof(AuraReading_C_ExecuteUbergraph_AuraReading, K2Node_Event_complete) == 0x000040, "Member 'AuraReading_C_ExecuteUbergraph_AuraReading::K2Node_Event_complete' has a wrong offset!");
static_assert(offsetof(AuraReading_C_ExecuteUbergraph_AuraReading, CallFunc_AddStateTag_objectStateProvider_CastInput) == 0x000048, "Member 'AuraReading_C_ExecuteUbergraph_AuraReading::CallFunc_AddStateTag_objectStateProvider_CastInput' has a wrong offset!");
static_assert(offsetof(AuraReading_C_ExecuteUbergraph_AuraReading, CallFunc_IsLocallyObserved_ReturnValue_1) == 0x000058, "Member 'AuraReading_C_ExecuteUbergraph_AuraReading::CallFunc_IsLocallyObserved_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AuraReading_C_ExecuteUbergraph_AuraReading, CallFunc_GetKey_ReturnValue) == 0x000060, "Member 'AuraReading_C_ExecuteUbergraph_AuraReading::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_ExecuteUbergraph_AuraReading, K2Node_Event_player) == 0x000068, "Member 'AuraReading_C_ExecuteUbergraph_AuraReading::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(AuraReading_C_ExecuteUbergraph_AuraReading, K2Node_Event_deltaTime) == 0x000070, "Member 'AuraReading_C_ExecuteUbergraph_AuraReading::K2Node_Event_deltaTime' has a wrong offset!");
static_assert(offsetof(AuraReading_C_ExecuteUbergraph_AuraReading, CallFunc_GetChargeableComponent_ReturnValue) == 0x000078, "Member 'AuraReading_C_ExecuteUbergraph_AuraReading::CallFunc_GetChargeableComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_ExecuteUbergraph_AuraReading, CallFunc_Authority_UseCharge_ChargeToUse_ImplicitCast) == 0x000080, "Member 'AuraReading_C_ExecuteUbergraph_AuraReading::CallFunc_Authority_UseCharge_ChargeToUse_ImplicitCast' has a wrong offset!");

// Function AuraReading.AuraReading_C.IsInteractionPossibleBP
// 0x0030 (0x0030 - 0x0000)
struct AuraReading_C_IsInteractionPossibleBP final
{
public:
	const class ADBDPlayer*                       Player;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EInputInteractionType                         InteractionType;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x000A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasUsableAddon_ReturnValue;               // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasPerkFlag_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E[0x2];                                        // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Key_C*                              CallFunc_GetKey_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCollected_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B[0x5];                                       // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ADBDPlayer*                             CallFunc_GetCollector_ReturnValue;                 // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasCharge_ReturnValue;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AuraReading_C_IsInteractionPossibleBP) == 0x000008, "Wrong alignment on AuraReading_C_IsInteractionPossibleBP");
static_assert(sizeof(AuraReading_C_IsInteractionPossibleBP) == 0x000030, "Wrong size on AuraReading_C_IsInteractionPossibleBP");
static_assert(offsetof(AuraReading_C_IsInteractionPossibleBP, Player) == 0x000000, "Member 'AuraReading_C_IsInteractionPossibleBP::Player' has a wrong offset!");
static_assert(offsetof(AuraReading_C_IsInteractionPossibleBP, InteractionType) == 0x000008, "Member 'AuraReading_C_IsInteractionPossibleBP::InteractionType' has a wrong offset!");
static_assert(offsetof(AuraReading_C_IsInteractionPossibleBP, ReturnValue) == 0x000009, "Member 'AuraReading_C_IsInteractionPossibleBP::ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_IsInteractionPossibleBP, Result) == 0x00000A, "Member 'AuraReading_C_IsInteractionPossibleBP::Result' has a wrong offset!");
static_assert(offsetof(AuraReading_C_IsInteractionPossibleBP, CallFunc_HasUsableAddon_ReturnValue) == 0x00000B, "Member 'AuraReading_C_IsInteractionPossibleBP::CallFunc_HasUsableAddon_ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_IsInteractionPossibleBP, CallFunc_HasPerkFlag_ReturnValue) == 0x00000C, "Member 'AuraReading_C_IsInteractionPossibleBP::CallFunc_HasPerkFlag_ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_IsInteractionPossibleBP, CallFunc_Not_PreBool_ReturnValue) == 0x00000D, "Member 'AuraReading_C_IsInteractionPossibleBP::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_IsInteractionPossibleBP, CallFunc_GetKey_ReturnValue) == 0x000010, "Member 'AuraReading_C_IsInteractionPossibleBP::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_IsInteractionPossibleBP, CallFunc_BooleanAND_ReturnValue) == 0x000018, "Member 'AuraReading_C_IsInteractionPossibleBP::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_IsInteractionPossibleBP, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'AuraReading_C_IsInteractionPossibleBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_IsInteractionPossibleBP, CallFunc_IsCollected_ReturnValue) == 0x00001A, "Member 'AuraReading_C_IsInteractionPossibleBP::CallFunc_IsCollected_ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_IsInteractionPossibleBP, CallFunc_GetCollector_ReturnValue) == 0x000020, "Member 'AuraReading_C_IsInteractionPossibleBP::CallFunc_GetCollector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_IsInteractionPossibleBP, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000028, "Member 'AuraReading_C_IsInteractionPossibleBP::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_IsInteractionPossibleBP, CallFunc_HasCharge_ReturnValue) == 0x000029, "Member 'AuraReading_C_IsInteractionPossibleBP::CallFunc_HasCharge_ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_IsInteractionPossibleBP, CallFunc_BooleanAND_ReturnValue_1) == 0x00002A, "Member 'AuraReading_C_IsInteractionPossibleBP::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AuraReading_C_IsInteractionPossibleBP, CallFunc_BooleanAND_ReturnValue_2) == 0x00002B, "Member 'AuraReading_C_IsInteractionPossibleBP::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

// Function AuraReading.AuraReading_C.IsInteractionDone
// 0x0020 (0x0020 - 0x0000)
struct AuraReading_C_IsInteractionDone final
{
public:
	const class ADBDPlayer*                       Player;                                            // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EInputInteractionType                         InteractionType;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Key_C*                              CallFunc_GetKey_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInteractionDone_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasCharge_ReturnValue;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AuraReading_C_IsInteractionDone) == 0x000008, "Wrong alignment on AuraReading_C_IsInteractionDone");
static_assert(sizeof(AuraReading_C_IsInteractionDone) == 0x000020, "Wrong size on AuraReading_C_IsInteractionDone");
static_assert(offsetof(AuraReading_C_IsInteractionDone, Player) == 0x000000, "Member 'AuraReading_C_IsInteractionDone::Player' has a wrong offset!");
static_assert(offsetof(AuraReading_C_IsInteractionDone, InteractionType) == 0x000008, "Member 'AuraReading_C_IsInteractionDone::InteractionType' has a wrong offset!");
static_assert(offsetof(AuraReading_C_IsInteractionDone, ReturnValue) == 0x000009, "Member 'AuraReading_C_IsInteractionDone::ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_IsInteractionDone, CallFunc_GetKey_ReturnValue) == 0x000010, "Member 'AuraReading_C_IsInteractionDone::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_IsInteractionDone, CallFunc_IsInteractionDone_ReturnValue) == 0x000018, "Member 'AuraReading_C_IsInteractionDone::CallFunc_IsInteractionDone_ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_IsInteractionDone, CallFunc_HasCharge_ReturnValue) == 0x000019, "Member 'AuraReading_C_IsInteractionDone::CallFunc_HasCharge_ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_IsInteractionDone, CallFunc_Not_PreBool_ReturnValue) == 0x00001A, "Member 'AuraReading_C_IsInteractionDone::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_IsInteractionDone, CallFunc_BooleanOR_ReturnValue) == 0x00001B, "Member 'AuraReading_C_IsInteractionDone::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function AuraReading.AuraReading_C.HasUsableAddon
// 0x0040 (0x0040 - 0x0000)
struct AuraReading_C_HasUsableAddon final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Result;                                            // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Key_C*                              CallFunc_GetKey_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADBDPlayer*                             K2Node_DynamicCast_AsDBDPlayer;                    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPerkManager*                           CallFunc_GetPerkManager_ReturnValue;               // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyAddonWithTag_ReturnValue;           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AuraReading_C_HasUsableAddon) == 0x000008, "Wrong alignment on AuraReading_C_HasUsableAddon");
static_assert(sizeof(AuraReading_C_HasUsableAddon) == 0x000040, "Wrong size on AuraReading_C_HasUsableAddon");
static_assert(offsetof(AuraReading_C_HasUsableAddon, ReturnValue) == 0x000000, "Member 'AuraReading_C_HasUsableAddon::ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_HasUsableAddon, Result) == 0x000001, "Member 'AuraReading_C_HasUsableAddon::Result' has a wrong offset!");
static_assert(offsetof(AuraReading_C_HasUsableAddon, CallFunc_GetKey_ReturnValue) == 0x000008, "Member 'AuraReading_C_HasUsableAddon::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_HasUsableAddon, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'AuraReading_C_HasUsableAddon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_HasUsableAddon, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'AuraReading_C_HasUsableAddon::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_HasUsableAddon, K2Node_DynamicCast_AsDBDPlayer) == 0x000020, "Member 'AuraReading_C_HasUsableAddon::K2Node_DynamicCast_AsDBDPlayer' has a wrong offset!");
static_assert(offsetof(AuraReading_C_HasUsableAddon, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'AuraReading_C_HasUsableAddon::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AuraReading_C_HasUsableAddon, CallFunc_GetPerkManager_ReturnValue) == 0x000030, "Member 'AuraReading_C_HasUsableAddon::CallFunc_GetPerkManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_HasUsableAddon, CallFunc_HasAnyAddonWithTag_ReturnValue) == 0x000038, "Member 'AuraReading_C_HasUsableAddon::CallFunc_HasAnyAddonWithTag_ReturnValue' has a wrong offset!");

// Function AuraReading.AuraReading_C.GetKey
// 0x0020 (0x0020 - 0x0000)
struct AuraReading_C_GetKey final
{
public:
	class ABP_Key_C*                              ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Key_C*                              K2Node_DynamicCast_AsBP_Key;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AuraReading_C_GetKey) == 0x000008, "Wrong alignment on AuraReading_C_GetKey");
static_assert(sizeof(AuraReading_C_GetKey) == 0x000020, "Wrong size on AuraReading_C_GetKey");
static_assert(offsetof(AuraReading_C_GetKey, ReturnValue) == 0x000000, "Member 'AuraReading_C_GetKey::ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_GetKey, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'AuraReading_C_GetKey::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AuraReading_C_GetKey, K2Node_DynamicCast_AsBP_Key) == 0x000010, "Member 'AuraReading_C_GetKey::K2Node_DynamicCast_AsBP_Key' has a wrong offset!");
static_assert(offsetof(AuraReading_C_GetKey, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'AuraReading_C_GetKey::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

