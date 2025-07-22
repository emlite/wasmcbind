#include <webbind/HTMLFrameSetElement.h>


DEFINE_EMLITE_TYPE(HTMLFrameSetElement, HTMLElement);


HTMLFrameSetElement HTMLFrameSetElement_new() : HTMLElement(em_Val_global("HTMLFrameSetElement").new_()) {
        return HTMLFrameSetElement(em_Val_new(em_Val_global("HTMLFrameSetElement", ));
      }


jb_DOMString HTMLFrameSetElement_cols(const HTMLFrameSetElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "cols"));
}


void HTMLFrameSetElement_set_cols(HTMLFrameSetElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "cols", value);
}


jb_DOMString HTMLFrameSetElement_rows(const HTMLFrameSetElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "rows"));
}


void HTMLFrameSetElement_set_rows(HTMLFrameSetElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "rows", value);
}


jb_Any HTMLFrameSetElement_onportalactivate(const HTMLFrameSetElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), "onportalactivate"));
}


void HTMLFrameSetElement_set_onportalactivate(HTMLFrameSetElement* self, const jb_Any* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "onportalactivate", value);
}

