#include <webcbind/HTMLFencedFrameElement.h>

#include <webcbind/FencedFrameConfig.h>
#include <webcbind/DOMTokenList.h>

DEFINE_EMLITE_TYPE(HTMLFencedFrameElement, HTMLElement);


HTMLFencedFrameElement HTMLFencedFrameElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLFencedFrameElement") );
        return HTMLFencedFrameElement_from_val(&vv);
      }


FencedFrameConfig HTMLFencedFrameElement_config(const HTMLFencedFrameElement *self) {
    return em_Val_as(FencedFrameConfig, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("config")));
}


void HTMLFencedFrameElement_set_config(HTMLFencedFrameElement* self, FencedFrameConfig * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("config"), em_Val_from(value));
}


jb_String HTMLFencedFrameElement_width(const HTMLFencedFrameElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("width")));
}


void HTMLFencedFrameElement_set_width(HTMLFencedFrameElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


jb_String HTMLFencedFrameElement_height(const HTMLFencedFrameElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("height")));
}


void HTMLFencedFrameElement_set_height(HTMLFencedFrameElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


DOMTokenList HTMLFencedFrameElement_sandbox(const HTMLFencedFrameElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("sandbox")));
}


jb_String HTMLFencedFrameElement_allow(const HTMLFencedFrameElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("allow")));
}


void HTMLFencedFrameElement_set_allow(HTMLFencedFrameElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("allow"), em_Val_from(value));
}

