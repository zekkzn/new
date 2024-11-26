#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Competence

#include "Basic.hpp"

#include "Competence_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// Class Competence.ModifierSubjectProvider
// 0x0018 (0x0048 - 0x0030)
class UModifierSubjectProvider : public UObject
{
public:
	uint8                                         Pad_30[0x18];                                      // 0x0030(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModifierSubjectProvider">();
	}
	static class UModifierSubjectProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModifierSubjectProvider>();
	}
};
static_assert(alignof(UModifierSubjectProvider) == 0x000008, "Wrong alignment on UModifierSubjectProvider");
static_assert(sizeof(UModifierSubjectProvider) == 0x000048, "Wrong size on UModifierSubjectProvider");

// Class Competence.BaseModifierCondition
// 0x0018 (0x00C0 - 0x00A8)
class UBaseModifierCondition : public UActorComponent
{
public:
	class UBaseModifierContainer*                 _owningModifier;                                   // 0x00A8(0x0008)(ExportObject, Net, ZeroConstructor, Transient, InstancedReference, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UModifierSubjectProvider*               _subjectProvider;                                  // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                 _subjectProviderClass;                             // 0x00B8(0x0008)(Net, ZeroConstructor, Transient, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void Authority_OnInstantiateModifierConditions();
	void InitializeSubjectProviderClass();
	void OnRep_OwningModifier();
	void OnRep_SubjectProviderClass();
	void SetSubjectProviderClass(class UClass* SubjectProviderClass);

	class AActor* GetOwningActor() const;
	class UBaseModifierContainer* GetOwningModifier() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BaseModifierCondition">();
	}
	static class UBaseModifierCondition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBaseModifierCondition>();
	}
};
static_assert(alignof(UBaseModifierCondition) == 0x000008, "Wrong alignment on UBaseModifierCondition");
static_assert(sizeof(UBaseModifierCondition) == 0x0000C0, "Wrong size on UBaseModifierCondition");
static_assert(offsetof(UBaseModifierCondition, _owningModifier) == 0x0000A8, "Member 'UBaseModifierCondition::_owningModifier' has a wrong offset!");
static_assert(offsetof(UBaseModifierCondition, _subjectProvider) == 0x0000B0, "Member 'UBaseModifierCondition::_subjectProvider' has a wrong offset!");
static_assert(offsetof(UBaseModifierCondition, _subjectProviderClass) == 0x0000B8, "Member 'UBaseModifierCondition::_subjectProviderClass' has a wrong offset!");

// Class Competence.EventDrivenModifierCondition
// 0x0020 (0x00E0 - 0x00C0)
class UEventDrivenModifierCondition : public UBaseModifierCondition
{
public:
	uint8                                         Pad_C0[0x20];                                      // 0x00C0(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EventDrivenModifierCondition">();
	}
	static class UEventDrivenModifierCondition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventDrivenModifierCondition>();
	}
};
static_assert(alignof(UEventDrivenModifierCondition) == 0x000008, "Wrong alignment on UEventDrivenModifierCondition");
static_assert(sizeof(UEventDrivenModifierCondition) == 0x0000E0, "Wrong size on UEventDrivenModifierCondition");

// Class Competence.SingleModifierCondition
// 0x0010 (0x00F0 - 0x00E0)
class USingleModifierCondition : public UEventDrivenModifierCondition
{
public:
	uint8                                         Pad_E0[0x8];                                       // 0x00E0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventDrivenModifierCondition*          _condition;                                        // 0x00E8(0x0008)(ExportObject, Net, ZeroConstructor, Transient, InstancedReference, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void OnRep_Condition();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SingleModifierCondition">();
	}
	static class USingleModifierCondition* GetDefaultObj()
	{
		return GetDefaultObjImpl<USingleModifierCondition>();
	}
};
static_assert(alignof(USingleModifierCondition) == 0x000008, "Wrong alignment on USingleModifierCondition");
static_assert(sizeof(USingleModifierCondition) == 0x0000F0, "Wrong size on USingleModifierCondition");
static_assert(offsetof(USingleModifierCondition, _condition) == 0x0000E8, "Member 'USingleModifierCondition::_condition' has a wrong offset!");

// Class Competence.NotModifierCondition
// 0x0000 (0x00F0 - 0x00F0)
class UNotModifierCondition final : public USingleModifierCondition
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NotModifierCondition">();
	}
	static class UNotModifierCondition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNotModifierCondition>();
	}
};
static_assert(alignof(UNotModifierCondition) == 0x000008, "Wrong alignment on UNotModifierCondition");
static_assert(sizeof(UNotModifierCondition) == 0x0000F0, "Wrong size on UNotModifierCondition");

// Class Competence.BaseModifierContainer
// 0x0040 (0x00E8 - 0x00A8)
class UBaseModifierContainer : public UActorComponent
{
public:
	uint8                                         Pad_A8[0x20];                                      // 0x00A8(0x0020)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   _id;                                               // 0x00C8(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FModifierReplicatedEventConditionData  _eventDrivenConditionData;                         // 0x00D8(0x0010)(Net, Transient, RepNotify, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

public:
	void Authority_OnInstantiateModifierConditions();
	class UEventDrivenModifierCondition* CreateAndSetEventDrivenCondition(TSubclassOf<class UEventDrivenModifierCondition> ConditionType);
	void OnRep_EventDrivenConditionData_Internal(const struct FModifierReplicatedEventConditionData& OldReplicatedCondition);
	void OnRep_ID();

	bool IsApplicable() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BaseModifierContainer">();
	}
	static class UBaseModifierContainer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBaseModifierContainer>();
	}
};
static_assert(alignof(UBaseModifierContainer) == 0x000008, "Wrong alignment on UBaseModifierContainer");
static_assert(sizeof(UBaseModifierContainer) == 0x0000E8, "Wrong size on UBaseModifierContainer");
static_assert(offsetof(UBaseModifierContainer, _id) == 0x0000C8, "Member 'UBaseModifierContainer::_id' has a wrong offset!");
static_assert(offsetof(UBaseModifierContainer, _eventDrivenConditionData) == 0x0000D8, "Member 'UBaseModifierContainer::_eventDrivenConditionData' has a wrong offset!");

// Class Competence.RangeBasedCondition
// 0x0008 (0x00E8 - 0x00E0)
class URangeBasedCondition : public UEventDrivenModifierCondition
{
public:
	float                                         _range;                                            // 0x00E0(0x0004)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_Range();
	void SetRange(float NewRange);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RangeBasedCondition">();
	}
	static class URangeBasedCondition* GetDefaultObj()
	{
		return GetDefaultObjImpl<URangeBasedCondition>();
	}
};
static_assert(alignof(URangeBasedCondition) == 0x000008, "Wrong alignment on URangeBasedCondition");
static_assert(sizeof(URangeBasedCondition) == 0x0000E8, "Wrong size on URangeBasedCondition");
static_assert(offsetof(URangeBasedCondition, _range) == 0x0000E0, "Member 'URangeBasedCondition::_range' has a wrong offset!");

// Class Competence.CompositeModifierCondition
// 0x0018 (0x00F8 - 0x00E0)
class UCompositeModifierCondition : public UEventDrivenModifierCondition
{
public:
	uint8                                         Pad_E0[0x8];                                       // 0x00E0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UEventDrivenModifierCondition*>  _conditions;                                       // 0x00E8(0x0010)(ExportObject, Net, ZeroConstructor, Transient, RepNotify, ContainsInstancedReference, NativeAccessSpecifierPrivate)

public:
	void OnRep_Conditions();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompositeModifierCondition">();
	}
	static class UCompositeModifierCondition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompositeModifierCondition>();
	}
};
static_assert(alignof(UCompositeModifierCondition) == 0x000008, "Wrong alignment on UCompositeModifierCondition");
static_assert(sizeof(UCompositeModifierCondition) == 0x0000F8, "Wrong size on UCompositeModifierCondition");
static_assert(offsetof(UCompositeModifierCondition, _conditions) == 0x0000E8, "Member 'UCompositeModifierCondition::_conditions' has a wrong offset!");

// Class Competence.AndModifierCondition
// 0x0000 (0x00F8 - 0x00F8)
class UAndModifierCondition final : public UCompositeModifierCondition
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AndModifierCondition">();
	}
	static class UAndModifierCondition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAndModifierCondition>();
	}
};
static_assert(alignof(UAndModifierCondition) == 0x000008, "Wrong alignment on UAndModifierCondition");
static_assert(sizeof(UAndModifierCondition) == 0x0000F8, "Wrong size on UAndModifierCondition");

// Class Competence.CompetenceDebugger
// 0x0020 (0x0050 - 0x0030)
class UCompetenceDebugger final : public UObject
{
public:
	uint8                                         Pad_30[0x20];                                      // 0x0030(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompetenceDebugger">();
	}
	static class UCompetenceDebugger* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCompetenceDebugger>();
	}
};
static_assert(alignof(UCompetenceDebugger) == 0x000008, "Wrong alignment on UCompetenceDebugger");
static_assert(sizeof(UCompetenceDebugger) == 0x000050, "Wrong size on UCompetenceDebugger");

// Class Competence.ConditionFactory
// 0x0000 (0x0030 - 0x0030)
class UConditionFactory final : public UBlueprintFunctionLibrary
{
public:
	static class UAndModifierCondition* AND(TScriptInterface<class IConditionReceiver> ConditionReceiver);
	static class UEventDrivenModifierCondition* CreateAndReceiveConditionForBP(TScriptInterface<class IConditionReceiver> ConditionReceiver, TSubclassOf<class UEventDrivenModifierCondition> ConditionType);
	static class UEventDrivenModifierCondition* CreateAndReceiveConditionWithSubjectForBP(TScriptInterface<class IConditionReceiver> ConditionReceiver, TSubclassOf<class UEventDrivenModifierCondition> ConditionType, class UClass* SubjectProviderClass);
	static class URangeBasedCondition* CreateRangeBasedCondition(TScriptInterface<class IConditionReceiver> ConditionReceiver, TSubclassOf<class URangeBasedCondition> ConditionType, float Range);
	static class URangeBasedCondition* CreateRangeBasedConditionWithSubject(TScriptInterface<class IConditionReceiver> ConditionReceiver, TSubclassOf<class URangeBasedCondition> ConditionType, float Range, class UClass* SubjectProviderClass);
	static class UIsTimerDoneCondition* IsTimerDone(TScriptInterface<class IConditionReceiver> ConditionReceiver, class UTimerObject* Timer);
	static class ULingeringModifierCondition* Lingering(TScriptInterface<class IConditionReceiver> ConditionReceiver, float TimeToTrack);
	static class UNotModifierCondition* Not(TScriptInterface<class IConditionReceiver> ConditionReceiver);
	static class UOrModifierCondition* OR(TScriptInterface<class IConditionReceiver> ConditionReceiver);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConditionFactory">();
	}
	static class UConditionFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<UConditionFactory>();
	}
};
static_assert(alignof(UConditionFactory) == 0x000008, "Wrong alignment on UConditionFactory");
static_assert(sizeof(UConditionFactory) == 0x000030, "Wrong size on UConditionFactory");

// Class Competence.HasObjectState
// 0x0038 (0x0118 - 0x00E0)
class UHasObjectState : public UEventDrivenModifierCondition
{
public:
	struct FGameplayTag                           _state;                                            // 0x00E0(0x000C)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_EC[0x2C];                                      // 0x00EC(0x002C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetState(const struct FGameplayTag& State);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HasObjectState">();
	}
	static class UHasObjectState* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHasObjectState>();
	}
};
static_assert(alignof(UHasObjectState) == 0x000008, "Wrong alignment on UHasObjectState");
static_assert(sizeof(UHasObjectState) == 0x000118, "Wrong size on UHasObjectState");
static_assert(offsetof(UHasObjectState, _state) == 0x0000E0, "Member 'UHasObjectState::_state' has a wrong offset!");

// Class Competence.HasObjectStateWithMaxDuration
// 0x0038 (0x0150 - 0x0118)
class UHasObjectStateWithMaxDuration final : public UHasObjectState
{
public:
	uint8                                         Pad_118[0x30];                                     // 0x0118(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         _maxDuration;                                      // 0x0148(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_14C[0x4];                                      // 0x014C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetMaxDuration(float Duration);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HasObjectStateWithMaxDuration">();
	}
	static class UHasObjectStateWithMaxDuration* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHasObjectStateWithMaxDuration>();
	}
};
static_assert(alignof(UHasObjectStateWithMaxDuration) == 0x000008, "Wrong alignment on UHasObjectStateWithMaxDuration");
static_assert(sizeof(UHasObjectStateWithMaxDuration) == 0x000150, "Wrong size on UHasObjectStateWithMaxDuration");
static_assert(offsetof(UHasObjectStateWithMaxDuration, _maxDuration) == 0x000148, "Member 'UHasObjectStateWithMaxDuration::_maxDuration' has a wrong offset!");

// Class Competence.CompetenceFlagProvider
// 0x0000 (0x0030 - 0x0030)
class ICompetenceFlagProvider final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CompetenceFlagProvider">();
	}
	static class ICompetenceFlagProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<ICompetenceFlagProvider>();
	}
};
static_assert(alignof(ICompetenceFlagProvider) == 0x000008, "Wrong alignment on ICompetenceFlagProvider");
static_assert(sizeof(ICompetenceFlagProvider) == 0x000030, "Wrong size on ICompetenceFlagProvider");

// Class Competence.ConditionReceiver
// 0x0000 (0x0030 - 0x0030)
class IConditionReceiver final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ConditionReceiver">();
	}
	static class IConditionReceiver* GetDefaultObj()
	{
		return GetDefaultObjImpl<IConditionReceiver>();
	}
};
static_assert(alignof(IConditionReceiver) == 0x000008, "Wrong alignment on IConditionReceiver");
static_assert(sizeof(IConditionReceiver) == 0x000030, "Wrong size on IConditionReceiver");

// Class Competence.ModifierProvider
// 0x0000 (0x0030 - 0x0030)
class IModifierProvider final : public IInterface
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ModifierProvider">();
	}
	static class IModifierProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<IModifierProvider>();
	}
};
static_assert(alignof(IModifierProvider) == 0x000008, "Wrong alignment on IModifierProvider");
static_assert(sizeof(IModifierProvider) == 0x000030, "Wrong size on IModifierProvider");

// Class Competence.IsTimerDoneCondition
// 0x0010 (0x00F0 - 0x00E0)
class UIsTimerDoneCondition final : public UEventDrivenModifierCondition
{
public:
	class UTimerObject*                           _timer;                                            // 0x00E0(0x0008)(ExportObject, Net, ZeroConstructor, Transient, InstancedReference, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_E8[0x8];                                       // 0x00E8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnRep_Timer();
	void SetTimer(class UTimerObject* Timer);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"IsTimerDoneCondition">();
	}
	static class UIsTimerDoneCondition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIsTimerDoneCondition>();
	}
};
static_assert(alignof(UIsTimerDoneCondition) == 0x000008, "Wrong alignment on UIsTimerDoneCondition");
static_assert(sizeof(UIsTimerDoneCondition) == 0x0000F0, "Wrong size on UIsTimerDoneCondition");
static_assert(offsetof(UIsTimerDoneCondition, _timer) == 0x0000E0, "Member 'UIsTimerDoneCondition::_timer' has a wrong offset!");

// Class Competence.LingeringModifierCondition
// 0x0038 (0x0128 - 0x00F0)
class ULingeringModifierCondition final : public USingleModifierCondition
{
public:
	uint8                                         Pad_F0[0x30];                                      // 0x00F0(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         _timeConditionIsTracked;                           // 0x0120(0x0004)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnTimerEnd();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LingeringModifierCondition">();
	}
	static class ULingeringModifierCondition* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULingeringModifierCondition>();
	}
};
static_assert(alignof(ULingeringModifierCondition) == 0x000008, "Wrong alignment on ULingeringModifierCondition");
static_assert(sizeof(ULingeringModifierCondition) == 0x000128, "Wrong size on ULingeringModifierCondition");
static_assert(offsetof(ULingeringModifierCondition, _timeConditionIsTracked) == 0x000120, "Member 'ULingeringModifierCondition::_timeConditionIsTracked' has a wrong offset!");

// Class Competence.OrModifierCondition
// 0x0000 (0x00F8 - 0x00F8)
class UOrModifierCondition final : public UCompositeModifierCondition
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OrModifierCondition">();
	}
	static class UOrModifierCondition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOrModifierCondition>();
	}
};
static_assert(alignof(UOrModifierCondition) == 0x000008, "Wrong alignment on UOrModifierCondition");
static_assert(sizeof(UOrModifierCondition) == 0x0000F8, "Wrong size on UOrModifierCondition");

// Class Competence.OwnerSubjectProvider
// 0x0000 (0x0048 - 0x0048)
class UOwnerSubjectProvider final : public UModifierSubjectProvider
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OwnerSubjectProvider">();
	}
	static class UOwnerSubjectProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOwnerSubjectProvider>();
	}
};
static_assert(alignof(UOwnerSubjectProvider) == 0x000008, "Wrong alignment on UOwnerSubjectProvider");
static_assert(sizeof(UOwnerSubjectProvider) == 0x000048, "Wrong size on UOwnerSubjectProvider");

// Class Competence.TestEventDrivenModifierCondition
// 0x0000 (0x00E0 - 0x00E0)
class UTestEventDrivenModifierCondition final : public UEventDrivenModifierCondition
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TestEventDrivenModifierCondition">();
	}
	static class UTestEventDrivenModifierCondition* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTestEventDrivenModifierCondition>();
	}
};
static_assert(alignof(UTestEventDrivenModifierCondition) == 0x000008, "Wrong alignment on UTestEventDrivenModifierCondition");
static_assert(sizeof(UTestEventDrivenModifierCondition) == 0x0000E0, "Wrong size on UTestEventDrivenModifierCondition");

// Class Competence.TestObjectStateProviderComponent
// 0x0010 (0x00B8 - 0x00A8)
class UTestObjectStateProviderComponent final : public UActorComponent
{
public:
	uint8                                         Pad_A8[0x8];                                       // 0x00A8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameplayTagContainerComponent*         GameplayTagContainerComponent;                     // 0x00B0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TestObjectStateProviderComponent">();
	}
	static class UTestObjectStateProviderComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTestObjectStateProviderComponent>();
	}
};
static_assert(alignof(UTestObjectStateProviderComponent) == 0x000008, "Wrong alignment on UTestObjectStateProviderComponent");
static_assert(sizeof(UTestObjectStateProviderComponent) == 0x0000B8, "Wrong size on UTestObjectStateProviderComponent");
static_assert(offsetof(UTestObjectStateProviderComponent, GameplayTagContainerComponent) == 0x0000B0, "Member 'UTestObjectStateProviderComponent::GameplayTagContainerComponent' has a wrong offset!");

}

