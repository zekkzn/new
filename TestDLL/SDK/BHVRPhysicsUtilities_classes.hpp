#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BHVRPhysicsUtilities

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class BHVRPhysicsUtilities.DynamicCapsuleResizerComponent
// 0x0070 (0x0118 - 0x00A8)
class UDynamicCapsuleResizerComponent final : public UActorComponent
{
public:
	class UCapsuleComponent*                      _capsule;                                          // 0x00A8(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_B0[0x18];                                      // 0x00B0(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  _preventingShrinkTag;                              // 0x00C8(0x0020)(Edit, NativeAccessSpecifierPrivate)
	float                                         _shrinkPercent;                                    // 0x00E8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _shrinkDuration;                                   // 0x00EC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _expandDuration;                                   // 0x00F0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _stayShrunkenDuration;                             // 0x00F4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         _expandOverlapTestMinDeltaTime;                    // 0x00F8(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          _isShrinkingEnabled;                               // 0x00FC(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          _isShrinkingAlwaysEnabled;                         // 0x00FD(0x0001)(Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_FE[0x1A];                                      // 0x00FE(0x001A)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnRep_IsShrinkingAlwaysEnabled();
	void SetShrinkingEnabled(bool Enabled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DynamicCapsuleResizerComponent">();
	}
	static class UDynamicCapsuleResizerComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDynamicCapsuleResizerComponent>();
	}
};
static_assert(alignof(UDynamicCapsuleResizerComponent) == 0x000008, "Wrong alignment on UDynamicCapsuleResizerComponent");
static_assert(sizeof(UDynamicCapsuleResizerComponent) == 0x000118, "Wrong size on UDynamicCapsuleResizerComponent");
static_assert(offsetof(UDynamicCapsuleResizerComponent, _capsule) == 0x0000A8, "Member 'UDynamicCapsuleResizerComponent::_capsule' has a wrong offset!");
static_assert(offsetof(UDynamicCapsuleResizerComponent, _preventingShrinkTag) == 0x0000C8, "Member 'UDynamicCapsuleResizerComponent::_preventingShrinkTag' has a wrong offset!");
static_assert(offsetof(UDynamicCapsuleResizerComponent, _shrinkPercent) == 0x0000E8, "Member 'UDynamicCapsuleResizerComponent::_shrinkPercent' has a wrong offset!");
static_assert(offsetof(UDynamicCapsuleResizerComponent, _shrinkDuration) == 0x0000EC, "Member 'UDynamicCapsuleResizerComponent::_shrinkDuration' has a wrong offset!");
static_assert(offsetof(UDynamicCapsuleResizerComponent, _expandDuration) == 0x0000F0, "Member 'UDynamicCapsuleResizerComponent::_expandDuration' has a wrong offset!");
static_assert(offsetof(UDynamicCapsuleResizerComponent, _stayShrunkenDuration) == 0x0000F4, "Member 'UDynamicCapsuleResizerComponent::_stayShrunkenDuration' has a wrong offset!");
static_assert(offsetof(UDynamicCapsuleResizerComponent, _expandOverlapTestMinDeltaTime) == 0x0000F8, "Member 'UDynamicCapsuleResizerComponent::_expandOverlapTestMinDeltaTime' has a wrong offset!");
static_assert(offsetof(UDynamicCapsuleResizerComponent, _isShrinkingEnabled) == 0x0000FC, "Member 'UDynamicCapsuleResizerComponent::_isShrinkingEnabled' has a wrong offset!");
static_assert(offsetof(UDynamicCapsuleResizerComponent, _isShrinkingAlwaysEnabled) == 0x0000FD, "Member 'UDynamicCapsuleResizerComponent::_isShrinkingAlwaysEnabled' has a wrong offset!");

// Class BHVRPhysicsUtilities.PrimitiveCollection
// 0x0050 (0x0080 - 0x0030)
class UPrimitiveCollection final : public UObject
{
public:
	TSet<TWeakObjectPtr<class UPrimitiveComponent>> _primitives;                                       // 0x0030(0x0050)(ExportObject, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

public:
	void Add(class UPrimitiveComponent* Primitive);
	void Remove(class UPrimitiveComponent* Primitive);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PrimitiveCollection">();
	}
	static class UPrimitiveCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPrimitiveCollection>();
	}
};
static_assert(alignof(UPrimitiveCollection) == 0x000008, "Wrong alignment on UPrimitiveCollection");
static_assert(sizeof(UPrimitiveCollection) == 0x000080, "Wrong size on UPrimitiveCollection");
static_assert(offsetof(UPrimitiveCollection, _primitives) == 0x000030, "Member 'UPrimitiveCollection::_primitives' has a wrong offset!");

// Class BHVRPhysicsUtilities.PrimitivesRegistererComponent
// 0x0018 (0x00C0 - 0x00A8)
class UPrimitivesRegistererComponent final : public UActorComponent
{
public:
	TArray<class UPrimitiveComponent*>            _primitives;                                       // 0x00A8(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UPrimitiveCollection>    _primitiveCollection;                              // 0x00B8(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void SetPrimitives(const TArray<class UPrimitiveComponent*>& Primitives);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PrimitivesRegistererComponent">();
	}
	static class UPrimitivesRegistererComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPrimitivesRegistererComponent>();
	}
};
static_assert(alignof(UPrimitivesRegistererComponent) == 0x000008, "Wrong alignment on UPrimitivesRegistererComponent");
static_assert(sizeof(UPrimitivesRegistererComponent) == 0x0000C0, "Wrong size on UPrimitivesRegistererComponent");
static_assert(offsetof(UPrimitivesRegistererComponent, _primitives) == 0x0000A8, "Member 'UPrimitivesRegistererComponent::_primitives' has a wrong offset!");
static_assert(offsetof(UPrimitivesRegistererComponent, _primitiveCollection) == 0x0000B8, "Member 'UPrimitivesRegistererComponent::_primitiveCollection' has a wrong offset!");

}
