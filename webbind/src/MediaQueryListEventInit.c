#include <webbind/MediaQueryListEventInit.h>

DEFINE_EMLITE_TYPE(MediaQueryListEventInit, EventInit);


jb_String MediaQueryListEventInit_media(const MediaQueryListEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("media")));
}


void MediaQueryListEventInit_set_media(MediaQueryListEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("media"), em_Val_from(value));
}


bool MediaQueryListEventInit_matches(const MediaQueryListEventInit *self) {
    return em_Val_as(bool, em_Val_get(EventInit_as_val(self->inner), em_Val_from("matches")));
}


void MediaQueryListEventInit_set_matches(MediaQueryListEventInit* self, bool value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("matches"), em_Val_from(value));
}


MediaQueryListEventInit MediaQueryListEventInit_new() {
    em_Val obj = em_Val_object();
    return MediaQueryListEventInit_from_val(&obj);
}

