#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CorePlayerRankWrapper

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DBDUIViewsCore_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CorePlayerRankWrapper.WBP_CorePlayerRankWrapper_C
// 0x0030 (0x0398 - 0x0368)
class UWBP_CorePlayerRankWrapper_C final : public UProfileMenuPlayerRankWrapper
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDBDImage*                              BackgroundImage;                                   // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDTextBlock*                          PlayerRoleTB;                                      // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDBDTextBlock*                          ProgressTB;                                        // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CorePlayerRank_C*                  WBP_CorePlayerRank;                                // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CoreRankPipsContainer_C*           WBP_CoreRankPipsContainer;                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_CorePlayerRankWrapper(int32 EntryPoint);
	void Set_Background_Image(TSoftObjectPtr<class UTexture2D> Texture);
	void SetData(const struct FRankViewData& Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CorePlayerRankWrapper_C">();
	}
	static class UWBP_CorePlayerRankWrapper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CorePlayerRankWrapper_C>();
	}
};
static_assert(alignof(UWBP_CorePlayerRankWrapper_C) == 0x000008, "Wrong alignment on UWBP_CorePlayerRankWrapper_C");
static_assert(sizeof(UWBP_CorePlayerRankWrapper_C) == 0x000398, "Wrong size on UWBP_CorePlayerRankWrapper_C");
static_assert(offsetof(UWBP_CorePlayerRankWrapper_C, UberGraphFrame) == 0x000368, "Member 'UWBP_CorePlayerRankWrapper_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CorePlayerRankWrapper_C, BackgroundImage) == 0x000370, "Member 'UWBP_CorePlayerRankWrapper_C::BackgroundImage' has a wrong offset!");
static_assert(offsetof(UWBP_CorePlayerRankWrapper_C, PlayerRoleTB) == 0x000378, "Member 'UWBP_CorePlayerRankWrapper_C::PlayerRoleTB' has a wrong offset!");
static_assert(offsetof(UWBP_CorePlayerRankWrapper_C, ProgressTB) == 0x000380, "Member 'UWBP_CorePlayerRankWrapper_C::ProgressTB' has a wrong offset!");
static_assert(offsetof(UWBP_CorePlayerRankWrapper_C, WBP_CorePlayerRank) == 0x000388, "Member 'UWBP_CorePlayerRankWrapper_C::WBP_CorePlayerRank' has a wrong offset!");
static_assert(offsetof(UWBP_CorePlayerRankWrapper_C, WBP_CoreRankPipsContainer) == 0x000390, "Member 'UWBP_CorePlayerRankWrapper_C::WBP_CoreRankPipsContainer' has a wrong offset!");

}
