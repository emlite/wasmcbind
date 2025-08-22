#include <webcbind/ImageDecoderInit.h>

DEFINE_EMLITE_TYPE(ImageDecoderInit, em_Val);


jb_String ImageDecoderInit_type(const ImageDecoderInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void ImageDecoderInit_set_type(ImageDecoderInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_Any ImageDecoderInit_data(const ImageDecoderInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


void ImageDecoderInit_set_data(ImageDecoderInit* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


ColorSpaceConversion ImageDecoderInit_colorSpaceConversion(const ImageDecoderInit *self) {
    return em_Val_as(ColorSpaceConversion, em_Val_get(em_Val_as_val(self->inner), em_Val_from("colorSpaceConversion")));
}


void ImageDecoderInit_set_colorSpaceConversion(ImageDecoderInit* self, ColorSpaceConversion * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("colorSpaceConversion"), em_Val_from(value));
}


unsigned long ImageDecoderInit_desiredWidth(const ImageDecoderInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("desiredWidth")));
}


void ImageDecoderInit_set_desiredWidth(ImageDecoderInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("desiredWidth"), em_Val_from(value));
}


unsigned long ImageDecoderInit_desiredHeight(const ImageDecoderInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("desiredHeight")));
}


void ImageDecoderInit_set_desiredHeight(ImageDecoderInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("desiredHeight"), em_Val_from(value));
}


bool ImageDecoderInit_preferAnimation(const ImageDecoderInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("preferAnimation")));
}


void ImageDecoderInit_set_preferAnimation(ImageDecoderInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("preferAnimation"), em_Val_from(value));
}


jb_Array ImageDecoderInit_transfer(const ImageDecoderInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("transfer")));
}


void ImageDecoderInit_set_transfer(ImageDecoderInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("transfer"), em_Val_from(value));
}


ImageDecoderInit ImageDecoderInit_new() {
    em_Val obj = em_Val_object();
    return ImageDecoderInit_from_val(&obj);
}

