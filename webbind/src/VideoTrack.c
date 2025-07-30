#include <webbind/VideoTrack.h>
#include <webbind/SourceBuffer.h>


DEFINE_EMLITE_TYPE(VideoTrack, em_Val);


jb_String VideoTrack_id(const VideoTrack *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


jb_String VideoTrack_kind(const VideoTrack *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("kind")));
}


jb_String VideoTrack_label(const VideoTrack *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


jb_String VideoTrack_language(const VideoTrack *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("language")));
}


bool VideoTrack_selected(const VideoTrack *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("selected")));
}


void VideoTrack_set_selected(VideoTrack* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("selected"), em_Val_from(value));
}


SourceBuffer VideoTrack_sourceBuffer(const VideoTrack *self) {
    return em_Val_as(SourceBuffer, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sourceBuffer")));
}

