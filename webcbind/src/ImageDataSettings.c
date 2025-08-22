#include <webcbind/ImageDataSettings.h>

DEFINE_EMLITE_TYPE(ImageDataSettings, em_Val);


PredefinedColorSpace ImageDataSettings_colorSpace(const ImageDataSettings *self) {
    return em_Val_as(PredefinedColorSpace, em_Val_get(em_Val_as_val(self->inner), em_Val_from("colorSpace")));
}


void ImageDataSettings_set_colorSpace(ImageDataSettings* self, PredefinedColorSpace * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("colorSpace"), em_Val_from(value));
}


ImageDataPixelFormat ImageDataSettings_pixelFormat(const ImageDataSettings *self) {
    return em_Val_as(ImageDataPixelFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("pixelFormat")));
}


void ImageDataSettings_set_pixelFormat(ImageDataSettings* self, ImageDataPixelFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("pixelFormat"), em_Val_from(value));
}


ImageDataSettings ImageDataSettings_new() {
    em_Val obj = em_Val_object();
    return ImageDataSettings_from_val(&obj);
}

