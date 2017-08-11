// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "MainMenuLibPrivatePCH.h"
#include "MainMenuLibBPLibrary.h"



UMainMenuLibBPLibrary::UMainMenuLibBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}




// Set the SoundClass volume
void UMainMenuLibBPLibrary::SetSoundClassVolume(USoundClass* SoundClass, float Volume)
{
	if (SoundClass)
	{
		SoundClass->Properties.Volume = Volume;
	}
}

// Get the SoundClass volume
float UMainMenuLibBPLibrary::GetSoundClassVolume(USoundClass* SoundClass)
{
	if (SoundClass)
	{
		return SoundClass->Properties.Volume;
	}

	return 0.f;
}

FMainMenuLibInput UMainMenuLibBPLibrary::GetMainMenuLibInput(const FKeyEvent& KeyEvent)
{
	FMainMenuLibInput Input;

	Input.Key = KeyEvent.GetKey();
	Input.KeyAsString = Input.Key.GetDisplayName().ToString();

	Input.bAlt = KeyEvent.IsAltDown();
	Input.bCtrl = KeyEvent.IsControlDown();
	Input.bShift = KeyEvent.IsShiftDown();
	Input.bCmd = KeyEvent.IsCommandDown();

	return Input;
}

FMainMenuLibInputAxis UMainMenuLibBPLibrary::GetMainMenuLibInputAxis(const FKeyEvent& KeyEvent)
{
	FMainMenuLibInputAxis Input;

	Input.Key = KeyEvent.GetKey();
	Input.KeyAsString = Input.Key.GetDisplayName().ToString();

	Input.Scale = 1;

	return Input;
}

void UMainMenuLibBPLibrary::GetAllAxisKeyBindings(TArray<FMainMenuLibInputAxis>& Bindings)
{
	Bindings.Empty();

	const UInputSettings* Settings = GetDefault<UInputSettings>();
	if (!Settings) return;

	const TArray<FInputAxisKeyMapping>& Axi = Settings->AxisMappings;

	for (const FInputAxisKeyMapping& Each : Axi)
	{
		Bindings.Add(FMainMenuLibInputAxis(Each));
	}
}

void UMainMenuLibBPLibrary::RemoveAxisKeyBind(FMainMenuLibInputAxis ToRemove)
{
	//GetMutableDefault
	UInputSettings* Settings = GetMutableDefault<UInputSettings>();
	if (!Settings) return;

	TArray<FInputAxisKeyMapping>& Axi = Settings->AxisMappings;

	bool Found = false;
	for (int32 v = 0; v < Axi.Num(); v++)
	{
		if (Axi[v].Key == ToRemove.Key)
		{
			Found = true;
			Axi.RemoveAt(v);
			v = 0;
			continue;
		}
	}

	if (Found)
	{
		//SAVES TO DISK
		Settings->SaveKeyMappings();

		//REBUILDS INPUT, creates modified config in Saved/Config/Windows/Input.ini
		for (TObjectIterator<UPlayerInput> It; It; ++It)
		{
			It->ForceRebuildingKeyMaps(true);
		}
	}
}

void UMainMenuLibBPLibrary::GetAllActionKeyBindings(TArray<FMainMenuLibInput>& Bindings)
{
	Bindings.Empty();

	const UInputSettings* Settings = GetDefault<UInputSettings>();
	if (!Settings) return;

	const TArray<FInputActionKeyMapping>& Actions = Settings->ActionMappings;

	for (const FInputActionKeyMapping& Each : Actions)
	{
		Bindings.Add(FMainMenuLibInput(Each));
	}
}

void UMainMenuLibBPLibrary::RemoveActionKeyBind(FMainMenuLibInput ToRemove)
{
	//GetMutableDefault
	UInputSettings* Settings = GetMutableDefault<UInputSettings>();
	if (!Settings) return;

	TArray<FInputActionKeyMapping>& Actions = Settings->ActionMappings;

	bool Found = false;
	for (int32 v = 0; v < Actions.Num(); v++)
	{
		if (Actions[v].Key == ToRemove.Key)
		{
			Found = true;
			Actions.RemoveAt(v);
			v = 0;
			continue;
		}
	}

	if (Found)
	{
		//SAVES TO DISK
		Settings->SaveKeyMappings();

		//REBUILDS INPUT, creates modified config in Saved/Config/Windows/Input.ini
		for (TObjectIterator<UPlayerInput> It; It; ++It)
		{
			It->ForceRebuildingKeyMaps(true);
		}
	}
}

void UMainMenuLibBPLibrary::GetAllAxisAndActionMappingsForKey(FKey Key, TArray<FMainMenuLibInput>& ActionBindings, TArray<FMainMenuLibInputAxis>& AxisBindings)
{
	ActionBindings.Empty();
	AxisBindings.Empty();

	const UInputSettings* Settings = GetDefault<UInputSettings>();
	if (!Settings) return;

	const TArray<FInputActionKeyMapping>& Actions = Settings->ActionMappings;

	for (const FInputActionKeyMapping& Each : Actions)
	{
		if (Each.Key == Key)
		{
			ActionBindings.Add(FMainMenuLibInput(Each));
		}
	}

	const TArray<FInputAxisKeyMapping>& Axi = Settings->AxisMappings;

	for (const FInputAxisKeyMapping& Each : Axi)
	{
		if (Each.Key == Key)
		{
			AxisBindings.Add(FMainMenuLibInputAxis(Each));
		}
	}
}

bool UMainMenuLibBPLibrary::ReBindAxisKey(FMainMenuLibInputAxis Original, FMainMenuLibInputAxis NewBinding)
{
	UInputSettings* Settings = const_cast<UInputSettings*>(GetDefault<UInputSettings>());
	if (!Settings) return false;

	TArray<FInputAxisKeyMapping>& Axi = Settings->AxisMappings;

	//~~~

	bool Found = false;
	for (FInputAxisKeyMapping& Each : Axi)
	{
		//Search by original
		if (Each.AxisName.ToString() == Original.AxisName &&
			Each.Key == Original.Key
			) {
			//Update to new!
			UMainMenuLibBPLibrary::UpdateAxisMapping(Each, NewBinding);
			Found = true;
			break;
		}
	}

	if (Found)
	{
		//SAVES TO DISK
		const_cast<UInputSettings*>(Settings)->SaveKeyMappings();

		//REBUILDS INPUT, creates modified config in Saved/Config/Windows/Input.ini
		for (TObjectIterator<UPlayerInput> It; It; ++It)
		{
			It->ForceRebuildingKeyMaps(true);
		}
	}
	return Found;
}

bool UMainMenuLibBPLibrary::ReBindActionKey(FMainMenuLibInput Original, FMainMenuLibInput NewBinding)
{
	UInputSettings* Settings = const_cast<UInputSettings*>(GetDefault<UInputSettings>());
	if (!Settings) return false;

	TArray<FInputActionKeyMapping>& Actions = Settings->ActionMappings;

	//~~~

	bool Found = false;
	for (FInputActionKeyMapping& Each : Actions)
	{
		//Search by original
		if (Each.ActionName.ToString() == Original.ActionName &&
			Each.Key == Original.Key
			) {
			//Update to new!
			UMainMenuLibBPLibrary::UpdateActionMapping(Each, NewBinding);
			Found = true;
			break;
		}
	}

	if (Found)
	{
		//SAVES TO DISK
		const_cast<UInputSettings*>(Settings)->SaveKeyMappings();

		//REBUILDS INPUT, creates modified config in Saved/Config/Windows/Input.ini
		for (TObjectIterator<UPlayerInput> It; It; ++It)
		{
			It->ForceRebuildingKeyMaps(true);
		}
	}
	return Found;
}




// Set quality levels from benchmark
bool UMainMenuLibBPLibrary::SetQualitySettingsFromBench()
{
	Scalability::FQualityLevels Results;

	Results = Scalability::BenchmarkQualityLevels();

	UGameUserSettings* Settings = GetGameUserSettings();

	if (!Settings) {
		return false;
	}

	Settings->ScalabilityQuality.AntiAliasingQuality = Results.AntiAliasingQuality;
	Settings->ScalabilityQuality.EffectsQuality = Results.EffectsQuality;
	Settings->ScalabilityQuality.PostProcessQuality = Results.PostProcessQuality;
	Settings->ScalabilityQuality.ResolutionQuality = Results.ResolutionQuality;
	Settings->ScalabilityQuality.ShadowQuality = Results.ShadowQuality;
	Settings->ScalabilityQuality.TextureQuality = Results.TextureQuality;
	Settings->ScalabilityQuality.ViewDistanceQuality = Results.ViewDistanceQuality;

	return true;

}

// Set quality from single quality level
// @param Value 0:low, 1:medium, 2:high, 3:epic
bool UMainMenuLibBPLibrary::SetQualitySettings(int32 Value)
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (!Settings)
	{
		return false;
	}

	Settings->ScalabilityQuality.SetFromSingleQualityLevel(Value);

	return true;
}

// Get a list of screen resolutions supported by video adapter
// NOTE: This function needs "RHI" to be added to <Project>.Build.cs file!
bool UMainMenuLibBPLibrary::GetSupportedScreenResolutions(TArray<FString> &Resolutions)
{
	FScreenResolutionArray ResolutionsArray;

	if (RHIGetAvailableResolutions(ResolutionsArray, true))
	{
		for (const FScreenResolutionRHI &Resolution : ResolutionsArray)
		{
			if (Resolution.Width < MIN_SCREEN_WIDTH || Resolution.Height < MIN_SCREEN_HEIGHT)
			{
				continue;
			}

			FString StrW = FString::FromInt(Resolution.Width);
			FString StrH = FString::FromInt(Resolution.Height);
			Resolutions.AddUnique(StrW + "x" + StrH);
		}

		return true;
	}

	return false;	// Failed to obtain screen resolutions
}

// Get currently set screen resolution
FString UMainMenuLibBPLibrary::GetScreenResolution()
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (!Settings)
	{
		return FString("");
	}

	FIntPoint Resolution = Settings->GetScreenResolution();
	return FString::FromInt(Resolution.X) + "x" + FString::FromInt(Resolution.Y);
}

// Set the fullscreen mode
bool UMainMenuLibBPLibrary::SetFullscreenMode(int32 WindowMode)
{

	UGameUserSettings* Settings = GetGameUserSettings();
	if (!Settings)
	{
		return false;
	}

	switch (WindowMode)
	{
	case 0:
		Settings->SetFullscreenMode(EWindowMode::Fullscreen);
		break;

	case 1:
		Settings->SetFullscreenMode(EWindowMode::WindowedFullscreen);
		break;

	default:
		Settings->SetFullscreenMode(EWindowMode::Windowed);
		break;
	}

	return true;
}

// Get the fullscreen mode
bool UMainMenuLibBPLibrary::GetFullscreenMode(int32 &FullscreenMode)
{

	UGameUserSettings* Settings = GetGameUserSettings();
	if (!Settings)
	{
		return false;
	}


	switch (Settings->GetFullscreenMode())
	{
	case EWindowMode::Fullscreen:
		FullscreenMode = 0;
		break;

	case EWindowMode::WindowedFullscreen:
		FullscreenMode = 1;
		break;

	default:
		FullscreenMode = 2;
		break;
	}

	return true;

}

// Check whether or not we are currently running in fullscreen mode
bool UMainMenuLibBPLibrary::IsFullscreen()
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (!Settings)
	{
		return false;
	}

	return Settings->GetFullscreenMode() == EWindowMode::Fullscreen;
}

// Check whether or not we are currently running in windowed fullscreen mode (borderless)
bool UMainMenuLibBPLibrary::IsWindowedFullscreen()
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (!Settings)
	{
		return false;
	}

	return Settings->GetFullscreenMode() == EWindowMode::WindowedFullscreen;
}

// Check whether or not we are currently running in windowed mode
bool UMainMenuLibBPLibrary::IsWindowed()
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (!Settings)
	{
		return false;
	}

	return Settings->GetFullscreenMode() == EWindowMode::Windowed;
}

// Set the desired screen resolution (does not change it yet)
bool UMainMenuLibBPLibrary::SetScreenResolution(const int32 Width, const int32 Height, const int32 FullscreenMode)
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (!Settings)
	{
		return false;
	}

	Settings->SetWindowPosition(-1, -1);
	Settings->SetScreenResolution(FIntPoint(Width, Height));

	switch (FullscreenMode)
	{

	case 0:
		Settings->SetFullscreenMode(EWindowMode::Fullscreen);
		break;

	case 1:
		Settings->SetFullscreenMode(EWindowMode::WindowedFullscreen);
		break;

	default:
		Settings->SetFullscreenMode(EWindowMode::Windowed);
		break;
	}

	return true;
}

// Change the current screen resolution
bool UMainMenuLibBPLibrary::ChangeScreenResolution(const int32 Width, const int32 Height, const int32 FullscreenMode)
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (!Settings)
	{
		return false;
	}

	Settings->SetWindowPosition(-1, -1);
	EWindowMode::Type WindowMode;

	switch (FullscreenMode)
	{

	case 0:
		WindowMode = EWindowMode::Fullscreen;
		break;

	case 1:
		WindowMode = EWindowMode::WindowedFullscreen;
		break;

	default:
		WindowMode = EWindowMode::Windowed;
		break;
	}

	Settings->RequestResolutionChange(Width, Height, WindowMode, false);

	return true;
}

// Get the current video quality settings
bool UMainMenuLibBPLibrary::GetVideoQualitySettings(int32 &AntiAliasing, int32 &Effects, int32 &PostProcess, int32 &Resolution, int32 &Shadow, int32 &Texture, int32 &ViewDistance)
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (!Settings)
	{
		return false;
	}

	AntiAliasing = Settings->ScalabilityQuality.AntiAliasingQuality;
	Effects = Settings->ScalabilityQuality.EffectsQuality;
	PostProcess = Settings->ScalabilityQuality.PostProcessQuality;
	Resolution = Settings->ScalabilityQuality.ResolutionQuality;
	Shadow = Settings->ScalabilityQuality.ShadowQuality;
	Texture = Settings->ScalabilityQuality.TextureQuality;
	ViewDistance = Settings->ScalabilityQuality.ViewDistanceQuality;

	return true;
}

// Set the quality settings (not applied nor saved yet)
bool UMainMenuLibBPLibrary::SetVideoQualitySettings(const int32 AntiAliasing, const  int32 Effects, const  int32 PostProcess, const  int32 Resolution, const  int32 Shadow, const  int32 Texture, const  int32 ViewDistance)
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (!Settings)
	{
		return false;
	}

	Settings->ScalabilityQuality.AntiAliasingQuality = AntiAliasing;
	Settings->ScalabilityQuality.EffectsQuality = Effects;
	Settings->ScalabilityQuality.PostProcessQuality = PostProcess;
	Settings->ScalabilityQuality.ResolutionQuality = Resolution;
	Settings->ScalabilityQuality.ShadowQuality = Shadow;
	Settings->ScalabilityQuality.TextureQuality = Texture;
	Settings->ScalabilityQuality.ViewDistanceQuality = ViewDistance;

	return true;
}

// Check whether or not we have vertical sync enabled
bool UMainMenuLibBPLibrary::IsVSyncEnabled()
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (!Settings)
	{
		return false;
	}

	return Settings->IsVSyncEnabled();
}

// Set the vertical sync flag
bool UMainMenuLibBPLibrary::SetVSyncEnabled(const bool VSync)
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (!Settings)
	{
		return false;
	}

	Settings->SetVSyncEnabled(VSync);
	return true;
}

// Load user settings from persistence storage
bool UMainMenuLibBPLibrary::LoadVideoModeAndQuality()
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (!Settings)
	{
		return false;
	}

	Settings->LoadSettings();

	return true;
}

// Confirm and save current video mode (resolution and fullscreen/windowed)
bool UMainMenuLibBPLibrary::SaveVideoModeAndQuality()
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (!Settings)
	{
		return false;
	}

	Settings->ConfirmVideoMode();
	Settings->ApplyNonResolutionSettings();
	Settings->SaveSettings();

	return true;
}


// Revert to original video settings
bool UMainMenuLibBPLibrary::RevertVideoMode()
{
	UGameUserSettings* Settings = GetGameUserSettings();
	if (!Settings)
	{
		return false;
	}

	Settings->RevertVideoMode();
	return true;
}



// =================== PRIVATE METHODS ========================

// Try to get the GameUserSettings object from the engine
UGameUserSettings* UMainMenuLibBPLibrary::GetGameUserSettings()
{
	if (GEngine != nullptr)
	{
		return GEngine->GameUserSettings;
	}

	return nullptr;
}
