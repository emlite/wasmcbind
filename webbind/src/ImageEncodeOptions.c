#include <webbind/ImageEncodeOptions.h>

DEFINE_EMLITE_TYPE(ImageEncodeOptions, em_Val);


jb_String ImageEncodeOptions_type(const ImageEncodeOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void ImageEncodeOptions_set_type(ImageEncodeOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


double ImageEncodeOptions_quality(const ImageEncodeOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("quality")));
}


void ImageEncodeOptions_set_quality(ImageEncodeOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("quality"), em_Val_from(value));
}


ImageEncodeOptions ImageEncodeOptions_new() {
    em_Val obj = em_Val_object();
    return ImageEncodeOptions_from_val(&obj);
}

