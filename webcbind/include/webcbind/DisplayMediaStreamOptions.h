#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CaptureController CaptureController;

/** @brief Dictionary type DisplayMediaStreamOptions */
DECLARE_EMLITE_TYPE(DisplayMediaStreamOptions, em_Val);

/** @brief Getter of the video property */
jb_Any DisplayMediaStreamOptions_video(const DisplayMediaStreamOptions *self);

/** @brief Setter of the video property */
void DisplayMediaStreamOptions_set_video(DisplayMediaStreamOptions* self, jb_Any * value);

/** @brief Getter of the audio property */
jb_Any DisplayMediaStreamOptions_audio(const DisplayMediaStreamOptions *self);

/** @brief Setter of the audio property */
void DisplayMediaStreamOptions_set_audio(DisplayMediaStreamOptions* self, jb_Any * value);

/** @brief Getter of the controller property */
CaptureController DisplayMediaStreamOptions_controller(const DisplayMediaStreamOptions *self);

/** @brief Setter of the controller property */
void DisplayMediaStreamOptions_set_controller(DisplayMediaStreamOptions* self, CaptureController * value);

/** @brief Getter of the selfBrowserSurface property */
SelfCapturePreferenceEnum DisplayMediaStreamOptions_selfBrowserSurface(const DisplayMediaStreamOptions *self);

/** @brief Setter of the selfBrowserSurface property */
void DisplayMediaStreamOptions_set_selfBrowserSurface(DisplayMediaStreamOptions* self, SelfCapturePreferenceEnum * value);

/** @brief Getter of the systemAudio property */
SystemAudioPreferenceEnum DisplayMediaStreamOptions_systemAudio(const DisplayMediaStreamOptions *self);

/** @brief Setter of the systemAudio property */
void DisplayMediaStreamOptions_set_systemAudio(DisplayMediaStreamOptions* self, SystemAudioPreferenceEnum * value);

/** @brief Getter of the windowAudio property */
WindowAudioPreferenceEnum DisplayMediaStreamOptions_windowAudio(const DisplayMediaStreamOptions *self);

/** @brief Setter of the windowAudio property */
void DisplayMediaStreamOptions_set_windowAudio(DisplayMediaStreamOptions* self, WindowAudioPreferenceEnum * value);

/** @brief Getter of the surfaceSwitching property */
SurfaceSwitchingPreferenceEnum DisplayMediaStreamOptions_surfaceSwitching(const DisplayMediaStreamOptions *self);

/** @brief Setter of the surfaceSwitching property */
void DisplayMediaStreamOptions_set_surfaceSwitching(DisplayMediaStreamOptions* self, SurfaceSwitchingPreferenceEnum * value);

/** @brief Getter of the monitorTypeSurfaces property */
MonitorTypeSurfacesEnum DisplayMediaStreamOptions_monitorTypeSurfaces(const DisplayMediaStreamOptions *self);

/** @brief Setter of the monitorTypeSurfaces property */
void DisplayMediaStreamOptions_set_monitorTypeSurfaces(DisplayMediaStreamOptions* self, MonitorTypeSurfacesEnum * value);

/** @brief Constructor of the DisplayMediaStreamOptions dictionary type */
DisplayMediaStreamOptions DisplayMediaStreamOptions_new();

#ifdef __cplusplus
}
#endif
