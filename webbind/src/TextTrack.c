#include <webbind/TextTrack.h>
#include <webbind/TextTrackCueList.h>
#include <webbind/TextTrackCue.h>
#include <webbind/SourceBuffer.h>


DEFINE_EMLITE_TYPE(TextTrack, EventTarget);


TextTrackKind TextTrack_kind(const TextTrack *self) {
    return em_Val_as(TextTrackKind, em_Val_get(EventTarget_as_val(self->inner), "kind"));
}


jb_DOMString TextTrack_label(const TextTrack *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "label"));
}


jb_DOMString TextTrack_language(const TextTrack *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "language"));
}


jb_DOMString TextTrack_id(const TextTrack *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "id"));
}


jb_DOMString TextTrack_inBandMetadataTrackDispatchType(const TextTrack *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "inBandMetadataTrackDispatchType"));
}


TextTrackMode TextTrack_mode(const TextTrack *self) {
    return em_Val_as(TextTrackMode, em_Val_get(EventTarget_as_val(self->inner), "mode"));
}


void TextTrack_set_mode(TextTrack* self, const TextTrackMode* value) {
    em_Val_set(EventTarget_as_val(self->inner), "mode", value);
}


TextTrackCueList TextTrack_cues(const TextTrack *self) {
    return em_Val_as(TextTrackCueList, em_Val_get(EventTarget_as_val(self->inner), "cues"));
}


TextTrackCueList TextTrack_activeCues(const TextTrack *self) {
    return em_Val_as(TextTrackCueList, em_Val_get(EventTarget_as_val(self->inner), "activeCues"));
}


jb_Undefined TextTrack_addCue(TextTrack* self , const TextTrackCue* cue) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "addCue", em_Val_from(cue)));
}


jb_Undefined TextTrack_removeCue(TextTrack* self , const TextTrackCue* cue) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "removeCue", em_Val_from(cue)));
}


jb_Any TextTrack_oncuechange(const TextTrack *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "oncuechange"));
}


void TextTrack_set_oncuechange(TextTrack* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "oncuechange", value);
}


SourceBuffer TextTrack_sourceBuffer(const TextTrack *self) {
    return em_Val_as(SourceBuffer, em_Val_get(EventTarget_as_val(self->inner), "sourceBuffer"));
}

