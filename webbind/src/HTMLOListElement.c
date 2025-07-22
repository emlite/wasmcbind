#include <webbind/HTMLOListElement.h>


DEFINE_EMLITE_TYPE(HTMLOListElement, HTMLElement);


HTMLOListElement HTMLOListElement_new() : HTMLElement(em_Val_global("HTMLOListElement").new_()) {
        return HTMLOListElement(em_Val_new(em_Val_global("HTMLOListElement", ));
      }


bool HTMLOListElement_reversed(const HTMLOListElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "reversed"));
}


void HTMLOListElement_set_reversed(HTMLOListElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "reversed", value);
}


long HTMLOListElement_start(const HTMLOListElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), "start"));
}


void HTMLOListElement_set_start(HTMLOListElement* self, long value) {
    em_Val_set(HTMLElement_as_val(self->inner), "start", value);
}


jb_DOMString HTMLOListElement_type(const HTMLOListElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "type"));
}


void HTMLOListElement_set_type(HTMLOListElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "type", value);
}


bool HTMLOListElement_compact(const HTMLOListElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "compact"));
}


void HTMLOListElement_set_compact(HTMLOListElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "compact", value);
}

