#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CoreTallyScoreboard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"
#include "DBDSharedTypes_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CoreTallyScoreboard.WBP_CoreTallyScoreboard_C
// 0x0090 (0x0450 - 0x03C0)
class UWBP_CoreTallyScoreboard_C final : public UCoreTallyScoreboardWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_TallyClassPlayerStatusContainer_C* CalamariKillerPlayerStatus_1;                      // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TallyClassPlayerStatusContainer_C* CalamariKillerPlayerStatus_2;                      // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           CalamariPlayerStatusList;                          // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TallyClassPlayerStatusContainer_C* CalamariSurvivorPlayerStatus_1;                    // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TallyClassPlayerStatusContainer_C* CalamariSurvivorPlayerStatus_2;                    // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TallyClassPlayerStatusContainer_C* CalamariSurvivorPlayerStatus_3;                    // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TallyClassPlayerStatusContainer_C* CalamariSurvivorPlayerStatus_4;                    // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TallyClassPlayerStatusContainer_C* CalamariSurvivorPlayerStatus_5;                    // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TallyClassPlayerStatusContainer_C* CalamariSurvivorPlayerStatus_6;                    // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TallyClassPlayerStatusContainer_C* CalamariSurvivorPlayerStatus_7;                    // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TallyClassPlayerStatusContainer_C* CalamariSurvivorPlayerStatus_8;                    // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TallyPlayerStatusContainer_C*      KillerPlayerStatus;                                // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           PlayerStatusList;                                  // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TallyPlayerStatusContainer_C*      SurvivorPlayerStatus_1;                            // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TallyPlayerStatusContainer_C*      SurvivorPlayerStatus_2;                            // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TallyPlayerStatusContainer_C*      SurvivorPlayerStatus_3;                            // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TallyPlayerStatusContainer_C*      SurvivorPlayerStatus_4;                            // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetTallyPlayerStatusWidgets(const EGameType GameType);
	void ExecuteUbergraph_WBP_CoreTallyScoreboard(int32 EntryPoint);
	void Destruct();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CoreTallyScoreboard_C">();
	}
	static class UWBP_CoreTallyScoreboard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CoreTallyScoreboard_C>();
	}
};
static_assert(alignof(UWBP_CoreTallyScoreboard_C) == 0x000008, "Wrong alignment on UWBP_CoreTallyScoreboard_C");
static_assert(sizeof(UWBP_CoreTallyScoreboard_C) == 0x000450, "Wrong size on UWBP_CoreTallyScoreboard_C");
static_assert(offsetof(UWBP_CoreTallyScoreboard_C, UberGraphFrame) == 0x0003C0, "Member 'UWBP_CoreTallyScoreboard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CoreTallyScoreboard_C, CalamariKillerPlayerStatus_1) == 0x0003C8, "Member 'UWBP_CoreTallyScoreboard_C::CalamariKillerPlayerStatus_1' has a wrong offset!");
static_assert(offsetof(UWBP_CoreTallyScoreboard_C, CalamariKillerPlayerStatus_2) == 0x0003D0, "Member 'UWBP_CoreTallyScoreboard_C::CalamariKillerPlayerStatus_2' has a wrong offset!");
static_assert(offsetof(UWBP_CoreTallyScoreboard_C, CalamariPlayerStatusList) == 0x0003D8, "Member 'UWBP_CoreTallyScoreboard_C::CalamariPlayerStatusList' has a wrong offset!");
static_assert(offsetof(UWBP_CoreTallyScoreboard_C, CalamariSurvivorPlayerStatus_1) == 0x0003E0, "Member 'UWBP_CoreTallyScoreboard_C::CalamariSurvivorPlayerStatus_1' has a wrong offset!");
static_assert(offsetof(UWBP_CoreTallyScoreboard_C, CalamariSurvivorPlayerStatus_2) == 0x0003E8, "Member 'UWBP_CoreTallyScoreboard_C::CalamariSurvivorPlayerStatus_2' has a wrong offset!");
static_assert(offsetof(UWBP_CoreTallyScoreboard_C, CalamariSurvivorPlayerStatus_3) == 0x0003F0, "Member 'UWBP_CoreTallyScoreboard_C::CalamariSurvivorPlayerStatus_3' has a wrong offset!");
static_assert(offsetof(UWBP_CoreTallyScoreboard_C, CalamariSurvivorPlayerStatus_4) == 0x0003F8, "Member 'UWBP_CoreTallyScoreboard_C::CalamariSurvivorPlayerStatus_4' has a wrong offset!");
static_assert(offsetof(UWBP_CoreTallyScoreboard_C, CalamariSurvivorPlayerStatus_5) == 0x000400, "Member 'UWBP_CoreTallyScoreboard_C::CalamariSurvivorPlayerStatus_5' has a wrong offset!");
static_assert(offsetof(UWBP_CoreTallyScoreboard_C, CalamariSurvivorPlayerStatus_6) == 0x000408, "Member 'UWBP_CoreTallyScoreboard_C::CalamariSurvivorPlayerStatus_6' has a wrong offset!");
static_assert(offsetof(UWBP_CoreTallyScoreboard_C, CalamariSurvivorPlayerStatus_7) == 0x000410, "Member 'UWBP_CoreTallyScoreboard_C::CalamariSurvivorPlayerStatus_7' has a wrong offset!");
static_assert(offsetof(UWBP_CoreTallyScoreboard_C, CalamariSurvivorPlayerStatus_8) == 0x000418, "Member 'UWBP_CoreTallyScoreboard_C::CalamariSurvivorPlayerStatus_8' has a wrong offset!");
static_assert(offsetof(UWBP_CoreTallyScoreboard_C, KillerPlayerStatus) == 0x000420, "Member 'UWBP_CoreTallyScoreboard_C::KillerPlayerStatus' has a wrong offset!");
static_assert(offsetof(UWBP_CoreTallyScoreboard_C, PlayerStatusList) == 0x000428, "Member 'UWBP_CoreTallyScoreboard_C::PlayerStatusList' has a wrong offset!");
static_assert(offsetof(UWBP_CoreTallyScoreboard_C, SurvivorPlayerStatus_1) == 0x000430, "Member 'UWBP_CoreTallyScoreboard_C::SurvivorPlayerStatus_1' has a wrong offset!");
static_assert(offsetof(UWBP_CoreTallyScoreboard_C, SurvivorPlayerStatus_2) == 0x000438, "Member 'UWBP_CoreTallyScoreboard_C::SurvivorPlayerStatus_2' has a wrong offset!");
static_assert(offsetof(UWBP_CoreTallyScoreboard_C, SurvivorPlayerStatus_3) == 0x000440, "Member 'UWBP_CoreTallyScoreboard_C::SurvivorPlayerStatus_3' has a wrong offset!");
static_assert(offsetof(UWBP_CoreTallyScoreboard_C, SurvivorPlayerStatus_4) == 0x000448, "Member 'UWBP_CoreTallyScoreboard_C::SurvivorPlayerStatus_4' has a wrong offset!");

}
