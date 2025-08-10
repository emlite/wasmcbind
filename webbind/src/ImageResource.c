#include <webbind/ImageResource.h>

DEFINE_EMLITE_TYPE(ImageResource, em_Val);


jb_String ImageResource_src(const ImageResource *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("src")));
}


void ImageResource_set_src(ImageResource* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("src"), em_Val_from(value));
}


jb_String ImageResource_sizes(const ImageResource *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sizes")));
}


void ImageResource_set_sizes(ImageResource* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sizes"), em_Val_from(value));
}


jb_String ImageResource_type(const ImageResource *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void ImageResource_set_type(ImageResource* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_String ImageResource_label(const ImageResource *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("label")));
}


void ImageResource_set_label(ImageResource* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}


ImageResource ImageResource_new() {
    em_Val obj = em_Val_object();
    return ImageResource_from_val(&obj);
}

