#include <webcbind/ImageTrack.h>

DEFINE_EMLITE_TYPE(ImageTrack, em_Val);


bool ImageTrack_animated(const ImageTrack *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("animated")));
}


unsigned long ImageTrack_frameCount(const ImageTrack *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("frameCount")));
}


float ImageTrack_repetitionCount(const ImageTrack *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("repetitionCount")));
}


bool ImageTrack_selected(const ImageTrack *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("selected")));
}


void ImageTrack_set_selected(ImageTrack* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("selected"), em_Val_from(value));
}

