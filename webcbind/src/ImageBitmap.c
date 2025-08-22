#include <webcbind/ImageBitmap.h>

DEFINE_EMLITE_TYPE(ImageBitmap, em_Val);


unsigned long ImageBitmap_width(const ImageBitmap *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("width")));
}


unsigned long ImageBitmap_height(const ImageBitmap *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("height")));
}


jb_Undefined ImageBitmap_close(ImageBitmap* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "close"));
}

