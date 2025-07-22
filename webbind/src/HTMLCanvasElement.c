#include <webbind/HTMLCanvasElement.h>
#include <webbind/OffscreenCanvas.h>
#include <webbind/MediaStream.h>


DEFINE_EMLITE_TYPE(HTMLCanvasElement, HTMLElement);


HTMLCanvasElement HTMLCanvasElement_new() : HTMLElement(em_Val_global("HTMLCanvasElement").new_()) {
        return HTMLCanvasElement(em_Val_new(em_Val_global("HTMLCanvasElement", ));
      }


unsigned long HTMLCanvasElement_width(const HTMLCanvasElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "width"));
}


void HTMLCanvasElement_set_width(HTMLCanvasElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "width", value);
}


unsigned long HTMLCanvasElement_height(const HTMLCanvasElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "height"));
}


void HTMLCanvasElement_set_height(HTMLCanvasElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "height", value);
}


jb_Any HTMLCanvasElement_getContext(HTMLCanvasElement* self , const jb_DOMString* contextId) {
    return em_Val_as(jb_Any, em_Val_call(HTMLElement_as_val(self->inner), "getContext", em_Val_from(contextId)));
}


jb_Any HTMLCanvasElement_getContext(HTMLCanvasElement* self , const jb_DOMString* contextId, const jb_Any* options) {
    return em_Val_as(jb_Any, em_Val_call(HTMLElement_as_val(self->inner), "getContext", em_Val_from(contextId), em_Val_from(options)));
}


jb_USVString HTMLCanvasElement_toDataURL(HTMLCanvasElement* self ) {
    return em_Val_as(jb_USVString, em_Val_call(HTMLElement_as_val(self->inner), "toDataURL"));
}


jb_USVString HTMLCanvasElement_toDataURL(HTMLCanvasElement* self , const jb_DOMString* type) {
    return em_Val_as(jb_USVString, em_Val_call(HTMLElement_as_val(self->inner), "toDataURL", em_Val_from(type)));
}


jb_USVString HTMLCanvasElement_toDataURL(HTMLCanvasElement* self , const jb_DOMString* type, const jb_Any* quality) {
    return em_Val_as(jb_USVString, em_Val_call(HTMLElement_as_val(self->inner), "toDataURL", em_Val_from(type), em_Val_from(quality)));
}


jb_Undefined HTMLCanvasElement_toBlob(HTMLCanvasElement* self , const jb_Function* callback) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "toBlob", em_Val_from(callback)));
}


jb_Undefined HTMLCanvasElement_toBlob(HTMLCanvasElement* self , const jb_Function* callback, const jb_DOMString* type) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "toBlob", em_Val_from(callback), em_Val_from(type)));
}


jb_Undefined HTMLCanvasElement_toBlob(HTMLCanvasElement* self , const jb_Function* callback, const jb_DOMString* type, const jb_Any* quality) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "toBlob", em_Val_from(callback), em_Val_from(type), em_Val_from(quality)));
}


OffscreenCanvas HTMLCanvasElement_transferControlToOffscreen(HTMLCanvasElement* self ) {
    return em_Val_as(OffscreenCanvas, em_Val_call(HTMLElement_as_val(self->inner), "transferControlToOffscreen"));
}


MediaStream HTMLCanvasElement_captureStream(HTMLCanvasElement* self ) {
    return em_Val_as(MediaStream, em_Val_call(HTMLElement_as_val(self->inner), "captureStream"));
}


MediaStream HTMLCanvasElement_captureStream(HTMLCanvasElement* self , double frameRequestRate) {
    return em_Val_as(MediaStream, em_Val_call(HTMLElement_as_val(self->inner), "captureStream", em_Val_from(frameRequestRate)));
}

