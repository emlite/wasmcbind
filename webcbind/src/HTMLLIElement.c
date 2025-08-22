#include <webcbind/HTMLLIElement.h>

DEFINE_EMLITE_TYPE(HTMLLIElement, HTMLElement);


HTMLLIElement HTMLLIElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLLIElement") );
        return HTMLLIElement_from_val(&vv);
      }


long HTMLLIElement_value(const HTMLLIElement *self) {
    return em_Val_as(long, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("value")));
}


void HTMLLIElement_set_value(HTMLLIElement* self, long value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("value"), em_Val_from(value));
}


jb_String HTMLLIElement_type(const HTMLLIElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("type")));
}


void HTMLLIElement_set_type(HTMLLIElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}

