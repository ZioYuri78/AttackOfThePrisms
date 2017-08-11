// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

/*
Source code from VictoryBPLibrary by Rama
https://forums.unrealengine.com/showthread.php?3851-%2839%29-Rama-s-Extra-Blueprint-Nodes-for-You-as-a-Plugin-No-C-Required!

Source code by Impetus Games
https://impetus-games.com/blog/Persistent-Graphics-Settings-in-UE4

Edited by Yuri Belleri
*/


#pragma once

#include "Engine.h"
#include "MainMenuLibBPLibrary.generated.h"

#define MIN_SCREEN_WIDTH 800
#define MIN_SCREEN_HEIGHT 600

USTRUCT(BlueprintType)
struct FMainMenuLibInput
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Keywords = "Main Menu controls"), Category = "Menu Settings | Controls Settings")
	FString ActionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Keywords = "Main Menu controls"), Category = "Menu Settings | Controls Settings")
	FKey Key;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Keywords = "Main Menu controls"), Category = "Menu Settings | Controls Settings")
	FString KeyAsString;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Keywords = "Main Menu controls"), Category = "Menu Settings | Controls Settings")
	uint32 bShift : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Keywords = "Main Menu controls"), Category = "Menu Settings | Controls Settings")
	uint32 bCtrl : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Keywords = "Main Menu controls"), Category = "Menu Settings | Controls Settings")
	uint32 bAlt : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Keywords = "Main Menu controls"), Category = "Menu Settings | Controls Settings")
	uint32 bCmd : 1;


	FMainMenuLibInput() {}
	FMainMenuLibInput(const FString InActionName, const FKey InKey, const bool bInShift, const bool bInCtrl, const bool bInAlt, const bool bInCmd)
		: Key(InKey)
		, KeyAsString(Key.GetDisplayName().ToString())
		, bShift(bInShift)
		, bCtrl(bInCtrl)
		, bAlt(bInAlt)
		, bCmd(bInCmd)
	{
		ActionName = InActionName;
	}

	FMainMenuLibInput(const FInputActionKeyMapping& Action)
		: Key(Action.Key)
		, KeyAsString(Action.Key.GetDisplayName().ToString())
		, bShift(Action.bShift)
		, bCtrl(Action.bCtrl)
		, bAlt(Action.bAlt)
		, bCmd(Action.bCmd)
	{
		ActionName = Action.ActionName.ToString();
	}
};


USTRUCT(BlueprintType)
struct FMainMenuLibInputAxis
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Keywords = "Main Menu controls"), Category = "Menu Settings | Controls Settings")
	FString AxisName = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Keywords = "Main Menu controls"), Category = "Menu Settings | Controls Settings")
	FString KeyAsString = "";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Keywords = "Main Menu controls"), Category = "Menu Settings | Controls Settings")
	FKey Key;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Keywords = "Main Menu controls"), Category = "Menu Settings | Controls Settings")
	float Scale = 1;

	FMainMenuLibInputAxis() {}
	FMainMenuLibInputAxis(const FString InAxisName, FKey InKey, float InScale)
		: Key(InKey)
		, KeyAsString(InKey.GetDisplayName().ToString())
		, AxisName(InAxisName)
		, Scale(InScale)
	{ }

	FMainMenuLibInputAxis(const FInputAxisKeyMapping& Axis)
		: Key(Axis.Key)
		, KeyAsString(Axis.Key.GetDisplayName().ToString())
		, Scale(Axis.Scale)
	{
		AxisName = Axis.AxisName.ToString();
	}
};

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class UMainMenuLibBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
	
	
	/* AUDIO SETTINGS */
	
	// Set the SoundClass volume
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "SetSoundClassVolume", Keywords = "Main Menu volume SoundClass audio"), Category = "Menu Settings | Audio Settings")
	static void SetSoundClassVolume(USoundClass* SoundClass, float Volume = 1.f);

	// Get the SoundClass volume
	UFUNCTION(BlueprintPure, meta = (DisplayName = "GetSoundClassVolume", Keywords = "Main Menu volume SoundClass audio"), Category = "Menu Settings | Audio Settings")
	static float GetSoundClassVolume(USoundClass* SoundClass);

	/*===========================================================*/

	/* CONTROLS SETTINGS */

	UFUNCTION(BlueprintPure, meta = (Keywords = "Main Menu controls"), Category = "Menu Settings | Controls Settings")
	static void GetAllAxisAndActionMappingsForKey(FKey Key, TArray<FMainMenuLibInput>& ActionBindings, TArray<FMainMenuLibInputAxis>& AxisBindings);

	//	Axis Mapping
	UFUNCTION(BlueprintPure, meta = (Keywords = "Main Menu controls"), Category = "Menu Settings | Controls Settings")
	static FMainMenuLibInputAxis GetMainMenuLibInputAxis(const FKeyEvent& KeyEvent);

	UFUNCTION(BlueprintPure, meta = (Keywords = "Main Menu controls"), Category = "Menu Settings | Controls Settings")
	static void GetAllAxisKeyBindings(TArray<FMainMenuLibInputAxis>& Bindings);

	UFUNCTION(BlueprintCallable, meta = (Keywords = "Main Menu controls"), Category = "Menu Settings | Controls Settings")
	static void RemoveAxisKeyBind(FMainMenuLibInputAxis ToRemove);

	/** You can leave the AsString field blank :) Returns false if the key could not be found as an existing mapping!  Enjoy! <3  Rama */
	UFUNCTION(BlueprintCallable, meta = (Keywords = "Main Menu controls"), Category = "Menu Settings | Controls Settings")
	static bool ReBindAxisKey(FMainMenuLibInputAxis Original, FMainMenuLibInputAxis NewBinding);

	static FORCEINLINE void UpdateAxisMapping(FInputAxisKeyMapping& Destination, const FMainMenuLibInputAxis& InputBind)
	{
		Destination.Key = InputBind.Key;
		Destination.Scale = InputBind.Scale;
	}


	//	Action Mapping
	UFUNCTION(BlueprintPure, meta = (Keywords = "Main Menu controls"), Category = "Menu Settings | Controls Settings")
	static FMainMenuLibInput GetMainMenuLibInput(const FKeyEvent& KeyEvent);

	static FORCEINLINE void UpdateActionMapping(FInputActionKeyMapping& Destination, const FMainMenuLibInput& InputBind)
	{
		Destination.Key = InputBind.Key;
		Destination.bShift = InputBind.bShift;
		Destination.bCtrl = InputBind.bCtrl;
		Destination.bAlt = InputBind.bAlt;
		Destination.bCmd = InputBind.bCmd;
	}

	UFUNCTION(BlueprintPure, meta = (Keywords = "Main Menu controls"), Category = "Menu Settings | Controls Settings")
	static void GetAllActionKeyBindings(TArray<FMainMenuLibInput>& Bindings);

	/** You can leave the AsString field blank :) Returns false if the key could not be found as an existing mapping!  Enjoy! <3  Rama */
	UFUNCTION(BlueprintCallable, meta = (Keywords = "Main Menu controls"), Category = "Menu Settings | Controls Settings")
	static bool ReBindActionKey(FMainMenuLibInput Original, FMainMenuLibInput NewBinding);

	UFUNCTION(BlueprintCallable, meta = (Keywords = "Main Menu controls"), Category = "Menu Settings | Controls Settings")
	static void RemoveActionKeyBind(FMainMenuLibInput ToRemove);

	/*===========================================================*/

	/* GRAPHICS SETTINGS */

	// Set quality levels from benchmark
	UFUNCTION(BlueprintCallable, meta = (Keywords = "Main Menu graphics settings"), Category = "Menu Settings | Graphics Settings")
	static bool SetQualitySettingsFromBench();

	// Set quality from single quality level
	// @param Value 0:low, 1:medium, 2:high, 3:epic
	UFUNCTION(BlueprintCallable, meta = (Keywords = "Main Menu graphics settings"), Category = "Menu Settings | Graphics Settings")
	static bool SetQualitySettings(int32 Value);

	// Get a list of screen resolutions supported on this machine
	UFUNCTION(BlueprintPure, meta = (Keywords = "Main Menu graphics settings"), Category = "Menu Settings | Graphics Settings")
	static bool GetSupportedScreenResolutions(TArray<FString> &Resolutions);

	// Get currently set screen resolution
	UFUNCTION(BlueprintPure, meta = (Keywords = "Main Menu graphics settings"), Category = "Menu Settings | Graphics Settings")
	static FString GetScreenResolution();

	// Set the fullscreen mode
	UFUNCTION(BlueprintCallable, meta = (Keywords = "Main Menu graphics settings"), Category = "Menu Settings | Graphics Settings")
	static bool SetFullscreenMode(int32 WindowMode);

	// Get the fullscreen mode
	UFUNCTION(BlueprintPure, meta = (Keywords = "Main Menu graphics settings"), Category = "Menu Settings | Graphics Settings")
	static bool GetFullscreenMode(int32 &FullscreenMode);

	// Check whether or not we are currently running in fullscreen mode
	UFUNCTION(BlueprintPure, meta = (Keywords = "Main Menu graphics settings"), Category = "Menu Settings | Graphics Settings")
	static bool IsFullscreen();

	// Check whether or not we are currently running in  windowed fullscreen mode (borderless)
	UFUNCTION(BlueprintPure, meta = (Keywords = "Main Menu graphics settings"), Category = "Menu Settings | Graphics Settings")
	static bool IsWindowedFullscreen();

	// Check whether or not we are currently running in windowed mode
	UFUNCTION(BlueprintPure, meta = (Keywords = "Main Menu graphics settings"), Category = "Menu Settings | Graphics Settings")
	static bool IsWindowed();

	// Set the desired screen resolution (does not change it yet)
	UFUNCTION(BlueprintCallable, meta = (Keywords = "Main Menu graphics settings"), Category = "Menu Settings | Graphics Settings")
	static bool SetScreenResolution(const int32 Width, const int32 Height, const int32 FullscreenMode);

	// Change the current screen resolution
	UFUNCTION(BlueprintCallable, meta = (Keywords = "Main Menu graphics settings"), Category = "Menu Settings | Graphics Settings")
	static bool ChangeScreenResolution(const int32 Width, const int32 Height, const int32 FullscreenMode);

	// Get the current video quality settings
	UFUNCTION(BlueprintCallable, meta = (Keywords = "Main Menu graphics settings"), Category = "Menu Settings | Graphics Settings")
	static bool GetVideoQualitySettings(int32 &AntiAliasing, int32 &Effects, int32 &PostProcess, int32 &Resolution, int32 &Shadow, int32 &Texture, int32 &ViewDistance);

	// Set the quality settings (not applied not saved yet)
	UFUNCTION(BlueprintCallable, meta = (Keywords = "Main Menu graphics settings"), Category = "Menu Settings | Graphics Settings")
	static bool SetVideoQualitySettings(const int32 AntiaAliasing = 3, const int32 Effects = 3, const int32 PostProcess = 3, const int32 Resolution = 100, const int32 Shadow = 3, const int32 Texture = 3, const int32 ViewDistance = 3);

	// CHeck whether or not we have vertical sync enabled
	UFUNCTION(BlueprintPure, meta = (Keywords = "Main Menu graphics settings"), Category = "Menu Settings | Graphics Settings")
	static bool IsVSyncEnabled();

	// Set the vertical sync flag
	UFUNCTION(BlueprintCallable, meta = (Keywords = "Main Menu graphics settings"), Category = "Menu Settings | Graphics Settings")
	static bool SetVSyncEnabled(const bool VSync);

	// Load user settings from persistence storage
	UFUNCTION(BlueprintCallable, meta = (Keywords = "Main Menu graphics settings"), Category = "Menu Settings | Graphics Settings")
	static bool LoadVideoModeAndQuality();

	// Confirm and save current video mode (resolution and fullscreen/windowed) as well as quality settings
	UFUNCTION(BlueprintCallable, meta = (Keywords = "Main Menu graphics settings"), Category = "Menu Settings | Graphics Settings")
	static bool SaveVideoModeAndQuality();

	// Revert to original video settings
	UFUNCTION(BlueprintCallable, meta = (Keywords = "Main Menu graphics settings"), Category = "Menu Settings | Graphics Settings")
	static bool RevertVideoMode();

	

private:

	// Try to get the GameUserSettings object from the engine
	static UGameUserSettings* GetGameUserSettings();
};
