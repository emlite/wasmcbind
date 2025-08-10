#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CaptureController CaptureController;

DECLARE_EMLITE_TYPE(DisplayMediaStreamOptions, em_Val);

jb_Any DisplayMediaStreamOptions_video(const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_video(DisplayMediaStreamOptions* self, jb_Any * value);

jb_Any DisplayMediaStreamOptions_audio(const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_audio(DisplayMediaStreamOptions* self, jb_Any * value);

CaptureController DisplayMediaStreamOptions_controller(const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_controller(DisplayMediaStreamOptions* self, CaptureController * value);

SelfCapturePreferenceEnum DisplayMediaStreamOptions_selfBrowserSurface(const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_selfBrowserSurface(DisplayMediaStreamOptions* self, SelfCapturePreferenceEnum * value);

SystemAudioPreferenceEnum DisplayMediaStreamOptions_systemAudio(const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_systemAudio(DisplayMediaStreamOptions* self, SystemAudioPreferenceEnum * value);

WindowAudioPreferenceEnum DisplayMediaStreamOptions_windowAudio(const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_windowAudio(DisplayMediaStreamOptions* self, WindowAudioPreferenceEnum * value);

SurfaceSwitchingPreferenceEnum DisplayMediaStreamOptions_surfaceSwitching(const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_surfaceSwitching(DisplayMediaStreamOptions* self, SurfaceSwitchingPreferenceEnum * value);

MonitorTypeSurfacesEnum DisplayMediaStreamOptions_monitorTypeSurfaces(const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_monitorTypeSurfaces(DisplayMediaStreamOptions* self, MonitorTypeSurfacesEnum * value);

DisplayMediaStreamOptions DisplayMediaStreamOptions_new();

#ifdef __cplusplus
}
#endif
