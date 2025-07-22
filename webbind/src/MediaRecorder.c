#include <webbind/MediaRecorder.h>
#include <webbind/MediaStream.h>


DEFINE_EMLITE_TYPE(MediaRecorder, EventTarget);


MediaRecorder MediaRecorder_new(const MediaStream* stream) : EventTarget(em_Val_global("MediaRecorder").new_(em_Val_from(stream))) {
        return MediaRecorder(em_Val_new(em_Val_global("MediaRecorder", em_Val_from(stream)));
      }


MediaRecorder MediaRecorder_new(const MediaStream* stream, const jb_Any* options) : EventTarget(em_Val_global("MediaRecorder").new_(em_Val_from(stream), em_Val_from(options))) {
        return MediaRecorder(em_Val_new(em_Val_global("MediaRecorder", em_Val_from(stream), em_Val_from(options)));
      }


MediaStream MediaRecorder_stream(const MediaRecorder *self) {
    return em_Val_as(MediaStream, em_Val_get(EventTarget_as_val(self->inner), "stream"));
}


jb_DOMString MediaRecorder_mimeType(const MediaRecorder *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "mimeType"));
}


RecordingState MediaRecorder_state(const MediaRecorder *self) {
    return em_Val_as(RecordingState, em_Val_get(EventTarget_as_val(self->inner), "state"));
}


jb_Any MediaRecorder_onstart(const MediaRecorder *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onstart"));
}


void MediaRecorder_set_onstart(MediaRecorder* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onstart", value);
}


jb_Any MediaRecorder_onstop(const MediaRecorder *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onstop"));
}


void MediaRecorder_set_onstop(MediaRecorder* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onstop", value);
}


jb_Any MediaRecorder_ondataavailable(const MediaRecorder *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ondataavailable"));
}


void MediaRecorder_set_ondataavailable(MediaRecorder* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ondataavailable", value);
}


jb_Any MediaRecorder_onpause(const MediaRecorder *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onpause"));
}


void MediaRecorder_set_onpause(MediaRecorder* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onpause", value);
}


jb_Any MediaRecorder_onresume(const MediaRecorder *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onresume"));
}


void MediaRecorder_set_onresume(MediaRecorder* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onresume", value);
}


jb_Any MediaRecorder_onerror(const MediaRecorder *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onerror"));
}


void MediaRecorder_set_onerror(MediaRecorder* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onerror", value);
}


unsigned long MediaRecorder_videoBitsPerSecond(const MediaRecorder *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), "videoBitsPerSecond"));
}


unsigned long MediaRecorder_audioBitsPerSecond(const MediaRecorder *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), "audioBitsPerSecond"));
}


BitrateMode MediaRecorder_audioBitrateMode(const MediaRecorder *self) {
    return em_Val_as(BitrateMode, em_Val_get(EventTarget_as_val(self->inner), "audioBitrateMode"));
}


jb_Undefined MediaRecorder_start(MediaRecorder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "start"));
}


jb_Undefined MediaRecorder_start(MediaRecorder* self , unsigned long timeslice) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "start", em_Val_from(timeslice)));
}


jb_Undefined MediaRecorder_stop(MediaRecorder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "stop"));
}


jb_Undefined MediaRecorder_pause(MediaRecorder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "pause"));
}


jb_Undefined MediaRecorder_resume(MediaRecorder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "resume"));
}


jb_Undefined MediaRecorder_requestData(MediaRecorder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "requestData"));
}


bool MediaRecorder_isTypeSupported(MediaRecorder* self , const jb_DOMString* type) {
    return em_Val_as(bool, em_Val_call(em_Val_global("mediarecorder"), "isTypeSupported", em_Val_from(type)));
}

