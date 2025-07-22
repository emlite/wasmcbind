#include <webbind/OffscreenCanvas.h>
#include <webbind/ImageBitmap.h>
#include <webbind/Blob.h>


DEFINE_EMLITE_TYPE(ImageEncodeOptions, em_Val);


jb_DOMString ImageEncodeOptions_type(const ImageEncodeOptions *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "type"));
}


void ImageEncodeOptions_set_type(ImageEncodeOptions* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "type", value);
}


double ImageEncodeOptions_quality(const ImageEncodeOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "quality"));
}


void ImageEncodeOptions_set_quality(ImageEncodeOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "quality", value);
}

DEFINE_EMLITE_TYPE(OffscreenCanvas, EventTarget);


OffscreenCanvas OffscreenCanvas_new(long long width, long long height) : EventTarget(em_Val_global("OffscreenCanvas").new_(em_Val_from(width), em_Val_from(height))) {
        return OffscreenCanvas(em_Val_new(em_Val_global("OffscreenCanvas", em_Val_from(width), em_Val_from(height)));
      }


long long OffscreenCanvas_width(const OffscreenCanvas *self) {
    return em_Val_as(long long, em_Val_get(EventTarget_as_val(self->inner), "width"));
}


void OffscreenCanvas_set_width(OffscreenCanvas* self, long long value) {
    em_Val_set(EventTarget_as_val(self->inner), "width", value);
}


long long OffscreenCanvas_height(const OffscreenCanvas *self) {
    return em_Val_as(long long, em_Val_get(EventTarget_as_val(self->inner), "height"));
}


void OffscreenCanvas_set_height(OffscreenCanvas* self, long long value) {
    em_Val_set(EventTarget_as_val(self->inner), "height", value);
}


jb_Any OffscreenCanvas_getContext(OffscreenCanvas* self , const OffscreenRenderingContextId* contextId) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "getContext", em_Val_from(contextId)));
}


jb_Any OffscreenCanvas_getContext(OffscreenCanvas* self , const OffscreenRenderingContextId* contextId, const jb_Any* options) {
    return em_Val_as(jb_Any, em_Val_call(EventTarget_as_val(self->inner), "getContext", em_Val_from(contextId), em_Val_from(options)));
}


ImageBitmap OffscreenCanvas_transferToImageBitmap(OffscreenCanvas* self ) {
    return em_Val_as(ImageBitmap, em_Val_call(EventTarget_as_val(self->inner), "transferToImageBitmap"));
}


jb_Promise OffscreenCanvas_convertToBlob(OffscreenCanvas* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "convertToBlob"));
}


jb_Promise OffscreenCanvas_convertToBlob(OffscreenCanvas* self , const ImageEncodeOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "convertToBlob", em_Val_from(options)));
}


jb_Any OffscreenCanvas_oncontextlost(const OffscreenCanvas *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "oncontextlost"));
}


void OffscreenCanvas_set_oncontextlost(OffscreenCanvas* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "oncontextlost", value);
}


jb_Any OffscreenCanvas_oncontextrestored(const OffscreenCanvas *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "oncontextrestored"));
}


void OffscreenCanvas_set_oncontextrestored(OffscreenCanvas* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "oncontextrestored", value);
}

