#include <webbind/HTMLTableColElement.h>


DEFINE_EMLITE_TYPE(HTMLTableColElement, HTMLElement);


HTMLTableColElement HTMLTableColElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLTableColElement") );
        return HTMLTableColElement_from_val(&vv);
      }


unsigned long HTMLTableColElement_span(const HTMLTableColElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("span")));
}


void HTMLTableColElement_set_span(HTMLTableColElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("span"), em_Val_from(value));
}


jb_DOMString HTMLTableColElement_align(const HTMLTableColElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("align")));
}


void HTMLTableColElement_set_align(HTMLTableColElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("align"), em_Val_from(value));
}


jb_DOMString HTMLTableColElement_ch(const HTMLTableColElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("ch")));
}


void HTMLTableColElement_set_ch(HTMLTableColElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("ch"), em_Val_from(value));
}


jb_DOMString HTMLTableColElement_chOff(const HTMLTableColElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("chOff")));
}


void HTMLTableColElement_set_chOff(HTMLTableColElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("chOff"), em_Val_from(value));
}


jb_DOMString HTMLTableColElement_vAlign(const HTMLTableColElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("vAlign")));
}


void HTMLTableColElement_set_vAlign(HTMLTableColElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("vAlign"), em_Val_from(value));
}


jb_DOMString HTMLTableColElement_width(const HTMLTableColElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("width")));
}


void HTMLTableColElement_set_width(HTMLTableColElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}

