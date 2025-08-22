#include <webcbind/OffscreenCanvas.h>

#include <webcbind/ImageBitmap.h>
#include <webcbind/Blob.h>
#include <webcbind/ImageEncodeOptions.h>

DEFINE_EMLITE_TYPE(OffscreenCanvas, EventTarget);


OffscreenCanvas OffscreenCanvas_new(long long width, long long height) {
        em_Val vv = em_Val_new(em_Val_global("OffscreenCanvas") , em_Val_from(width), em_Val_from(height));
        return OffscreenCanvas_from_val(&vv);
      }


long long OffscreenCanvas_width(const OffscreenCanvas *self) {
    return em_Val_as(long long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("width")));
}


void OffscreenCanvas_set_width(OffscreenCanvas* self, long long value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


long long OffscreenCanvas_height(const OffscreenCanvas *self) {
    return em_Val_as(long long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("height")));
}


void OffscreenCanvas_set_height(OffscreenCanvas* self, long long value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


jb_Any OffscreenCanvas_getContext0(OffscreenCanvas* self , OffscreenRenderingContextId * contextId) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "getContext", em_Val_from(contextId)));
}


jb_Any OffscreenCanvas_getContext1(OffscreenCanvas* self , OffscreenRenderingContextId * contextId, jb_Any * options) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "getContext", em_Val_from(contextId), em_Val_from(options)));
}


ImageBitmap OffscreenCanvas_transferToImageBitmap(OffscreenCanvas* self ) {
    return em_Val_as(ImageBitmap, em_Val_call(EventTarget_as_val(self->inner), "transferToImageBitmap"));
}


jb_Promise OffscreenCanvas_convertToBlob0(OffscreenCanvas* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "convertToBlob"));
}


jb_Promise OffscreenCanvas_convertToBlob1(OffscreenCanvas* self , ImageEncodeOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "convertToBlob", em_Val_from(options)));
}


jb_Any OffscreenCanvas_oncontextlost(const OffscreenCanvas *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("oncontextlost")));
}


void OffscreenCanvas_set_oncontextlost(OffscreenCanvas* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("oncontextlost"), em_Val_from(value));
}


jb_Any OffscreenCanvas_oncontextrestored(const OffscreenCanvas *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("oncontextrestored")));
}


void OffscreenCanvas_set_oncontextrestored(OffscreenCanvas* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("oncontextrestored"), em_Val_from(value));
}

