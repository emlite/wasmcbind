#include <webbind/MediaSource.h>
#include <webbind/MediaSourceHandle.h>
#include <webbind/SourceBufferList.h>
#include <webbind/SourceBuffer.h>


DEFINE_EMLITE_TYPE(MediaSource, EventTarget);


MediaSource MediaSource_new() : EventTarget(em_Val_global("MediaSource").new_()) {
        return MediaSource(em_Val_new(em_Val_global("MediaSource", ));
      }


MediaSourceHandle MediaSource_handle(const MediaSource *self) {
    return em_Val_as(MediaSourceHandle, em_Val_get(EventTarget_as_val(self->inner), "handle"));
}


SourceBufferList MediaSource_sourceBuffers(const MediaSource *self) {
    return em_Val_as(SourceBufferList, em_Val_get(EventTarget_as_val(self->inner), "sourceBuffers"));
}


SourceBufferList MediaSource_activeSourceBuffers(const MediaSource *self) {
    return em_Val_as(SourceBufferList, em_Val_get(EventTarget_as_val(self->inner), "activeSourceBuffers"));
}


ReadyState MediaSource_readyState(const MediaSource *self) {
    return em_Val_as(ReadyState, em_Val_get(EventTarget_as_val(self->inner), "readyState"));
}


double MediaSource_duration(const MediaSource *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "duration"));
}


void MediaSource_set_duration(MediaSource* self, double value) {
    em_Val_set(EventTarget_as_val(self->inner), "duration", value);
}


jb_Any MediaSource_onsourceopen(const MediaSource *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onsourceopen"));
}


void MediaSource_set_onsourceopen(MediaSource* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onsourceopen", value);
}


jb_Any MediaSource_onsourceended(const MediaSource *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onsourceended"));
}


void MediaSource_set_onsourceended(MediaSource* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onsourceended", value);
}


jb_Any MediaSource_onsourceclose(const MediaSource *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onsourceclose"));
}


void MediaSource_set_onsourceclose(MediaSource* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onsourceclose", value);
}


bool MediaSource_canConstructInDedicatedWorker() {
    return em_Val_as(bool, em_Val_get(em_Val_global("mediasource", "canConstructInDedicatedWorker")));
}


SourceBuffer MediaSource_addSourceBuffer(MediaSource* self , const jb_DOMString* type) {
    return em_Val_as(SourceBuffer, em_Val_call(EventTarget_as_val(self->inner), "addSourceBuffer", em_Val_from(type)));
}


jb_Undefined MediaSource_removeSourceBuffer(MediaSource* self , const SourceBuffer* sourceBuffer) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "removeSourceBuffer", em_Val_from(sourceBuffer)));
}


jb_Undefined MediaSource_endOfStream(MediaSource* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "endOfStream"));
}


jb_Undefined MediaSource_endOfStream(MediaSource* self , const EndOfStreamError* error) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "endOfStream", em_Val_from(error)));
}


jb_Undefined MediaSource_setLiveSeekableRange(MediaSource* self , double start, double end) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "setLiveSeekableRange", em_Val_from(start), em_Val_from(end)));
}


jb_Undefined MediaSource_clearLiveSeekableRange(MediaSource* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "clearLiveSeekableRange"));
}


bool MediaSource_isTypeSupported(MediaSource* self , const jb_DOMString* type) {
    return em_Val_as(bool, em_Val_call(em_Val_global("mediasource"), "isTypeSupported", em_Val_from(type)));
}

