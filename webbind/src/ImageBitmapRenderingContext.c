#include <webbind/ImageBitmapRenderingContext.h>
#include <webbind/ImageBitmap.h>


DEFINE_EMLITE_TYPE(ImageBitmapRenderingContext, em_Val);


jb_Any ImageBitmapRenderingContext_canvas(const ImageBitmapRenderingContext *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("canvas")));
}


jb_Undefined ImageBitmapRenderingContext_transferFromImageBitmap(ImageBitmapRenderingContext* self , ImageBitmap * bitmap) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "transferFromImageBitmap", em_Val_from(bitmap)));
}

