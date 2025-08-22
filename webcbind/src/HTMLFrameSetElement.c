#include <webcbind/HTMLFrameSetElement.h>

DEFINE_EMLITE_TYPE(HTMLFrameSetElement, HTMLElement);


HTMLFrameSetElement HTMLFrameSetElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLFrameSetElement") );
        return HTMLFrameSetElement_from_val(&vv);
      }


jb_String HTMLFrameSetElement_cols(const HTMLFrameSetElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("cols")));
}


void HTMLFrameSetElement_set_cols(HTMLFrameSetElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("cols"), em_Val_from(value));
}


jb_String HTMLFrameSetElement_rows(const HTMLFrameSetElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("rows")));
}


void HTMLFrameSetElement_set_rows(HTMLFrameSetElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("rows"), em_Val_from(value));
}


jb_Any HTMLFrameSetElement_onportalactivate(const HTMLFrameSetElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("onportalactivate")));
}


void HTMLFrameSetElement_set_onportalactivate(HTMLFrameSetElement* self, jb_Any * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("onportalactivate"), em_Val_from(value));
}

