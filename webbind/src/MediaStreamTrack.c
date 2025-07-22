#include <webbind/MediaStreamTrack.h>


DEFINE_EMLITE_TYPE(MediaTrackCapabilities, em_Val);


jb_DOMString MediaTrackCapabilities_displaySurface(const MediaTrackCapabilities *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "displaySurface"));
}


void MediaTrackCapabilities_set_displaySurface(MediaTrackCapabilities* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "displaySurface", value);
}


bool MediaTrackCapabilities_logicalSurface(const MediaTrackCapabilities *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "logicalSurface"));
}


void MediaTrackCapabilities_set_logicalSurface(MediaTrackCapabilities* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "logicalSurface", value);
}


jb_Sequence MediaTrackCapabilities_cursor(const MediaTrackCapabilities *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "cursor"));
}


void MediaTrackCapabilities_set_cursor(MediaTrackCapabilities* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "cursor", value);
}

DEFINE_EMLITE_TYPE(MediaTrackConstraints, em_Val);


jb_Sequence MediaTrackConstraints_advanced(const MediaTrackConstraints *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "advanced"));
}


void MediaTrackConstraints_set_advanced(MediaTrackConstraints* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "advanced", value);
}

DEFINE_EMLITE_TYPE(MediaTrackSettings, em_Val);


jb_DOMString MediaTrackSettings_displaySurface(const MediaTrackSettings *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "displaySurface"));
}


void MediaTrackSettings_set_displaySurface(MediaTrackSettings* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "displaySurface", value);
}


bool MediaTrackSettings_logicalSurface(const MediaTrackSettings *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "logicalSurface"));
}


void MediaTrackSettings_set_logicalSurface(MediaTrackSettings* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "logicalSurface", value);
}


jb_DOMString MediaTrackSettings_cursor(const MediaTrackSettings *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "cursor"));
}


void MediaTrackSettings_set_cursor(MediaTrackSettings* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "cursor", value);
}


bool MediaTrackSettings_restrictOwnAudio(const MediaTrackSettings *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "restrictOwnAudio"));
}


void MediaTrackSettings_set_restrictOwnAudio(MediaTrackSettings* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "restrictOwnAudio", value);
}


bool MediaTrackSettings_suppressLocalAudioPlayback(const MediaTrackSettings *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "suppressLocalAudioPlayback"));
}


void MediaTrackSettings_set_suppressLocalAudioPlayback(MediaTrackSettings* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "suppressLocalAudioPlayback", value);
}


double MediaTrackSettings_screenPixelRatio(const MediaTrackSettings *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "screenPixelRatio"));
}


void MediaTrackSettings_set_screenPixelRatio(MediaTrackSettings* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "screenPixelRatio", value);
}

DEFINE_EMLITE_TYPE(CaptureHandle, em_Val);


jb_DOMString CaptureHandle_origin(const CaptureHandle *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "origin"));
}


void CaptureHandle_set_origin(CaptureHandle* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "origin", value);
}


jb_DOMString CaptureHandle_handle(const CaptureHandle *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "handle"));
}


void CaptureHandle_set_handle(CaptureHandle* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "handle", value);
}

DEFINE_EMLITE_TYPE(MediaStreamTrack, EventTarget);


jb_DOMString MediaStreamTrack_kind(const MediaStreamTrack *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "kind"));
}


jb_DOMString MediaStreamTrack_id(const MediaStreamTrack *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "id"));
}


jb_DOMString MediaStreamTrack_label(const MediaStreamTrack *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "label"));
}


bool MediaStreamTrack_enabled(const MediaStreamTrack *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "enabled"));
}


void MediaStreamTrack_set_enabled(MediaStreamTrack* self, bool value) {
    em_Val_set(EventTarget_as_val(self->inner), "enabled", value);
}


bool MediaStreamTrack_muted(const MediaStreamTrack *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "muted"));
}


jb_Any MediaStreamTrack_onmute(const MediaStreamTrack *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onmute"));
}


void MediaStreamTrack_set_onmute(MediaStreamTrack* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onmute", value);
}


jb_Any MediaStreamTrack_onunmute(const MediaStreamTrack *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onunmute"));
}


void MediaStreamTrack_set_onunmute(MediaStreamTrack* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onunmute", value);
}


MediaStreamTrackState MediaStreamTrack_readyState(const MediaStreamTrack *self) {
    return em_Val_as(MediaStreamTrackState, em_Val_get(EventTarget_as_val(self->inner), "readyState"));
}


jb_Any MediaStreamTrack_onended(const MediaStreamTrack *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onended"));
}


void MediaStreamTrack_set_onended(MediaStreamTrack* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onended", value);
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


jb_Promise MediaStreamTrack_applyConstraints(MediaStreamTrack* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "applyConstraints"));
}


jb_Promise MediaStreamTrack_applyConstraints(MediaStreamTrack* self , const MediaTrackConstraints* constraints) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "applyConstraints", em_Val_from(constraints)));
}


CaptureHandle MediaStreamTrack_getCaptureHandle(MediaStreamTrack* self ) {
    return em_Val_as(CaptureHandle, em_Val_call(EventTarget_as_val(self->inner), "getCaptureHandle"));
}


jb_Any MediaStreamTrack_oncapturehandlechange(const MediaStreamTrack *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "oncapturehandlechange"));
}


void MediaStreamTrack_set_oncapturehandlechange(MediaStreamTrack* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "oncapturehandlechange", value);
}


jb_Sequence MediaStreamTrack_getSupportedCaptureActions(MediaStreamTrack* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(EventTarget_as_val(self->inner), "getSupportedCaptureActions"));
}


jb_Promise MediaStreamTrack_sendCaptureAction(MediaStreamTrack* self , const CaptureAction* action) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "sendCaptureAction", em_Val_from(action)));
}


jb_DOMString MediaStreamTrack_contentHint(const MediaStreamTrack *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "contentHint"));
}


void MediaStreamTrack_set_contentHint(MediaStreamTrack* self, const jb_DOMString* value) {
    em_Val_set(EventTarget_as_val(self->inner), "contentHint", value);
}


bool MediaStreamTrack_isolated(const MediaStreamTrack *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "isolated"));
}


jb_Any MediaStreamTrack_onisolationchange(const MediaStreamTrack *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onisolationchange"));
}


void MediaStreamTrack_set_onisolationchange(MediaStreamTrack* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onisolationchange", value);
}

