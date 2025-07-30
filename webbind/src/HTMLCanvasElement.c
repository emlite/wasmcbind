#include <webbind/HTMLCanvasElement.h>
#include <webbind/OffscreenCanvas.h>
#include <webbind/MediaStream.h>


DEFINE_EMLITE_TYPE(HTMLCanvasElement, HTMLElement);


HTMLCanvasElement HTMLCanvasElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLCanvasElement") );
        return HTMLCanvasElement_from_val(&vv);
      }


unsigned long HTMLCanvasElement_width(const HTMLCanvasElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("width")));
}


void HTMLCanvasElement_set_width(HTMLCanvasElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


unsigned long HTMLCanvasElement_height(const HTMLCanvasElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("height")));
}


void HTMLCanvasElement_set_height(HTMLCanvasElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


jb_Any HTMLCanvasElement_getContext0(HTMLCanvasElement* self , jb_String * contextId) {
    return em_Val_as(jb_Any, em_Val_call(HTMLElement_as_val(self->inner), "getContext", em_Val_from(contextId)));
}


jb_Any HTMLCanvasElement_getContext1(HTMLCanvasElement* self , jb_String * contextId, jb_Any * options) {
    return em_Val_as(jb_Any, em_Val_call(HTMLElement_as_val(self->inner), "getContext", em_Val_from(contextId), em_Val_from(options)));
}


jb_String HTMLCanvasElement_toDataURL0(HTMLCanvasElement* self ) {
    return em_Val_as(jb_String, em_Val_call(HTMLElement_as_val(self->inner), "toDataURL"));
}


jb_String HTMLCanvasElement_toDataURL1(HTMLCanvasElement* self , jb_String * type) {
    return em_Val_as(jb_String, em_Val_call(HTMLElement_as_val(self->inner), "toDataURL", em_Val_from(type)));
}


jb_String HTMLCanvasElement_toDataURL2(HTMLCanvasElement* self , jb_String * type, jb_Any * quality) {
    return em_Val_as(jb_String, em_Val_call(HTMLElement_as_val(self->inner), "toDataURL", em_Val_from(type), em_Val_from(quality)));
}


jb_Undefined HTMLCanvasElement_toBlob0(HTMLCanvasElement* self , jb_Function * callback) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "toBlob", em_Val_from(callback)));
}


jb_Undefined HTMLCanvasElement_toBlob1(HTMLCanvasElement* self , jb_Function * callback, jb_String * type) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "toBlob", em_Val_from(callback), em_Val_from(type)));
}


jb_Undefined HTMLCanvasElement_toBlob2(HTMLCanvasElement* self , jb_Function * callback, jb_String * type, jb_Any * quality) {
    return em_Val_as(jb_Undefined, em_Val_call(HTMLElement_as_val(self->inner), "toBlob", em_Val_from(callback), em_Val_from(type), em_Val_from(quality)));
}


OffscreenCanvas HTMLCanvasElement_transferControlToOffscreen(HTMLCanvasElement* self ) {
    return em_Val_as(OffscreenCanvas, em_Val_call(HTMLElement_as_val(self->inner), "transferControlToOffscreen"));
}


MediaStream HTMLCanvasElement_captureStream0(HTMLCanvasElement* self ) {
    return em_Val_as(MediaStream, em_Val_call(HTMLElement_as_val(self->inner), "captureStream"));
}


MediaStream HTMLCanvasElement_captureStream1(HTMLCanvasElement* self , double frameRequestRate) {
    return em_Val_as(MediaStream, em_Val_call(HTMLElement_as_val(self->inner), "captureStream", em_Val_from(frameRequestRate)));
}

