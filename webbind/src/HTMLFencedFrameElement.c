#include <webbind/HTMLFencedFrameElement.h>
#include <webbind/FencedFrameConfig.h>
#include <webbind/DOMTokenList.h>


DEFINE_EMLITE_TYPE(HTMLFencedFrameElement, HTMLElement);


HTMLFencedFrameElement HTMLFencedFrameElement_new() : HTMLElement(em_Val_global("HTMLFencedFrameElement").new_()) {
        return HTMLFencedFrameElement(em_Val_new(em_Val_global("HTMLFencedFrameElement", ));
      }


FencedFrameConfig HTMLFencedFrameElement_config(const HTMLFencedFrameElement *self) {
    return em_Val_as(FencedFrameConfig, em_Val_get(HTMLElement_as_val(self->inner), "config"));
}


void HTMLFencedFrameElement_set_config(HTMLFencedFrameElement* self, const FencedFrameConfig* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "config", value);
}


jb_DOMString HTMLFencedFrameElement_width(const HTMLFencedFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "width"));
}


void HTMLFencedFrameElement_set_width(HTMLFencedFrameElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "width", value);
}


jb_DOMString HTMLFencedFrameElement_height(const HTMLFencedFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "height"));
}


void HTMLFencedFrameElement_set_height(HTMLFencedFrameElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "height", value);
}


DOMTokenList HTMLFencedFrameElement_sandbox(const HTMLFencedFrameElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(HTMLElement_as_val(self->inner), "sandbox"));
}


jb_DOMString HTMLFencedFrameElement_allow(const HTMLFencedFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "allow"));
}


void HTMLFencedFrameElement_set_allow(HTMLFencedFrameElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "allow", value);
}

