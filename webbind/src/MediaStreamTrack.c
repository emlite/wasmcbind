#include <webbind/MediaStreamTrack.h>


DEFINE_EMLITE_TYPE(MediaTrackCapabilities, em_Val);


jb_String MediaTrackCapabilities_displaySurface(const MediaTrackCapabilities *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("displaySurface")));
}


void MediaTrackCapabilities_set_displaySurface(MediaTrackCapabilities* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("displaySurface"), em_Val_from(value));
}


bool MediaTrackCapabilities_logicalSurface(const MediaTrackCapabilities *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("logicalSurface")));
}


void MediaTrackCapabilities_set_logicalSurface(MediaTrackCapabilities* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("logicalSurface"), em_Val_from(value));
}


jb_Array MediaTrackCapabilities_cursor(const MediaTrackCapabilities *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cursor")));
}


void MediaTrackCapabilities_set_cursor(MediaTrackCapabilities* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cursor"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MediaTrackConstraints, em_Val);


jb_Array MediaTrackConstraints_advanced(const MediaTrackConstraints *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("advanced")));
}


void MediaTrackConstraints_set_advanced(MediaTrackConstraints* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("advanced"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MediaTrackSettings, em_Val);


jb_String MediaTrackSettings_displaySurface(const MediaTrackSettings *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("displaySurface")));
}


void MediaTrackSettings_set_displaySurface(MediaTrackSettings* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("displaySurface"), em_Val_from(value));
}


bool MediaTrackSettings_logicalSurface(const MediaTrackSettings *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("logicalSurface")));
}


void MediaTrackSettings_set_logicalSurface(MediaTrackSettings* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("logicalSurface"), em_Val_from(value));
}


jb_String MediaTrackSettings_cursor(const MediaTrackSettings *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cursor")));
}


void MediaTrackSettings_set_cursor(MediaTrackSettings* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cursor"), em_Val_from(value));
}


bool MediaTrackSettings_restrictOwnAudio(const MediaTrackSettings *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("restrictOwnAudio")));
}


void MediaTrackSettings_set_restrictOwnAudio(MediaTrackSettings* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("restrictOwnAudio"), em_Val_from(value));
}


bool MediaTrackSettings_suppressLocalAudioPlayback(const MediaTrackSettings *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("suppressLocalAudioPlayback")));
}


void MediaTrackSettings_set_suppressLocalAudioPlayback(MediaTrackSettings* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("suppressLocalAudioPlayback"), em_Val_from(value));
}


double MediaTrackSettings_screenPixelRatio(const MediaTrackSettings *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("screenPixelRatio")));
}


void MediaTrackSettings_set_screenPixelRatio(MediaTrackSettings* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("screenPixelRatio"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(CaptureHandle, em_Val);


jb_String CaptureHandle_origin(const CaptureHandle *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("origin")));
}


void CaptureHandle_set_origin(CaptureHandle* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("origin"), em_Val_from(value));
}


jb_String CaptureHandle_handle(const CaptureHandle *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("handle")));
}


void CaptureHandle_set_handle(CaptureHandle* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("handle"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MediaStreamTrack, EventTarget);


jb_String MediaStreamTrack_kind(const MediaStreamTrack *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("kind")));
}


jb_String MediaStreamTrack_id(const MediaStreamTrack *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("id")));
}


jb_String MediaStreamTrack_label(const MediaStreamTrack *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("label")));
}


bool MediaStreamTrack_enabled(const MediaStreamTrack *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("enabled")));
}


void MediaStreamTrack_set_enabled(MediaStreamTrack* self, bool value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("enabled"), em_Val_from(value));
}


bool MediaStreamTrack_muted(const MediaStreamTrack *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("muted")));
}


jb_Any MediaStreamTrack_onmute(const MediaStreamTrack *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onmute")));
}


void MediaStreamTrack_set_onmute(MediaStreamTrack* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onmute"), em_Val_from(value));
}


jb_Any MediaStreamTrack_onunmute(const MediaStreamTrack *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onunmute")));
}


void MediaStreamTrack_set_onunmute(MediaStreamTrack* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onunmute"), em_Val_from(value));
}


MediaStreamTrackState MediaStreamTrack_readyState(const MediaStreamTrack *self) {
    return em_Val_as(MediaStreamTrackState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("readyState")));
}


jb_Any MediaStreamTrack_onended(const MediaStreamTrack *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onended")));
}


void MediaStreamTrack_set_onended(MediaStreamTrack* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onended"), em_Val_from(value));
}


MediaStreamTrack MediaStreamTrack_clone(MediaStreamTrack* self ) {
    return em_Val_as(MediaStreamTrack, em_Val_call(EventTarget_as_val(self->inner), "clone"));
}


jb_Undefined MediaStreamTrack_stop(MediaStreamTrack* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "stop"));
}


MediaTrackCapabilities MediaStreamTrack_getCapabilities(MediaStreamTrack* self ) {
    return em_Val_as(MediaTrackCapabilities, em_Val_call(EventTarget_as_val(self->inner), "getCapabilities"));
}


MediaTrackConstraints MediaStreamTrack_getConstraints(MediaStreamTrack* self ) {
    return em_Val_as(MediaTrackConstraints, em_Val_call(EventTarget_as_val(self->inner), "getConstraints"));
}


MediaTrackSettings MediaStreamTrack_getSettings(MediaStreamTrack* self ) {
    return em_Val_as(MediaTrackSettings, em_Val_call(EventTarget_as_val(self->inner), "getSettings"));
}


jb_Promise MediaStreamTrack_applyConstraints0(MediaStreamTrack* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "applyConstraints"));
}


jb_Promise MediaStreamTrack_applyConstraints1(MediaStreamTrack* self , MediaTrackConstraints * constraints) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "applyConstraints", em_Val_from(constraints)));
}


CaptureHandle MediaStreamTrack_getCaptureHandle(MediaStreamTrack* self ) {
    return em_Val_as(CaptureHandle, em_Val_call(EventTarget_as_val(self->inner), "getCaptureHandle"));
}


jb_Any MediaStreamTrack_oncapturehandlechange(const MediaStreamTrack *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("oncapturehandlechange")));
}


void MediaStreamTrack_set_oncapturehandlechange(MediaStreamTrack* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("oncapturehandlechange"), em_Val_from(value));
}


jb_Array MediaStreamTrack_getSupportedCaptureActions(MediaStreamTrack* self ) {
    return em_Val_as(jb_Array, em_Val_call(EventTarget_as_val(self->inner), "getSupportedCaptureActions"));
}


jb_Promise MediaStreamTrack_sendCaptureAction(MediaStreamTrack* self , CaptureAction * action) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "sendCaptureAction", em_Val_from(action)));
}


jb_String MediaStreamTrack_contentHint(const MediaStreamTrack *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("contentHint")));
}


void MediaStreamTrack_set_contentHint(MediaStreamTrack* self, jb_String * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("contentHint"), em_Val_from(value));
}


bool MediaStreamTrack_isolated(const MediaStreamTrack *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("isolated")));
}


jb_Any MediaStreamTrack_onisolationchange(const MediaStreamTrack *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onisolationchange")));
}


void MediaStreamTrack_set_onisolationchange(MediaStreamTrack* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onisolationchange"), em_Val_from(value));
}

