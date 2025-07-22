#include <webbind/AudioTrack.h>
#include <webbind/SourceBuffer.h>


DEFINE_EMLITE_TYPE(AudioTrack, em_Val);


jb_DOMString AudioTrack_id(const AudioTrack *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "id"));
}


jb_DOMString AudioTrack_kind(const AudioTrack *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "kind"));
}


jb_DOMString AudioTrack_label(const AudioTrack *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "label"));
}


jb_DOMString AudioTrack_language(const AudioTrack *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "language"));
}


bool AudioTrack_enabled(const AudioTrack *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "enabled"));
}


void AudioTrack_set_enabled(AudioTrack* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "enabled", value);
}


SourceBuffer AudioTrack_sourceBuffer(const AudioTrack *self) {
    return em_Val_as(SourceBuffer, em_Val_get(em_Val_as_val(self->inner), "sourceBuffer"));
}

