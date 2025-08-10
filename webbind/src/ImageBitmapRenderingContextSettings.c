#include <webbind/ImageBitmapRenderingContextSettings.h>

DEFINE_EMLITE_TYPE(ImageBitmapRenderingContextSettings, em_Val);


bool ImageBitmapRenderingContextSettings_alpha(const ImageBitmapRenderingContextSettings *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alpha")));
}


void ImageBitmapRenderingContextSettings_set_alpha(ImageBitmapRenderingContextSettings* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}


ImageBitmapRenderingContextSettings ImageBitmapRenderingContextSettings_new() {
    em_Val obj = em_Val_object();
    return ImageBitmapRenderingContextSettings_from_val(&obj);
}

