#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LightingInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "LightingInterfaceEnum_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass LightingInterface.LightingInterface_C
// 0x0000 (0x0030 - 0x0030)
class ILightingInterface_C final : public IInterface
{
public:
	void GetBasementPost(ELightingInterfaceEnum* BP_Type, struct FDBDPerPlatformFloat* Override);
	void GetCondemnedStatusVignetteIntensity(ELightingInterfaceEnum* BP_Type, double* CondemnedStatusIntensityOverride);
	void GetDetectionZoneIntensity(ELightingInterfaceEnum* BP_Type, double* DetectionZoneCylinderIntensityOverride, double* DetectionZoneDecalIntensityOverride);
	void GetLightingPost(TArray<class UPostProcessComponent*>* PostProcess, ELightingInterfaceEnum* BP_Type);
	void SetPostOverride(const struct FPostProcessSettings& PostSettings, class UPostProcessComponent* PostProcess);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LightingInterface_C">();
	}
	static class ILightingInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ILightingInterface_C>();
	}
};
static_assert(alignof(ILightingInterface_C) == 0x000008, "Wrong alignment on ILightingInterface_C");
static_assert(sizeof(ILightingInterface_C) == 0x000030, "Wrong size on ILightingInterface_C");

}
