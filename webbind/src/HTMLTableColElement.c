#include <webbind/HTMLTableColElement.h>


DEFINE_EMLITE_TYPE(HTMLTableColElement, HTMLElement);


HTMLTableColElement HTMLTableColElement_new() : HTMLElement(em_Val_global("HTMLTableColElement").new_()) {
        return HTMLTableColElement(em_Val_new(em_Val_global("HTMLTableColElement", ));
      }


unsigned long HTMLTableColElement_span(const HTMLTableColElement *self) {
    return em_Val_as(unsigned long, em_Val_get(HTMLElement_as_val(self->inner), "span"));
}


void HTMLTableColElement_set_span(HTMLTableColElement* self, unsigned long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "span", value);
}


jb_DOMString HTMLTableColElement_align(const HTMLTableColElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "align"));
}


void HTMLTableColElement_set_align(HTMLTableColElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "align", value);
}


jb_DOMString HTMLTableColElement_ch(const HTMLTableColElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "ch"));
}


void HTMLTableColElement_set_ch(HTMLTableColElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "ch", value);
}


jb_DOMString HTMLTableColElement_chOff(const HTMLTableColElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "chOff"));
}


void HTMLTableColElement_set_chOff(HTMLTableColElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "chOff", value);
}


jb_DOMString HTMLTableColElement_vAlign(const HTMLTableColElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "vAlign"));
}


void HTMLTableColElement_set_vAlign(HTMLTableColElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "vAlign", value);
}


jb_DOMString HTMLTableColElement_width(const HTMLTableColElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "width"));
}


void HTMLTableColElement_set_width(HTMLTableColElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "width", value);
}

