#include <webcbind/HTMLDetailsElement.h>

DEFINE_EMLITE_TYPE(HTMLDetailsElement, HTMLElement);


HTMLDetailsElement HTMLDetailsElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLDetailsElement") );
        return HTMLDetailsElement_from_val(&vv);
      }


jb_String HTMLDetailsElement_name(const HTMLDetailsElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("name")));
}


void HTMLDetailsElement_set_name(HTMLDetailsElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


bool HTMLDetailsElement_open(const HTMLDetailsElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("open")));
}


void HTMLDetailsElement_set_open(HTMLDetailsElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("open"), em_Val_from(value));
}

