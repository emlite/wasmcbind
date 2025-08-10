#include <webbind/TextTrack.h>

#include <webbind/TextTrackCueList.h>
#include <webbind/TextTrackCue.h>
#include <webbind/SourceBuffer.h>

DEFINE_EMLITE_TYPE(TextTrack, EventTarget);


TextTrackKind TextTrack_kind(const TextTrack *self) {
    return em_Val_as(TextTrackKind, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("kind")));
}


jb_String TextTrack_label(const TextTrack *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("label")));
}


jb_String TextTrack_language(const TextTrack *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("language")));
}


jb_String TextTrack_id(const TextTrack *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("id")));
}


jb_String TextTrack_inBandMetadataTrackDispatchType(const TextTrack *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("inBandMetadataTrackDispatchType")));
}


TextTrackMode TextTrack_mode(const TextTrack *self) {
    return em_Val_as(TextTrackMode, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("mode")));
}


void TextTrack_set_mode(TextTrack* self, TextTrackMode * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("mode"), em_Val_from(value));
}


TextTrackCueList TextTrack_cues(const TextTrack *self) {
    return em_Val_as(TextTrackCueList, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("cues")));
}


TextTrackCueList TextTrack_activeCues(const TextTrack *self) {
    return em_Val_as(TextTrackCueList, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("activeCues")));
}


jb_Undefined TextTrack_addCue(TextTrack* self , TextTrackCue * cue) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "addCue", em_Val_from(cue)));
}


jb_Undefined TextTrack_removeCue(TextTrack* self , TextTrackCue * cue) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "removeCue", em_Val_from(cue)));
}


jb_Any TextTrack_oncuechange(const TextTrack *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("oncuechange")));
}


void TextTrack_set_oncuechange(TextTrack* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("oncuechange"), em_Val_from(value));
}


SourceBuffer TextTrack_sourceBuffer(const TextTrack *self) {
    return em_Val_as(SourceBuffer, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("sourceBuffer")));
}

