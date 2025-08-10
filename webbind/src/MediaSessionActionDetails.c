#include <webbind/MediaSessionActionDetails.h>

DEFINE_EMLITE_TYPE(MediaSessionActionDetails, em_Val);


MediaSessionAction MediaSessionActionDetails_action(const MediaSessionActionDetails *self) {
    return em_Val_as(MediaSessionAction, em_Val_get(em_Val_as_val(self->inner), em_Val_from("action")));
}


void MediaSessionActionDetails_set_action(MediaSessionActionDetails* self, MediaSessionAction * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("action"), em_Val_from(value));
}


double MediaSessionActionDetails_seekOffset(const MediaSessionActionDetails *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("seekOffset")));
}


void MediaSessionActionDetails_set_seekOffset(MediaSessionActionDetails* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("seekOffset"), em_Val_from(value));
}


double MediaSessionActionDetails_seekTime(const MediaSessionActionDetails *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("seekTime")));
}


void MediaSessionActionDetails_set_seekTime(MediaSessionActionDetails* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("seekTime"), em_Val_from(value));
}


bool MediaSessionActionDetails_fastSeek(const MediaSessionActionDetails *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fastSeek")));
}


void MediaSessionActionDetails_set_fastSeek(MediaSessionActionDetails* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("fastSeek"), em_Val_from(value));
}


bool MediaSessionActionDetails_isActivating(const MediaSessionActionDetails *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("isActivating")));
}


void MediaSessionActionDetails_set_isActivating(MediaSessionActionDetails* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("isActivating"), em_Val_from(value));
}


MediaSessionActionDetails MediaSessionActionDetails_new() {
    em_Val obj = em_Val_object();
    return MediaSessionActionDetails_from_val(&obj);
}

