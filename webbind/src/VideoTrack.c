#include <webbind/VideoTrack.h>
#include <webbind/SourceBuffer.h>


DEFINE_EMLITE_TYPE(VideoTrack, em_Val);


jb_DOMString VideoTrack_id(const VideoTrack *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "id"));
}


jb_DOMString VideoTrack_kind(const VideoTrack *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "kind"));
}


jb_DOMString VideoTrack_label(const VideoTrack *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "label"));
}


jb_DOMString VideoTrack_language(const VideoTrack *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "language"));
}


bool VideoTrack_selected(const VideoTrack *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "selected"));
}


void VideoTrack_set_selected(VideoTrack* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "selected", value);
}


SourceBuffer VideoTrack_sourceBuffer(const VideoTrack *self) {
    return em_Val_as(SourceBuffer, em_Val_get(em_Val_as_val(self->inner), "sourceBuffer"));
}

