#include <webbind/ImageDecodeOptions.h>

DEFINE_EMLITE_TYPE(ImageDecodeOptions, em_Val);


unsigned long ImageDecodeOptions_frameIndex(const ImageDecodeOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("frameIndex")));
}


void ImageDecodeOptions_set_frameIndex(ImageDecodeOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("frameIndex"), em_Val_from(value));
}


bool ImageDecodeOptions_completeFramesOnly(const ImageDecodeOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("completeFramesOnly")));
}


void ImageDecodeOptions_set_completeFramesOnly(ImageDecodeOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("completeFramesOnly"), em_Val_from(value));
}


ImageDecodeOptions ImageDecodeOptions_new() {
    em_Val obj = em_Val_object();
    return ImageDecodeOptions_from_val(&obj);
}

