#include <webbind/HTMLUListElement.h>


DEFINE_EMLITE_TYPE(HTMLUListElement, HTMLElement);


HTMLUListElement HTMLUListElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLUListElement") );
        return HTMLUListElement_from_val(&vv);
      }


bool HTMLUListElement_compact(const HTMLUListElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("compact")));
}


void HTMLUListElement_set_compact(HTMLUListElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("compact"), em_Val_from(value));
}


jb_String HTMLUListElement_type(const HTMLUListElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("type")));
}


void HTMLUListElement_set_type(HTMLUListElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}

