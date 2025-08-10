#include <webbind/AudioTrack.h>

#include <webbind/SourceBuffer.h>

DEFINE_EMLITE_TYPE(AudioTrack, em_Val);


jb_String AudioTrack_id(const AudioTrack *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


jb_String AudioTrack_kind(const AudioTrack *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("kind")));
}


jb_String AudioTrack_label(const AudioTrack *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


jb_String AudioTrack_language(const AudioTrack *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("language")));
}


bool AudioTrack_enabled(const AudioTrack *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("enabled")));
}


void AudioTrack_set_enabled(AudioTrack* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("enabled"), em_Val_from(value));
}


SourceBuffer AudioTrack_sourceBuffer(const AudioTrack *self) {
    return em_Val_as(SourceBuffer, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sourceBuffer")));
}

