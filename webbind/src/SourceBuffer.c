#include <webbind/SourceBuffer.h>
#include <webbind/TimeRanges.h>
#include <webbind/AudioTrackList.h>
#include <webbind/VideoTrackList.h>
#include <webbind/TextTrackList.h>


DEFINE_EMLITE_TYPE(SourceBuffer, EventTarget);


AppendMode SourceBuffer_mode(const SourceBuffer *self) {
    return em_Val_as(AppendMode, em_Val_get(EventTarget_as_val(self->inner), "mode"));
}


void SourceBuffer_set_mode(SourceBuffer* self, const AppendMode* value) {
    em_Val_set(EventTarget_as_val(self->inner), "mode", value);
}


bool SourceBuffer_updating(const SourceBuffer *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "updating"));
}


TimeRanges SourceBuffer_buffered(const SourceBuffer *self) {
    return em_Val_as(TimeRanges, em_Val_get(EventTarget_as_val(self->inner), "buffered"));
}


double SourceBuffer_timestampOffset(const SourceBuffer *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "timestampOffset"));
}


void SourceBuffer_set_timestampOffset(SourceBuffer* self, double value) {
    em_Val_set(EventTarget_as_val(self->inner), "timestampOffset", value);
}


AudioTrackList SourceBuffer_audioTracks(const SourceBuffer *self) {
    return em_Val_as(AudioTrackList, em_Val_get(EventTarget_as_val(self->inner), "audioTracks"));
}


VideoTrackList SourceBuffer_videoTracks(const SourceBuffer *self) {
    return em_Val_as(VideoTrackList, em_Val_get(EventTarget_as_val(self->inner), "videoTracks"));
}


TextTrackList SourceBuffer_textTracks(const SourceBuffer *self) {
    return em_Val_as(TextTrackList, em_Val_get(EventTarget_as_val(self->inner), "textTracks"));
}


double SourceBuffer_appendWindowStart(const SourceBuffer *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "appendWindowStart"));
}


void SourceBuffer_set_appendWindowStart(SourceBuffer* self, double value) {
    em_Val_set(EventTarget_as_val(self->inner), "appendWindowStart", value);
}


double SourceBuffer_appendWindowEnd(const SourceBuffer *self) {
    return em_Val_as(double, em_Val_get(EventTarget_as_val(self->inner), "appendWindowEnd"));
}


void SourceBuffer_set_appendWindowEnd(SourceBuffer* self, double value) {
    em_Val_set(EventTarget_as_val(self->inner), "appendWindowEnd", value);
}


jb_Any SourceBuffer_onupdatestart(const SourceBuffer *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onupdatestart"));
}


void SourceBuffer_set_onupdatestart(SourceBuffer* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onupdatestart", value);
}


jb_Any SourceBuffer_onupdate(const SourceBuffer *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onupdate"));
}


void SourceBuffer_set_onupdate(SourceBuffer* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onupdate", value);
}


jb_Any SourceBuffer_onupdateend(const SourceBuffer *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onupdateend"));
}


void SourceBuffer_set_onupdateend(SourceBuffer* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onupdateend", value);
}


jb_Any SourceBuffer_onerror(const SourceBuffer *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onerror"));
}


void SourceBuffer_set_onerror(SourceBuffer* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onerror", value);
}


jb_Any SourceBuffer_onabort(const SourceBuffer *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onabort"));
}


void SourceBuffer_set_onabort(SourceBuffer* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onabort", value);
}


jb_Undefined SourceBuffer_appendBuffer(SourceBuffer* self , const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "appendBuffer", em_Val_from(data)));
}


jb_Undefined SourceBuffer_abort(SourceBuffer* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "abort"));
}


jb_Undefined SourceBuffer_changeType(SourceBuffer* self , const jb_DOMString* type) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "changeType", em_Val_from(type)));
}


jb_Undefined SourceBuffer_remove(SourceBuffer* self , double start, double end) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "remove", em_Val_from(start), em_Val_from(end)));
}

