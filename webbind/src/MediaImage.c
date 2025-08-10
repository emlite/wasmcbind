#include <webbind/MediaImage.h>

DEFINE_EMLITE_TYPE(MediaImage, em_Val);


jb_String MediaImage_src(const MediaImage *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("src")));
}


void MediaImage_set_src(MediaImage* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("src"), em_Val_from(value));
}


jb_String MediaImage_sizes(const MediaImage *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sizes")));
}


void MediaImage_set_sizes(MediaImage* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sizes"), em_Val_from(value));
}


jb_String MediaImage_type(const MediaImage *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void MediaImage_set_type(MediaImage* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


MediaImage MediaImage_new() {
    em_Val obj = em_Val_object();
    return MediaImage_from_val(&obj);
}

