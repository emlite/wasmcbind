#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaTrackCapabilities MediaTrackCapabilities;
typedef struct MediaTrackConstraints MediaTrackConstraints;
typedef struct MediaTrackSettings MediaTrackSettings;
typedef struct CaptureHandle CaptureHandle;

DECLARE_EMLITE_TYPE(MediaStreamTrack, EventTarget);

jb_String MediaStreamTrack_kind(const MediaStreamTrack *self);

jb_String MediaStreamTrack_id(const MediaStreamTrack *self);

jb_String MediaStreamTrack_label(const MediaStreamTrack *self);

bool MediaStreamTrack_enabled(const MediaStreamTrack *self);

void MediaStreamTrack_set_enabled(MediaStreamTrack* self, bool value);

bool MediaStreamTrack_muted(const MediaStreamTrack *self);

jb_Any MediaStreamTrack_onmute(const MediaStreamTrack *self);

void MediaStreamTrack_set_onmute(MediaStreamTrack* self, jb_Any * value);

jb_Any MediaStreamTrack_onunmute(const MediaStreamTrack *self);

void MediaStreamTrack_set_onunmute(MediaStreamTrack* self, jb_Any * value);

MediaStreamTrackState MediaStreamTrack_readyState(const MediaStreamTrack *self);

jb_Any MediaStreamTrack_onended(const MediaStreamTrack *self);

void MediaStreamTrack_set_onended(MediaStreamTrack* self, jb_Any * value);

MediaStreamTrack MediaStreamTrack_clone(MediaStreamTrack* self );

jb_Undefined MediaStreamTrack_stop(MediaStreamTrack* self );

MediaTrackCapabilities MediaStreamTrack_getCapabilities(MediaStreamTrack* self );

MediaTrackConstraints MediaStreamTrack_getConstraints(MediaStreamTrack* self );

MediaTrackSettings MediaStreamTrack_getSettings(MediaStreamTrack* self );

jb_Promise MediaStreamTrack_applyConstraints0(MediaStreamTrack* self );

jb_Promise MediaStreamTrack_applyConstraints1(MediaStreamTrack* self , MediaTrackConstraints * constraints);

CaptureHandle MediaStreamTrack_getCaptureHandle(MediaStreamTrack* self );

jb_Any MediaStreamTrack_oncapturehandlechange(const MediaStreamTrack *self);

void MediaStreamTrack_set_oncapturehandlechange(MediaStreamTrack* self, jb_Any * value);

jb_Array MediaStreamTrack_getSupportedCaptureActions(MediaStreamTrack* self );

jb_Promise MediaStreamTrack_sendCaptureAction(MediaStreamTrack* self , CaptureAction * action);

jb_String MediaStreamTrack_contentHint(const MediaStreamTrack *self);

void MediaStreamTrack_set_contentHint(MediaStreamTrack* self, jb_String * value);

bool MediaStreamTrack_isolated(const MediaStreamTrack *self);

jb_Any MediaStreamTrack_onisolationchange(const MediaStreamTrack *self);

void MediaStreamTrack_set_onisolationchange(MediaStreamTrack* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
