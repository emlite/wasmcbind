#include <webbind/ImageTrack.h>


DEFINE_EMLITE_TYPE(ImageTrack, em_Val);


bool ImageTrack_animated(const ImageTrack *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "animated"));
}


unsigned long ImageTrack_frameCount(const ImageTrack *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "frameCount"));
}


float ImageTrack_repetitionCount(const ImageTrack *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), "repetitionCount"));
}


bool ImageTrack_selected(const ImageTrack *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "selected"));
}


void ImageTrack_set_selected(ImageTrack* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "selected", value);
}

