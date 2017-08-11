// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMainMenuLibInput;
struct FKeyEvent;
struct FMainMenuLibInputAxis;
struct FKey;
class USoundClass;
#ifdef MAINMENULIB_MainMenuLibBPLibrary_generated_h
#error "MainMenuLibBPLibrary.generated.h already included, missing '#pragma once' in MainMenuLibBPLibrary.h"
#endif
#define MAINMENULIB_MainMenuLibBPLibrary_generated_h

#define AttackOfThePrisms_Plugins_MainMenuLib_Source_MainMenuLib_Public_MainMenuLibBPLibrary_h_77_GENERATED_BODY \
	friend MAINMENULIB_API class UScriptStruct* Z_Construct_UScriptStruct_FMainMenuLibInputAxis(); \
	MAINMENULIB_API static class UScriptStruct* StaticStruct();


#define AttackOfThePrisms_Plugins_MainMenuLib_Source_MainMenuLib_Public_MainMenuLibBPLibrary_h_25_GENERATED_BODY \
	friend MAINMENULIB_API class UScriptStruct* Z_Construct_UScriptStruct_FMainMenuLibInput(); \
	MAINMENULIB_API static class UScriptStruct* StaticStruct();


#define AttackOfThePrisms_Plugins_MainMenuLib_Source_MainMenuLib_Public_MainMenuLibBPLibrary_h_128_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRevertVideoMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::RevertVideoMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveVideoModeAndQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::SaveVideoModeAndQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadVideoModeAndQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::LoadVideoModeAndQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVSyncEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_VSync); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::SetVSyncEnabled(Z_Param_VSync); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsVSyncEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::IsVSyncEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVideoQualitySettings) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AntiaAliasing); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Effects); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PostProcess); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Resolution); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Shadow); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Texture); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ViewDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::SetVideoQualitySettings(Z_Param_AntiaAliasing,Z_Param_Effects,Z_Param_PostProcess,Z_Param_Resolution,Z_Param_Shadow,Z_Param_Texture,Z_Param_ViewDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoQualitySettings) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_AntiAliasing); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Effects); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_PostProcess); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Resolution); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Shadow); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Texture); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_ViewDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::GetVideoQualitySettings(Z_Param_Out_AntiAliasing,Z_Param_Out_Effects,Z_Param_Out_PostProcess,Z_Param_Out_Resolution,Z_Param_Out_Shadow,Z_Param_Out_Texture,Z_Param_Out_ViewDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeScreenResolution) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FullscreenMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::ChangeScreenResolution(Z_Param_Width,Z_Param_Height,Z_Param_FullscreenMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScreenResolution) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FullscreenMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::SetScreenResolution(Z_Param_Width,Z_Param_Height,Z_Param_FullscreenMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWindowed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::IsWindowed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWindowedFullscreen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::IsWindowedFullscreen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFullscreen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::IsFullscreen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFullscreenMode) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_FullscreenMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::GetFullscreenMode(Z_Param_Out_FullscreenMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFullscreenMode) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_WindowMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::SetFullscreenMode(Z_Param_WindowMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScreenResolution) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMainMenuLibBPLibrary::GetScreenResolution(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupportedScreenResolutions) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Resolutions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::GetSupportedScreenResolutions(Z_Param_Out_Resolutions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetQualitySettings) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::SetQualitySettings(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetQualitySettingsFromBench) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::SetQualitySettingsFromBench(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveActionKeyBind) \
	{ \
		P_GET_STRUCT(FMainMenuLibInput,Z_Param_ToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMainMenuLibBPLibrary::RemoveActionKeyBind(Z_Param_ToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReBindActionKey) \
	{ \
		P_GET_STRUCT(FMainMenuLibInput,Z_Param_Original); \
		P_GET_STRUCT(FMainMenuLibInput,Z_Param_NewBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::ReBindActionKey(Z_Param_Original,Z_Param_NewBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllActionKeyBindings) \
	{ \
		P_GET_TARRAY_REF(FMainMenuLibInput,Z_Param_Out_Bindings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMainMenuLibBPLibrary::GetAllActionKeyBindings(Z_Param_Out_Bindings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMainMenuLibInput) \
	{ \
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_KeyEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMainMenuLibInput*)Z_Param__Result=UMainMenuLibBPLibrary::GetMainMenuLibInput(Z_Param_Out_KeyEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReBindAxisKey) \
	{ \
		P_GET_STRUCT(FMainMenuLibInputAxis,Z_Param_Original); \
		P_GET_STRUCT(FMainMenuLibInputAxis,Z_Param_NewBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::ReBindAxisKey(Z_Param_Original,Z_Param_NewBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAxisKeyBind) \
	{ \
		P_GET_STRUCT(FMainMenuLibInputAxis,Z_Param_ToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMainMenuLibBPLibrary::RemoveAxisKeyBind(Z_Param_ToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllAxisKeyBindings) \
	{ \
		P_GET_TARRAY_REF(FMainMenuLibInputAxis,Z_Param_Out_Bindings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMainMenuLibBPLibrary::GetAllAxisKeyBindings(Z_Param_Out_Bindings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMainMenuLibInputAxis) \
	{ \
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_KeyEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMainMenuLibInputAxis*)Z_Param__Result=UMainMenuLibBPLibrary::GetMainMenuLibInputAxis(Z_Param_Out_KeyEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllAxisAndActionMappingsForKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_GET_TARRAY_REF(FMainMenuLibInput,Z_Param_Out_ActionBindings); \
		P_GET_TARRAY_REF(FMainMenuLibInputAxis,Z_Param_Out_AxisBindings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMainMenuLibBPLibrary::GetAllAxisAndActionMappingsForKey(Z_Param_Key,Z_Param_Out_ActionBindings,Z_Param_Out_AxisBindings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSoundClassVolume) \
	{ \
		P_GET_OBJECT(USoundClass,Z_Param_SoundClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMainMenuLibBPLibrary::GetSoundClassVolume(Z_Param_SoundClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSoundClassVolume) \
	{ \
		P_GET_OBJECT(USoundClass,Z_Param_SoundClass); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMainMenuLibBPLibrary::SetSoundClassVolume(Z_Param_SoundClass,Z_Param_Volume); \
		P_NATIVE_END; \
	}


#define AttackOfThePrisms_Plugins_MainMenuLib_Source_MainMenuLib_Public_MainMenuLibBPLibrary_h_128_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRevertVideoMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::RevertVideoMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveVideoModeAndQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::SaveVideoModeAndQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadVideoModeAndQuality) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::LoadVideoModeAndQuality(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVSyncEnabled) \
	{ \
		P_GET_UBOOL(Z_Param_VSync); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::SetVSyncEnabled(Z_Param_VSync); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsVSyncEnabled) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::IsVSyncEnabled(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVideoQualitySettings) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_AntiaAliasing); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Effects); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PostProcess); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Resolution); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Shadow); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Texture); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ViewDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::SetVideoQualitySettings(Z_Param_AntiaAliasing,Z_Param_Effects,Z_Param_PostProcess,Z_Param_Resolution,Z_Param_Shadow,Z_Param_Texture,Z_Param_ViewDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoQualitySettings) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_AntiAliasing); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Effects); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_PostProcess); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Resolution); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Shadow); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Texture); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_ViewDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::GetVideoQualitySettings(Z_Param_Out_AntiAliasing,Z_Param_Out_Effects,Z_Param_Out_PostProcess,Z_Param_Out_Resolution,Z_Param_Out_Shadow,Z_Param_Out_Texture,Z_Param_Out_ViewDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeScreenResolution) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FullscreenMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::ChangeScreenResolution(Z_Param_Width,Z_Param_Height,Z_Param_FullscreenMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScreenResolution) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FullscreenMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::SetScreenResolution(Z_Param_Width,Z_Param_Height,Z_Param_FullscreenMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWindowed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::IsWindowed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsWindowedFullscreen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::IsWindowedFullscreen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFullscreen) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::IsFullscreen(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFullscreenMode) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_FullscreenMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::GetFullscreenMode(Z_Param_Out_FullscreenMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFullscreenMode) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_WindowMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::SetFullscreenMode(Z_Param_WindowMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScreenResolution) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMainMenuLibBPLibrary::GetScreenResolution(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupportedScreenResolutions) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Resolutions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::GetSupportedScreenResolutions(Z_Param_Out_Resolutions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetQualitySettings) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::SetQualitySettings(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetQualitySettingsFromBench) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::SetQualitySettingsFromBench(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveActionKeyBind) \
	{ \
		P_GET_STRUCT(FMainMenuLibInput,Z_Param_ToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMainMenuLibBPLibrary::RemoveActionKeyBind(Z_Param_ToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReBindActionKey) \
	{ \
		P_GET_STRUCT(FMainMenuLibInput,Z_Param_Original); \
		P_GET_STRUCT(FMainMenuLibInput,Z_Param_NewBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::ReBindActionKey(Z_Param_Original,Z_Param_NewBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllActionKeyBindings) \
	{ \
		P_GET_TARRAY_REF(FMainMenuLibInput,Z_Param_Out_Bindings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMainMenuLibBPLibrary::GetAllActionKeyBindings(Z_Param_Out_Bindings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMainMenuLibInput) \
	{ \
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_KeyEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMainMenuLibInput*)Z_Param__Result=UMainMenuLibBPLibrary::GetMainMenuLibInput(Z_Param_Out_KeyEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReBindAxisKey) \
	{ \
		P_GET_STRUCT(FMainMenuLibInputAxis,Z_Param_Original); \
		P_GET_STRUCT(FMainMenuLibInputAxis,Z_Param_NewBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMainMenuLibBPLibrary::ReBindAxisKey(Z_Param_Original,Z_Param_NewBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAxisKeyBind) \
	{ \
		P_GET_STRUCT(FMainMenuLibInputAxis,Z_Param_ToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMainMenuLibBPLibrary::RemoveAxisKeyBind(Z_Param_ToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllAxisKeyBindings) \
	{ \
		P_GET_TARRAY_REF(FMainMenuLibInputAxis,Z_Param_Out_Bindings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMainMenuLibBPLibrary::GetAllAxisKeyBindings(Z_Param_Out_Bindings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMainMenuLibInputAxis) \
	{ \
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_KeyEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FMainMenuLibInputAxis*)Z_Param__Result=UMainMenuLibBPLibrary::GetMainMenuLibInputAxis(Z_Param_Out_KeyEvent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllAxisAndActionMappingsForKey) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_Key); \
		P_GET_TARRAY_REF(FMainMenuLibInput,Z_Param_Out_ActionBindings); \
		P_GET_TARRAY_REF(FMainMenuLibInputAxis,Z_Param_Out_AxisBindings); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMainMenuLibBPLibrary::GetAllAxisAndActionMappingsForKey(Z_Param_Key,Z_Param_Out_ActionBindings,Z_Param_Out_AxisBindings); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSoundClassVolume) \
	{ \
		P_GET_OBJECT(USoundClass,Z_Param_SoundClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMainMenuLibBPLibrary::GetSoundClassVolume(Z_Param_SoundClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSoundClassVolume) \
	{ \
		P_GET_OBJECT(USoundClass,Z_Param_SoundClass); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Volume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMainMenuLibBPLibrary::SetSoundClassVolume(Z_Param_SoundClass,Z_Param_Volume); \
		P_NATIVE_END; \
	}


#define AttackOfThePrisms_Plugins_MainMenuLib_Source_MainMenuLib_Public_MainMenuLibBPLibrary_h_128_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenuLibBPLibrary(); \
	friend MAINMENULIB_API class UClass* Z_Construct_UClass_UMainMenuLibBPLibrary(); \
public: \
	DECLARE_CLASS(UMainMenuLibBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MainMenuLib"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuLibBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AttackOfThePrisms_Plugins_MainMenuLib_Source_MainMenuLib_Public_MainMenuLibBPLibrary_h_128_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenuLibBPLibrary(); \
	friend MAINMENULIB_API class UClass* Z_Construct_UClass_UMainMenuLibBPLibrary(); \
public: \
	DECLARE_CLASS(UMainMenuLibBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MainMenuLib"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuLibBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AttackOfThePrisms_Plugins_MainMenuLib_Source_MainMenuLib_Public_MainMenuLibBPLibrary_h_128_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuLibBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuLibBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuLibBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuLibBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuLibBPLibrary(UMainMenuLibBPLibrary&&); \
	NO_API UMainMenuLibBPLibrary(const UMainMenuLibBPLibrary&); \
public:


#define AttackOfThePrisms_Plugins_MainMenuLib_Source_MainMenuLib_Public_MainMenuLibBPLibrary_h_128_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuLibBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuLibBPLibrary(UMainMenuLibBPLibrary&&); \
	NO_API UMainMenuLibBPLibrary(const UMainMenuLibBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuLibBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuLibBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuLibBPLibrary)


#define AttackOfThePrisms_Plugins_MainMenuLib_Source_MainMenuLib_Public_MainMenuLibBPLibrary_h_128_PRIVATE_PROPERTY_OFFSET
#define AttackOfThePrisms_Plugins_MainMenuLib_Source_MainMenuLib_Public_MainMenuLibBPLibrary_h_125_PROLOG
#define AttackOfThePrisms_Plugins_MainMenuLib_Source_MainMenuLib_Public_MainMenuLibBPLibrary_h_128_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AttackOfThePrisms_Plugins_MainMenuLib_Source_MainMenuLib_Public_MainMenuLibBPLibrary_h_128_PRIVATE_PROPERTY_OFFSET \
	AttackOfThePrisms_Plugins_MainMenuLib_Source_MainMenuLib_Public_MainMenuLibBPLibrary_h_128_RPC_WRAPPERS \
	AttackOfThePrisms_Plugins_MainMenuLib_Source_MainMenuLib_Public_MainMenuLibBPLibrary_h_128_INCLASS \
	AttackOfThePrisms_Plugins_MainMenuLib_Source_MainMenuLib_Public_MainMenuLibBPLibrary_h_128_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AttackOfThePrisms_Plugins_MainMenuLib_Source_MainMenuLib_Public_MainMenuLibBPLibrary_h_128_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AttackOfThePrisms_Plugins_MainMenuLib_Source_MainMenuLib_Public_MainMenuLibBPLibrary_h_128_PRIVATE_PROPERTY_OFFSET \
	AttackOfThePrisms_Plugins_MainMenuLib_Source_MainMenuLib_Public_MainMenuLibBPLibrary_h_128_RPC_WRAPPERS_NO_PURE_DECLS \
	AttackOfThePrisms_Plugins_MainMenuLib_Source_MainMenuLib_Public_MainMenuLibBPLibrary_h_128_INCLASS_NO_PURE_DECLS \
	AttackOfThePrisms_Plugins_MainMenuLib_Source_MainMenuLib_Public_MainMenuLibBPLibrary_h_128_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MainMenuLibBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AttackOfThePrisms_Plugins_MainMenuLib_Source_MainMenuLib_Public_MainMenuLibBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
