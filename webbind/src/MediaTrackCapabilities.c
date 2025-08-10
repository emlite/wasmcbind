#include <webbind/MediaTrackCapabilities.h>

DEFINE_EMLITE_TYPE(MediaTrackCapabilities, em_Val);


jb_String MediaTrackCapabilities_displaySurface(const MediaTrackCapabilities *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("displaySurface")));
}


void MediaTrackCapabilities_set_displaySurface(MediaTrackCapabilities* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("displaySurface"), em_Val_from(value));
}


bool MediaTrackCapabilities_logicalSurface(const MediaTrackCapabilities *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("logicalSurface")));
}


void MediaTrackCapabilities_set_logicalSurface(MediaTrackCapabilities* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("logicalSurface"), em_Val_from(value));
}


jb_Array MediaTrackCapabilities_cursor(const MediaTrackCapabilities *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cursor")));
}


void MediaTrackCapabilities_set_cursor(MediaTrackCapabilities* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cursor"), em_Val_from(value));
}


MediaTrackCapabilities MediaTrackCapabilities_new() {
    em_Val obj = em_Val_object();
    return MediaTrackCapabilities_from_val(&obj);
}

