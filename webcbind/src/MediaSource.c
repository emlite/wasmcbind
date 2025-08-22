#include <webcbind/MediaSource.h>

#include <webcbind/MediaSourceHandle.h>
#include <webcbind/SourceBufferList.h>
#include <webcbind/SourceBuffer.h>

DEFINE_EMLITE_TYPE(MediaSource, EventTarget);


MediaSource MediaSource_new() {
        em_Val vv = em_Val_new(em_Val_global("MediaSource") );
        return MediaSource_from_val(&vv);
      }


MediaSourceHandle MediaSource_handle(const MediaSource *self) {
    return em_Val_as(MediaSourceHandle, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("handle")));
}


SourceBufferList MediaSource_sourceBuffers(const MediaSource *self) {
    return em_Val_as(SourceBufferList, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("sourceBuffers")));
}


SourceBufferList MediaSource_activeSourceBuffers(const MediaSource *self) {
    return em_Val_as(SourceBufferList, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("activeSourceBuffers")));
}


ReadyState MediaSource_readyState(const MediaSource *self) {
    return em_Val_as(ReadyState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("readyState")));
}


double MediaSource_duration(const MediaSource *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("duration")));
}


void MediaSource_set_duration(MediaSource* self, double value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("duration"), em_Val_from(value));
}


jb_Any MediaSource_onsourceopen(const MediaSource *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onsourceopen")));
}


void MediaSource_set_onsourceopen(MediaSource* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onsourceopen"), em_Val_from(value));
}


jb_Any MediaSource_onsourceended(const MediaSource *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onsourceended")));
}


void MediaSource_set_onsourceended(MediaSource* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onsourceended"), em_Val_from(value));
}


jb_Any MediaSource_onsourceclose(const MediaSource *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onsourceclose")));
}


void MediaSource_set_onsourceclose(MediaSource* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onsourceclose"), em_Val_from(value));
}


bool MediaSource_canConstructInDedicatedWorker(const MediaSource *self) {
    return em_Val_as(bool, em_Val_get(em_Val_global("mediasource"), em_Val_from("canConstructInDedicatedWorker")));
}


SourceBuffer MediaSource_addSourceBuffer(MediaSource* self , jb_String * type) {
    return em_Val_as(SourceBuffer, em_Val_call(EventTarget_as_val(self->inner), "addSourceBuffer", em_Val_from(type)));
}


jb_Undefined MediaSource_removeSourceBuffer(MediaSource* self , SourceBuffer * sourceBuffer) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "removeSourceBuffer", em_Val_from(sourceBuffer)));
}


jb_Undefined MediaSource_endOfStream0(MediaSource* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "endOfStream"));
}


jb_Undefined MediaSource_endOfStream1(MediaSource* self , EndOfStreamError * error) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "endOfStream", em_Val_from(error)));
}


jb_Undefined MediaSource_setLiveSeekableRange(MediaSource* self , double start, double end) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "setLiveSeekableRange", em_Val_from(start), em_Val_from(end)));
}


jb_Undefined MediaSource_clearLiveSeekableRange(MediaSource* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "clearLiveSeekableRange"));
}


bool MediaSource_isTypeSupported(MediaSource* self , jb_String * type) {
    return em_Val_as(bool, em_Val_call(em_Val_global("mediasource"), "isTypeSupported", em_Val_from(type)));
}

