#include <webbind/HTMLOListElement.h>

DEFINE_EMLITE_TYPE(HTMLOListElement, HTMLElement);


HTMLOListElement HTMLOListElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLOListElement") );
        return HTMLOListElement_from_val(&vv);
      }


bool HTMLOListElement_reversed(const HTMLOListElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("reversed")));
}


void HTMLOListElement_set_reversed(HTMLOListElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("reversed"), em_Val_from(value));
}


long HTMLOListElement_start(const HTMLOListElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("start")));
}


void HTMLOListElement_set_start(HTMLOListElement* self, long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("start"), em_Val_from(value));
}


jb_String HTMLOListElement_type(const HTMLOListElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("type")));
}


void HTMLOListElement_set_type(HTMLOListElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


bool HTMLOListElement_compact(const HTMLOListElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("compact")));
}


void HTMLOListElement_set_compact(HTMLOListElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("compact"), em_Val_from(value));
}

