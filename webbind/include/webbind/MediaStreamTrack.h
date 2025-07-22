#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct MediaStreamTrack MediaStreamTrack;
typedef struct MediaTrackCapabilities MediaTrackCapabilities;
typedef struct MediaTrackConstraints MediaTrackConstraints;
typedef struct MediaTrackSettings MediaTrackSettings;
typedef struct CaptureHandle CaptureHandle;


DECLARE_EMLITE_TYPE(MediaTrackCapabilities, em_Val);

jb_DOMString MediaTrackCapabilities_displaySurface( const MediaTrackCapabilities *self);

void MediaTrackCapabilities_set_displaySurface(MediaTrackCapabilities* self, jb_DOMString * value);

bool MediaTrackCapabilities_logicalSurface( const MediaTrackCapabilities *self);

void MediaTrackCapabilities_set_logicalSurface(MediaTrackCapabilities* self, bool value);

jb_Sequence MediaTrackCapabilities_cursor( const MediaTrackCapabilities *self);

void MediaTrackCapabilities_set_cursor(MediaTrackCapabilities* self, jb_Sequence * value);
DECLARE_EMLITE_TYPE(MediaTrackConstraints, em_Val);

jb_Sequence MediaTrackConstraints_advanced( const MediaTrackConstraints *self);

void MediaTrackConstraints_set_advanced(MediaTrackConstraints* self, jb_Sequence * value);
DECLARE_EMLITE_TYPE(MediaTrackSettings, em_Val);

jb_DOMString MediaTrackSettings_displaySurface( const MediaTrackSettings *self);

void MediaTrackSettings_set_displaySurface(MediaTrackSettings* self, jb_DOMString * value);

bool MediaTrackSettings_logicalSurface( const MediaTrackSettings *self);

void MediaTrackSettings_set_logicalSurface(MediaTrackSettings* self, bool value);

jb_DOMString MediaTrackSettings_cursor( const MediaTrackSettings *self);

void MediaTrackSettings_set_cursor(MediaTrackSettings* self, jb_DOMString * value);

bool MediaTrackSettings_restrictOwnAudio( const MediaTrackSettings *self);

void MediaTrackSettings_set_restrictOwnAudio(MediaTrackSettings* self, bool value);

bool MediaTrackSettings_suppressLocalAudioPlayback( const MediaTrackSettings *self);

void MediaTrackSettings_set_suppressLocalAudioPlayback(MediaTrackSettings* self, bool value);

double MediaTrackSettings_screenPixelRatio( const MediaTrackSettings *self);

void MediaTrackSettings_set_screenPixelRatio(MediaTrackSettings* self, double value);
DECLARE_EMLITE_TYPE(CaptureHandle, em_Val);

jb_DOMString CaptureHandle_origin( const CaptureHandle *self);

void CaptureHandle_set_origin(CaptureHandle* self, jb_DOMString * value);

jb_DOMString CaptureHandle_handle( const CaptureHandle *self);

void CaptureHandle_set_handle(CaptureHandle* self, jb_DOMString * value);
DECLARE_EMLITE_TYPE(MediaStreamTrack, EventTarget);

jb_DOMString MediaStreamTrack_kind( const MediaStreamTrack *self);

jb_DOMString MediaStreamTrack_id( const MediaStreamTrack *self);

jb_DOMString MediaStreamTrack_label( const MediaStreamTrack *self);

bool MediaStreamTrack_enabled( const MediaStreamTrack *self);

void MediaStreamTrack_set_enabled(MediaStreamTrack* self, bool value);

bool MediaStreamTrack_muted( const MediaStreamTrack *self);

jb_Any MediaStreamTrack_onmute( const MediaStreamTrack *self);

void MediaStreamTrack_set_onmute(MediaStreamTrack* self, jb_Any * value);

jb_Any MediaStreamTrack_onunmute( const MediaStreamTrack *self);

void MediaStreamTrack_set_onunmute(MediaStreamTrack* self, jb_Any * value);

MediaStreamTrackState MediaStreamTrack_readyState( const MediaStreamTrack *self);

jb_Any MediaStreamTrack_onended( const MediaStreamTrack *self);

void MediaStreamTrack_set_onended(MediaStreamTrack* self, jb_Any * value);

MediaStreamTrack MediaStreamTrack_clone(MediaStreamTrack* self );

jb_Undefined MediaStreamTrack_stop(MediaStreamTrack* self );

MediaTrackCapabilities MediaStreamTrack_getCapabilities(MediaStreamTrack* self );

MediaTrackConstraints MediaStreamTrack_getConstraints(MediaStreamTrack* self );

MediaTrackSettings MediaStreamTrack_getSettings(MediaStreamTrack* self );

jb_Promise MediaStreamTrack_applyConstraints0(MediaStreamTrack* self );

jb_Promise MediaStreamTrack_applyConstraints1(MediaStreamTrack* self , MediaTrackConstraints * constraints);

CaptureHandle MediaStreamTrack_getCaptureHandle(MediaStreamTrack* self );

jb_Any MediaStreamTrack_oncapturehandlechange( const MediaStreamTrack *self);

void MediaStreamTrack_set_oncapturehandlechange(MediaStreamTrack* self, jb_Any * value);

jb_Sequence MediaStreamTrack_getSupportedCaptureActions(MediaStreamTrack* self );

jb_Promise MediaStreamTrack_sendCaptureAction(MediaStreamTrack* self , CaptureAction * action);

jb_DOMString MediaStreamTrack_contentHint( const MediaStreamTrack *self);

void MediaStreamTrack_set_contentHint(MediaStreamTrack* self, jb_DOMString * value);

bool MediaStreamTrack_isolated( const MediaStreamTrack *self);

jb_Any MediaStreamTrack_onisolationchange( const MediaStreamTrack *self);

void MediaStreamTrack_set_onisolationchange(MediaStreamTrack* self, jb_Any * value);
