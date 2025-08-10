#include <webbind/ImageBitmapOptions.h>

DEFINE_EMLITE_TYPE(ImageBitmapOptions, em_Val);


ImageOrientation ImageBitmapOptions_imageOrientation(const ImageBitmapOptions *self) {
    return em_Val_as(ImageOrientation, em_Val_get(em_Val_as_val(self->inner), em_Val_from("imageOrientation")));
}


void ImageBitmapOptions_set_imageOrientation(ImageBitmapOptions* self, ImageOrientation * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("imageOrientation"), em_Val_from(value));
}


PremultiplyAlpha ImageBitmapOptions_premultiplyAlpha(const ImageBitmapOptions *self) {
    return em_Val_as(PremultiplyAlpha, em_Val_get(em_Val_as_val(self->inner), em_Val_from("premultiplyAlpha")));
}


void ImageBitmapOptions_set_premultiplyAlpha(ImageBitmapOptions* self, PremultiplyAlpha * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("premultiplyAlpha"), em_Val_from(value));
}


ColorSpaceConversion ImageBitmapOptions_colorSpaceConversion(const ImageBitmapOptions *self) {
    return em_Val_as(ColorSpaceConversion, em_Val_get(em_Val_as_val(self->inner), em_Val_from("colorSpaceConversion")));
}


void ImageBitmapOptions_set_colorSpaceConversion(ImageBitmapOptions* self, ColorSpaceConversion * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("colorSpaceConversion"), em_Val_from(value));
}


unsigned long ImageBitmapOptions_resizeWidth(const ImageBitmapOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("resizeWidth")));
}


void ImageBitmapOptions_set_resizeWidth(ImageBitmapOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("resizeWidth"), em_Val_from(value));
}


unsigned long ImageBitmapOptions_resizeHeight(const ImageBitmapOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("resizeHeight")));
}


void ImageBitmapOptions_set_resizeHeight(ImageBitmapOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("resizeHeight"), em_Val_from(value));
}


ResizeQuality ImageBitmapOptions_resizeQuality(const ImageBitmapOptions *self) {
    return em_Val_as(ResizeQuality, em_Val_get(em_Val_as_val(self->inner), em_Val_from("resizeQuality")));
}


void ImageBitmapOptions_set_resizeQuality(ImageBitmapOptions* self, ResizeQuality * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("resizeQuality"), em_Val_from(value));
}


ImageBitmapOptions ImageBitmapOptions_new() {
    em_Val obj = em_Val_object();
    return ImageBitmapOptions_from_val(&obj);
}

