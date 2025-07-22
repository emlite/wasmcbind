#include <webbind/MediaRecorder.h>
#include <webbind/MediaStream.h>


DEFINE_EMLITE_TYPE(MediaRecorder, EventTarget);


MediaRecorder MediaRecorder_new0(MediaStream * stream) {
        em_Val vv = em_Val_new(em_Val_global("MediaRecorder") , em_Val_from(stream));
        return MediaRecorder_from_val(&vv);
      }


MediaRecorder MediaRecorder_new1(MediaStream * stream, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("MediaRecorder") , em_Val_from(stream), em_Val_from(options));
        return MediaRecorder_from_val(&vv);
      }


MediaStream MediaRecorder_stream(const MediaRecorder *self) {
    return em_Val_as(MediaStream, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("stream")));
}


jb_DOMString MediaRecorder_mimeType(const MediaRecorder *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("mimeType")));
}


RecordingState MediaRecorder_state(const MediaRecorder *self) {
    return em_Val_as(RecordingState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("state")));
}


jb_Any MediaRecorder_onstart(const MediaRecorder *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onstart")));
}


void MediaRecorder_set_onstart(MediaRecorder* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onstart"), em_Val_from(value));
}


jb_Any MediaRecorder_onstop(const MediaRecorder *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onstop")));
}


void MediaRecorder_set_onstop(MediaRecorder* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onstop"), em_Val_from(value));
}


jb_Any MediaRecorder_ondataavailable(const MediaRecorder *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ondataavailable")));
}


void MediaRecorder_set_ondataavailable(MediaRecorder* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ondataavailable"), em_Val_from(value));
}


jb_Any MediaRecorder_onpause(const MediaRecorder *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onpause")));
}


void MediaRecorder_set_onpause(MediaRecorder* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onpause"), em_Val_from(value));
}


jb_Any MediaRecorder_onresume(const MediaRecorder *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onresume")));
}


void MediaRecorder_set_onresume(MediaRecorder* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onresume"), em_Val_from(value));
}


jb_Any MediaRecorder_onerror(const MediaRecorder *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onerror")));
}


void MediaRecorder_set_onerror(MediaRecorder* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onerror"), em_Val_from(value));
}


unsigned long MediaRecorder_videoBitsPerSecond(const MediaRecorder *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("videoBitsPerSecond")));
}


unsigned long MediaRecorder_audioBitsPerSecond(const MediaRecorder *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("audioBitsPerSecond")));
}


BitrateMode MediaRecorder_audioBitrateMode(const MediaRecorder *self) {
    return em_Val_as(BitrateMode, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("audioBitrateMode")));
}


jb_Undefined MediaRecorder_start0(MediaRecorder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "start"));
}


jb_Undefined MediaRecorder_start1(MediaRecorder* self , unsigned long timeslice) {
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


bool MediaRecorder_isTypeSupported(MediaRecorder* self , jb_DOMString * type) {
    return em_Val_as(bool, em_Val_call(em_Val_global("mediarecorder"), "isTypeSupported", em_Val_from(type)));
}

