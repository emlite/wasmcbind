#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct MediaDeviceInfo MediaDeviceInfo;
typedef struct AudioOutputOptions AudioOutputOptions;
typedef struct CaptureHandleConfig CaptureHandleConfig;
typedef struct MediaTrackSupportedConstraints MediaTrackSupportedConstraints;
typedef struct MediaStream MediaStream;
typedef struct MediaStreamConstraints MediaStreamConstraints;
typedef struct DisplayMediaStreamOptions DisplayMediaStreamOptions;
typedef struct CaptureController CaptureController;


typedef struct {
  em_Val inner;
} AudioOutputOptions;


DECLARE_EMLITE_TYPE(AudioOutputOptions, em_Val);

jb_DOMString AudioOutputOptions_deviceId( const AudioOutputOptions *self);

void AudioOutputOptions_set_deviceId(AudioOutputOptions* self, const jb_DOMString* value);
typedef struct {
  em_Val inner;
} CaptureHandleConfig;


DECLARE_EMLITE_TYPE(CaptureHandleConfig, em_Val);

bool CaptureHandleConfig_exposeOrigin( const CaptureHandleConfig *self);

void CaptureHandleConfig_set_exposeOrigin(CaptureHandleConfig* self, bool value);

jb_DOMString CaptureHandleConfig_handle( const CaptureHandleConfig *self);

void CaptureHandleConfig_set_handle(CaptureHandleConfig* self, const jb_DOMString* value);

jb_Sequence CaptureHandleConfig_permittedOrigins( const CaptureHandleConfig *self);

void CaptureHandleConfig_set_permittedOrigins(CaptureHandleConfig* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} MediaTrackSupportedConstraints;


DECLARE_EMLITE_TYPE(MediaTrackSupportedConstraints, em_Val);

bool MediaTrackSupportedConstraints_displaySurface( const MediaTrackSupportedConstraints *self);

void MediaTrackSupportedConstraints_set_displaySurface(MediaTrackSupportedConstraints* self, bool value);

bool MediaTrackSupportedConstraints_logicalSurface( const MediaTrackSupportedConstraints *self);

void MediaTrackSupportedConstraints_set_logicalSurface(MediaTrackSupportedConstraints* self, bool value);

bool MediaTrackSupportedConstraints_cursor( const MediaTrackSupportedConstraints *self);

void MediaTrackSupportedConstraints_set_cursor(MediaTrackSupportedConstraints* self, bool value);

bool MediaTrackSupportedConstraints_restrictOwnAudio( const MediaTrackSupportedConstraints *self);

void MediaTrackSupportedConstraints_set_restrictOwnAudio(MediaTrackSupportedConstraints* self, bool value);

bool MediaTrackSupportedConstraints_suppressLocalAudioPlayback( const MediaTrackSupportedConstraints *self);

void MediaTrackSupportedConstraints_set_suppressLocalAudioPlayback(MediaTrackSupportedConstraints* self, bool value);
typedef struct {
  em_Val inner;
} MediaStreamConstraints;


DECLARE_EMLITE_TYPE(MediaStreamConstraints, em_Val);

jb_DOMString MediaStreamConstraints_peerIdentity( const MediaStreamConstraints *self);

void MediaStreamConstraints_set_peerIdentity(MediaStreamConstraints* self, const jb_DOMString* value);
typedef struct {
  em_Val inner;
} DisplayMediaStreamOptions;


DECLARE_EMLITE_TYPE(DisplayMediaStreamOptions, em_Val);

jb_Any DisplayMediaStreamOptions_video( const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_video(DisplayMediaStreamOptions* self, const jb_Any* value);

jb_Any DisplayMediaStreamOptions_audio( const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_audio(DisplayMediaStreamOptions* self, const jb_Any* value);

CaptureController DisplayMediaStreamOptions_controller( const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_controller(DisplayMediaStreamOptions* self, const CaptureController* value);

SelfCapturePreferenceEnum DisplayMediaStreamOptions_selfBrowserSurface( const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_selfBrowserSurface(DisplayMediaStreamOptions* self, const SelfCapturePreferenceEnum* value);

SystemAudioPreferenceEnum DisplayMediaStreamOptions_systemAudio( const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_systemAudio(DisplayMediaStreamOptions* self, const SystemAudioPreferenceEnum* value);

WindowAudioPreferenceEnum DisplayMediaStreamOptions_windowAudio( const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_windowAudio(DisplayMediaStreamOptions* self, const WindowAudioPreferenceEnum* value);

SurfaceSwitchingPreferenceEnum DisplayMediaStreamOptions_surfaceSwitching( const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_surfaceSwitching(DisplayMediaStreamOptions* self, const SurfaceSwitchingPreferenceEnum* value);

MonitorTypeSurfacesEnum DisplayMediaStreamOptions_monitorTypeSurfaces( const DisplayMediaStreamOptions *self);

void DisplayMediaStreamOptions_set_monitorTypeSurfaces(DisplayMediaStreamOptions* self, const MonitorTypeSurfacesEnum* value);
typedef struct {
  EventTarget inner;
} MediaDevices;


DECLARE_EMLITE_TYPE(MediaDevices, EventTarget);

jb_Any MediaDevices_ondevicechange( const MediaDevices *self);

void MediaDevices_set_ondevicechange(MediaDevices* self, const jb_Any* value);

jb_Promise MediaDevices_enumerateDevices(MediaDevices* self );

jb_Promise MediaDevices_selectAudioOutput(MediaDevices* self );

jb_Promise MediaDevices_selectAudioOutput(MediaDevices* self , const AudioOutputOptions* options);

jb_Undefined MediaDevices_setCaptureHandleConfig(MediaDevices* self );

jb_Undefined MediaDevices_setCaptureHandleConfig(MediaDevices* self , const CaptureHandleConfig* config);

jb_Undefined MediaDevices_setSupportedCaptureActions(MediaDevices* self , const jb_Sequence* actions);

jb_Any MediaDevices_oncaptureaction( const MediaDevices *self);

void MediaDevices_set_oncaptureaction(MediaDevices* self, const jb_Any* value);

MediaTrackSupportedConstraints MediaDevices_getSupportedConstraints(MediaDevices* self );

jb_Promise MediaDevices_getUserMedia(MediaDevices* self );

jb_Promise MediaDevices_getUserMedia(MediaDevices* self , const MediaStreamConstraints* constraints);

jb_Promise MediaDevices_getViewportMedia(MediaDevices* self );

jb_Promise MediaDevices_getViewportMedia(MediaDevices* self , const DisplayMediaStreamOptions* options);

jb_Promise MediaDevices_getDisplayMedia(MediaDevices* self );

jb_Promise MediaDevices_getDisplayMedia(MediaDevices* self , const DisplayMediaStreamOptions* options);
