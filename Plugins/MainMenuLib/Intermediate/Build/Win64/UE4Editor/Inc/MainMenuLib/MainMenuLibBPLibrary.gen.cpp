// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/MainMenuLibPrivatePCH.h"
#include "Public/MainMenuLibBPLibrary.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenuLibBPLibrary() {}
// Cross Module References
	MAINMENULIB_API UScriptStruct* Z_Construct_UScriptStruct_FMainMenuLibInputAxis();
	UPackage* Z_Construct_UPackage__Script_MainMenuLib();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	MAINMENULIB_API UScriptStruct* Z_Construct_UScriptStruct_FMainMenuLibInput();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_ChangeScreenResolution();
	MAINMENULIB_API UClass* Z_Construct_UClass_UMainMenuLibBPLibrary();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_GetAllActionKeyBindings();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_GetAllAxisAndActionMappingsForKey();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_GetAllAxisKeyBindings();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_GetFullscreenMode();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_GetMainMenuLibInput();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyEvent();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_GetMainMenuLibInputAxis();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_GetScreenResolution();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_GetSoundClassVolume();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_GetSupportedScreenResolutions();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_GetVideoQualitySettings();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_IsFullscreen();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_IsVSyncEnabled();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_IsWindowed();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_IsWindowedFullscreen();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_LoadVideoModeAndQuality();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_ReBindActionKey();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_ReBindAxisKey();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_RemoveActionKeyBind();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_RemoveAxisKeyBind();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_RevertVideoMode();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_SaveVideoModeAndQuality();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_SetFullscreenMode();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_SetQualitySettings();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_SetQualitySettingsFromBench();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_SetScreenResolution();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_SetSoundClassVolume();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_SetVideoQualitySettings();
	MAINMENULIB_API UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_SetVSyncEnabled();
	MAINMENULIB_API UClass* Z_Construct_UClass_UMainMenuLibBPLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
class UScriptStruct* FMainMenuLibInputAxis::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAINMENULIB_API uint32 Get_Z_Construct_UScriptStruct_FMainMenuLibInputAxis_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMainMenuLibInputAxis, Z_Construct_UPackage__Script_MainMenuLib(), TEXT("MainMenuLibInputAxis"), sizeof(FMainMenuLibInputAxis), Get_Z_Construct_UScriptStruct_FMainMenuLibInputAxis_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMainMenuLibInputAxis(FMainMenuLibInputAxis::StaticStruct, TEXT("/Script/MainMenuLib"), TEXT("MainMenuLibInputAxis"), false, nullptr, nullptr);
static struct FScriptStruct_MainMenuLib_StaticRegisterNativesFMainMenuLibInputAxis
{
	FScriptStruct_MainMenuLib_StaticRegisterNativesFMainMenuLibInputAxis()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MainMenuLibInputAxis")),new UScriptStruct::TCppStructOps<FMainMenuLibInputAxis>);
	}
} ScriptStruct_MainMenuLib_StaticRegisterNativesFMainMenuLibInputAxis;
	UScriptStruct* Z_Construct_UScriptStruct_FMainMenuLibInputAxis()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_MainMenuLib();
		extern uint32 Get_Z_Construct_UScriptStruct_FMainMenuLibInputAxis_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MainMenuLibInputAxis"), sizeof(FMainMenuLibInputAxis), Get_Z_Construct_UScriptStruct_FMainMenuLibInputAxis_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MainMenuLibInputAxis"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FMainMenuLibInputAxis>, EStructFlags(0x00000001));
			UProperty* NewProp_Scale = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Scale"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Scale, FMainMenuLibInputAxis), 0x0010000000000005);
			UProperty* NewProp_Key = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Key"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Key, FMainMenuLibInputAxis), 0x0010000000000005, Z_Construct_UScriptStruct_FKey());
			UProperty* NewProp_KeyAsString = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("KeyAsString"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(KeyAsString, FMainMenuLibInputAxis), 0x0010000000000005);
			UProperty* NewProp_AxisName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("AxisName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(AxisName, FMainMenuLibInputAxis), 0x0010000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(NewProp_Scale, TEXT("Category"), TEXT("Menu Settings | Controls Settings"));
			MetaData->SetValue(NewProp_Scale, TEXT("Keywords"), TEXT("Main Menu controls"));
			MetaData->SetValue(NewProp_Scale, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(NewProp_Key, TEXT("Category"), TEXT("Menu Settings | Controls Settings"));
			MetaData->SetValue(NewProp_Key, TEXT("Keywords"), TEXT("Main Menu controls"));
			MetaData->SetValue(NewProp_Key, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(NewProp_KeyAsString, TEXT("Category"), TEXT("Menu Settings | Controls Settings"));
			MetaData->SetValue(NewProp_KeyAsString, TEXT("Keywords"), TEXT("Main Menu controls"));
			MetaData->SetValue(NewProp_KeyAsString, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(NewProp_AxisName, TEXT("Category"), TEXT("Menu Settings | Controls Settings"));
			MetaData->SetValue(NewProp_AxisName, TEXT("Keywords"), TEXT("Main Menu controls"));
			MetaData->SetValue(NewProp_AxisName, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMainMenuLibInputAxis_CRC() { return 2460026132U; }
class UScriptStruct* FMainMenuLibInput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MAINMENULIB_API uint32 Get_Z_Construct_UScriptStruct_FMainMenuLibInput_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMainMenuLibInput, Z_Construct_UPackage__Script_MainMenuLib(), TEXT("MainMenuLibInput"), sizeof(FMainMenuLibInput), Get_Z_Construct_UScriptStruct_FMainMenuLibInput_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMainMenuLibInput(FMainMenuLibInput::StaticStruct, TEXT("/Script/MainMenuLib"), TEXT("MainMenuLibInput"), false, nullptr, nullptr);
static struct FScriptStruct_MainMenuLib_StaticRegisterNativesFMainMenuLibInput
{
	FScriptStruct_MainMenuLib_StaticRegisterNativesFMainMenuLibInput()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MainMenuLibInput")),new UScriptStruct::TCppStructOps<FMainMenuLibInput>);
	}
} ScriptStruct_MainMenuLib_StaticRegisterNativesFMainMenuLibInput;
	UScriptStruct* Z_Construct_UScriptStruct_FMainMenuLibInput()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_MainMenuLib();
		extern uint32 Get_Z_Construct_UScriptStruct_FMainMenuLibInput_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MainMenuLibInput"), sizeof(FMainMenuLibInput), Get_Z_Construct_UScriptStruct_FMainMenuLibInput_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MainMenuLibInput"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FMainMenuLibInput>, EStructFlags(0x00000001));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCmd, FMainMenuLibInput);
			UProperty* NewProp_bCmd = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bCmd"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCmd, FMainMenuLibInput), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bCmd, FMainMenuLibInput), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAlt, FMainMenuLibInput);
			UProperty* NewProp_bAlt = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bAlt"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAlt, FMainMenuLibInput), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bAlt, FMainMenuLibInput), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bCtrl, FMainMenuLibInput);
			UProperty* NewProp_bCtrl = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bCtrl"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bCtrl, FMainMenuLibInput), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bCtrl, FMainMenuLibInput), sizeof(uint8), false);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bShift, FMainMenuLibInput);
			UProperty* NewProp_bShift = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bShift"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bShift, FMainMenuLibInput), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bShift, FMainMenuLibInput), sizeof(uint8), false);
			UProperty* NewProp_KeyAsString = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("KeyAsString"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(KeyAsString, FMainMenuLibInput), 0x0010000000000005);
			UProperty* NewProp_Key = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Key"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Key, FMainMenuLibInput), 0x0010000000000005, Z_Construct_UScriptStruct_FKey());
			UProperty* NewProp_ActionName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("ActionName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ActionName, FMainMenuLibInput), 0x0010000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(NewProp_bCmd, TEXT("Category"), TEXT("Menu Settings | Controls Settings"));
			MetaData->SetValue(NewProp_bCmd, TEXT("Keywords"), TEXT("Main Menu controls"));
			MetaData->SetValue(NewProp_bCmd, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(NewProp_bAlt, TEXT("Category"), TEXT("Menu Settings | Controls Settings"));
			MetaData->SetValue(NewProp_bAlt, TEXT("Keywords"), TEXT("Main Menu controls"));
			MetaData->SetValue(NewProp_bAlt, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(NewProp_bCtrl, TEXT("Category"), TEXT("Menu Settings | Controls Settings"));
			MetaData->SetValue(NewProp_bCtrl, TEXT("Keywords"), TEXT("Main Menu controls"));
			MetaData->SetValue(NewProp_bCtrl, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(NewProp_bShift, TEXT("Category"), TEXT("Menu Settings | Controls Settings"));
			MetaData->SetValue(NewProp_bShift, TEXT("Keywords"), TEXT("Main Menu controls"));
			MetaData->SetValue(NewProp_bShift, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(NewProp_KeyAsString, TEXT("Category"), TEXT("Menu Settings | Controls Settings"));
			MetaData->SetValue(NewProp_KeyAsString, TEXT("Keywords"), TEXT("Main Menu controls"));
			MetaData->SetValue(NewProp_KeyAsString, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(NewProp_Key, TEXT("Category"), TEXT("Menu Settings | Controls Settings"));
			MetaData->SetValue(NewProp_Key, TEXT("Keywords"), TEXT("Main Menu controls"));
			MetaData->SetValue(NewProp_Key, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(NewProp_ActionName, TEXT("Category"), TEXT("Menu Settings | Controls Settings"));
			MetaData->SetValue(NewProp_ActionName, TEXT("Keywords"), TEXT("Main Menu controls"));
			MetaData->SetValue(NewProp_ActionName, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMainMenuLibInput_CRC() { return 753613922U; }
	void UMainMenuLibBPLibrary::StaticRegisterNativesUMainMenuLibBPLibrary()
	{
		UClass* Class = UMainMenuLibBPLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ChangeScreenResolution", (Native)&UMainMenuLibBPLibrary::execChangeScreenResolution },
			{ "GetAllActionKeyBindings", (Native)&UMainMenuLibBPLibrary::execGetAllActionKeyBindings },
			{ "GetAllAxisAndActionMappingsForKey", (Native)&UMainMenuLibBPLibrary::execGetAllAxisAndActionMappingsForKey },
			{ "GetAllAxisKeyBindings", (Native)&UMainMenuLibBPLibrary::execGetAllAxisKeyBindings },
			{ "GetFullscreenMode", (Native)&UMainMenuLibBPLibrary::execGetFullscreenMode },
			{ "GetMainMenuLibInput", (Native)&UMainMenuLibBPLibrary::execGetMainMenuLibInput },
			{ "GetMainMenuLibInputAxis", (Native)&UMainMenuLibBPLibrary::execGetMainMenuLibInputAxis },
			{ "GetScreenResolution", (Native)&UMainMenuLibBPLibrary::execGetScreenResolution },
			{ "GetSoundClassVolume", (Native)&UMainMenuLibBPLibrary::execGetSoundClassVolume },
			{ "GetSupportedScreenResolutions", (Native)&UMainMenuLibBPLibrary::execGetSupportedScreenResolutions },
			{ "GetVideoQualitySettings", (Native)&UMainMenuLibBPLibrary::execGetVideoQualitySettings },
			{ "IsFullscreen", (Native)&UMainMenuLibBPLibrary::execIsFullscreen },
			{ "IsVSyncEnabled", (Native)&UMainMenuLibBPLibrary::execIsVSyncEnabled },
			{ "IsWindowed", (Native)&UMainMenuLibBPLibrary::execIsWindowed },
			{ "IsWindowedFullscreen", (Native)&UMainMenuLibBPLibrary::execIsWindowedFullscreen },
			{ "LoadVideoModeAndQuality", (Native)&UMainMenuLibBPLibrary::execLoadVideoModeAndQuality },
			{ "ReBindActionKey", (Native)&UMainMenuLibBPLibrary::execReBindActionKey },
			{ "ReBindAxisKey", (Native)&UMainMenuLibBPLibrary::execReBindAxisKey },
			{ "RemoveActionKeyBind", (Native)&UMainMenuLibBPLibrary::execRemoveActionKeyBind },
			{ "RemoveAxisKeyBind", (Native)&UMainMenuLibBPLibrary::execRemoveAxisKeyBind },
			{ "RevertVideoMode", (Native)&UMainMenuLibBPLibrary::execRevertVideoMode },
			{ "SaveVideoModeAndQuality", (Native)&UMainMenuLibBPLibrary::execSaveVideoModeAndQuality },
			{ "SetFullscreenMode", (Native)&UMainMenuLibBPLibrary::execSetFullscreenMode },
			{ "SetQualitySettings", (Native)&UMainMenuLibBPLibrary::execSetQualitySettings },
			{ "SetQualitySettingsFromBench", (Native)&UMainMenuLibBPLibrary::execSetQualitySettingsFromBench },
			{ "SetScreenResolution", (Native)&UMainMenuLibBPLibrary::execSetScreenResolution },
			{ "SetSoundClassVolume", (Native)&UMainMenuLibBPLibrary::execSetSoundClassVolume },
			{ "SetVideoQualitySettings", (Native)&UMainMenuLibBPLibrary::execSetVideoQualitySettings },
			{ "SetVSyncEnabled", (Native)&UMainMenuLibBPLibrary::execSetVSyncEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_ChangeScreenResolution()
	{
		struct MainMenuLibBPLibrary_eventChangeScreenResolution_Parms
		{
			int32 Width;
			int32 Height;
			int32 FullscreenMode;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ChangeScreenResolution"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(MainMenuLibBPLibrary_eventChangeScreenResolution_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MainMenuLibBPLibrary_eventChangeScreenResolution_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MainMenuLibBPLibrary_eventChangeScreenResolution_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MainMenuLibBPLibrary_eventChangeScreenResolution_Parms), sizeof(bool), true);
			UProperty* NewProp_FullscreenMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FullscreenMode"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(FullscreenMode, MainMenuLibBPLibrary_eventChangeScreenResolution_Parms), 0x0010000000000082);
			UProperty* NewProp_Height = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Height"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Height, MainMenuLibBPLibrary_eventChangeScreenResolution_Parms), 0x0010000000000082);
			UProperty* NewProp_Width = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Width"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Width, MainMenuLibBPLibrary_eventChangeScreenResolution_Parms), 0x0010000000000082);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Graphics Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu graphics settings"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Change the current screen resolution"));
			MetaData->SetValue(NewProp_FullscreenMode, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Height, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Width, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_GetAllActionKeyBindings()
	{
		struct MainMenuLibBPLibrary_eventGetAllActionKeyBindings_Parms
		{
			TArray<FMainMenuLibInput> Bindings;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAllActionKeyBindings"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(MainMenuLibBPLibrary_eventGetAllActionKeyBindings_Parms));
			UProperty* NewProp_Bindings = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bindings"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Bindings, MainMenuLibBPLibrary_eventGetAllActionKeyBindings_Parms), 0x0010000000000180);
			UProperty* NewProp_Bindings_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Bindings, TEXT("Bindings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FMainMenuLibInput());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Controls Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu controls"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_GetAllAxisAndActionMappingsForKey()
	{
		struct MainMenuLibBPLibrary_eventGetAllAxisAndActionMappingsForKey_Parms
		{
			FKey Key;
			TArray<FMainMenuLibInput> ActionBindings;
			TArray<FMainMenuLibInputAxis> AxisBindings;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAllAxisAndActionMappingsForKey"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(MainMenuLibBPLibrary_eventGetAllAxisAndActionMappingsForKey_Parms));
			UProperty* NewProp_AxisBindings = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AxisBindings"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(AxisBindings, MainMenuLibBPLibrary_eventGetAllAxisAndActionMappingsForKey_Parms), 0x0010000000000180);
			UProperty* NewProp_AxisBindings_Inner = new(EC_InternalUseOnlyConstructor, NewProp_AxisBindings, TEXT("AxisBindings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FMainMenuLibInputAxis());
			UProperty* NewProp_ActionBindings = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ActionBindings"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ActionBindings, MainMenuLibBPLibrary_eventGetAllAxisAndActionMappingsForKey_Parms), 0x0010000000000180);
			UProperty* NewProp_ActionBindings_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ActionBindings, TEXT("ActionBindings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FMainMenuLibInput());
			UProperty* NewProp_Key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Key"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Key, MainMenuLibBPLibrary_eventGetAllAxisAndActionMappingsForKey_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FKey());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Controls Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu controls"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("CONTROLS SETTINGS"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_GetAllAxisKeyBindings()
	{
		struct MainMenuLibBPLibrary_eventGetAllAxisKeyBindings_Parms
		{
			TArray<FMainMenuLibInputAxis> Bindings;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAllAxisKeyBindings"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(MainMenuLibBPLibrary_eventGetAllAxisKeyBindings_Parms));
			UProperty* NewProp_Bindings = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bindings"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Bindings, MainMenuLibBPLibrary_eventGetAllAxisKeyBindings_Parms), 0x0010000000000180);
			UProperty* NewProp_Bindings_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Bindings, TEXT("Bindings"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FMainMenuLibInputAxis());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Controls Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu controls"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_GetFullscreenMode()
	{
		struct MainMenuLibBPLibrary_eventGetFullscreenMode_Parms
		{
			int32 FullscreenMode;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetFullscreenMode"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(MainMenuLibBPLibrary_eventGetFullscreenMode_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MainMenuLibBPLibrary_eventGetFullscreenMode_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MainMenuLibBPLibrary_eventGetFullscreenMode_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MainMenuLibBPLibrary_eventGetFullscreenMode_Parms), sizeof(bool), true);
			UProperty* NewProp_FullscreenMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FullscreenMode"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(FullscreenMode, MainMenuLibBPLibrary_eventGetFullscreenMode_Parms), 0x0010000000000180);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Graphics Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu graphics settings"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the fullscreen mode"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_GetMainMenuLibInput()
	{
		struct MainMenuLibBPLibrary_eventGetMainMenuLibInput_Parms
		{
			FKeyEvent KeyEvent;
			FMainMenuLibInput ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetMainMenuLibInput"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(MainMenuLibBPLibrary_eventGetMainMenuLibInput_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, MainMenuLibBPLibrary_eventGetMainMenuLibInput_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FMainMenuLibInput());
			UProperty* NewProp_KeyEvent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("KeyEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(KeyEvent, MainMenuLibBPLibrary_eventGetMainMenuLibInput_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FKeyEvent());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Controls Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu controls"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Action Mapping"));
			MetaData->SetValue(NewProp_KeyEvent, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_GetMainMenuLibInputAxis()
	{
		struct MainMenuLibBPLibrary_eventGetMainMenuLibInputAxis_Parms
		{
			FKeyEvent KeyEvent;
			FMainMenuLibInputAxis ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetMainMenuLibInputAxis"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(MainMenuLibBPLibrary_eventGetMainMenuLibInputAxis_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, MainMenuLibBPLibrary_eventGetMainMenuLibInputAxis_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FMainMenuLibInputAxis());
			UProperty* NewProp_KeyEvent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("KeyEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(KeyEvent, MainMenuLibBPLibrary_eventGetMainMenuLibInputAxis_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FKeyEvent());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Controls Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu controls"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Axis Mapping"));
			MetaData->SetValue(NewProp_KeyEvent, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_GetScreenResolution()
	{
		struct MainMenuLibBPLibrary_eventGetScreenResolution_Parms
		{
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetScreenResolution"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(MainMenuLibBPLibrary_eventGetScreenResolution_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, MainMenuLibBPLibrary_eventGetScreenResolution_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Graphics Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu graphics settings"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get currently set screen resolution"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_GetSoundClassVolume()
	{
		struct MainMenuLibBPLibrary_eventGetSoundClassVolume_Parms
		{
			USoundClass* SoundClass;
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSoundClassVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(MainMenuLibBPLibrary_eventGetSoundClassVolume_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, MainMenuLibBPLibrary_eventGetSoundClassVolume_Parms), 0x0010000000000580);
			UProperty* NewProp_SoundClass = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SoundClass"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SoundClass, MainMenuLibBPLibrary_eventGetSoundClassVolume_Parms), 0x0010000000000080, Z_Construct_UClass_USoundClass_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Audio Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("GetSoundClassVolume"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu volume SoundClass audio"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the SoundClass volume"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_GetSupportedScreenResolutions()
	{
		struct MainMenuLibBPLibrary_eventGetSupportedScreenResolutions_Parms
		{
			TArray<FString> Resolutions;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetSupportedScreenResolutions"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(MainMenuLibBPLibrary_eventGetSupportedScreenResolutions_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MainMenuLibBPLibrary_eventGetSupportedScreenResolutions_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MainMenuLibBPLibrary_eventGetSupportedScreenResolutions_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MainMenuLibBPLibrary_eventGetSupportedScreenResolutions_Parms), sizeof(bool), true);
			UProperty* NewProp_Resolutions = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Resolutions"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Resolutions, MainMenuLibBPLibrary_eventGetSupportedScreenResolutions_Parms), 0x0010000000000180);
			UProperty* NewProp_Resolutions_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Resolutions, TEXT("Resolutions"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Graphics Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu graphics settings"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get a list of screen resolutions supported on this machine"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_GetVideoQualitySettings()
	{
		struct MainMenuLibBPLibrary_eventGetVideoQualitySettings_Parms
		{
			int32 AntiAliasing;
			int32 Effects;
			int32 PostProcess;
			int32 Resolution;
			int32 Shadow;
			int32 Texture;
			int32 ViewDistance;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetVideoQualitySettings"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(MainMenuLibBPLibrary_eventGetVideoQualitySettings_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MainMenuLibBPLibrary_eventGetVideoQualitySettings_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MainMenuLibBPLibrary_eventGetVideoQualitySettings_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MainMenuLibBPLibrary_eventGetVideoQualitySettings_Parms), sizeof(bool), true);
			UProperty* NewProp_ViewDistance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ViewDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ViewDistance, MainMenuLibBPLibrary_eventGetVideoQualitySettings_Parms), 0x0010000000000180);
			UProperty* NewProp_Texture = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Texture"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Texture, MainMenuLibBPLibrary_eventGetVideoQualitySettings_Parms), 0x0010000000000180);
			UProperty* NewProp_Shadow = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Shadow"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Shadow, MainMenuLibBPLibrary_eventGetVideoQualitySettings_Parms), 0x0010000000000180);
			UProperty* NewProp_Resolution = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Resolution"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Resolution, MainMenuLibBPLibrary_eventGetVideoQualitySettings_Parms), 0x0010000000000180);
			UProperty* NewProp_PostProcess = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PostProcess"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PostProcess, MainMenuLibBPLibrary_eventGetVideoQualitySettings_Parms), 0x0010000000000180);
			UProperty* NewProp_Effects = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Effects"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Effects, MainMenuLibBPLibrary_eventGetVideoQualitySettings_Parms), 0x0010000000000180);
			UProperty* NewProp_AntiAliasing = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AntiAliasing"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(AntiAliasing, MainMenuLibBPLibrary_eventGetVideoQualitySettings_Parms), 0x0010000000000180);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Graphics Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu graphics settings"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the current video quality settings"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_IsFullscreen()
	{
		struct MainMenuLibBPLibrary_eventIsFullscreen_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsFullscreen"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(MainMenuLibBPLibrary_eventIsFullscreen_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MainMenuLibBPLibrary_eventIsFullscreen_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MainMenuLibBPLibrary_eventIsFullscreen_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MainMenuLibBPLibrary_eventIsFullscreen_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Graphics Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu graphics settings"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Check whether or not we are currently running in fullscreen mode"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_IsVSyncEnabled()
	{
		struct MainMenuLibBPLibrary_eventIsVSyncEnabled_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsVSyncEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(MainMenuLibBPLibrary_eventIsVSyncEnabled_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MainMenuLibBPLibrary_eventIsVSyncEnabled_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MainMenuLibBPLibrary_eventIsVSyncEnabled_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MainMenuLibBPLibrary_eventIsVSyncEnabled_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Graphics Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu graphics settings"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("CHeck whether or not we have vertical sync enabled"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_IsWindowed()
	{
		struct MainMenuLibBPLibrary_eventIsWindowed_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsWindowed"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(MainMenuLibBPLibrary_eventIsWindowed_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MainMenuLibBPLibrary_eventIsWindowed_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MainMenuLibBPLibrary_eventIsWindowed_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MainMenuLibBPLibrary_eventIsWindowed_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Graphics Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu graphics settings"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Check whether or not we are currently running in windowed mode"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_IsWindowedFullscreen()
	{
		struct MainMenuLibBPLibrary_eventIsWindowedFullscreen_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsWindowedFullscreen"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(MainMenuLibBPLibrary_eventIsWindowedFullscreen_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MainMenuLibBPLibrary_eventIsWindowedFullscreen_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MainMenuLibBPLibrary_eventIsWindowedFullscreen_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MainMenuLibBPLibrary_eventIsWindowedFullscreen_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Graphics Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu graphics settings"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Check whether or not we are currently running in  windowed fullscreen mode (borderless)"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_LoadVideoModeAndQuality()
	{
		struct MainMenuLibBPLibrary_eventLoadVideoModeAndQuality_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LoadVideoModeAndQuality"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(MainMenuLibBPLibrary_eventLoadVideoModeAndQuality_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MainMenuLibBPLibrary_eventLoadVideoModeAndQuality_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MainMenuLibBPLibrary_eventLoadVideoModeAndQuality_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MainMenuLibBPLibrary_eventLoadVideoModeAndQuality_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Graphics Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu graphics settings"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Load user settings from persistence storage"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_ReBindActionKey()
	{
		struct MainMenuLibBPLibrary_eventReBindActionKey_Parms
		{
			FMainMenuLibInput Original;
			FMainMenuLibInput NewBinding;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReBindActionKey"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(MainMenuLibBPLibrary_eventReBindActionKey_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MainMenuLibBPLibrary_eventReBindActionKey_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MainMenuLibBPLibrary_eventReBindActionKey_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MainMenuLibBPLibrary_eventReBindActionKey_Parms), sizeof(bool), true);
			UProperty* NewProp_NewBinding = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewBinding"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NewBinding, MainMenuLibBPLibrary_eventReBindActionKey_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FMainMenuLibInput());
			UProperty* NewProp_Original = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Original"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Original, MainMenuLibBPLibrary_eventReBindActionKey_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FMainMenuLibInput());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Controls Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu controls"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("You can leave the AsString field blank :) Returns false if the key could not be found as an existing mapping!  Enjoy! <3  Rama"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_ReBindAxisKey()
	{
		struct MainMenuLibBPLibrary_eventReBindAxisKey_Parms
		{
			FMainMenuLibInputAxis Original;
			FMainMenuLibInputAxis NewBinding;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReBindAxisKey"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(MainMenuLibBPLibrary_eventReBindAxisKey_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MainMenuLibBPLibrary_eventReBindAxisKey_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MainMenuLibBPLibrary_eventReBindAxisKey_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MainMenuLibBPLibrary_eventReBindAxisKey_Parms), sizeof(bool), true);
			UProperty* NewProp_NewBinding = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewBinding"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NewBinding, MainMenuLibBPLibrary_eventReBindAxisKey_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FMainMenuLibInputAxis());
			UProperty* NewProp_Original = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Original"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Original, MainMenuLibBPLibrary_eventReBindAxisKey_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FMainMenuLibInputAxis());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Controls Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu controls"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("You can leave the AsString field blank :) Returns false if the key could not be found as an existing mapping!  Enjoy! <3  Rama"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_RemoveActionKeyBind()
	{
		struct MainMenuLibBPLibrary_eventRemoveActionKeyBind_Parms
		{
			FMainMenuLibInput ToRemove;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RemoveActionKeyBind"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(MainMenuLibBPLibrary_eventRemoveActionKeyBind_Parms));
			UProperty* NewProp_ToRemove = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ToRemove"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ToRemove, MainMenuLibBPLibrary_eventRemoveActionKeyBind_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FMainMenuLibInput());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Controls Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu controls"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_RemoveAxisKeyBind()
	{
		struct MainMenuLibBPLibrary_eventRemoveAxisKeyBind_Parms
		{
			FMainMenuLibInputAxis ToRemove;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RemoveAxisKeyBind"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(MainMenuLibBPLibrary_eventRemoveAxisKeyBind_Parms));
			UProperty* NewProp_ToRemove = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ToRemove"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ToRemove, MainMenuLibBPLibrary_eventRemoveAxisKeyBind_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FMainMenuLibInputAxis());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Controls Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu controls"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_RevertVideoMode()
	{
		struct MainMenuLibBPLibrary_eventRevertVideoMode_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RevertVideoMode"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(MainMenuLibBPLibrary_eventRevertVideoMode_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MainMenuLibBPLibrary_eventRevertVideoMode_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MainMenuLibBPLibrary_eventRevertVideoMode_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MainMenuLibBPLibrary_eventRevertVideoMode_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Graphics Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu graphics settings"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Revert to original video settings"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_SaveVideoModeAndQuality()
	{
		struct MainMenuLibBPLibrary_eventSaveVideoModeAndQuality_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SaveVideoModeAndQuality"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(MainMenuLibBPLibrary_eventSaveVideoModeAndQuality_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MainMenuLibBPLibrary_eventSaveVideoModeAndQuality_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MainMenuLibBPLibrary_eventSaveVideoModeAndQuality_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MainMenuLibBPLibrary_eventSaveVideoModeAndQuality_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Graphics Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu graphics settings"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Confirm and save current video mode (resolution and fullscreen/windowed) as well as quality settings"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_SetFullscreenMode()
	{
		struct MainMenuLibBPLibrary_eventSetFullscreenMode_Parms
		{
			int32 WindowMode;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetFullscreenMode"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(MainMenuLibBPLibrary_eventSetFullscreenMode_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MainMenuLibBPLibrary_eventSetFullscreenMode_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MainMenuLibBPLibrary_eventSetFullscreenMode_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MainMenuLibBPLibrary_eventSetFullscreenMode_Parms), sizeof(bool), true);
			UProperty* NewProp_WindowMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WindowMode"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(WindowMode, MainMenuLibBPLibrary_eventSetFullscreenMode_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Graphics Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu graphics settings"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set the fullscreen mode"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_SetQualitySettings()
	{
		struct MainMenuLibBPLibrary_eventSetQualitySettings_Parms
		{
			int32 Value;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetQualitySettings"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(MainMenuLibBPLibrary_eventSetQualitySettings_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MainMenuLibBPLibrary_eventSetQualitySettings_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MainMenuLibBPLibrary_eventSetQualitySettings_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MainMenuLibBPLibrary_eventSetQualitySettings_Parms), sizeof(bool), true);
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Value, MainMenuLibBPLibrary_eventSetQualitySettings_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Graphics Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu graphics settings"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set quality from single quality level\n@param Value 0:low, 1:medium, 2:high, 3:epic"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_SetQualitySettingsFromBench()
	{
		struct MainMenuLibBPLibrary_eventSetQualitySettingsFromBench_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetQualitySettingsFromBench"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(MainMenuLibBPLibrary_eventSetQualitySettingsFromBench_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MainMenuLibBPLibrary_eventSetQualitySettingsFromBench_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MainMenuLibBPLibrary_eventSetQualitySettingsFromBench_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MainMenuLibBPLibrary_eventSetQualitySettingsFromBench_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Graphics Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu graphics settings"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("GRAPHICS SETTINGS // Set quality levels from benchmark"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_SetScreenResolution()
	{
		struct MainMenuLibBPLibrary_eventSetScreenResolution_Parms
		{
			int32 Width;
			int32 Height;
			int32 FullscreenMode;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetScreenResolution"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(MainMenuLibBPLibrary_eventSetScreenResolution_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MainMenuLibBPLibrary_eventSetScreenResolution_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MainMenuLibBPLibrary_eventSetScreenResolution_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MainMenuLibBPLibrary_eventSetScreenResolution_Parms), sizeof(bool), true);
			UProperty* NewProp_FullscreenMode = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FullscreenMode"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(FullscreenMode, MainMenuLibBPLibrary_eventSetScreenResolution_Parms), 0x0010000000000082);
			UProperty* NewProp_Height = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Height"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Height, MainMenuLibBPLibrary_eventSetScreenResolution_Parms), 0x0010000000000082);
			UProperty* NewProp_Width = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Width"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Width, MainMenuLibBPLibrary_eventSetScreenResolution_Parms), 0x0010000000000082);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Graphics Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu graphics settings"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set the desired screen resolution (does not change it yet)"));
			MetaData->SetValue(NewProp_FullscreenMode, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Height, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Width, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_SetSoundClassVolume()
	{
		struct MainMenuLibBPLibrary_eventSetSoundClassVolume_Parms
		{
			USoundClass* SoundClass;
			float Volume;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetSoundClassVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(MainMenuLibBPLibrary_eventSetSoundClassVolume_Parms));
			UProperty* NewProp_Volume = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Volume"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Volume, MainMenuLibBPLibrary_eventSetSoundClassVolume_Parms), 0x0010000000000080);
			UProperty* NewProp_SoundClass = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SoundClass"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(SoundClass, MainMenuLibBPLibrary_eventSetSoundClassVolume_Parms), 0x0010000000000080, Z_Construct_UClass_USoundClass_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Audio Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_Volume"), TEXT("1.000000"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("SetSoundClassVolume"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu volume SoundClass audio"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("AUDIO SETTINGS // Set the SoundClass volume"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_SetVideoQualitySettings()
	{
		struct MainMenuLibBPLibrary_eventSetVideoQualitySettings_Parms
		{
			int32 AntiaAliasing;
			int32 Effects;
			int32 PostProcess;
			int32 Resolution;
			int32 Shadow;
			int32 Texture;
			int32 ViewDistance;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetVideoQualitySettings"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(MainMenuLibBPLibrary_eventSetVideoQualitySettings_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MainMenuLibBPLibrary_eventSetVideoQualitySettings_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MainMenuLibBPLibrary_eventSetVideoQualitySettings_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MainMenuLibBPLibrary_eventSetVideoQualitySettings_Parms), sizeof(bool), true);
			UProperty* NewProp_ViewDistance = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ViewDistance"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ViewDistance, MainMenuLibBPLibrary_eventSetVideoQualitySettings_Parms), 0x0010000000000082);
			UProperty* NewProp_Texture = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Texture"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Texture, MainMenuLibBPLibrary_eventSetVideoQualitySettings_Parms), 0x0010000000000082);
			UProperty* NewProp_Shadow = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Shadow"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Shadow, MainMenuLibBPLibrary_eventSetVideoQualitySettings_Parms), 0x0010000000000082);
			UProperty* NewProp_Resolution = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Resolution"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Resolution, MainMenuLibBPLibrary_eventSetVideoQualitySettings_Parms), 0x0010000000000082);
			UProperty* NewProp_PostProcess = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PostProcess"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(PostProcess, MainMenuLibBPLibrary_eventSetVideoQualitySettings_Parms), 0x0010000000000082);
			UProperty* NewProp_Effects = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Effects"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Effects, MainMenuLibBPLibrary_eventSetVideoQualitySettings_Parms), 0x0010000000000082);
			UProperty* NewProp_AntiaAliasing = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AntiaAliasing"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(AntiaAliasing, MainMenuLibBPLibrary_eventSetVideoQualitySettings_Parms), 0x0010000000000082);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Graphics Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_AntiaAliasing"), TEXT("3"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_Effects"), TEXT("3"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_PostProcess"), TEXT("3"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_Resolution"), TEXT("100"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_Shadow"), TEXT("3"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_Texture"), TEXT("3"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_ViewDistance"), TEXT("3"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu graphics settings"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set the quality settings (not applied not saved yet)"));
			MetaData->SetValue(NewProp_ViewDistance, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Texture, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Shadow, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Resolution, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_PostProcess, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_Effects, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_AntiaAliasing, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMainMenuLibBPLibrary_SetVSyncEnabled()
	{
		struct MainMenuLibBPLibrary_eventSetVSyncEnabled_Parms
		{
			bool VSync;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UMainMenuLibBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetVSyncEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(MainMenuLibBPLibrary_eventSetVSyncEnabled_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, MainMenuLibBPLibrary_eventSetVSyncEnabled_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, MainMenuLibBPLibrary_eventSetVSyncEnabled_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, MainMenuLibBPLibrary_eventSetVSyncEnabled_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(VSync, MainMenuLibBPLibrary_eventSetVSyncEnabled_Parms);
			UProperty* NewProp_VSync = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("VSync"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(VSync, MainMenuLibBPLibrary_eventSetVSyncEnabled_Parms), 0x0010000000000082, CPP_BOOL_PROPERTY_BITMASK(VSync, MainMenuLibBPLibrary_eventSetVSyncEnabled_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Menu Settings | Graphics Settings"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("Main Menu graphics settings"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set the vertical sync flag"));
			MetaData->SetValue(NewProp_VSync, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMainMenuLibBPLibrary_NoRegister()
	{
		return UMainMenuLibBPLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UMainMenuLibBPLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_MainMenuLib();
			OuterClass = UMainMenuLibBPLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_ChangeScreenResolution());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_GetAllActionKeyBindings());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_GetAllAxisAndActionMappingsForKey());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_GetAllAxisKeyBindings());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_GetFullscreenMode());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_GetMainMenuLibInput());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_GetMainMenuLibInputAxis());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_GetScreenResolution());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_GetSoundClassVolume());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_GetSupportedScreenResolutions());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_GetVideoQualitySettings());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_IsFullscreen());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_IsVSyncEnabled());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_IsWindowed());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_IsWindowedFullscreen());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_LoadVideoModeAndQuality());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_ReBindActionKey());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_ReBindAxisKey());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_RemoveActionKeyBind());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_RemoveAxisKeyBind());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_RevertVideoMode());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_SaveVideoModeAndQuality());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_SetFullscreenMode());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_SetQualitySettings());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_SetQualitySettingsFromBench());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_SetScreenResolution());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_SetSoundClassVolume());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_SetVideoQualitySettings());
				OuterClass->LinkChild(Z_Construct_UFunction_UMainMenuLibBPLibrary_SetVSyncEnabled());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_ChangeScreenResolution(), "ChangeScreenResolution"); // 3822737840
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_GetAllActionKeyBindings(), "GetAllActionKeyBindings"); // 3526114726
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_GetAllAxisAndActionMappingsForKey(), "GetAllAxisAndActionMappingsForKey"); // 3253785124
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_GetAllAxisKeyBindings(), "GetAllAxisKeyBindings"); // 1981284596
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_GetFullscreenMode(), "GetFullscreenMode"); // 202035617
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_GetMainMenuLibInput(), "GetMainMenuLibInput"); // 2229834785
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_GetMainMenuLibInputAxis(), "GetMainMenuLibInputAxis"); // 1700778781
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_GetScreenResolution(), "GetScreenResolution"); // 276793084
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_GetSoundClassVolume(), "GetSoundClassVolume"); // 897176000
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_GetSupportedScreenResolutions(), "GetSupportedScreenResolutions"); // 3358233988
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_GetVideoQualitySettings(), "GetVideoQualitySettings"); // 681726666
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_IsFullscreen(), "IsFullscreen"); // 1537715371
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_IsVSyncEnabled(), "IsVSyncEnabled"); // 716507357
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_IsWindowed(), "IsWindowed"); // 924720814
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_IsWindowedFullscreen(), "IsWindowedFullscreen"); // 1017802073
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_LoadVideoModeAndQuality(), "LoadVideoModeAndQuality"); // 630046787
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_ReBindActionKey(), "ReBindActionKey"); // 2518184120
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_ReBindAxisKey(), "ReBindAxisKey"); // 839500888
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_RemoveActionKeyBind(), "RemoveActionKeyBind"); // 3013849890
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_RemoveAxisKeyBind(), "RemoveAxisKeyBind"); // 2700916716
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_RevertVideoMode(), "RevertVideoMode"); // 4091840808
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_SaveVideoModeAndQuality(), "SaveVideoModeAndQuality"); // 2844456003
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_SetFullscreenMode(), "SetFullscreenMode"); // 1099760043
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_SetQualitySettings(), "SetQualitySettings"); // 3182202836
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_SetQualitySettingsFromBench(), "SetQualitySettingsFromBench"); // 400356698
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_SetScreenResolution(), "SetScreenResolution"); // 2997724948
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_SetSoundClassVolume(), "SetSoundClassVolume"); // 2372479591
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_SetVideoQualitySettings(), "SetVideoQualitySettings"); // 3201449030
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UMainMenuLibBPLibrary_SetVSyncEnabled(), "SetVSyncEnabled"); // 2490368118
				static TCppClassTypeInfo<TCppClassTypeTraits<UMainMenuLibBPLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MainMenuLibBPLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MainMenuLibBPLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMainMenuLibBPLibrary, 1478787739);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMainMenuLibBPLibrary(Z_Construct_UClass_UMainMenuLibBPLibrary, &UMainMenuLibBPLibrary::StaticClass, TEXT("/Script/MainMenuLib"), TEXT("UMainMenuLibBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenuLibBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
