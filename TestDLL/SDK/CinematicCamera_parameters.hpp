#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CinematicCamera

#include "Basic.hpp"

#include "CinematicCamera_structs.hpp"


namespace SDK::Params
{

// Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
// 0x0008 (0x0008 - 0x0000)
struct CameraRig_Rail_GetRailSplineComponent final
{
public:
	class USplineComponent*                       ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CameraRig_Rail_GetRailSplineComponent) == 0x000008, "Wrong alignment on CameraRig_Rail_GetRailSplineComponent");
static_assert(sizeof(CameraRig_Rail_GetRailSplineComponent) == 0x000008, "Wrong size on CameraRig_Rail_GetRailSplineComponent");
static_assert(offsetof(CameraRig_Rail_GetRailSplineComponent, ReturnValue) == 0x000000, "Member 'CameraRig_Rail_GetRailSplineComponent::ReturnValue' has a wrong offset!");

// Function CinematicCamera.CineCameraActor.GetCineCameraComponent
// 0x0008 (0x0008 - 0x0000)
struct CineCameraActor_GetCineCameraComponent final
{
public:
	class UCineCameraComponent*                   ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraActor_GetCineCameraComponent) == 0x000008, "Wrong alignment on CineCameraActor_GetCineCameraComponent");
static_assert(sizeof(CineCameraActor_GetCineCameraComponent) == 0x000008, "Wrong size on CineCameraActor_GetCineCameraComponent");
static_assert(offsetof(CineCameraActor_GetCineCameraComponent, ReturnValue) == 0x000000, "Member 'CineCameraActor_GetCineCameraComponent::ReturnValue' has a wrong offset!");

// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_GetFilmbackPresetsCopy final
{
public:
	TArray<struct FNamedFilmbackPreset>           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraComponent_GetFilmbackPresetsCopy) == 0x000008, "Wrong alignment on CineCameraComponent_GetFilmbackPresetsCopy");
static_assert(sizeof(CineCameraComponent_GetFilmbackPresetsCopy) == 0x000010, "Wrong size on CineCameraComponent_GetFilmbackPresetsCopy");
static_assert(offsetof(CineCameraComponent_GetFilmbackPresetsCopy, ReturnValue) == 0x000000, "Member 'CineCameraComponent_GetFilmbackPresetsCopy::ReturnValue' has a wrong offset!");

// Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_GetLensPresetsCopy final
{
public:
	TArray<struct FNamedLensPreset>               ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraComponent_GetLensPresetsCopy) == 0x000008, "Wrong alignment on CineCameraComponent_GetLensPresetsCopy");
static_assert(sizeof(CineCameraComponent_GetLensPresetsCopy) == 0x000010, "Wrong size on CineCameraComponent_GetLensPresetsCopy");
static_assert(offsetof(CineCameraComponent_GetLensPresetsCopy, ReturnValue) == 0x000000, "Member 'CineCameraComponent_GetLensPresetsCopy::ReturnValue' has a wrong offset!");

// Function CinematicCamera.CineCameraComponent.SetCropPresetByName
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_SetCropPresetByName final
{
public:
	class FString                                 InPresetName;                                      // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraComponent_SetCropPresetByName) == 0x000008, "Wrong alignment on CineCameraComponent_SetCropPresetByName");
static_assert(sizeof(CineCameraComponent_SetCropPresetByName) == 0x000010, "Wrong size on CineCameraComponent_SetCropPresetByName");
static_assert(offsetof(CineCameraComponent_SetCropPresetByName, InPresetName) == 0x000000, "Member 'CineCameraComponent_SetCropPresetByName::InPresetName' has a wrong offset!");

// Function CinematicCamera.CineCameraComponent.SetCropSettings
// 0x0004 (0x0004 - 0x0000)
struct CineCameraComponent_SetCropSettings final
{
public:
	struct FPlateCropSettings                     NewCropSettings;                                   // 0x0000(0x0004)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraComponent_SetCropSettings) == 0x000004, "Wrong alignment on CineCameraComponent_SetCropSettings");
static_assert(sizeof(CineCameraComponent_SetCropSettings) == 0x000004, "Wrong size on CineCameraComponent_SetCropSettings");
static_assert(offsetof(CineCameraComponent_SetCropSettings, NewCropSettings) == 0x000000, "Member 'CineCameraComponent_SetCropSettings::NewCropSettings' has a wrong offset!");

// Function CinematicCamera.CineCameraComponent.SetCurrentAperture
// 0x0004 (0x0004 - 0x0000)
struct CineCameraComponent_SetCurrentAperture final
{
public:
	float                                         NewCurrentAperture;                                // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraComponent_SetCurrentAperture) == 0x000004, "Wrong alignment on CineCameraComponent_SetCurrentAperture");
static_assert(sizeof(CineCameraComponent_SetCurrentAperture) == 0x000004, "Wrong size on CineCameraComponent_SetCurrentAperture");
static_assert(offsetof(CineCameraComponent_SetCurrentAperture, NewCurrentAperture) == 0x000000, "Member 'CineCameraComponent_SetCurrentAperture::NewCurrentAperture' has a wrong offset!");

// Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
// 0x0004 (0x0004 - 0x0000)
struct CineCameraComponent_SetCurrentFocalLength final
{
public:
	float                                         InFocalLength;                                     // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraComponent_SetCurrentFocalLength) == 0x000004, "Wrong alignment on CineCameraComponent_SetCurrentFocalLength");
static_assert(sizeof(CineCameraComponent_SetCurrentFocalLength) == 0x000004, "Wrong size on CineCameraComponent_SetCurrentFocalLength");
static_assert(offsetof(CineCameraComponent_SetCurrentFocalLength, InFocalLength) == 0x000000, "Member 'CineCameraComponent_SetCurrentFocalLength::InFocalLength' has a wrong offset!");

// Function CinematicCamera.CineCameraComponent.SetCustomNearClippingPlane
// 0x0004 (0x0004 - 0x0000)
struct CineCameraComponent_SetCustomNearClippingPlane final
{
public:
	float                                         NewCustomNearClippingPlane;                        // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraComponent_SetCustomNearClippingPlane) == 0x000004, "Wrong alignment on CineCameraComponent_SetCustomNearClippingPlane");
static_assert(sizeof(CineCameraComponent_SetCustomNearClippingPlane) == 0x000004, "Wrong size on CineCameraComponent_SetCustomNearClippingPlane");
static_assert(offsetof(CineCameraComponent_SetCustomNearClippingPlane, NewCustomNearClippingPlane) == 0x000000, "Member 'CineCameraComponent_SetCustomNearClippingPlane::NewCustomNearClippingPlane' has a wrong offset!");

// Function CinematicCamera.CineCameraComponent.SetFilmback
// 0x000C (0x000C - 0x0000)
struct CineCameraComponent_SetFilmback final
{
public:
	struct FCameraFilmbackSettings                NewFilmback;                                       // 0x0000(0x000C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraComponent_SetFilmback) == 0x000004, "Wrong alignment on CineCameraComponent_SetFilmback");
static_assert(sizeof(CineCameraComponent_SetFilmback) == 0x00000C, "Wrong size on CineCameraComponent_SetFilmback");
static_assert(offsetof(CineCameraComponent_SetFilmback, NewFilmback) == 0x000000, "Member 'CineCameraComponent_SetFilmback::NewFilmback' has a wrong offset!");

// Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_SetFilmbackPresetByName final
{
public:
	class FString                                 InPresetName;                                      // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraComponent_SetFilmbackPresetByName) == 0x000008, "Wrong alignment on CineCameraComponent_SetFilmbackPresetByName");
static_assert(sizeof(CineCameraComponent_SetFilmbackPresetByName) == 0x000010, "Wrong size on CineCameraComponent_SetFilmbackPresetByName");
static_assert(offsetof(CineCameraComponent_SetFilmbackPresetByName, InPresetName) == 0x000000, "Member 'CineCameraComponent_SetFilmbackPresetByName::InPresetName' has a wrong offset!");

// Function CinematicCamera.CineCameraComponent.SetFocusSettings
// 0x0070 (0x0070 - 0x0000)
struct CineCameraComponent_SetFocusSettings final
{
public:
	struct FCameraFocusSettings                   NewFocusSettings;                                  // 0x0000(0x0070)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraComponent_SetFocusSettings) == 0x000008, "Wrong alignment on CineCameraComponent_SetFocusSettings");
static_assert(sizeof(CineCameraComponent_SetFocusSettings) == 0x000070, "Wrong size on CineCameraComponent_SetFocusSettings");
static_assert(offsetof(CineCameraComponent_SetFocusSettings, NewFocusSettings) == 0x000000, "Member 'CineCameraComponent_SetFocusSettings::NewFocusSettings' has a wrong offset!");

// Function CinematicCamera.CineCameraComponent.SetLensPresetByName
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_SetLensPresetByName final
{
public:
	class FString                                 InPresetName;                                      // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraComponent_SetLensPresetByName) == 0x000008, "Wrong alignment on CineCameraComponent_SetLensPresetByName");
static_assert(sizeof(CineCameraComponent_SetLensPresetByName) == 0x000010, "Wrong size on CineCameraComponent_SetLensPresetByName");
static_assert(offsetof(CineCameraComponent_SetLensPresetByName, InPresetName) == 0x000000, "Member 'CineCameraComponent_SetLensPresetByName::InPresetName' has a wrong offset!");

// Function CinematicCamera.CineCameraComponent.SetLensSettings
// 0x001C (0x001C - 0x0000)
struct CineCameraComponent_SetLensSettings final
{
public:
	struct FCameraLensSettings                    NewLensSettings;                                   // 0x0000(0x001C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraComponent_SetLensSettings) == 0x000004, "Wrong alignment on CineCameraComponent_SetLensSettings");
static_assert(sizeof(CineCameraComponent_SetLensSettings) == 0x00001C, "Wrong size on CineCameraComponent_SetLensSettings");
static_assert(offsetof(CineCameraComponent_SetLensSettings, NewLensSettings) == 0x000000, "Member 'CineCameraComponent_SetLensSettings::NewLensSettings' has a wrong offset!");

// Function CinematicCamera.CineCameraComponent.GetCropPresetName
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_GetCropPresetName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraComponent_GetCropPresetName) == 0x000008, "Wrong alignment on CineCameraComponent_GetCropPresetName");
static_assert(sizeof(CineCameraComponent_GetCropPresetName) == 0x000010, "Wrong size on CineCameraComponent_GetCropPresetName");
static_assert(offsetof(CineCameraComponent_GetCropPresetName, ReturnValue) == 0x000000, "Member 'CineCameraComponent_GetCropPresetName::ReturnValue' has a wrong offset!");

// Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_GetDefaultFilmbackPresetName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraComponent_GetDefaultFilmbackPresetName) == 0x000008, "Wrong alignment on CineCameraComponent_GetDefaultFilmbackPresetName");
static_assert(sizeof(CineCameraComponent_GetDefaultFilmbackPresetName) == 0x000010, "Wrong size on CineCameraComponent_GetDefaultFilmbackPresetName");
static_assert(offsetof(CineCameraComponent_GetDefaultFilmbackPresetName, ReturnValue) == 0x000000, "Member 'CineCameraComponent_GetDefaultFilmbackPresetName::ReturnValue' has a wrong offset!");

// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_GetFilmbackPresetName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraComponent_GetFilmbackPresetName) == 0x000008, "Wrong alignment on CineCameraComponent_GetFilmbackPresetName");
static_assert(sizeof(CineCameraComponent_GetFilmbackPresetName) == 0x000010, "Wrong size on CineCameraComponent_GetFilmbackPresetName");
static_assert(offsetof(CineCameraComponent_GetFilmbackPresetName, ReturnValue) == 0x000000, "Member 'CineCameraComponent_GetFilmbackPresetName::ReturnValue' has a wrong offset!");

// Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
// 0x0004 (0x0004 - 0x0000)
struct CineCameraComponent_GetHorizontalFieldOfView final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraComponent_GetHorizontalFieldOfView) == 0x000004, "Wrong alignment on CineCameraComponent_GetHorizontalFieldOfView");
static_assert(sizeof(CineCameraComponent_GetHorizontalFieldOfView) == 0x000004, "Wrong size on CineCameraComponent_GetHorizontalFieldOfView");
static_assert(offsetof(CineCameraComponent_GetHorizontalFieldOfView, ReturnValue) == 0x000000, "Member 'CineCameraComponent_GetHorizontalFieldOfView::ReturnValue' has a wrong offset!");

// Function CinematicCamera.CineCameraComponent.GetLensPresetName
// 0x0010 (0x0010 - 0x0000)
struct CineCameraComponent_GetLensPresetName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraComponent_GetLensPresetName) == 0x000008, "Wrong alignment on CineCameraComponent_GetLensPresetName");
static_assert(sizeof(CineCameraComponent_GetLensPresetName) == 0x000010, "Wrong size on CineCameraComponent_GetLensPresetName");
static_assert(offsetof(CineCameraComponent_GetLensPresetName, ReturnValue) == 0x000000, "Member 'CineCameraComponent_GetLensPresetName::ReturnValue' has a wrong offset!");

// Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
// 0x0004 (0x0004 - 0x0000)
struct CineCameraComponent_GetVerticalFieldOfView final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraComponent_GetVerticalFieldOfView) == 0x000004, "Wrong alignment on CineCameraComponent_GetVerticalFieldOfView");
static_assert(sizeof(CineCameraComponent_GetVerticalFieldOfView) == 0x000004, "Wrong size on CineCameraComponent_GetVerticalFieldOfView");
static_assert(offsetof(CineCameraComponent_GetVerticalFieldOfView, ReturnValue) == 0x000000, "Member 'CineCameraComponent_GetVerticalFieldOfView::ReturnValue' has a wrong offset!");

// Function CinematicCamera.CineCameraSettings.GetCineCameraSettings
// 0x0008 (0x0008 - 0x0000)
struct CineCameraSettings_GetCineCameraSettings final
{
public:
	class UCineCameraSettings*                    ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraSettings_GetCineCameraSettings) == 0x000008, "Wrong alignment on CineCameraSettings_GetCineCameraSettings");
static_assert(sizeof(CineCameraSettings_GetCineCameraSettings) == 0x000008, "Wrong size on CineCameraSettings_GetCineCameraSettings");
static_assert(offsetof(CineCameraSettings_GetCineCameraSettings, ReturnValue) == 0x000000, "Member 'CineCameraSettings_GetCineCameraSettings::ReturnValue' has a wrong offset!");

// Function CinematicCamera.CineCameraSettings.GetCropPresetByName
// 0x0018 (0x0018 - 0x0000)
struct CineCameraSettings_GetCropPresetByName final
{
public:
	class FString                                 PresetName;                                        // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlateCropSettings                     CropSettings;                                      // 0x0010(0x0004)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CineCameraSettings_GetCropPresetByName) == 0x000008, "Wrong alignment on CineCameraSettings_GetCropPresetByName");
static_assert(sizeof(CineCameraSettings_GetCropPresetByName) == 0x000018, "Wrong size on CineCameraSettings_GetCropPresetByName");
static_assert(offsetof(CineCameraSettings_GetCropPresetByName, PresetName) == 0x000000, "Member 'CineCameraSettings_GetCropPresetByName::PresetName' has a wrong offset!");
static_assert(offsetof(CineCameraSettings_GetCropPresetByName, CropSettings) == 0x000010, "Member 'CineCameraSettings_GetCropPresetByName::CropSettings' has a wrong offset!");
static_assert(offsetof(CineCameraSettings_GetCropPresetByName, ReturnValue) == 0x000014, "Member 'CineCameraSettings_GetCropPresetByName::ReturnValue' has a wrong offset!");

// Function CinematicCamera.CineCameraSettings.GetFilmbackPresetByName
// 0x0020 (0x0020 - 0x0000)
struct CineCameraSettings_GetFilmbackPresetByName final
{
public:
	class FString                                 PresetName;                                        // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraFilmbackSettings                FilmbackSettings;                                  // 0x0010(0x000C)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x001C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CineCameraSettings_GetFilmbackPresetByName) == 0x000008, "Wrong alignment on CineCameraSettings_GetFilmbackPresetByName");
static_assert(sizeof(CineCameraSettings_GetFilmbackPresetByName) == 0x000020, "Wrong size on CineCameraSettings_GetFilmbackPresetByName");
static_assert(offsetof(CineCameraSettings_GetFilmbackPresetByName, PresetName) == 0x000000, "Member 'CineCameraSettings_GetFilmbackPresetByName::PresetName' has a wrong offset!");
static_assert(offsetof(CineCameraSettings_GetFilmbackPresetByName, FilmbackSettings) == 0x000010, "Member 'CineCameraSettings_GetFilmbackPresetByName::FilmbackSettings' has a wrong offset!");
static_assert(offsetof(CineCameraSettings_GetFilmbackPresetByName, ReturnValue) == 0x00001C, "Member 'CineCameraSettings_GetFilmbackPresetByName::ReturnValue' has a wrong offset!");

// Function CinematicCamera.CineCameraSettings.GetLensPresetByName
// 0x0030 (0x0030 - 0x0000)
struct CineCameraSettings_GetLensPresetByName final
{
public:
	class FString                                 PresetName;                                        // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCameraLensSettings                    LensSettings;                                      // 0x0010(0x001C)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x002C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CineCameraSettings_GetLensPresetByName) == 0x000008, "Wrong alignment on CineCameraSettings_GetLensPresetByName");
static_assert(sizeof(CineCameraSettings_GetLensPresetByName) == 0x000030, "Wrong size on CineCameraSettings_GetLensPresetByName");
static_assert(offsetof(CineCameraSettings_GetLensPresetByName, PresetName) == 0x000000, "Member 'CineCameraSettings_GetLensPresetByName::PresetName' has a wrong offset!");
static_assert(offsetof(CineCameraSettings_GetLensPresetByName, LensSettings) == 0x000010, "Member 'CineCameraSettings_GetLensPresetByName::LensSettings' has a wrong offset!");
static_assert(offsetof(CineCameraSettings_GetLensPresetByName, ReturnValue) == 0x00002C, "Member 'CineCameraSettings_GetLensPresetByName::ReturnValue' has a wrong offset!");

// Function CinematicCamera.CineCameraSettings.SetCropPresets
// 0x0010 (0x0010 - 0x0000)
struct CineCameraSettings_SetCropPresets final
{
public:
	TArray<struct FNamedPlateCropPreset>          InCropPresets;                                     // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraSettings_SetCropPresets) == 0x000008, "Wrong alignment on CineCameraSettings_SetCropPresets");
static_assert(sizeof(CineCameraSettings_SetCropPresets) == 0x000010, "Wrong size on CineCameraSettings_SetCropPresets");
static_assert(offsetof(CineCameraSettings_SetCropPresets, InCropPresets) == 0x000000, "Member 'CineCameraSettings_SetCropPresets::InCropPresets' has a wrong offset!");

// Function CinematicCamera.CineCameraSettings.SetDefaultCropPresetName
// 0x0010 (0x0010 - 0x0000)
struct CineCameraSettings_SetDefaultCropPresetName final
{
public:
	class FString                                 InDefaultCropPresetName;                           // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraSettings_SetDefaultCropPresetName) == 0x000008, "Wrong alignment on CineCameraSettings_SetDefaultCropPresetName");
static_assert(sizeof(CineCameraSettings_SetDefaultCropPresetName) == 0x000010, "Wrong size on CineCameraSettings_SetDefaultCropPresetName");
static_assert(offsetof(CineCameraSettings_SetDefaultCropPresetName, InDefaultCropPresetName) == 0x000000, "Member 'CineCameraSettings_SetDefaultCropPresetName::InDefaultCropPresetName' has a wrong offset!");

// Function CinematicCamera.CineCameraSettings.SetDefaultFilmbackPreset
// 0x0010 (0x0010 - 0x0000)
struct CineCameraSettings_SetDefaultFilmbackPreset final
{
public:
	class FString                                 InDefaultFilmbackPreset;                           // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraSettings_SetDefaultFilmbackPreset) == 0x000008, "Wrong alignment on CineCameraSettings_SetDefaultFilmbackPreset");
static_assert(sizeof(CineCameraSettings_SetDefaultFilmbackPreset) == 0x000010, "Wrong size on CineCameraSettings_SetDefaultFilmbackPreset");
static_assert(offsetof(CineCameraSettings_SetDefaultFilmbackPreset, InDefaultFilmbackPreset) == 0x000000, "Member 'CineCameraSettings_SetDefaultFilmbackPreset::InDefaultFilmbackPreset' has a wrong offset!");

// Function CinematicCamera.CineCameraSettings.SetDefaultLensFocalLength
// 0x0004 (0x0004 - 0x0000)
struct CineCameraSettings_SetDefaultLensFocalLength final
{
public:
	float                                         InDefaultLensFocalLength;                          // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraSettings_SetDefaultLensFocalLength) == 0x000004, "Wrong alignment on CineCameraSettings_SetDefaultLensFocalLength");
static_assert(sizeof(CineCameraSettings_SetDefaultLensFocalLength) == 0x000004, "Wrong size on CineCameraSettings_SetDefaultLensFocalLength");
static_assert(offsetof(CineCameraSettings_SetDefaultLensFocalLength, InDefaultLensFocalLength) == 0x000000, "Member 'CineCameraSettings_SetDefaultLensFocalLength::InDefaultLensFocalLength' has a wrong offset!");

// Function CinematicCamera.CineCameraSettings.SetDefaultLensFStop
// 0x0004 (0x0004 - 0x0000)
struct CineCameraSettings_SetDefaultLensFStop final
{
public:
	float                                         InDefaultLensFStop;                                // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraSettings_SetDefaultLensFStop) == 0x000004, "Wrong alignment on CineCameraSettings_SetDefaultLensFStop");
static_assert(sizeof(CineCameraSettings_SetDefaultLensFStop) == 0x000004, "Wrong size on CineCameraSettings_SetDefaultLensFStop");
static_assert(offsetof(CineCameraSettings_SetDefaultLensFStop, InDefaultLensFStop) == 0x000000, "Member 'CineCameraSettings_SetDefaultLensFStop::InDefaultLensFStop' has a wrong offset!");

// Function CinematicCamera.CineCameraSettings.SetDefaultLensPresetName
// 0x0010 (0x0010 - 0x0000)
struct CineCameraSettings_SetDefaultLensPresetName final
{
public:
	class FString                                 InDefaultLensPresetName;                           // 0x0000(0x0010)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraSettings_SetDefaultLensPresetName) == 0x000008, "Wrong alignment on CineCameraSettings_SetDefaultLensPresetName");
static_assert(sizeof(CineCameraSettings_SetDefaultLensPresetName) == 0x000010, "Wrong size on CineCameraSettings_SetDefaultLensPresetName");
static_assert(offsetof(CineCameraSettings_SetDefaultLensPresetName, InDefaultLensPresetName) == 0x000000, "Member 'CineCameraSettings_SetDefaultLensPresetName::InDefaultLensPresetName' has a wrong offset!");

// Function CinematicCamera.CineCameraSettings.SetFilmbackPresets
// 0x0010 (0x0010 - 0x0000)
struct CineCameraSettings_SetFilmbackPresets final
{
public:
	TArray<struct FNamedFilmbackPreset>           InFilmbackPresets;                                 // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraSettings_SetFilmbackPresets) == 0x000008, "Wrong alignment on CineCameraSettings_SetFilmbackPresets");
static_assert(sizeof(CineCameraSettings_SetFilmbackPresets) == 0x000010, "Wrong size on CineCameraSettings_SetFilmbackPresets");
static_assert(offsetof(CineCameraSettings_SetFilmbackPresets, InFilmbackPresets) == 0x000000, "Member 'CineCameraSettings_SetFilmbackPresets::InFilmbackPresets' has a wrong offset!");

// Function CinematicCamera.CineCameraSettings.SetLensPresets
// 0x0010 (0x0010 - 0x0000)
struct CineCameraSettings_SetLensPresets final
{
public:
	TArray<struct FNamedLensPreset>               InLensPresets;                                     // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraSettings_SetLensPresets) == 0x000008, "Wrong alignment on CineCameraSettings_SetLensPresets");
static_assert(sizeof(CineCameraSettings_SetLensPresets) == 0x000010, "Wrong size on CineCameraSettings_SetLensPresets");
static_assert(offsetof(CineCameraSettings_SetLensPresets, InLensPresets) == 0x000000, "Member 'CineCameraSettings_SetLensPresets::InLensPresets' has a wrong offset!");

// Function CinematicCamera.CineCameraSettings.GetCropPresetNames
// 0x0010 (0x0010 - 0x0000)
struct CineCameraSettings_GetCropPresetNames final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraSettings_GetCropPresetNames) == 0x000008, "Wrong alignment on CineCameraSettings_GetCropPresetNames");
static_assert(sizeof(CineCameraSettings_GetCropPresetNames) == 0x000010, "Wrong size on CineCameraSettings_GetCropPresetNames");
static_assert(offsetof(CineCameraSettings_GetCropPresetNames, ReturnValue) == 0x000000, "Member 'CineCameraSettings_GetCropPresetNames::ReturnValue' has a wrong offset!");

// Function CinematicCamera.CineCameraSettings.GetFilmbackPresetNames
// 0x0010 (0x0010 - 0x0000)
struct CineCameraSettings_GetFilmbackPresetNames final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraSettings_GetFilmbackPresetNames) == 0x000008, "Wrong alignment on CineCameraSettings_GetFilmbackPresetNames");
static_assert(sizeof(CineCameraSettings_GetFilmbackPresetNames) == 0x000010, "Wrong size on CineCameraSettings_GetFilmbackPresetNames");
static_assert(offsetof(CineCameraSettings_GetFilmbackPresetNames, ReturnValue) == 0x000000, "Member 'CineCameraSettings_GetFilmbackPresetNames::ReturnValue' has a wrong offset!");

// Function CinematicCamera.CineCameraSettings.GetLensPresetNames
// 0x0010 (0x0010 - 0x0000)
struct CineCameraSettings_GetLensPresetNames final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(CineCameraSettings_GetLensPresetNames) == 0x000008, "Wrong alignment on CineCameraSettings_GetLensPresetNames");
static_assert(sizeof(CineCameraSettings_GetLensPresetNames) == 0x000010, "Wrong size on CineCameraSettings_GetLensPresetNames");
static_assert(offsetof(CineCameraSettings_GetLensPresetNames, ReturnValue) == 0x000000, "Member 'CineCameraSettings_GetLensPresetNames::ReturnValue' has a wrong offset!");

}
